class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n=sum(n);
        }
        return n==1;
    }
    int sum(int n){
        int sum=0;
        while(n){
            int remainder=n%10;
            sum+=pow(remainder,2);
            n=n/10;
        }
        return sum;
    }
};