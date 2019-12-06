#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n;
    while(cin>>n){
        int a=1,b=1;
        for(ll i=1;i<=n;i++){
            a*=10;
        }
        for(ll i=1;i<=n/2;i++){
            b*=10;
        }
        //cout<<a<<" "<<b<<endl;
        ll c,d;
        for(ll i=0;i<a;i++){
            if(i*i>=a) break;
            c=(i*i)/b;
            d=(i*i)%b;
            if(((c+d)*(c+d)==(i*i))){
                stringstream ss,sa,sb;
                string s1,s2;
                ss<<c;
                ss>>s1;
                sa<<d;
                sa>>s2;
                //2cout<<s1<<" "<<s2<<endl;
                while(s1.size()<n/2) s1.insert(s1.begin(),'0');
                while(s2.size()<n/2) s2.insert(s2.begin(),'0');
                cout<<s1<<s2<<endl;
            }
        }
    }
    return 0;
}
