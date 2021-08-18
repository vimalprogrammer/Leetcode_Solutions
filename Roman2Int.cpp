// IV - 4
// XIII - 13

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ret = 0;
        int sz=s.size();
        for (int idx = 0; idx < s.size(); ++idx) {
            if (m[s[idx]] < m[s[idx+1]]) {
                ret -= m[s[idx]];
            }
            else {
                ret += m[s[idx]];
            }
        }
        return ret;
    }
};


int main()
{
    string s="LIV";
    Solution ob;
    int a=ob.romanToInt(s);
    cout<<a;    
    return 0;
}