class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int seenOnce=0, seenTwice=0;
        for(int i=0; i<nums.size(); i++){
            seenOnce=(seenOnce^nums[i])& (~seenTwice);
            seenTwice=(seenTwice^nums[i])&(~seenOnce);
        }
        return seenOnce;

    }
};