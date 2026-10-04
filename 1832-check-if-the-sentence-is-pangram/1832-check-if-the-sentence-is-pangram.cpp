class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        if(n<26) return  false;
        set<char> st(sentence.begin(),sentence.end());
        return st.size() == 26;

    }
};