class Solution {
public: 
    bool check(string &s, int st, int end) {
        if(st >= end) return true;

        if(s[st] != s[end]) return false;

        return check(s, st + 1, end - 1);
    }

    bool isPalindrome(int x) {
        /*string s = to_string(x);

        int st=0,end=s.size()-1;
        while(st<end){
            if(s[st]!=s[end]){
                return false;
            }
            st++,end--;
        }
        return true;*/


        if(x < 0) return false;
        string s = to_string(x);
        return check(s, 0, s.size() - 1);
    }

};