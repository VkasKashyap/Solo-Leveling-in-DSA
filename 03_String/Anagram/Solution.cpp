#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution{
public:
    bool isAnagram(string& a, string& b){
        if(a.length() != b.length())    return false;

        vector<int> count(26, 0);
        int n = a.length();

        for(int i=0;i<n;i++){
            count[a[i] - 'a']++;
            count[b[i] - 'a']--;
        }

        for(int i=0;i<26;i++){
            if(count[i] != 0)   return false;
        }
        
        return true;
    }
};

int main() {
    Solution solver;
    
    // Test Case
    string spell1 = "listen";
    string spell2 = "silent";

    cout << "--- ⚔️ Quest: Valid Anagram Check ⚔️ ---" << endl;
    cout << "Spell 1: " << spell1 << endl;
    cout << "Spell 2: " << spell2 << endl;
    
    bool result = solver.isAnagram(spell1, spell2);
    
    if (result) {
        cout << "Result: Success! The spells are Anagrams." << endl;
    } else {
        cout << "Result: Failed! The spells are NOT Anagrams." << endl;
    }
    
    return 0;
}