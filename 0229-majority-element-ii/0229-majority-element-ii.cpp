class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int>ans;
       unordered_map<int,int>mp;
       int n=nums.size()/3;
       for(auto i:nums){
        mp[i]++;
       } 

       for(auto i: mp){
        if(i.second>n){
            ans.push_back(i.first);
            
        }
       }
       return ans;
    }
};