#include<bits/stdc++.h>
using namespace std;

bool great(const pair<int, int>&a, const pair<int, int>&b){
    return a.second<b.second || a.second==b.second && a.first>b.first ;
}

int main()
{
    string a;
    int s, l, g=0;
    while(getline(cin, a)){
        if(g!=0){
            cout<<endl;
        }
        g++;
        s=0;
        l=a.size();
        int k[l];
        vector<pair<int, int> >v;
        sort(a.begin(), a.end());
        for(int i=0; i<l-1; i++){
            s++;
            if(a[i]!=a[i+1]){
                v.push_back(make_pair((int)a[i], s));
                s=0;
            }
        }
        if(a[l-1]==a[l-2]){
            v.push_back(make_pair((int)a[l-1], s+1));
        }
        else{
            v.push_back(make_pair((int)a[l-1], 1));
        }

        sort(v.begin(), v.end(), great);

        for(int i=0; i<v.size(); i++){
            cout<<v[i].first <<" "<<v[i].second <<endl;
        }
    }
    return 0;
}
