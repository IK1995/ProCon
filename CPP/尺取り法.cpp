for(int i = 0, j = 0; i < N; ++i){
       scanf("%lld", A + i);
       B *= A[i];
       while(B > P){
           B /= A[j];
           ++j;
       }
       if(B == P)return 0 & cout<<"ok";
   }
