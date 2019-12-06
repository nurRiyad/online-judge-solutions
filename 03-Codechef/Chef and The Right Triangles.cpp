#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t,sum=0;
    cin>>t;
    while(t--){
        ll x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double ab=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double bc=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        double ac=((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

        //cout<<ab<<" "<<bc<<" "<<ac<<endl;

        if((ab+bc==ac)){
            sum++;
            continue;
        }
        else if((ab+ac)==bc){
            sum++;
            continue;
        }
        else if((bc+ac)==ab){
            sum++;
            continue;
        }
    }
    cout<<sum<<endl;
    return 0;
}
