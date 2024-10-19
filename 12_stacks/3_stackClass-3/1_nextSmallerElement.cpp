#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

void nextSmallerElem(std::vector<int> &arr, std::stack<int> &s, std::vector<int> &ans){
    int n = arr.size();
    for(int i = n - 1; i >= 0; i--){
        int elem = arr[i];
        while(s.top() >= elem){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(elem);
    }
}

int main(){

    std::vector<int> arr = {8,4,6,2,3};
    std::vector<int> ans;
    std::stack<int> s;

    s.push(-1);

    nextSmallerElem(arr, s, ans);

    reverse(ans.begin(), ans.end());
 
    for(int i : ans){
        std::cout << i << " ";
    }
    return 0;
}
//t.C. O(n) (double passes in worst case), S.C. O(n)