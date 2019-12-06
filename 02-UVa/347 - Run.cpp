#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve[9999999+1];

int rep(int n) {
  int v[10] = {};
  while (n) {
    if (v[n % 10]) return 1;
    if (!(n % 10)) return 1;
    v[n % 10] = 1;
    n /= 10;
  }
  return 0;
}

int chk(int n) {
   if (rep(n)) return 0;
   char s[20];
   sprintf(s, "%d", n);
   int i, l;
   for (l = 0; s[l]; l++);
   int now = 0, cnt = s[0] - '0', v[20] = {};
   for (i = 0; i < l; i++) {
      now = (now + cnt) % l;
      if (v[now]) return 0;
      v[now] = 1;
      cnt = s[now] - '0';
   }
   return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll prev=0;
    for(ll i=9999999;i>9;i--){
        if(chk(i)) solve[i]=i;
        else solve[i]=solve[i+1];
    }
    ll n;
    for(ll i=1;;i++){
        cin>>n;
        if(n==0) return 0;
        cout<<"Case "<<i<<": "<<solve[n]<<endl;
    }
    return 0;
}
