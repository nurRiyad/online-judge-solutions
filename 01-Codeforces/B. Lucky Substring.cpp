#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    int a4=0,a7=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4') a4++;
        if(s[i]=='7') a7++;
    }
    if(a4==0&&a7==0) cout<<-1<<endl;
    else if(a4>a7) cout<<4<<endl;
    else if(a7>a4) cout<<7<<endl;
    else cout<<4<<endl;
    return 0;
}
