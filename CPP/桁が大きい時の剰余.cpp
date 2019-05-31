string s;//long long でも収まりきらないときはstringで格納後以下で判定
bool mod(int a){
	int num = 0;
	for (int i = 0; i < s.size(); i++){
		num *= 10;
		num += s[i] - '0';
		num %= a;
	}
	return num == 0;
}
