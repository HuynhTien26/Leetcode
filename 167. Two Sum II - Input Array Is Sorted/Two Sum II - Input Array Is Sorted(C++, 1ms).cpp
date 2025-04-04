class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
// for(int i=1;i<numbers;i++){
//     for(int j=i+1;j<numbers;j++){
// }
// } 
//quá chiều dài
    unordered_map<int, int> num_map;
    for(int i=0;i<numbers.size();i++){
        int complement =target - numbers[i];
        if (num_map.find(complement) !=num_map.end()){
            return {num_map[complement] +1, i+1}; // return {num_map[complement], i}; thì cout ra [0, 1] ở test case 1 thay vì [1,2]
        }
        num_map[numbers[i]] =i;
    }
    return {};
    }
};
