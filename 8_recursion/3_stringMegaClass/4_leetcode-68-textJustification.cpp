#include<string>
#include<algorithm>
#include<vector>

using namespace std;


class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        vector<string> currLine;
        int currLineTotalChars = 0;
        
        for(int i = 0; i < words.size(); i++){
            string &currWord = words[i];
            int neededSpacesInCurrLine = currLine.size(); // single space after word

            if(currLineTotalChars + neededSpacesInCurrLine + currWord.size() >  maxWidth) {
                //exceeded 

                //Fully justified case
                int extraSpaces = maxWidth - currLineTotalChars;
                int spacesBetweenWords = extraSpaces / max(1, (int)(currLine.size() - 1));
                int remainder = extraSpaces % max(1, (int)(currLine.size() - 1));

                //we don't need spaces after last word
                for(int j = 0; j < currLine.size() - 1; j++){
                    //add even spaces
                    for(int k = 0; k < spacesBetweenWords; k++){
                        currLine[j] += " ";//add spaces after the word
                    }

                    if(remainder > 0) {
                        currLine[j] += " ";
                        remainder--;
                    }
                }

                if(currLine.size() == 1){
                    //left justified case-> single word in a line
                    while(extraSpaces--){
                        currLine[0] += " ";
                    }
                }
                //making final line
                string finalLine = "";
                for(string wordWithSpaces : currLine) {
                    finalLine += wordWithSpaces;//string cancatenated 
                }
                ans.push_back(finalLine);
                currLine.clear();
                currLineTotalChars = 0;
            }
            
            //current line is not complete
            currLine.push_back(currWord);
            currLineTotalChars += currWord.size();// excluding spaces
        }
        // handling the last line
        string finalLine = "";
        for(auto word:currLine){
            finalLine += word + " ";
        }
        finalLine.pop_back();
        
        //if max width is not achieved
        int leftSpaces = maxWidth - finalLine.size();
        while(leftSpaces--){
           finalLine += " "; 
        }
        ans.push_back(finalLine);
        return ans;
    }
};