class Solution {
public:
    int numDecodings(string s) {
        int size = s.size();
        vector<int> dp(size+1,0);
        dp[0] = 1;
        for (auto i=1;i<=size;++i){
            if (s[i-1]!='0'){
                dp[i]+=dp[i - 1];
            }
            if(i>=2&&(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]-'0'<=6))){
                dp[i]+=dp[i - 2];
            }
        }
        
        return dp[size];
    }
};
