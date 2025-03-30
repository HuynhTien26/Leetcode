class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1; //con trỏ cho phần tử cuối của nums1
        int j=n-1; //con trỏ cho phần tử cuối của nums2
        int k=n+m-1;//trỏ đến vị trí cuối của nums1
        while (i>=0 && j>=0){ 
          //so sánh phần tử trong 2 nums
            if(nums1[i]>nums2[j]){ //nếu số bên nums1 >nums2
                nums1[k--] =nums1[i--]; //gán nums1[k] =nums1[i] rồi giảm i và k
            } else{
        nums1[k--] =nums2[j--]; ////gán nums1[k] =nums2[j] rồi giảm j và k
            }
        }
        while(j>=0){ //nếu nums1 đã hết số nhưng nums2 còn
            nums1[k--]=nums2[j--]; //gán các phần tử nums2 vào nums1[k]
        }
    }
};
