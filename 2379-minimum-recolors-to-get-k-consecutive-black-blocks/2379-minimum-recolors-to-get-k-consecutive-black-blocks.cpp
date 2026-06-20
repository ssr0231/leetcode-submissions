class Solution {
public:
    int count_w(string s){
        int count=0;
        for(char ch:s){
            if(ch=='W') count++;
        }
        return count;
    }
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();

        int oper=count_w(blocks.substr(0,k));
        int min_count=oper;

        for(int i=k;i<n;i++){
            oper=count_w(blocks.substr(i-k+1,k));
            min_count=min(min_count,oper);
        }

        return min_count;

    }
};