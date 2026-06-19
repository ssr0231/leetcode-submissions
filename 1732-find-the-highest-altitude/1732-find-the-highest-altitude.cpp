class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> alt(n+1);
        alt.push_back(0);
        for(int i=0;i<n;i++){
            int n=gain[i]+alt.back();
            alt.push_back(n);
        }
        sort(alt.begin(),alt.end());

        return alt.back();

    }
};