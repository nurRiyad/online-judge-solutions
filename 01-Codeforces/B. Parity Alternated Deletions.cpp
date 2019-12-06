#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long sum=0;
    int n,odd=0,even=0;
    cin>>n;
    vector<int> v(n),ov,ev;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            even++;
            ev.push_back(v[i]);
        }
        else{
            odd++;
            ov.push_back(v[i]);
        }
    }
    if((odd==even)||(odd+1==even)||(even+1)==odd){
        cout<<0<<endl;
        return 0;
    }
    else{
        if(odd>even){
            int a=odd-even-1;
            sort(ov.begin(),ov.end());
            for(int i=0;i<a;i++){
                sum+=ov[i];
            }
        }
        else{
            int a=even-odd-1;
            sort(ev.begin(),ev.end());
            for(int i=0;i<a;i++){
                sum+=ev[i];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
