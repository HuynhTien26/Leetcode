class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      //duyệt mảng ngược để tránh lỗi khi thay đổi kích thước trong vòng lặp (dùng phổ biến trong một container vd vector)
       for(int i=nums.size() -1; i>=0 ;--i){
/* i>=0 : kiểm tra phần tử đầu tiên
nums.size -1 : chỉ số của phần tử cuối trong mảng nums (VD nums có 5 phần tử, chỉ số phần tử cuối là 4 do size=5,size-1=4)
--i giảm i đi 1 để duyệt từ cuối lên đầu (VD start i=4, sau 1 vòng for i=3,...*/
        if(nums[i] ==val){
            nums.erase(nums.begin()+i); //nếu số hiện tại == val ->xóa đi
        }
       }
       return nums.size(); //trả về các phần tử còn lại sau khi xóa val
    }
};
