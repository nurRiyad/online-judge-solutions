#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> v(n),c;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            c.push_back(v[i]);
            break;
        }
    }
    int flag3=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==100){
            c.push_back(v[i]);
            flag3=1;
            break;
        }
    }
    int flag1=1;
    for(int i=0;i<v.size();i++){
        if(v[i]>0&&v[i]<10){
            c.push_back(v[i]);
            flag1=0;
            break;
        }
    }
    int flag2=1;
    for(int i=0;i<v.size();i++){
        if(v[i]>9&&v[i]<100&&v[i]%10==0){
            c.push_back(v[i]);
            flag2=0;
            break;
        }
    }
        if(flag1&&flag2){
            for(int i=0;i<v.size();i++){
                if(v[i]>10&&v[i]<100){
                    c.push_back(v[i]);
                    break;
                }
            }
        }
    cout<<c.size()<<endl;
    for(int i=0;i<c.size();i++){
        if(i!=(c.size()-1)) cout<<c[i]<<" ";
        else cout<<c[i]<<endl;
    }
    return 0;
}
