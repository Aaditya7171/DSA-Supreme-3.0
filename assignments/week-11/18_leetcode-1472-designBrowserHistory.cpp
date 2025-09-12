class BrowserHistory {
    stack<string>browserStack, fwdStack;
public:
    BrowserHistory(string homepage) {
        browserStack.push(homepage);
    }
    
    void visit(string url) {
        // clear all forward history when new url is visited from the current page
        while(!fwdStack.empty()) 
            fwdStack.pop();
        browserStack.push(url);
    }
    
    string back(int steps) {
        while(steps--){
            // will go back one time
            if(browserStack.size() > 1) {
                fwdStack.push(browserStack.top());
                browserStack.pop();
                } 
            else {
                break; // only homepage is present, can't go back
            }
        }
        return browserStack.top();
    }
    
    string forward(int steps) {
        while(steps--){
            if(!fwdStack.empty()){
                browserStack.push(fwdStack.top());
                fwdStack.pop();
            }
            else{
                break;
            }
        }
        return browserStack.top();
    }
};