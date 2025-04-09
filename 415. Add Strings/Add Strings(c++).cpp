class Solution {
public:
    string addStrings(string num1, string num2) {
        string result="";
        int carry=0;
        int i=num1.length()-1, j=num2.length()-1;
        while(i>=0 || j>=0 || carry){
            int digit1=(i>=0)? num1[i--] -'0' : 0;
          //nếu i>=0 thì thực hiện lệnh num1[i--] -'0', nếu i<0 thì cho bằng 0
            int digit2=(j>=0)? num2[j--] -'0' : 0;
            int sum= digit1 + digit2 + carry;
            result += char(sum%10 + '0'); //thêm các chữ số vào chuỗi từ trái qua phải -> đáp án bị ngược
            carry = sum/10;
        }
        reverse(result.begin(), result.end()); //dùng reverse để đảo ngược result lại, trả về đáp án đúng
        return result;
    }
};
