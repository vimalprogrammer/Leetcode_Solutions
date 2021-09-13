#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s="E12F35G58"; // 1.4523EF58G OUTPUT -> 452358    2.E12F35G58 OUTPUT->E12F35558
    int l=s.size();
    vector<char>res;
    vector<char>res1;
    for(int i=0;i<l;i++)
    {
        char p=s[i];
        if((s[i] == 'E' && s[i+1] == 'F') 
        || (s[i-1] == 'E' && s[i] == 'F') 
        || (s[i-1] == '5' && s[i] == '6') 
        || (s[i] == '5' && s[i+1] == '6') 
        || s[i]=='G' || s[i]=='7' )
            res.push_back(s[i]);
        else 
            res1.push_back(s[i]);
    }
    for(auto i:res1)
        cout<<i;
    return 0;
}