class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    int i=num.size()-1;
    while(k>0 || i>=0){
        if(i>=0){
        k +=num[i]; //cộng k và chữ số hiện tại
        num[i] =k%10; //cập nhật chữ số cuối
        k/=10; //lấy phần tử dư làm carry
        i--;
    }
    else{
        num.insert(num.begin(), k%10); //nếu num hết mà k còn thì chèn vào đầu
        k/=10;
    }
    }
    return num;}
};
