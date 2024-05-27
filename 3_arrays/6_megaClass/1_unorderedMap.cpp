#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    std::unordered_map<int, int> desk_map; //roll_number, desk_number

    //insertion-->
    desk_map[1] = 53;//key-1, value- 53
    desk_map[2] = 54;//key-2, value- 54
    desk_map[3] = 55;;//key-3, value- 55

    desk_map[2] = 57;//reassign, because key = 2 was already there

    // iterate-->
    //We have to iterate over three entries

    //To iterate in map, we have to create "iterator"-->
     
    std::unordered_map<int, int>::iterator it;
    
    //iterating using for loop
    for(it = desk_map.begin(); it != desk_map.end(); it++){
        int key = it->first;
        int value = it->second;
        cout << "key: " << key << " " << " value: " << value << '\n';
    }

    //access(find)-->Avg case complexity O(1), worst case- O(n)
    if(desk_map.find(2) != desk_map.end()){//desk_map.end() -- > last + 1
        //found
        int value = desk_map[2];//finding value of key-2
        cout << value << '\n';
    }
    else {
        cout << "Not found";
    }

    //deletion
    desk_map.erase(2);

    cout<< " finding value of key-2 again-->";
    if(desk_map.find(2) != desk_map.end()){//desk_map.end() -- > last + 1
        //found
        int value = desk_map[2];//finding value of key-2
        cout << value << '\n';
    }
    else {
        cout << "Not found";
    }

    return 0;
}