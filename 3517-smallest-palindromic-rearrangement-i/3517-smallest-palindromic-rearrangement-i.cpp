class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        string left = "";
        string middle = "";
        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (freq.count(ch)) {
                left.append(freq[ch] / 2, ch);

                if (freq[ch] % 2 == 1) {
                    middle += ch;
                }
            }
        }
        string right = left;
        reverse(right.begin(), right.end());

        return left + middle + right;
    }
};