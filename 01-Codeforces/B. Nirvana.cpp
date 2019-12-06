#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a;
    long long mx=0;
    vector<int> v;
    cin>>a;
    for(int i=0;i<a.size();i++){
        int x=a[i]-'0';
        v.push_back(x);
    }
    for(int i=v.size()-1;i>=0;i--){
        long long sum=1;
        for(int j=v.size()-1;j>=0;j--){
            if(v[j]>0) sum*=v[j];
            else v[j]=0;
        }
        mx=max(mx,sum);
        v[i]=9;
        v[i-1]=v[i-1]-1;
    }
    cout<<mx<<endl;
    return 0;
}
