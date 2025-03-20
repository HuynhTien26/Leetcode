class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack <int> st;
// for (int&x :nums)
// for(int i=0;i<n;i++){
//     if(st.empty()){
//         st.push(i);
//}
            for (int i=0; i<2*n;i++){
                int index =i%n;
            while (!st.empty() && nums[st.top()]<nums[index]){
                result[st.top()]=nums[index];
                st.pop();
            }
           if(i<n)
           st.push(index);
        }
        return result;
    }
};
