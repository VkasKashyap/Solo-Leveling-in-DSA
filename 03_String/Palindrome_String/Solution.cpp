#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int isPalindrome(string S) {
        int left = 0;
        int right = S.length() - 1;
        
        while (left < right) {
            if (S[left] != S[right]) {
                return 0; // Not a palindrome
            }
            left++;
            right--;
        }
        return 1; // Is a palindrome
    }
};

int main() {
    Solution solver;
    string s = "abba";
    
    if (solver.isPalindrome(s)) cout << s << " is a Palindrome." << endl;
    else cout << s << " is NOT a Palindrome." << endl;
    
    return 0;
}