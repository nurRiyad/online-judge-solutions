#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,od=0,ev=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2==0) ev++;
            else od++;
        }
        if(od==0) cout<<1<<endl;
        else if(ev==0){
            if(od%2==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else{
            if(od%2==0) cout<<1<<endl;
            if(od%2==1) cout<<2<<endl;
        }

    }
    return 0;

}
