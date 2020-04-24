#include<bits/stdc++.h>
#define ll long long
using namespace std;

double dstnc(double a,double b,double c,double d){
    return sqrt(((a-c)*(a-c)) + ((b-d)*(b-d)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll n,k;
    cin>>n>>k;
    double a,b,dis=0;
    cin>>a>>b;
    for(ll i=0;i<n-1;i++){
        double c,d;
        cin>>c>>d;
        dis+=dstnc(a,b,c,d);
        a=c;
        b=d;
    }
    cout<<fixed<<setprecision(10)<<k*(dis/50.00)<<endl;
    return 0;
}
