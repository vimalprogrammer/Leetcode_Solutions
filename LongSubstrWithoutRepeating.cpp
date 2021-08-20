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

/*

#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int lengthOfLongestSubstring(string s) {
    int n=s.size();
    int j=0;
    int maxx=0;
    int i=0;
    unordered_set<int> st;
    while(j<n)
    {       
        //char c=s[j]; 
        if (st.find(s[j]) == st.end())// c not in st so add it
        {
        st.insert(s[j++]); // st=v and goes on and finally st=vimals 
                           // then 'a' already in st hence insertion will not happen
                           // cnt=6 
        }
        else
            st.erase(s[i++]); //deleting all letters before 's' then st='s' and again cnting from 's'
                              // st=sa and goes on and finally st=sa --> cnt-->2
                              // then 'a' already in st hence deletion will not happen
                              // check for max cnt (6,2) --> max=6
                              // then again doing the same after 'a' i.e. deleting before 'a' 
                              //then st='a' and again cnting from 'a' doing same 
        
        int stsize=st.size();
        maxx= max(maxx,stsize);
        
    }
    return maxx;
     }
};
int main()
{
    
    string s = "vimalsasi";
    Solution ob;
    int res=ob.lengthOfLongestSubstring(s);
    cout<<res<<endl;
    return 0;
}
*/