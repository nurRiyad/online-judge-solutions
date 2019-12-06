#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    cin>>s;
    int ar[30];
    vector<int> v;
    memset(ar,0,sizeof(ar));
    for(int i=0;i<s.size();i++){
        int x=s[i]-'a';
        ar[x]++;
    }
    for(int i=0;i<27;i++){
        if(ar[i]>0) v.push_back(ar[i]);
    }
    int rm=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==1) rm++;
    }
    if(rm==0||rm==1){
        cout<<"First"<<endl;
    }
    else{
        if(rm%2==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
