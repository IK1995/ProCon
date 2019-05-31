ll luc[100000];
ll lucas(ll n){
	if(luc[n]==0){
		if(n==0) luc[n]=2;
		else if(n==1) luc[n]=1;
		else luc[n]=lucas(n-1)+lucas(n-2);
	}
	return luc[n];
}
