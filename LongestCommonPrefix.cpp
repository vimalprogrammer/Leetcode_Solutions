#include <bits/stdc++.h>
using namespace std;

/*
Input: ["vijay","vimal","vinoth"]
Output: "vi"
Code explanation: first taking --> vijay's - s[0][i] i=0 --> 'v'
                  Then comparing 1st indx with all other strings in the vector
                  If 'v' is common in all strings, then we return "v"

                  second taking --> vijay's - s[0][i] i=1 --> 'i'  
                  Then comparing 2nd indx with all other strings in the vector
                  If 'i' is common in all strings, then we return "vi"

                  third taking --> vijay's - s[0][i] i=2 --> 'j'
                  Then comparing 3rd indx with all other strings in the vector
                  If 'j' is common in all strings, then we return "vij"
                  else return upto the last common prefix

                  if none of the above is common, then return ""
*/


string longestCommonPrefix(vector<string>s)
{
    int m=s[0].size();
    int n=s.size();
    string temp="";
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(s[0][i]!=s[j][i])
                return temp;
        }
        temp+=s[0][i];
    }
    return temp;
}

int main()
{
    
    vector<string>s={"vimal","vimjay","vimnoth"};
    string res=longestCommonPrefix(s);    
    cout<<res<<endl;
    return 0;
}