class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> st1;
        for(char ch:word){
            if(islower(ch)){
                if(st1.count(ch)==0){
                    st1.insert(ch);
                }
            }
        }
        string s(st1.begin(),st1.end());
        set<char> st2;
        for(char ch:word){
            if(isupper(ch)){
                if(st2.count(ch)==0){
                    st2.insert(ch);
                }
            }
        }
        int count = 0;
        for (char ch:s){
            if(st2.count(toupper(ch))){
                count++;
            }
        }
        return count;


    }
};