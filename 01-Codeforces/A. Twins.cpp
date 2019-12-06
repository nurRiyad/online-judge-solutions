#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum1=0,sum2=0,c,d=0;
    vector<int> b;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>c;
        sum1+=c;
        b.push_back(c);
    }
    sort(b.begin(),b.end(),greater<int>());
    for(int i=0;i<a;i++){
        sum2+=b[i];
        //cout<<sum2<<endl;
        if(sum2>(sum1-sum2)){
            d++;
            break;
        }
        d++;
    }
    cout<<d<<endl;
    return 0;
}
