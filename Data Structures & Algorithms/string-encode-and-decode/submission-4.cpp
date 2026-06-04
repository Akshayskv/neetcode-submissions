class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto& i : strs) {
            res = res + i + "\n";
        }
        return res;
    }

    vector<string> decode(string s) {
        string word = "";
        vector<string> res;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '\n') {
                res.push_back(word);
                word = "";
                continue;
            }
            word += s[i];
        }

        return res;

    }
};
