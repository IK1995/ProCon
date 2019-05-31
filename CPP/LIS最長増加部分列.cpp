//O(n^2)の回答
int ans=0;
for(int i=0;i<n;i++){
  dp[i]=1;
  for(int j=0;j<i;j++){
      if(a[j]<a[i]){
        dp[i]=max(dp[i],dp[j]+1);
      }
    }
    ans=max(ans,dp[i]);
  }

//O(nlogn)の解法
fill(dp,dp+n,INT_MAX/2);

for(int i=0;i<n;i++){
  *lower_bound(dp,dp+n,a[i])=a[i];
}
  
cout<<lower_bound(dp,dp+n,INT_MAX/2)-dp;
