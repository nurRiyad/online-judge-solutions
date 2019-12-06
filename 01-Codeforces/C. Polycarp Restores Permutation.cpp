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
    int ar[n+1];
    int check[n+1];
    memset(check,0,sizeof(check));
    memset(ar,0,sizeof(ar));
    vector<int> v(n-1),ans;
    for(int i=0;i<(n-1);i++){
        cin>>v[i];
    }
    int a1=0,a2=0;
    for(int i=1;i<=n;i++){
        int x=i+v[0];
        if(x>0&&x<=n){
            if(x-i==v[0]){
                a1=i;
                a2=x;
            }
            else if(i-x==v[0]){
                a1=x;
                a2=i;
            }
        }
    }
    if(a1==0||a2==0){
        cout<<-1<<endl;
        return 0;
    }
    else{
        ans.push_back(a1);
        ans.push_back(a2);
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
    int flag=0;
    for(int i=1;i<v.size();i++){
        int x=ans[ans.size()-1]+v[i];
        if(x>0&&x<=n){
            if(check[x]==0){
                 ans.push_back(x);
                 check[x]=1;
            }
            else{
                cout<<-1<<endl;
                return 0;
            }
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<ans.size();i++){
        if(i!=ans.size()-1) cout<<ans[i]<<" ";
        else cout<<ans[i]<<endl;
    }
    return 0;
}
