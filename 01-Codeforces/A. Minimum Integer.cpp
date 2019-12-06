#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int l,r,d;
        cin>>l>>r>>d;
        if(d<l){
            cout<<d<<endl;
            continue;
        }
        else if(d>r){
            cout<<d<<endl;
            continue;
        }
        else{
            int x=(r/d)*d;
            for(int i=x;;i+=d){
                if((i%d==0)&&(i>r)){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
