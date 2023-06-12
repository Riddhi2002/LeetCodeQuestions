class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=0;
        int u=0;
        int n=nums.size();
        while(s<n){
            int e=s;
            int count=1;
            while(e<n-1 && nums[e+1]==nums[e]){
                e++;
                count++;
            }
            count=min(count, 2);
            while(count--){
                nums[u++]=nums[s];
            }
            s=e+1;
        }
        return u;
    }
};