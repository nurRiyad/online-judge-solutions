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
        vector<int> v;
        cin>>s;
        int ar[27],flag1=0;
        memset(ar,0,sizeof(ar));
        for(int i=0;i<s.size();i++){
            int a=s[i]-'a';
            if(ar[a]==0){
                ar[a]=1;
                v.push_back(a);
            }
            else{
                flag1=1;
                break;
            }
        }
        if(flag1){
            cout<<"No"<<endl;
            continue;
        }
        int flag2=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if((v[i]+1)!=v[i+1]){
                flag2=1;
                break;
            }
        }
        if(flag2){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
