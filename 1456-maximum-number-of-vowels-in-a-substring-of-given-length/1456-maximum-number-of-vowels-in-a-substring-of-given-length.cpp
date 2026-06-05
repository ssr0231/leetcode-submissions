class Solution {
public:
    bool isVowel(char c){
        if(c== 'a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' ) return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
        for(int i=0;i<k;i++){
            char c=tolower(s[i]);
            if(isVowel(c)){
                count++;
            }
        }
        int max_count=count;
        for(int i=k;i<n;i++){
            char c2=tolower(s[i]);
            if(isVowel(c2)) count++;
            if(isVowel(s[i-k])) count--;
            max_count=max(count,max_count);
        }
        return max_count;
    }
};