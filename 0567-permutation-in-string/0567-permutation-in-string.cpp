class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if (n > m) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        for (char c : s1) {
            freq1[c - 'a']++;
        }

        for (int i = 0; i < n; i++) {
            freq2[s2[i] - 'a']++;
        }

        if (isSame(freq1, freq2)) return true;

        for (int i = n; i < m; i++) {
            freq2[s2[i] - 'a']++;
            freq2[s2[i - n] - 'a']--;

            if (isSame(freq1, freq2)) return true;
        }

        return false;
    }

private:
    bool isSame(int a[], int b[]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }
};
