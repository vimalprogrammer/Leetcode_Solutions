#include <bits/stdc++.h>
using namespace std;

string maxChar(string s)
{
    vector<char>vec;
    for(int i=0;i<s.size();i++)
    {
        vec.push_back(s[i]);
    }
    map<char,int>dummy;
    for(auto &it:vec)
    {
        auto res=dummy.insert(pair<char,int>(it,1));
        if(res.second==false)
            res.first->second++;
    }
    int max=0;
    string c;
    for(auto &it:dummy)
    {
        if(it.second>max)
        {
            max=it.second;
            c=it.first;
        }
    }
    return c;
}

int main()
{
    string str;
    cin>>str;
    string ans=maxChar(str);
    cout<<ans;
    return 0;
}

//Hashing Technique not using map

#include <bits/stdc++.h>
using namespace std;

string maxChar(string s)
{
    int a[256]={0};
    int max=0;
    string st;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]]++;
        if(a[s[i]]>max)
        {
            max=a[s[i]];
            st=s[i];
        }
    }
    return st;
}

int main()
{
    string s;
    cin>>s;
    string res=maxChar(s);
    cout<<res;
    return 0;
}