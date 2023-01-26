class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        for(int i=0;i<(n+1);i++){
            dp[i]=n;
        }
        dp[0]=0;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<i+1;j++){
                if(i<j*j) break;
                dp[i]=min(dp[i],dp[i-j*j]+1);
            }
        }
        return dp[n];
    }
};
