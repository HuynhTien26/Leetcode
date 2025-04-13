class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for( string val : words){
            if(s.find(val) ==0) cnt++; //s.find(val) tìm vị trí xuất hiện đầu tiên của val trong chuỗi s
        } 
        return cnt;
    }
};
