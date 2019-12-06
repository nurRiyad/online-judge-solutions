#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        string s;
        int d;
        vector<int> v,c;
        cin>>s>>d;
        for(int i=0;i<s.size();i++){
            int x=s[i]-'0';
            v.push_back(x);
        }
        for(int i=0;i<v.size();i++){
            int x=INT_MAX,n;
            for(int j=i;j<v.size();j++){
                if(x>v[j]){
                    x=v[j];
                    n=j;
                }
            }
            if(x<d)c.push_back(x);
            else c.push_back(d);
            i=n;
        }
        int p=v.size()-c.size();
        for(int i=0;i<p;i++){
            c.push_back(d);
        }
        for(int i=0;i<c.size();i++) cout<<c[i];
        cout<<endl;

    }
    return 0;
}
