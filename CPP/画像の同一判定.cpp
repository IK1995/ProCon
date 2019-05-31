bool exist=false;
//二つの画像が配列で渡される
//それが同じものかどうか？回転込みで判定せよという問題
 for(int ly=0;ly<N;++ly){
   for(int lx=0;lx<N;++lx){
     if(ly+M-1>=N or lx+M-1>=N) continue;

    bool match=true;
    for(int y=0;y<M;++y){
      for(int x=0;x<M;++x){
        if(A[ly+y][lx+x]!=B[y][x]) match=false;
      }
    }
    if(match) exist=true;
  }
 }
