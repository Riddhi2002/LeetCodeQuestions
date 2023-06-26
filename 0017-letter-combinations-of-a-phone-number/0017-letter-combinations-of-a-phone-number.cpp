class Solution {
private:
    void letterCombination(string digits, vector<string>&output, string temp, vector<string>& pad, int index){
        if(index==digits.size()){
            output.push_back(temp);
            return;
        }
        string val=pad[digits[index]-'0'];
        for(int i=0; i<val.size(); i++){
            temp.push_back(val[i]);
            letterCombination(digits, output, temp, pad, index+1);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string>output;
        string temp;
        letterCombination(digits, output, temp, pad, 0);
        return output;
    }
};