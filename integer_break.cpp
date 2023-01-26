class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        int i=3;
        while (i<n+1){
            for (int j = 1; j <= i; j++){
                dp[i] = max(j * (i - j), max(j * dp[i - j], dp[i]));
            }
            i++;
        }
        return dp[n];
    }
};
