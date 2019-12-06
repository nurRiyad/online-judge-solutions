#include<bits/stdc++.h>
using namespace std;
#define mx 10000000
int home[mx];
int away[mx];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    int teamh[n],teama[n];
    memset(teamh,0,sizeof(teamh));
    memset(teama,0,sizeof(teama));
    vector<pair<int,int> > vp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        home[x]++;
        away[y]++;
        teamh[i]+=(n-1);
        vp.push_back(make_pair(x,y));
    }
    for(int i=0;i<vp.size();i++){
        int x=vp[i].second;
        if(home[x]>0){
            teamh[i]+=(home[x]);
            teama[i]+=((n-1)-home[x]);
        }
        else{
            teama[i]+=(n-1);
        }
    }
    for(int i=0;i<n;i++){
        cout<<teamh[i]<<" "<<teama[i]<<endl;
    }
    return 0;
}
