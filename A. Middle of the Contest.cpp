#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a,b;
    cin>>a>>b;
    int h1=(a[0]-'0')*10+(a[1]-'0');
    int m1=(a[3]-'0')*10+(a[4]-'0');
    int h2=(b[0]-'0')*10+(b[1]-'0');
    int m2=(b[3]-'0')*10+(b[4]-'0');
    int sttime=(h1*60)+m1;
    int endtime=(h2*60)+m2;
    //cout<<sttime<<" "<<endtime<<endl;
    int dif=abs(endtime-sttime)/2;
    int h=h1+(dif/60);
    int m=m1+(dif%60);
    if(m/60>0){
        h++;
        m=m%60;
    }
    if(h<10) cout<<0<<h<<":";
    else cout<<h<<":";
    if(m<10) cout<<0<<m<<endl;
    else cout<<m<<endl;
    return 0;
}
