//幅優先探索
//グラフや木構造でネノードから始まるすべてのノードを探索し、
//自分の求める会を探索する方法

//たぶんこれモンテカルロ法とかそんな感じ

//一例：最短経路問題（シミュレーション系:SRPGのこと）
//キューを使って全探索って感じ

#include <queue>
#define rep(i,n) for(int i=0;i<(n);i++)
char cp[101][101];
int r,c,sy,sx,gy,gx;
int score[101][101];
bool use[101][101];
int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
void bfs(int i,int j){
    queue<pair<int,int> >Q;
    score[i][j]=0;
    Q.push(make_pair(i,j));
    while(!Q.empty()){//この辺メモ化の応用みたいなの?
        pair<int,int> q=Q.front();
        Q.pop();
        int x=q.first,y=q.second;
        rep(k,4){
            int a=x+dx[k];
            int b=y+dy[k];
            if(cp[a][b]=='#'||use[a][b])continue;
            score[a][b]=score[x][y]+1;
            use[a][b]=true;
            Q.push(make_pair(a,b));
        }
    }
}
int main(){
    cin>>r>>c>>sy>>sx>>gy>>gx;
    rep(i,r)rep(j,c)cin>>cp[i][j];
    bfs(sy-1,sx-1);
    cout<<score[gy-1][gx-1]<<endl;
    return 0;
}

//キューを使わない系
int main() {
  	string t;
  	int r,c,sx,sy,gx,gy;
  	cin >> r >> c >> sy >> sx >> gy >> gx;
  	sx--;sy--;gx--;gy--;
  	vector<int> a(r*c,1000);
  	for(int i = 0; i < r; i++) {
    	cin >> t;
      	for(int j = 0; j<c;j++) {
        	if(t[j] == '#')
          		a[i*c+j] = -1;
        }
    }
  	a[sy*c+sx]=0;
  	queue<int> que;
  	int tmp;
  	que.push(sy*c+sy);
  	while(true) {
    	tmp = que.front();
      	que.pop();
      	if(tmp%c == gx && tmp/c == gy) {
        	cout << a[tmp] << endl;
          	return 0;
        }
      	if(a[tmp+1] == 1000) {
          	a[tmp+1] = a[tmp]+1;
          	que.push(tmp+1);
        }
      	if(a[tmp-1] == 1000) {
          	a[tmp-1] = a[tmp]+1;
          	que.push(tmp-1);
        }
      	if(a[tmp+c] == 1000) {
          	a[tmp+c] = a[tmp]+1;
          	que.push(tmp+c);
        }
      	if(a[tmp-c] == 1000) {
          	a[tmp-c] = a[tmp]+1;
          	que.push(tmp-c);
        }
    }
}
