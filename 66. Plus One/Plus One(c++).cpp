class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n=digits.size(); //trả về số phần tử trong digits
    for(int i=n-1;i>=0;--i){ //duyệt từ cuối tới đầu mảng
        if(digits[i]<9){ //nếu số hiện tại <9 thì chỉ cần +1 rồi trả về kết quả
        digits[i]++;
        return digits;}
    else digits[i]=0; //nếu số hiện tại là 9, cho nó về 0 và xử lý tiếp
    }
    digits.insert(digits.begin(), 1); //nếu mảng là tập các số 9 như 999 thì thêm số 1 vào đầu mảng
    return digits;
    }
};
