class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(),false);
        int mx=0;
        for(int i=0; i<candies.size();i++){
            if(candies[i]>mx){
                mx=max(candies[i], mx);
            }
        }
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies>=mx){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
    }
};