#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int>ar={2,1,5,9,6,9,3,8,9,7,1};
    int n=ar.size();
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            int a=ar[j];
            int b=ar[j+1];
            if(ar[j]>ar[j+1])
            {   
                swap(ar[j],ar[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    for(auto it:ar)
        cout<<it<<" ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<int>ar={2,5,9,6,3,8,2,9,7,1};
    int n=ar.size(); 
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        a[ar[i]]+=1;
        if(a[ar[i]]!=1)
        {
            cout<<ar[i];
            break;
        }
    }
    return 0;
}