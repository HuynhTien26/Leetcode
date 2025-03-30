class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int re=0;
        for(int num :nums){
            re ^=num; //Dùng phép XOR
        }
        return re;
    }
};
