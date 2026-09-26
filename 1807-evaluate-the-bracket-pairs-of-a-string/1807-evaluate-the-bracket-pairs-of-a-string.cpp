class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!='('){
                ans+=s[i];
            }else{
                string s1="";
                i++;
                while(i<s.size() && s[i]!=')'){
                    s1+=s[i];
                    i++;
                }
                if (mp.count(s1)) {
                    ans += mp[s1];
                }else{
                    ans+="?";
                }

            }
        }
        return ans;
    }
};