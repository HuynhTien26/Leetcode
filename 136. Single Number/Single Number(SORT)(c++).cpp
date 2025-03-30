class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); //sắp xếp mảng
//trong vòng lặp so sánh nums[i] với nums[i+1] nên trong vòng for nums.size()-1 để nums[i+1] không vượt quá phạm vi mảng
//i+=2 do nếu nums[i]==nums[i+1] thì ta so sánh số kế tiếp của nums[i+1]        
      for(int i=0;i < nums.size()-1;i+=2){ //nếu i=nums.size() - 1 thì i+1 sẽ quá phạm vi mảng
           if(nums[i] !=nums[i+1]){
            return nums[i]; //nếu không trùng với số kế, đó là số xuất hiện 1 lần
           }
        }
    return nums.back(); //nếu không tìm thấy, số cuối cùng là số xuất hiện 1 lần
    }
};
