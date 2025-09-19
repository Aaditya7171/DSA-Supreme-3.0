class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rQ, dQ;
        int i = 0;
        for(; i < senate.size(); i++){
            char senator = senate[i];
            if(senator == 'R') rQ.push(i);
            if(senator == 'D') dQ.push(i); 
        }
        while(!rQ.empty() && !dQ.empty()){
            int rFront = rQ.front();
            rQ.pop();
            int dFront = dQ.front();
            dQ.pop();
            if(rFront < dFront){
                // means R will ban D
                // so it's position(i) will be pushed after end of rQ
                rQ.push(i++);
            } else {
                // means D will ban R
                dQ.push(i++);
            }
        }
        return (!rQ.empty() ? "Radiant" : "Dire");
    }
};