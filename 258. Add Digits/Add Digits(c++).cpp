class Solution {
public:
    int addDigits(int num) {
      //nếu để tong=0 ngoài đây thì sẽ không reset dễ dẫn đến đáp án sai
    while(num>=10){ //nếu num vẫn còn 2 chữ số
        int tong=0; //reset số sau mỗi vòng lặp
        while(num>0){ //tách từng chữ số ra rồi cộng lại
        tong+= num%10;
        num/=10;
    }
    num=tong;
    }
    return num;
    }
};
