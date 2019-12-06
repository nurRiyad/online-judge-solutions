#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int p,q,r,l;
    cin>>p>>q>>l>>r;
    vector<pair<int,int> > vp1,vp2;
    for(int i=0;i<p;i++){
        int a,b;
        cin>>a>>b;
        vp1.push_back(make_pair(a,b));
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        vp2.push_back(make_pair(a,b));
    }
    //cout<<endl<<endl;
    int sum=0;
    for(int i=l;i<=r;i++){
        int flag=0;
        for(int j=0;j<vp2.size();j++){
            int x=vp2[j].first+i;
            int y=vp2[j].second+i;
            for(int k=0;k<vp1.size();k++){
                //cout<<x<<" "<<y<<endl;
               //cout<<vp1[k].first<<" "<<vp1[k].second<<endl;
                if((vp1[k].first>x&&vp1[k].first>y)||(vp1[k].second<x&&vp1[k].second<y)) continue;
                else{
                    //cout<<"i am here"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) sum++;
    }
    cout<<sum<<endl;
    return 0;
}
