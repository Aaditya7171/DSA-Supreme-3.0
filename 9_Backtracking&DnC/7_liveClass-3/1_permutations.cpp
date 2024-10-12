#include<iostream>


//this code doesn't work if we pass the string by reference(since the original string gets changed and coz of that, we get repeated and wrong answers)
void printPermutations(std::string str, int i, int &count){
    
    //base case
    if(i >= str.length()) {
        count++;
        std::cout << str << "\n";
        return;
    }
    //1 case
    for(int j = i; j < str.length(); j++){
        std::swap(str[i], str[j]);
        printPermutations(str, i + 1, count);//recursive call
    }
}

//the problem of function printPermutations is solved by the below function(by swapping the elements again while returning->backtrack and swap) 
void printPermutations2(std::string &str, int i, int &count){
    
    if(i >= str.length()) {
        count++;
        std::cout << str << "\n";
        return;
    }
    for(int j = i; j < str.length(); j++){
        std::swap(str[i], str[j]);
        printPermutations2(str, i + 1, count);
        std::swap(str[i], str[j]);//backtrack
    }
}

int main(){
    
    std::string str = "xyz";
    int count = 0;

    // printPermutations(str, 0, count);
    printPermutations2(str, 0, count);
    std::cout << "Number of permutations are: " << count;

    return 0;
}