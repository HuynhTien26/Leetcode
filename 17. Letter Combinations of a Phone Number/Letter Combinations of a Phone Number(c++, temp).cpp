class Solution {
public:
vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {}; //chuỗi rỗng, trả về []

    unordered_map<char, string> pad = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
        {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };

    vector<string> result = {""}; // bắt đầu với chuỗi rỗng, lưu trữ tất cả các tổ hợp chữ cái được tạo ra
//result khác với temp, sau mỗi vòng lặp result được cập nhật = temp để tiếp tục tạo ra các tổ hợp chữ cái từ các số kế tiếp
    for (char digit : digits) { //duyệt qua từng phần tử trong digits rồi gán vào digit
        vector<string> temp; // mảng tạm thời để chứa tổ hợp các chữ cái mới sau mỗi vòng lặp
        for (string s : result) { //duyệt qua từng phần tử trong result rồi gán vào s
            for (char c : pad[digit]) { //lặp qua tất cả kí tự trong pad tương ứng với số digit rồi gán vào c
                temp.push_back(s + c); // thêm ký tự mới vào mỗi tổ hợp
            }
        }
        result = temp; /* cập nhật kết quả để tiếp tục vòng lặp
VD nếu s = "a" và c = 'd', thì s + c sẽ tạo thành chuỗi "ad" */
    }
    return result; //trả  về kết quả cuối cùng
}
};
