long long kai(int n){
	if(n==0) return 1;
	long long ans;
	ans=n*kai(n-1);
	return ans;
}

//結果は非常に大きくなる
