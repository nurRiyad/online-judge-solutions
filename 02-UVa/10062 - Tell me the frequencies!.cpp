#include<bits/stdc++.h>
using namespace std;

int ar[150];

int main()
{
    string a;
    long long flag=1;
    while(getline(cin,a)){
        if(a.size()==0){
            if(flag!=1){
                cout<<endl;
                flag++;
                continue;
            }
            else{
                flag++;
                continue;
            }
        }
        if(flag!=1){
            cout<<endl;
        }
        vector< pair <int, int> > v;
        for(int i=0;i<150;i++) ar[i]=0;
        for(int i=0;i<a.size();i++){
            int x=a[i];
            ar[x]++;
        }
        for(int i=32;i<=128;i++){
            if(ar[i]!=0){
                v.push_back(make_pair(ar[i],i));
            }
        }
        sort(v.begin(),v.end());
        int x=v[0].first;
        vector<int> p;
        for(int i=0;i<v.size();i++){
            if(x==v[i].first){
                p.push_back(v[i].second);
            }
            else{
                sort(p.begin(),p.end(),greater<int>());
                for(int j=0;j<p.size();j++){
                    cout<<p[j]<<" "<<v[i-1].first<<endl;
                    flag++;
                }
                p.clear();
                x=v[i].first;
                p.push_back(v[i].second);
            }
        }
        sort(p.begin(),p.end(),greater<int>());
        for(int i=0;i<p.size();i++){
            cout<<p[i]<<" "<<v[v.size()-1].first<<endl;
            flag++;

        }
    }
    return 0;

}
