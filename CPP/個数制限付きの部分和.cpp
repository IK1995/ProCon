//個数制限付きの部分和

for(int i=0;i<n;i++){
  for(int j=0;j<=k;j++){
    if(dp[i][j]>=0) dp[i+1][j]=m[i];
    else if(j<a[i]||dp[i+1][j-a[i]]<=0) dp[i+1][j]=-1;
    else dp[i+1][j]=dp[i+1][j-a[i]]-1;
  }
}

if(dp[n][k]>=0)cout<<"YES";
 else cout<<"NO";

//↑のdpの一次元目に注目するとすべてi+1になっている
//そのため省略可能

//以下に示す
memset(dp,-1,sizeof(dp));
  //要#include<cstrings>
dp[0]=0;
for(int i=0;i<n;i++){
  for(int j=0;j<=k;j++){
    if(dp[i][j]>=0) dp[j]=m[i];
    else if(j<a[i]||dp[j-a[i]]<=0) dp[j]=-1;
    else dp[j]=dp[j-a[i]]-1;
  }
}

//ただし、省略はiとi+1が混在しているときは不可能
