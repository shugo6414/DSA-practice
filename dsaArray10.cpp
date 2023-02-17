class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans;
        for(auto i:mp){
            if(i.second>1){
                ans=i.first;
            }
        }
        return ans;
    }
};