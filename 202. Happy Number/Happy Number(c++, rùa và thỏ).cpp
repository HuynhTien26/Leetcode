class Solution {
public:
    bool isHappy(int n) {
     int slow=n, fast=getnext(n); //rùa đi từ n, thỏ đi trước 1 bước
     while (fast!=1 && slow!=fast){ //nếu fast!=1 -> nếu fast đạt 1 thì là số hạnh phúc, slow!=fast -> cả 2 gặp nhau thì sẽ rơi vào vòng lặp vô hạn 
        slow =getnext(slow); //rùa đi 1 bước
        fast=getnext(getnext(fast)); //thỏ đi 2 bước
     }   
     return fast==1; //nếu vòng while kết thúc và fast ==1-> số hạnh phúc
      //còn nếu vòng while kết thúc vì fast=slow -> return false
    }

    int getnext(int n){
        int sum=0;
        while(n>0){
            int digit = n % 10;
            sum += digit*digit;
            n/=10;
        }
        return sum;
    }
};
