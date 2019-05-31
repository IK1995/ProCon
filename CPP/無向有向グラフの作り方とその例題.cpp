vector<int> G[10000];
int color[10000];//色-1or1
bool dfs(int v,int c){
    color[v]=c;//頂点vを色cで塗る
    for(int i=0;i<G[v].size();i++){
        if(color[G[v][i]]==c)return false;
        if(color[G[v][i]]==0&&!dfs(G[v][i],-c)) return false;
    }
    return true;//全部ぬれるとき
}
int main(){
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int s,t;
        cin>>s>>t;
        G[s].push_back(t);
        //G[t].push_back(s);//無向グラフのときはコメント外す
    }
    for(int i=0;i<v;i++){
        if(color[i]==0){
            if(!dfs(i,1)){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
