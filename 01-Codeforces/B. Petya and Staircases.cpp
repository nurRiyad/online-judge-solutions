#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,k;
    cin>>n>>k;
    vector<int> v;
    if(k==0){
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[0]==1||v[v.size()-1]==n){
        cout<<"NO"<<endl;
        return 0;
    }
    else if(k<3){
        cout<<"YES"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<=v.size()-3;i++){
            int a=v[i]+2;
            int b=v[i+1]+1;
            int c=v[i+2];
            if(a==b&&b==c){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
