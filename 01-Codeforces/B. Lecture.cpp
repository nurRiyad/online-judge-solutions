#include<bits/stdc++.h>
using namespace std;

int compare(string a, string b){
    if(a.size()==b.size()) return 0;
    else if(a.size()>b.size()) return -1;
    else return 1;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector< pair< string,string > > vp;
    while(m--){
        string a,b;
        cin>>a>>b;
        vp.push_back(make_pair(a,b));
    }
    //cout<<vp.size()<<endl;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        for(int i=0;i<vp.size();i++){
            if(vp[i].first==a){
                if(i!=a.size()-1){
                    int a=compare(vp[i].first,vp[i].second);
                    //cout<<a<<"==";
                    if(a==-1) cout<<vp[i].second<<" ";
                    else cout<<vp[i].first<<" ";
                }
                else{
                    int a=compare(vp[i].first,vp[i].second);
                    //cout<<a<<"==";
                    if(a==-1) cout<<vp[i].second<<endl;
                    else cout<<vp[i].first<<endl;
                }
            }
        }
    }
    return 0;

}
