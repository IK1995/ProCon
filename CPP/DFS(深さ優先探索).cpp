const int nmax=8;
bool graph[nmax][nmax];
int dfs(int v,int N,bool explored[nmax]){
  // v:始点
  // N:頂点数
  // visited[i]:　ある頂点iが探索されたか?
 bool all_explored=true;//全部探索したか？

 for(int i=0;i<N;++i){
 	if(explored[i]==false)
 	all_explored=false;
 }

 if(all_explored){
 	return 1;
 }

 int ret=0;

 for(int i=0;i<N;++i){
 	if(graph[v][i]==false) continue;
 	if(explored[i]) continue;

 	explored[i]=true;
 	ret+=dfs(i,N,explored);
 	explored[i]=false;
 }

 	return ret;
 }

//別方法
bool dfs(int i, int sum){

if(i==n) return sum==k;

if(dfs(i+1,sum)) return true;

if(dfs(i+1,sum+a[i])) return true;

 return false;

}
