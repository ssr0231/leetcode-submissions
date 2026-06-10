class Solution {
public:
    void reverseS(vector<char>& s,int st,int end){
        if(st>end) return;
        swap(s[st],s[end]);
        st++,end--;
        reverseS(s,st,end);
    }
    void reverseString(vector<char>& s) {
        /*int st=0,end=s.size()-1;
        while(st<=end){
            swap(s[st++],s[end--]);
        }*/

        int st=0,end=s.size()-1;
        reverseS(s,st,end);
    }

};