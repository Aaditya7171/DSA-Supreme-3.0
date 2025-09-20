class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        int activeSpreaders = 0, peopleKnowingSecrets = 1;
        const int m = 1e9 + 7;
        queue<pair<int, int>> forgetQ, delayQ; // stores how many people got to know the secret at that day
        delayQ.push({1,1});
        forgetQ.push({1,1});
        for(int i = 1; i <= n; i++){
            // step 1--> decrease the number of active spreaders
            if(!forgetQ.empty() && forgetQ.front().first + forget <= i){
                auto front = forgetQ.front();
                forgetQ.pop();
                auto no = front.second; // people who are gonna forget the secret
                peopleKnowingSecrets = (peopleKnowingSecrets - no + m) % m;
                activeSpreaders = (activeSpreaders - no + m) % m;
            }
            // step 2--> make new active spreaders
            if(!delayQ.empty() && delayQ.front().first + delay <= i){
                auto front = delayQ.front();
                delayQ.pop();
                activeSpreaders = (activeSpreaders + front.second) % m; // spreaders are active to spread the step
            }
            // step 3--> spread the secret
            if(activeSpreaders > 0){
                peopleKnowingSecrets = (peopleKnowingSecrets + activeSpreaders) % m;
                delayQ.push({i, activeSpreaders});
                forgetQ.push({i, activeSpreaders});
            }
        }
        return peopleKnowingSecrets;
     }
};