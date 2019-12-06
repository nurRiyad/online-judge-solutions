#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int bs=0,cs=0,bk=0;
    for(int i=0,j=1;i<n;i++,j++){
        if(j==1) cs+=v[i];
        else if(j==2) bs+=v[i];
        else{
            bk+=v[i];
            j=0;
        }
    }
    int mx=max(max(bs,cs),bk);
    if(mx==bs) cout<<"biceps"<<endl;
    else if(mx==cs) cout<<"chest"<<endl;
    else cout<<"back"<<endl;
    return 0;

}
