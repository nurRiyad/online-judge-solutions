#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int h;
    cin>>h;
    while(h--){
        int x;
    cin>>x;
    if(x==0){
        double w=0;
        cout<<"Y"<<" "<<fixed<<setprecision(9)<<w<<" "<<w<<endl;
        continue;
    }
    double a=1;
    double b=-x;
    double c=x;
    double ans1=(b*b)-(4*a*c);
    if(ans1<0){
        cout<<"N"<<endl;
        continue;
    }
    else{
        double m=(-b+sqrt(ans1))/(2*a);
        double n=(-b-sqrt(ans1)/(2*a));
        if(m<=0&&n<=0){
            cout<<"N"<<endl;
            continue;
        }
        else{
            if(m>0){
                cout<<"Y"<<" "<<fixed<<setprecision(9)<<m<<" "<<x-m<<endl;
                continue;
            }
            else{
                cout<<"Y"<<" "<<fixed<<setprecision(9)<<n<<" "<<x-n<<endl;
                continue;
            }
        }
    }
    }
    return 0;
}
