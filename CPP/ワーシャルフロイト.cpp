for(int i=0;i<10;i++){
  for(int j=0;j<10;j++) cin>>c[i][j];
}
for(int k=0;k<10;k++){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(c[i][j]>c[i][k]+c[k][j]) c[i][j]=c[i][k]+c[k][j];
    }
  }
}

//a→b　までの経路で　途中寄り道したほうがいいかどうかとかの判定みたいなもの
//c[][]がそのコスト
