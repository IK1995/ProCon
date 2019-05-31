int dp[i][j]://i番目からj個選ぶ組み合わせの数

for(int i=0;i<n;i++) {
  cin>>a[i];
  dp[i][0]=1;
  //(0こ選ぶ)を含むとすべて最低は１通りはある
}
  dp[n][0]=1;

  for(int i=0;i<n;i++){
    for(int j=1;j<=m;j++){
      if(j-1-a[i]>=0)
      dp[i+1][j]=(dp[i+1][j-1]+dp[i][j]-dp[i][j-1-a[i]])%MOD;
      else dp[i+1][j]=(dp[i+1][j-1]+dp[i][j])%MOD;
    }
  }
  cout<<dp[m][n];
