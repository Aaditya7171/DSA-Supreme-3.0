#include<iostream>
#include<string>
using namespace std;

int main(){

    string name = "Maharana Pratap";

    // // cout << name[0];
    // cout << name.at(0) << endl;;
    // cout << name.front() << endl;
    // cout << name.back() << endl;
    

    //iterating through a string using iterator
    // auto it = name.begin();

    // while(it != name.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    //check empty
    // if(name.empty()){
    //     cout << "String is empty";
    // }
    // else{
    //     cout << "String is not empty";
    // }

    //concatenate
    // string fname = "Toony ";
    // string lname = "Stark";

    // cout << fname+lname;


    //substr
    // string sentence = "Hello guys i am under the water";
    // cout << sentence.substr(0,5);//(start_pos, end_pos)

    // cout << sentence.substr(0);
    // cout << sentence.substr(10);//will start from 10th+1 char


    //find
    // string name1 = "Hello guys";
    // string name2 = "guys";

    // int ans = name1.find(name2);

    // cout << ans;

    // string name3 = "Hello guys";
    // string name4 = "hey";

    // int ans2 = name2.find(name4);//not found, returns -1;

    // cout << ans2;//-1


    string s1 = "b";
    string s2 = "b";

    cout << s1.compare(s2);//equal-->returns : 0(if equal), else --> returns : -1(indicating unequalitiy)






    return 0; 
}