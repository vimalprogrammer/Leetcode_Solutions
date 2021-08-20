#include <bits/stdc++.h>
using namespace std;

/*Longest Substring Without Repeating Characters: Given a string s, find the length of the longest substring without repeating characters.
Example:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.

*/

class Solution {
public: 
    int lengthOfLongestSubstring(string s) {
        int A[127]={0};
        int cnt=0,max=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j>=0;j--)
            {
                char c=s[j];
                if(A[c]==0)
                { 
                    cnt++;
                    A[c]+=1;
                    if(cnt>max)
                        max=cnt;
                }
                else
                {
                    cnt=0;
                    for(int i=0;i<127;i++)
                        A[i]=0;
                    break;
                }
            }
        }
        return max;
    }
};
int main()
{
    
    string s = "helloo";
    Solution ob;
    int res=ob.lengthOfLongestSubstring(s);
    cout<<res<<endl;
    return 0;
}