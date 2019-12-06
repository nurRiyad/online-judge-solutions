#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int m,n,o,ans[10000];
    memset(ans,0,sizeof(ans));
    cin>>n>>m>>o;
    string sa,sb;
    cin>>sa>>sb;
    int w=sa.size()-sb.size()+1;
    for(int i=0;i<w;i++){
        int p=i,flag=1;
        for(int j=0;j<sb.size();j++){
            if(sa[p]==sb[j]) p++;
            else{
                flag=0;
                break;
            }
        }
        if(flag) ans[i]++;
    }
    /*for(int i=0;i<=sa.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    */
    for(int i=0;i<o;i++){
        int x,y,sum=0;
        cin>>x>>y;
        for(int i=x-1;i<y;i++){
            if(ans[i]==1){
                if(i+(sb.size()-1)<=(y-1)) sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
