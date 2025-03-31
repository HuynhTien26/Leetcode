class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){ 
            if(nums[i] ==nums[i+1]){
            return true;}
        }
        return false;
    }
};
//làm giống 136. Single Number nhưng trong vòng for cho i++ vì nếu cho i+=2 là duyệt theo cặp, nếu nums là chứa số lẻ thì sẽ bị lỗi chạy
