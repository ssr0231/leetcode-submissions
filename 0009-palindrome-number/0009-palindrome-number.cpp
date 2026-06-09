class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);

        int st=0,end=s.size()-1;
        while(st<end){
            if(s[st]!=s[end]){
                return false;
            }
            st++,end--;
        }
        return true;

    }
};