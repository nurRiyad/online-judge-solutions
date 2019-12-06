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
    while(n--){
        string a,b;
        cin>>a>>b;
        if(a.size()>b.size()){
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0,i=0,j=0;
        for(;i<b.size();i++){
            if(a[j]==b[i]){
                j++;
                continue;
            }
            else if(a[j]!=b[i]&&i==0){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            else if(b[i]==b[i-1]) continue;
            else if(b[i]!=b[i-1]){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        //cout<<j<<endl;
        if(j==a.size()&&flag==0){
            cout<<"YES"<<endl;
        }
        else if(flag==0) cout<<"NO"<<endl;
    }
    return 0;
}
