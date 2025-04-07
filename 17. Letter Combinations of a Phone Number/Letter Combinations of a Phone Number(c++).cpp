class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
                unordered_map<char, string> pad = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
    queue<string> q;
    q.push("");
    for(char digit :digits){
        int size =q.size();
        while (size--){
            string cur=q.front();q.pop();
            for(char letter : pad[digit]){
                q.push(cur + letter);
            }
        }
    }
    vector<string> result;
    while(!q.empty()){
        result.push_back(q.front());q.pop();
    }
    return result;
    }
};
