#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]!=v[i+1]){
            int a=0,b=0;
            for(int j=i;j>=0;j--){
                if(v[i]==v[j]) a++;
                else break;
            }
            for(int j=i+1;j<v.size();j++){
                if(v[i+1]==v[j]) b++;
                else break;
            }
            //cout<<a<<" "<<b<<endl;
            mx=max(min(a,b),mx);
        }
    }
    cout<<mx*2<<endl;
    return 0;
}
