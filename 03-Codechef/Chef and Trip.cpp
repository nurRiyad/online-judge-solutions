#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];

        if(n==1){
            cout<<"YES"<<endl;
            cout<<v[0]<<endl;
            continue;
        }
        else if(k==2){
            vector<ll> test1,test2;
            test1.push_back(1);
            test2.push_back(2);
            for(ll i=0;i<n-1;i++){
                if(test1[i]==1) test1.push_back(2);
                else test1.push_back(1);

                if(test2[i]==1) test2.push_back(2);
                else test2.push_back(1);
            }
            bool flag1=true,flag2=true;
            for(ll i=0;i<n;i++){
                if(v[i]!=-1){
                    if(v[i]!=test1[i]){
                        flag1=false;;
                        break;
                    }
                }
            }
            if(flag1){
                cout<<"YES"<<endl;
                for(ll i=0;i<n-1;i++) cout<<test1[i]<<" ";
                cout<<test1[test1.size()-1]<<endl;
                continue;
            }
            for(ll i=0;i<n;i++){
                if(v[i]!=-1){
                    if(v[i]!=test2[i]){
                        flag2=false;
                        break;
                    }
                }
            }
            if(flag2){
                cout<<"YES"<<endl;
                for(ll i=0;i<n-1;i++) cout<<test2[i]<<" ";
                cout<<test2[test2.size()-1]<<endl;
                continue;
            }

            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(ll i=0;i<n;i++){
                if(v[i]==-1){
                    if(i==0){
                        if(v[i+1]==1) v[i]=2;
                        else v[i]=1;
                    }
                    else if(i==(n-1)){
                        if(v[i-1]==1) v[i]=2;
                        else v[i]=1;
                    }
                    else{
                        if(v[i-1]!=2&&v[i+1]!=2) v[i]=2;
                        else if(v[i-1]!=1&&v[i+1]!=1) v[i]=1;
                        else if(v[i-1]!=3&&v[i+1]!=3) v[i]=3;
                    }
                }
            }
            for(ll i=0;i<n-1;i++) cout<<v[i]<<" ";
            cout<<v[v.size()-1]<<endl;
        }
    }
    return 0;
}
