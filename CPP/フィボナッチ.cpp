ll fib(ll n){
	if(n==0||n==1) return 1;
	else{
		return fib(n-1)+fib(n-2);
	}
}

//メモ化使用
long long num[100000];
ll fib(ll n){
	if(num[n]==0){
		if(n==0||n==1) num[n]=1;
		else{
			num[n]=fib(n-1)+fib(n-2);
		}
	}
	return num[n];
}
