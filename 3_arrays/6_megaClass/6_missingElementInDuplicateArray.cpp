#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,5,5};
    v.insert(v.begin(), 737);

    //737 -- 0th index(usless)
    // and 1-->index-3, 3-->index-2, 5--> index-3

    for(int i = 1; i < v.size(); i++){
        int index =  abs(v[i]);
        if(v[index] > 0){
            v[index] *= -1;
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    int ans = -1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] > 0){
            ans = i;
            break;
        }
    }
    cout <<'\n' << "Index of missing element is: "<<ans;
}