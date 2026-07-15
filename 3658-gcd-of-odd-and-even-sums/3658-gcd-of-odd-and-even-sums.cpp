class Solution {
public:
    int gcd(int a,int b){
        int ans = 1;
        for(int i=1;i<=min(a,b);i++){
            if(a%i == 0 && b%i == 0){
                ans = i;
            }
        }
        return ans;
    }
    int gcdOfOddEvenSums(int n) {
        int evensum = 0;
        int oddsum = 0;
        for(int i=1;i<=n*2;i++){
            if(i%2==0){
                evensum+=i;
            }else{
                oddsum+=i;
            }
        }
        return gcd(oddsum,evensum);
    }
};