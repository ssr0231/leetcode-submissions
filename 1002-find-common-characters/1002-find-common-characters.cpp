class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<int> common(26, 0);

        for(char ch : words[0]) {
            common[ch - 'a']++;
        }

        for(int i = 1; i < words.size(); i++) {

            vector<int> curr(26, 0);

            for(char ch : words[i]) {
                curr[ch - 'a']++;
            }

            for(int j = 0; j < 26; j++) {
                common[j] = min(common[j], curr[j]);
            }
        }

        vector<string> ans;

        for(int i = 0; i < 26; i++) {
            while(common[i]--) {
                ans.push_back(string(1, 'a' + i));
            }
        }

        return ans;
    }
};