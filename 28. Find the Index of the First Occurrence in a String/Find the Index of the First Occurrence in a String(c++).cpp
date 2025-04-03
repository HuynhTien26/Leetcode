class Solution {
public:
    int strStr(string haystack, string needle) {
    if(needle.length()==0) return 0; //needle rỗng
    if(needle.length()>haystack.length()) return -1; //needle lớn hơn haystack

    for(int i=0; i<= haystack.length() - needle.length(); i++){ //duyệt haystack để tìm needlle
        if (haystack.substr(i, needle.length()) == needle){ 
            return i; //trả về vị trí đầu tiên khi tìm thấy needle
        }
     }
     return -1; //nếu không tìm thấy needle trong haystack
    }
};
