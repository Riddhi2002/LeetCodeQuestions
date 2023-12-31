class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(mp[it.first]>n/2){
                return it.first;
            }
        }
        return 0;
    }
};