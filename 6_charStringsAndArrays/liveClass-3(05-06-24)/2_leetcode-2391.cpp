// leetcode 2391. Minimum Amount of Time to Collect Garbage
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        //P truck
        int pickP = 0;
        int travelP = 0;
        int lastHouseP = 0;
        //M truck
        int pickM = 0;
        int travelM = 0;
        int lastHouseM = 0;
        //G truck
        int pickG = 0;
        int travelG = 0;
        int lastHouseG = 0;

        //let's travel to the street
        for(int i = 0; i < garbage.size(); i++){
            //ith house
            string currHouse = garbage[i];
            //let's explore current house to find the type of garbage present
            for(int j = 0; j < currHouse.length(); j++){
                char garbageType = currHouse[j];
                if(garbageType == 'P'){
                    pickP++;
                    lastHouseP = i;
                }
                if(garbageType == 'M'){
                    pickM++;
                    lastHouseM = i;
                }
                if(garbageType == 'G'){
                    pickG++;
                    lastHouseG = i;
                }
            }
        }
        //calculating travel time
        for(int i = 0; i < lastHouseP; i++){
            travelP = travelP + travel[i];
        }
        for(int i = 0; i < lastHouseG; i++){
            travelG = travelG + travel[i];
        }
        for(int i = 0; i < lastHouseM; i++){
            travelM = travelM + travel[i];
        }

        int totalPickingTime = pickP + pickM + pickG;

        int totalTravelTime = travelP + travelM + travelG;

        int totalTime = totalPickingTime + totalTravelTime;

        return totalTime;
    }
};

//t.c. --> O(n)