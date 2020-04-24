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
        string s;
        cin>>s;
        ll cnt=1,mxl=0;
        bool flag=false;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='L'){
                flag=true;
            }
            if(i!=0&&s[i]=='L'&&s[i]==s[i-1]){
                cnt++;
            }
            else{
                mxl=max(mxl,cnt);
                cnt=1;
            }
        }
        mxl=max(mxl,cnt);
        //cout<<"here mxl is="<<mxl<<endl;
        if(flag==false){
            cout<<1<<endl;
            continue;
        }
        else{
            if(mxl==0){
                cout<<2<<endl;
                continue;
            }
            else{
                cout<<mxl+1<<endl;
                continue;
            }
        }

    }
    return 0;
}
