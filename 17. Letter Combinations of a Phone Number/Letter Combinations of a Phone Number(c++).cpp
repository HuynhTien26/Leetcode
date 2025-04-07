class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {}; //chuỗi rỗng, trả về []
                unordered_map<char, string> pad = { /*dùng lưu kí tự chữ số và kí tự tương ứng với nó
ở đây là <char, string> thay vì <int, string> do 1 số có thể tương ứng nhiều chữ cái nên sẽ cho số đó là kí tự chữ số*/
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
    queue<string> q; //tạo hàng đợi
    q.push(""); //bắt đầu với chuỗi rỗng
    for(char digit :digits){ //duyệt từng kí tự trong chuỗi digits và gán vào digit mỗi lần lặp
        int size =q.size(); /*gán kích thước hiện tại của hàng đợi vào biến size, để duyệt đúng số phần tử có trong queue 
tại thời điểm đó mà không bị ảnh hưởng (duyệt lại) các phần tử mới thêm vào trong cùng vòng lặp)*/
        while (size--){ /*lặp đúng số phần tử cũ trong queue trước khi xử lý digit hiện tại, size giảm tới khi size==0 thì dừng*/
            string cur=q.front();q.pop(); //lấy phần tử đầu tiên trong hàng đợi ra, gán vào cur, rồi xóa phần tử đó đi.
            for(char letter : pad[digit]){//lặp qua các chữ cái tương ứng với digit hiện tại
//VD: digit ='2' -> "abc"=> letter ='a','b','c'    
                q.push(cur + letter); //nối các chữ cái letter vào cur
            }
        }
/* CHẠY TAY: digits="23"
pad = {
'2' → "abc",'3' → "def"
}
-Vòng lặp với '2'
    digit='2' ->'abc'
    size=q.size()=1 (do chuỗi rỗng)
Lặp size = 1 lần:
cur = ""
letter = 'a' → q.push("a")
letter = 'b' → q.push("b")
letter = 'c' → q.push("c")
-Vòng lặp với 3
    digit = '3' → "def"
    size = q.size() = 3
Lặp size 3 lần 
cur = "a"
+ 'd' → "ad"
+ 'e' → "ae"
+ 'f' → "af"
    Tương tự với cur=b, cur=c */
    }
    vector<string> result; //tạo vector rỗng lưu kết quả
    while(!q.empty()){ //khi nào queue còn phần tử thì tiếp tục vòng lặp
        result.push_back(q.front());q.pop(); //lấy phần tử ở đầu hàng đợi bằng q.front(), đẩy vào cuối result push_back, xóa nó đi rồi q.pop()
    }
    return result;
    }
};
