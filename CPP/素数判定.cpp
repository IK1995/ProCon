prime[0]=prime[1]=-1;
    for(int i=2;i<=1000000;i++){
        if(prime[i]!=-1){
            prime[i]=1;
            for(int j=i+i;j<=1000000;j+=i)prime[j]=-1;
        }
    }

//ver2

dp[0]=1;
        for(int i=1;i<=x;i++) dp[i]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=x;j++){
                if(p[i]<=j&&dp[j-p[i]])dp[j]=1;
            }
        }
