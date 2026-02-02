#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
    int value(char r){
        switch(r){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;            
        }
    }

    int romanToInt(string& s){
        int n = s.length();
        int sum = 0;

        for(int i=0;i<n;i++){
            int s1 = value(s[i]);
            if(i+1 < n){
                int s2 = value(s[i+1]);
                if(s1 < s2){
                    sum -= s1;
                }
                else{
                    sum += s1;
                }
            }
            else{
                sum += s1;
            }
        }
        return sum;
    }
};

int main() {
    Solution solver;
    
    // Test Case: 1994
    string scroll = "MCMXCIV"; 

    cout << "--- ⚔️ Quest: Roman Number to Integer ⚔️ ---" << endl;
    cout << "Ancient Scroll: " << scroll << endl;
    
    int result = solver.romanToInt(scroll);
    
    cout << "Deciphered Value: " << result << endl;
    // Expected: 1994
    
    return 0;
}
