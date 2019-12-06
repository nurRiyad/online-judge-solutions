#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int gd=gcd(v[0],v[1]);
    for(int i=0;i<n;i++){
        gd=gcd(gd,v[i]);
    }
    cout<<gd*n<<endl;
    return 0;
}
