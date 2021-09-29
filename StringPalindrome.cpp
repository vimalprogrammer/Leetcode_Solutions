#include <bits/stdc++.h>
using namespace std;

string PalindString(string s)
{
    int f=0;
    int l=s.size()-1;
    while(f<l)
    {
        if(s[f++]!=s[l--])
            return "0";
    }
    return "Palindrome";
}

int main()
{
    
    string a;
    cin>>a;
    string ans=PalindString(a);
    cout<<ans;
    return 0;
}