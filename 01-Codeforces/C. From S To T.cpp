#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b>>c;
        int ar[30];
        memset(ar,0,sizeof(ar));
        for(int i=0;i<c.size();i++){
            int x=c[i]-'a';
            ar[x]++;
        }
        int idx=0,flag=1;
        for(char ch : b){
            if(idx<a.size()&&a[idx]==ch){
                idx++;
            }
            else{
                if(ar[ch-'a']<1){
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }
                else{
                    ar[ch-'a']--;
                }
            }
        }
        if(idx==a.size()&&flag) cout<<"YES"<<endl;
        else if(flag) cout<<"NO"<<endl;

    }
    return 0;
}
