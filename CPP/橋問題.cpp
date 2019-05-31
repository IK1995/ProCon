int fo(){
	for(int i : g[1]){
		for(int j : g[i]){
			if(j==n) return true;
		}
	}
	return false;
}
int main(){
	int m,flag=false,a,b;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		if(a==1||b==1||a==n||b==n){
			g[a].push_back(b);
			g[b].push_back(a);
		}
	}
	cout<<(fo()?"POSSIBLE":"IMPOSSIBLE")<<endl;
	return 0;
}

//始点から終点まで橋でつながっているかどうか
