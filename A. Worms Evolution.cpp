#include<bits/stdc++.h>
using namespace std;
int ar[10000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,f,g,h,flag=1;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ar[a]=1;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        int x=v[i];
        for(int j=0;j<v.size();j++){
            if(i==j) continue;
            int y=v[j];
            if(ar[x+y]==1){
                //if(x==y||y==(x+y)||(x+y)==x) continue;
                f=(x+y);
                g=x;
                h=y;
                flag=0;
            }
        }
        if(flag==0) break;
    }
    if(flag==0){
        int a,b,c;
        for(int i=0;i<v.size();i++) {if(v[i]==f) a=i+1;};
        for(int i=0;i<v.size();i++) {if(v[i]==g) b=i+1;};
        for(int i=0;i<v.size();i++) {if(v[i]==h&&i!=(b-1)) c=i+1;};
        cout<<a<<" "<<b<<" "<<c<<endl;
        return 0;
    }
    cout<<-1<<endl;
    return 0;
}
