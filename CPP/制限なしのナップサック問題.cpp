//制限なしのナップサック問題解法
int w[n],v[n];
for(int i=0;i<n;i++) cin>>w[i]>>v[i];
  for(int i=0;i<n;i++){
    for(int j=0;j<=m;j++){
      if(j<w[i]) dp[i+1][j]=dp[i][j];
      else dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
    }
  }
//重さと価値に大きな差があるとき
for(int i=0;i<n;i++) {
  cin>>w[i]>>v[i];
  mv=max(mv,v[i]);
}
for(int i=0;i<n*mv+1;i++) dp[0][i]=INT_MAX/2;
//値が大きくなりすぎているためこうしている
dp[0][0]=0;

for(int i=0;i<n;i++){
  for(int j=0;j<=n*mv;j++){
    if(j<v[i]) dp[i+1][j]=dp[i][j];
    else dp[i+1][j]=min(dp[i][j],dp[i][j-v[i]]+w[i]);
  }
}
int ans=0;
for(int i=0;i<=n*mv;i++)
  if(dp[n][i]<=m)ans=i;
