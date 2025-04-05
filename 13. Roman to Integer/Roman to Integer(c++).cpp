class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> roman = {
        {'I' ,1},
        {'V' ,5},
        {'X' ,10},
        {'L' ,50},
        {'C' ,100},
        {'D' ,500},
        {'M' ,1000},
        };
        int tong=0;
        int prev=0; //số đã xét trước đó, tức là số bên phải
        for(int i=s.size()-1;i>=0;i--){
        int cur =roman[s[i]]; //số đang xét
        //trước < sau  -
        //trước > sau  +
        //trước = sau +
        if(cur >= prev){ tong +=cur;}
        else {tong -=cur;}
        prev=cur; 
        }
        return tong;
    }
};
