#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d,ans1,ans2;
    cin>>a>>b>>c>>d;
    int w=a.size()-2;
    int x=b.size()-2;
    int y=c.size()-2;
    int z=d.size()-2;
    int tslong=0,tsshort=0;
    if((w)>=2*x&&(w)>=2*y&&(w)>=2*z) {tslong++; ans1.push_back('A'); }
    if((x)>=2*w&&(x)>=2*y&&(x)>=2*z) {tslong++; ans1.push_back('B'); }
    if((y)>=2*w&&(y)>=2*x&&(y)>=2*z) {tslong++; ans1.push_back('C'); }
    if((z)>=2*x&&(z)>=2*y&&(z)>=2*w) {tslong++; ans1.push_back('D'); }

    if((2*w)<=x&&(2*w)<=y&&(2*w)<=z) {tsshort++; ans2.push_back('A'); }
    if((2*x)<=w&&(2*x)<=y&&(2*x)<=z) {tsshort++; ans2.push_back('B'); }
    if((2*y)<=w&&(2*y)<=x&&(2*y)<=z) {tsshort++; ans2.push_back('C'); }
    if((2*z)<=x&&(2*z)<=y&&(2*z)<=w) {tsshort++; ans2.push_back('D'); }

    //cout<<tslong<<endl<<tsshort<<endl;
    //cout<<ans1<<endl<<ans2<<endl;
    if(tslong==1&&tsshort!=1) cout<<ans1<<endl;
    else if(tsshort==1&&tslong!=1) cout<<ans2<<endl;
    else cout<<"C"<<endl;
    return 0;

}
