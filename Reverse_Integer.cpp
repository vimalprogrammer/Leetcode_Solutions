#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        
        if(x<=-2147483648 || x>=2147483647)
            return 0;
        int flag=0;
        if(x<0)
        {
            x=-1*x;
            flag=1;
        }
        int temp=x;
        long long rev=0;
        while(temp>0)
        {
            rev*=10;
            if(rev<=-2147483648 || rev>=2147483647)
                return 0;
            rev=rev+(temp%10);
            temp/=10;
        }
        if(flag==1)
            rev=0-rev;
        return rev;
    }
};

int main()
{
    int n=1534236469;
    Solution s;
    int res=s.reverse(n);
    cout<<res;
}