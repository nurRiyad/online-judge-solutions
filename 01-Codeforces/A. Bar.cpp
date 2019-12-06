#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        stringstream ss;
        string a;
        cin>>a;
        if(a[0]>='A'&&a[0]<='Z'){
            if(a=="ABSINTH"||a=="BEER"||a=="BRANDY"||a=="CHAMPAGNE"||a=="GIN"||a=="RUM"||a=="SAKE") sum++;
            if(a=="TEQUILA"||a=="VODKA"||a=="WHISKEY"||a=="WINE") sum++;
        }
        else{
            int b;
            ss<<a;
            ss>>b;
            if(b<18){
                sum++;
            }

        }
    }
    cout<<sum<<endl;
    return 0;
}
