#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long a=600851475143;
    vector<long long> v;
    for(long long i=2;i<=a/2;i++){
        if(a%i==0){
            while(a%i==0){
                a=a/i;
            }
            v.push_back(i);
        }
    }
    if(a>1) v.push_back(a);
    if(v.size()==0) cout<<a<<endl;
    else cout<<v[v.size()-1]<<endl;
    return 0;
}
