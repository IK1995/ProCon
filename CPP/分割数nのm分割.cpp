dp[0][0]=1;
for(int i=1;i<=m;i++){
  for(int j=0;j<=n;j++){
    if(j-i>=0) dp[i][j]=(dp[i-1][j]+dp[i][j-i])%MOD;
    else dp[i][j]=dp[i-1][j];
  }
}
