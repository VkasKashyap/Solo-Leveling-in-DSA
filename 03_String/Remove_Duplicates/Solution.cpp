#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution{
public:
    string removeDuplicates(string& s){
        string result = "";

        unordered_map<char, bool> seen;

        for(char c : s){
            if(seen.find(c) == seen.end()){
                result += c;
                seen[c] = true;
            }
        }
        return result;
    }        
};

int main(){
    Solution solver;
    
    // Test Case: "zvvo" -> "zvo"
    string rawInput = "zvvo";

    cout << "--- ⚔️ Quest: Remove Duplicates (HashMap Variant) ⚔️ ---" << endl;
    cout << "Raw Input: " << rawInput << endl;
    
    string uniqueOutput = solver.removeDuplicates(rawInput);
    
    cout << "Purified Output: " << uniqueOutput << endl;
    
    return 0;
}