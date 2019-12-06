#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    map<string, int> m;
    for(int i=0;i<n;i++){
        cin>>s;
        if(m[s]==0){
            m[s]++;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
    return 0;
}
