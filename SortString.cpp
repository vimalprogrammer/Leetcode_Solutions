#include <bits/stdc++.h>
using namespace std;

string sortString(string s)
{
    int len=s.size();
    int a[len];
    for(int i=0;i<len;i++)
    {
        a[i]=(int)s[i];
    }
    for(int i=0;i<len;i++)
    {
        int flag=0;
        char f=(char)(a[i]);
        for(int j=0;j<len-1-i;j++)
        {
            char l=(char)(a[j]);
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    for(int i=0;i<len;i++)
    {
        char x=(char)(a[i]);
        s[i]=x;
    }
    return s; 
}

int main()
{
    
    string s="bfjvabddh";
    string ans=sortString(s);
    cout<<ans;
    return 0;
}