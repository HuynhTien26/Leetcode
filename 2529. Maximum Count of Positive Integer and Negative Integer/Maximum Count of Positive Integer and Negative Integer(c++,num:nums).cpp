class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int soam=0, soduong=0;
        for(int num : nums){ //duyệt từng phần tử trong nums vào num
            if(num>0) soduong++;
            if(num<0) soam++;
        }
        return max(soam,soduong);
    }
};
