class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
// for(int i=1;i<numbers;i++){
//     for(int j=i+1;j<numbers;j++){
// }
// } 
//quá chiều dài
   int left=0,right= numbers.size()-1;
   while(left<right){
    int sum = numbers[left] + numbers[right];
    if(sum==target){
        return {left+1, right +1};
    }
    else if (sum<target){
        left++;
    }
    else{
        right--;
    }
   }
return {};
    }
    };
