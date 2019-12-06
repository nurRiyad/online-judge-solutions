#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n;
    cin>>n;
    while(n--){
        long long t,pos=0,neg=0;
        cin>>t;
        for(long long i=0;i<t;i++){
            long long b;
            cin>>b;
            if(b>0) pos++;
            if(b<0) neg++;
        }
        //cout<<pos<<" "<<neg<<endl;
        if(pos>0&&neg>0){
            cout<<max(pos,neg)<<" "<<min(pos,neg)<<endl;
        }
        else{
            cout<<max(pos,neg)<<" "<<max(pos,neg)<<endl;
        }
    }
    return 0;
}
