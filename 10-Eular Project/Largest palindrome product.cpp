#include<bits/stdc++.h>
using namespace std;

bool isPali(long long x){
    stringstream ss;
    ss<<x;
    string s;
    ss>>s;
    int a=s.size()/2;
    for(int i=0;i<=a;i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }

    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long mx=-1;
    for(long long i=100;i<1000;i++){
        for(long long j=100;j<1000;j++){
            long long x=i*j;
            if(isPali(x)){
                mx=max(mx,x);
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
