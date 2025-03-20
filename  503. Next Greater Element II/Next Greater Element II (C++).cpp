class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
            int n =heights.size();
            stack <int> st;
            int res =0, i=0;
    
            while (i<n){
                if(st.empty() || heights[i] >=heights[st.top()]){
                    st.push(i++);
                }
                else {int index =st.top();
                st.pop();
                res = max(res, heights[index] * (st.empty() ? i : i - st.top() - 1));
                }
            }
    while (!st.empty()){
        int index =st.top();
        st.pop();
        res = max(res, heights[index] * (st.empty() ? i : i - st.top() - 1));
        }
         return res;
        }
            };
    