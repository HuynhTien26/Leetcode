class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0; //dùng để theo dõi vị trí của phần tử không phải số 0 trong mảng
        for(int i=0;i<n;i++){
           if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++; //vì đã đặt một số không phải 0 vào vị trí j, nên vị trí tiếp theo (j+1) sẽ là nơi đặt phần tử không phải 0 tiếp theo.
        }
        }
        }
};
