class Solution {
public:
    int minimumDeleteSum(string a, string b) {

        int n=a.size(),m=b.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int sum=0,i,j,maxx=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                sum=0;
                if(a[i-1]==b[j-1])
                {
                   dp[i][j]=a[i-1]+dp[i-1][j-1];
                }
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

            }
            
        }
        int ans=0;
        for(auto i:a) ans+=i;
        for(auto i:b) ans+=i;
        return ans-(2*dp[n][m]);

        

    }
};