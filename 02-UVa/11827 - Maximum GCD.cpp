#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    if(a==0) return b;
    else return GCD(b%a,a);
}

int main()
{
    string p;
    int n;
    cin>>n>>p;
    while(n--){
        vector<int> x;
        string a,b;
        getline(cin,a);
        stringstream ss;
        ss<<a;
        int found,mx=0;
        while(!ss.eof()){
            ss>>b;
            if(stringstream(b)>>found){
                x.push_back(found);
            }
            b="";
        }
        for(int i=0;i<x.size();i++){
            for(int j=i+1;j<x.size();j++){
                int gcd=GCD(x[i],x[j]);
                if(mx<gcd) mx= gcd;
            }
        }
        cout<<mx<<endl;
    }
    return 0;

}
