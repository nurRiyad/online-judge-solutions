#include<bits/stdc++.h>
using namespace std;
#define mx 1000009
int ar[mx];
int br[mx];

bool odev(int n){
    int cunt=0;
    while(n){
        cunt+=n&1;
        n>>=1;
    }
    if(cunt%2==0) return  true;
    else return false;
}
void cunt(){
    for(int i=1;i<mx;i++){
        if(odev(i)) br[i]=1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output2.txt", "w", stdout);
    cunt();
    int t;
    cin>>t;
    while(t--){
        memset(ar,0,sizeof(ar));
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) {cin>>v[i]; ar[v[i]]=1;}
            int odd=0,even=0;
            for(int i=1;i<v.size();i++){
                int x=v[i-1]^v[i];
                cout<<v[i-1]<<" * "<<v[i]<<"=="<<x<<endl;
                if(ar[x]==0&&x!=0){
                    v.push_back(x);
                    ar[x]=1;
                }
            }
            for(int i=0;i<v.size();i++){
                int x=v[i];
                //cout<<br[x]<<endl;
                if(br[x]==1) {even++;}
                else {odd++;}
            }
            //cout<<even<<" "<<odd<<endl;
            sort(v.begin(),v.end());
            cout<<v.size()<<"==";
            for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
            cout<<endl;
    }
    return 0;
}
