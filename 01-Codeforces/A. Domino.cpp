#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sa=0,sb=0,s=0;
    cin>>n;
    vector< pair<int, int> > vp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
        sa+=a;
        sb+=b;
    }
    if((sa%2==1&&sb%2==0)||(sa%2==0&&sb%2==1)){
        cout<<-1<<endl;
    }
    else if(sa%2==0&&sb%2==0){
        cout<<0<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(vp[i].first%2!=vp[i].second%2){
                s++;
            }
        }
        if(s) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
