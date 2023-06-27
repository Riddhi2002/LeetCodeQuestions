class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        uint32_t temp=pow(2,31);
        while(n){
            if(n&1){
                res+=temp;
            }
            n>>=1;
            temp>>=1;
        }
        return res;
    }
};