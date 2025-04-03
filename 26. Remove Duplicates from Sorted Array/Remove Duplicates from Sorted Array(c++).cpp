class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1; //bắt đầu từ index/vị trí 1
        for(int i=1;i<nums.size();i++){ //cho i bắt đầu từ 1 vì k-1 không có trong i-1
        if(nums[i]!=nums[k-1]){ //nếu phần tử mới không trùng với phần tử trước
            nums[k]=nums[i]; //cập nhật giá trị vào vị trí k
            k++; //tăng biến đếm vị trí hợp lệ
        }    
        }
        nums.resize(k); //xóa phần tử dư thừa
        return k;
    }
};
