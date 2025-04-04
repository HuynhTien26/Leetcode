class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //khởi tạo đối tượng stringstream từ s
        string lastword; 
        string tmp;
        while (ss>>tmp){ //duyệt từng phần tử trong ss lưu vào tmp
            lastword = tmp; //gán từ cuối trong tmp vào lastword
            }
        return lastword.length(); //trả về độ dài của từ cuối
    }
};
