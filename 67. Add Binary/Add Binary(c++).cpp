class Solution {
public:
    string addBinary(string a, string b) {
        string result=""; //tạo 1 chuỗi rỗng để lưu kết quả
    int i=a.length()-1; //duyệt từ cuối đi lên của mảng a
    int j=b.length()-1; //duyệt từ cuối lên của mảng b
    int carry=0; //số nhớ (1+1=0 dư 1)
    while(i>=0 ||j>=0 || carry){ //nếu i còn || j còn || còn nhớ -> vòng lặp vẫn còn chạy
        int sum=carry; //
      if(i>=0) sum+=a[i--] - '0'; /*lấy giả trị tại a[i], chuyển từ kí tự sang số = cách -'0' rồi cộng vào sum
a[i--] - '0' là cách chuyển '1'->1, '0'-> 0 */        
      if(j>=0) sum+=b[j--] - '0';
         carry =sum/2;  //giữ phần dư cho lượt tính sau
/*Ví dụ 1+1=2, carry =2/2=1 */
         result =char(sum%2 +'0') + result; /* thêm chữ số mới vào đầu chuỗi
sum %2=0 -> thêm '0', sum%2=1-> thêm '1'
+ result cuối vì đang cộng từ phải sang trái, tức là vòng lặp đầu result ='0' , vòng lặp kế result ='1' +'0'="10" */ 
    }
    return result;
    }
    };
