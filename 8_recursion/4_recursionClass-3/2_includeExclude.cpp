#include<iostream>
#include<string>
#include<vector>

void printSubsequences(std::string str, int index, std::string output, std::vector<std::string> &ans)
{
    if(index == str.length()) {
        // std::cout << "'" << output  << "'" << "  "; // printing the subsequences
        ans.push_back(output); // storing the subsequences
        return;
    }

    char ch = str[index];

    printSubsequences(str, index + 1, output + ch, ans);//include
    printSubsequences(str, index + 1, output, ans);//exclude
}

int main()
{
    std::string str = "abc";
    std::string output = "";

    int index = 0;
    
    std::vector<std::string>ans;
    printSubsequences(str, index, output, ans);
    std::cout << "Size of the string: " << ans.size() << "\n";
    for(auto i:ans){
        std::cout  << "'"<< i << "'" << " ";
    }
    return 0;
}