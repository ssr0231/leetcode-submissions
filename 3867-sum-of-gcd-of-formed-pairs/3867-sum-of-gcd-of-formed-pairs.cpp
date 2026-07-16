class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }

    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mx = nums[0];
        for(int i=0;i<nums.size();i++){
            mx = max(nums[i],mx);
            prefixGcd.push_back(gcd(mx,nums[i]));
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum = 0;
        int st=0,end=prefixGcd.size()-1;
        while(st<end){
            sum += gcd(prefixGcd[st],prefixGcd[end]);
            st++;
            end--;
        }

        return sum;

    }
};