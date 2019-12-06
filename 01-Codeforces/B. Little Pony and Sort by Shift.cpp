#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,x,sum=0;
    cin>>n;
    vector<int> v(n),a,b;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int flag=1;
    for(x=0;x<v.size()-1;x++){
        if(v[x]>v[x+1]){
            x=x+1;
            flag=0;
            break;
        }
    }
    if(flag) x=v.size();
    //cout<<"x=="<<x<<endl;
    for(int i=x;i<v.size();i++){
        a.push_back(v[i]);
        sum++;
    }
    for(int i=0;i<x;i++){
        a.push_back(v[i]);
    }
    //for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    //cout<<endl;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<sum<<endl;
    return 0;
}
