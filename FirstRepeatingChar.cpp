#include <bits/stdc++.h>
using namespace std;

/*
Input: "vimallamiv"
Output: 'l'
Explanation: The first repeating character is 'l'
*/


char repeatchar(string s)
{
    int k=0,cnt=0,sol;
    while(k<s.size())
    {
        char ch=tolower(s[k]);
        s[k]=ch;
        k++;
    }
    char res;
    int mindif=INT_MAX;
    for(int i=0;i<s.size()-1;i++)
    {
        cnt=0;
        int flag=0;
        for(int j=i+1;j<s.size();j++)
        {
            char c=s[i];
            char d=s[j];
            if((int)s[i]!=(int)s[j])
            {
                cnt++;
            }
            else
                break;
        }
        if(mindif>cnt)
        {
            mindif=cnt;
            sol=i;
        }
    }
    return s[sol];
}

int main()
{
    string s="Vimadsavttotoo";
    char res=repeatchar(s);
    cout<<res;
    return 0;
}
