#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,a,b,x,y,z;
        cin>>n>>a>>b>>x>>y>>z;
        set<ll> st;
        set<ll>:: iterator it;
        for(int i=0;i<n;i++){
            int Q;
            cin>>Q;
            st.insert(Q);
        }
        ll holid,ppd;
        ll holi=z-b;
        if(holi%y==0)  holid=holi/y;
        else  holid=(holi/y)+1;
        //cout<<holid<<endl;
        ll pp=z-a;
        if(pp%x==0)  ppd=pp/x;
        else  ppd=(pp/x)+1;
       // cout<<ppd<<endl;
        if(holid>ppd){
            cout<<0<<endl;
            continue;
        }
        else{
            ll dd=holid-1;
            //cout<<dd<<endl;
            ll needsub=z-(a+(x*dd));
            //cout<<needsub<<endl;
            ll cnt=0,flg=0,cntub=0;
            while(needsub>0){
                it=st.end();
                it--;
                ll W=*it;
                needsub=needsub-W;
                cntub++;
                st.erase(it);
                if(W/2>0) st.insert(W/2);
                if(st.size()==0){
                    flg=1;
                    break;
                }
            }
            if(flg){
                cout<<"RIP"<<endl;
                continue;
            }
            //cout<<"cnt="<<cnt<<endl;
            //cout<<needsub<<endl;
            /*if(needsub==0){
                cout<<cnt*n<<endl;
                continue;
            }*/
            cout<<cntub<<endl;
        }
    }
    return 0;
}
