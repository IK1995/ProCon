//負の辺があるときは使えない
//計算量はO(V^2)
void dijkstra(int s){
    fill(d,d+V,INF);
    fill(used,used+V,false);
    d[s]=0;
    while(true){
        int v=-1;
        for(int u=0;u<V;u++){
            if(!used[u]&&(v==-1||d[u]<d[v])) v=u;
        }
        used[v]=true;
        for(int u=0;u<V;u++){
            d[u]=min(d[u],d[v]+cost[v][u]);
        }
    }
}
//回路復元機能を付けたもの
int prev[1000];
int cost[1000][1000];
int d[1000];
bool used[1000];
int V;
const int INF=10000000;
void dijkstra(int s){
  fill(d,d+V,INF);
  fill(used,used+V,false);
  fill(prev,prev+V,-1);
  d[s]=0;
while(true){
    int v=-1;
    for(int u=0;u<V;u++){
      if(!used[u]&&(v==-1||d[u]<d[v]))v=u;
    }
    if(v==-1) break;
    used[v]=true;
    for(int u=0;u<V;u++){
      if(d[u]>d[v]+cost[v][u]){
        d[u]=d[v]+cost[v][u];
        prev[u]=v;
      }
    }
  }
}
vector<int> get_path(int t){
  vector<int> path;
  for(;t!=-1;t=prev[t])path.pushback(t);
  //t->sの順序なので逆順にする
  reverse(path.begin(),path.end());
  return path;
}

//ヒープを使用してO(ElogV)にしたもの
int d[10000];
int V;
bool used[10000];
const int INF = 1000000009;
struct edge{int to,cost;}
typedef pair<int, int> P;//first:最短距離,second:頂点番号
vector<edge> G[10000];
void dijkstra(int s){
    priority_queue<P,vector<P>,greater<P> > que;
    fill(d,d+V,INF);
    d[s];
    que.push(P(0,s));
    while(!que.empty()){
        P p=que.top();que.pop();
        int v=p.second;
        if(d[v]<p.first) continue;
        for(int i=0;i<G[v].size();i++){
            edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}
