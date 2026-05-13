class Solution {
public:
    bool isAnagram(string a, string b) {
        vector<int> freq(26, 0);
        if(a.length() != b.length()) return false;
        for(int i = 0; i < a.length(); i++) {
            freq[a[i] - 'a']++;
            freq[b[i] - 'a']--;
        }

        for(const auto& i : freq) {
            if(i != 0) return false;
        }

        return true;

    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
        int gc = 0;
        while(!strs.empty()) {
            groups.emplace_back(vector<string>());
            for(int i = 0; i < strs.size(); i++) {
                if(isAnagram(strs[0], strs[i])) {
                    groups[gc].push_back(strs[i]);
                }
            }

            for(const auto& i : groups[gc]) {
                strs.erase(remove(strs.begin(), strs.end(), i));
            }

            gc++;
        }  
        return groups;
    }
};
