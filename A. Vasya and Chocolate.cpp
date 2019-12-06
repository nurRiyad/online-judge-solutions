#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        long long s,a,b,c,bars;
        cin>>s>>a>>b>>c;
        bars=s/c;
        bars+=((bars/a)*b);
        cout<<bars<<endl;
    }
    return 0;
}
