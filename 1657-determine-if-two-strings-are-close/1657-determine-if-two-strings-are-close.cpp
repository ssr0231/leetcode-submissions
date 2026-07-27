class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size())
            return false;

        unordered_map<char, int> mp1, mp2;

        for(char ch : word1) mp1[ch]++;
        for(char ch : word2) mp2[ch]++;

        for(auto &p : mp1){
            if(mp2.count(p.first) == 0)
                return false;
        }

        for(auto &p : mp2){
            if(mp1.count(p.first) == 0)
                return false;
        }
        
        vector<int> freq1, freq2;

        for(auto &p : mp1)
            freq1.push_back(p.second);

        for(auto &p : mp2)
            freq2.push_back(p.second);

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;

    }
};