struct edge{
  int from,to,cost;
};
edge es[1000];
int d[1000];
int V,E;
const int INF=100000000;
bool bellman(){
  for(int i=0;i<V;i++) d[i]=INF;
    d[s]=0;
    for(int i=0;i<V;i++){
      for(int v=0;v<V;v++){
        for(int k=0;k<E;k++){
          edge e=es[k];
          if(d[e.to]>d[e.from]+e.cost){
            d[e.to]=d[e.from]+e.cost;
            if(i==V-1) return true;
          }
        }
      }
    }
  return false;
  }
