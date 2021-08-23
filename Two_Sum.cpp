#include<bits/stdc++.h>
using namespace std;
/*
Test Case: arr = [3,2,3]
           target = 6

           Output: [0,2] --> ar[0]+ar[2] = 3+3=6;
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end())
            {
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]]=i;
        }
        return ans;
        
    }
};

int main() {
    
    vector<int>v={2,9,6,4,5};
    int target=7;
    Solution s;
    vector<int>ans=s.twoSum(v,target);
    for(auto it:ans)
        cout<<it<<" ";
    return 0;
    
    /*
    string input;
    getline(cin,input);
    istringstream is(input);
    vector<int>v((istream_iterator<int>(is)),istream_iterator<int>() );
    int target;
    cin>>target;
    Solution s;
    vector<int>ans=s.twoSum(v,target);
    for(auto it:ans)
        cout<<it<<" ";
    return 0;
    */
}