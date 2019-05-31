        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                scanf("%lf",&dat[i][j]);
            }
          }
        for(int i=0;i<a;i++)dp[0][i]=1;
        for(int i=1;i<b;i++){
            for(int j=0;j<a;j++){
                double max=0;
                for(int k=0;k<a;k++){
                    if(max<dp[i-1][k]*dat[k][j])max=dp[i-1][k]*dat[k][j];
                }
                dp[i][j]=max;
            }
        }
        double ret=0;
        for(int i=0;i<a;i++){
            if(ret<dp[b-1][i])ret=dp[b-1][i];
        }
