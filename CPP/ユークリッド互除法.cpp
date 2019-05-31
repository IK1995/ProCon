while(b){
            a%=b;
            tmp=b;
            b=a;
            a=tmp;
            cnt++;
        }

//最大公約数
ll gcd(ll a,ll b){
  if(b==0) return a;
  return gcd(b,a%b);
}
//最小公倍数
ll lcm(ll a,ll b){
  ll g=gcd(a,b);
  return a/g*b;
}
