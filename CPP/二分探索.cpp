int high=n-1,low=0,cnt=0;
    while(high>=low){
        cnt++;
        int center=(low+high)/2;
        if(a[center]==X) break;
        else if(a[center]<X) low=center+1;
        else high=center-1;
    }
