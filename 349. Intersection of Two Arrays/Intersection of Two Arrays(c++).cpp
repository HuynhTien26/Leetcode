class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
     set <int> res; //lưu giao của 2 mảng
     set<int> s (nums1.begin(), nums1.end()); //lưu nums1 vào set
      //tìm kiếm nhanh với O(logN)

  //kiểm tra từng phần tử trong nums2 xem đã tồn tại trong set s chưa
    for(int num : nums2){ //duyệt từng phần tử num trong nums2
        if(s.find(num) !=s.end()){ //nếu find(num) không trỏ tới s.end() tức num tồn tại trong s
            res.insert(num); //num tồn tại trong s, thì ta thêm nó vào res
        }
    }

    // Chuyển set thành vector để trả về
    return vector<int>(res.begin(),res.end());
      //res.begin(),res.end(): lấy toàn bộ phần tử trong set res
     //vector<int>: chuyển set<int> thành vector<int> để trả về kết quả
    }
};
