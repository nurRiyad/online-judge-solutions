#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<long long> v;
    for(int i=1;;i++){
        int x=(i*(i+1))/2;
        if(x<n) v.push_back(x);
        else break;
    }
    //cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        int x=v[i];
        int y=n-v[i];
        if(binary_search(v.begin(),v.end(),y)){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
