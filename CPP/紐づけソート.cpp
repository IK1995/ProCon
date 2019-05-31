//二つの要素を使ったソート

vector<pair<int,int> > place(m);
	  for(int i=0;i<m;i++) {
		 place[i].second = i+1;
		 place[i].first = 0;
	  }
	  for(int i=0;i<n;i++){
		  for(int j=0;j<m;j++){
			  cin>>tmp;
			  place[j].first -=tmp;
		  }
	  }
	  sort(place.begin(),place.end());
