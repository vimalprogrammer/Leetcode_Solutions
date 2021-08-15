#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        vector<int>v;
        int n=s.size();
        int incrI=0, decrD=n;
        for(auto & it:s)
        {
            if(it=='I')
            {
                v.push_back(incrI);
                incrI++;
            }
            else
            {
                v.push_back(decrD);
                decrD--;
            }
        }
        v.push_back(incrI);
        return v;
        
    }
};