class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> um;
        int solanxuathiencaonhat=0, soxuathiennhieunhat=nums[0];
        for(int num : nums){
            um[num]++; //bien dem so lan xuat hien
            if(um[num] > solanxuathiencaonhat){
                solanxuathiencaonhat =um[num];
                soxuathiennhieunhat=num;
            }
        }
        return soxuathiennhieunhat;
    }
};
