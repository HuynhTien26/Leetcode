class Solution {
public:
    char findTheDifference(string s, string t) {
         for(int i=0;i<s.size();i++) //do t hơn s 1 kí tự 
/*Biến	Kích thước	Giá trị cuối truy cập
   s	       n	          s[n-1]
   t	       n + 1	       t[n]
  */
		t[i+1] += t[i]-s[i]; // t[i+1]=t[i+1]+(t[i]−s[i]) --> chuyển sự khác nhau giữa s và t về cuối, những phần tử giống nhau sẽ triệt tiêu nhau
      return t.back();//trả về phần tử cuối do phép tính trên đẩy phần tử dư thừa về cuối
    }
};
