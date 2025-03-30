class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(); //lấy số lượng phần tử trong vector<int>& nums
        for(int i=0;i<n;i++){
            if(nums[i]>=target){
                return i; //trả về vị trí tìm thấy hoặc vị trí cần chèn
            }
        }
        return n; //target lớn hơn các số thì chèn vào cuối
    }
};
