class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans = 0;
        long long x = 0;

        int i = 1;
        while(n > 0){
            int d = n % 10;
            if(d != 0){
                x = x + d*i;
                i *= 10; 
            }
            n/=10;
        } 

        long long sum = 0;
        long long temp = x;
        while(temp > 0){
            int dig = temp % 10;
            sum += dig;
            temp /= 10;
        }
        
        ans = sum * x;
        return ans;
    }
};