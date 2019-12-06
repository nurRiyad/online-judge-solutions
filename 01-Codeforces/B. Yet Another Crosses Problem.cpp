#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s[50001];
int row[100005];
int clm[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        memset(row,0,sizeof(row));
        memset(clm,0,sizeof(clm));
        for(int i=0;i<n;i++){
            cin>>s[i];
            //cout<<"riyas"<<endl;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i][j]=='*'){
                    row[i]++;
                    clm[j]++;
                }
            }
        }
        //for(int i=0;i<n;i++) cout<<row[i]<<" ";
        //cout<<endl;
        //for(int i=0;i<m;i++) cout<<clm[i]<<" ";
        //cout<<endl;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mn=min(mn,((m+n-1)-(row[i]+clm[j]-(s[i][j]=='*'))));
                //cout<<mn<<endl;
            }
        }
        cout<<mn<<endl;
    }

    return 0;
}
