#include<bits/stdc++.h>
using namespace std;
#define mx 1000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,ar[mx],flag=0;
    memset(ar,0,sizeof(ar));
    cin>>n;
    vector<int> v;
    vector<int> ac,dc;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        ar[x]++;
        if(ar[x]>2) flag=1;
    }
    if(flag){
        cout<<"No"<<endl;
        return 0;
    }
    else{
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                ac.push_back(v[i]);
                dc.push_back(v[i+1]);
                i++;
            }
            else{
                ac.push_back(v[i]);
            }
        }
        if(v[v.size()-1]!=v[v.size()-2]){
            ac.push_back(v[v.size()-1]);
        }
        if(dc.size()>1) sort(dc.begin(),dc.end(),greater<int>());
        cout<<"Yes"<<endl;
        cout<<ac.size()<<endl;
        for(int i=0;i<ac.size();i++){
            if(i==(ac.size()-1)) cout<<ac[i];
            else cout<<ac[i]<<" ";
        }
        cout<<endl;
        cout<<dc.size()<<endl;
        for(int i=0;i<dc.size();i++){
            if(i==(dc.size()-1)) cout<<dc[i];
            else cout<<dc[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
