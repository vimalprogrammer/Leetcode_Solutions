#include <bits/stdc++.h>
using namespace std;

void swapString(char *a,char *b)
{
    char *temp=a;
    a=b;
    b=temp;
    cout<<a<<endl<<b;
}


int main()
{
    
    char a[10],b[10];
    cin>>a>>b;
    swapString(a,b);
    return 0;
}