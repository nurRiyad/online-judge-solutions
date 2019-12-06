#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
void difarry(vector<int> &a,vector<int> &b){
    for(int i=0;i<a.size()-1;i++){
        int dif=abs(a[i]-a[i+1]);
        b.push_back(dif);
    }
}

int main()
{
    while(2){
        int n;
        vector<int> a,b;
        cin>>n;
        if(n==0) return 0;
        a.push_back(n);
        while(2){
            cin>>n;
            if(n==0) break;
            a.push_back(n);
        }
        difarry(a,b);
        if(b.size()==1){
            cout<<b[0]<<endl;
            continue;
        }
        int Gcd=gcd(b[0],b[1]);
        for(int i=2;i<b.size();i++){
            Gcd=gcd(Gcd,b[i]);
        }
        cout<<Gcd<<endl;
    }
    return 0;
}
