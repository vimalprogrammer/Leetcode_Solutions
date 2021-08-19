#include <bits/stdc++.h>
using namespace std;

/*Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

class Solution {
public:
    bool isPalindrome(string s) {

    //taking out all the symbols    
    string temp;
    for (int i = 0; i < s.length(); i++) 
    {
        if (isalnum(s[i]))
                temp += tolower(s[i]);//temp stores only alphanumerical
    }
    //checking palindrome
    int start = 0;
    int end = temp.length() - 1;
    
    while(start < end) {
        if(temp[start] != temp[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
        
    }
};


int main()
{

    Solution s;
    string st="race a car";
    bool t=s.isPalindrome(st);
    cout<<st<<endl;
    cout<<t;    
    return 0;
}