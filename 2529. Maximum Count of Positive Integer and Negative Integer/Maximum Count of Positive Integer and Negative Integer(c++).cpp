class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int soam=0, soduong=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                soduong++;
            }
            if(nums[i]<0){
                soam++;
        }
        }
       return max(soam, soduong);
    }
};
