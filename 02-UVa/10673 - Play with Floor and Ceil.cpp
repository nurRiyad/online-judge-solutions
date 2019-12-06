#include<bits/stdc++.h>
using namespace std;

long long egcd(long long a,long long b,long long &x,long long &y){
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    long long x1,y1;
    long long d =  egcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long x,y,k,l,m,n,g,p,q;
        cin>>k>>l;
        double c=k,d=l;
        n = ceil(c/d);
        m = floor(c/d);
        //cout<<"m=="<<m<<endl<<"n=="<<n<<endl;
        g = egcd(m,n,x,y);
        //cout<<"x=="<<x<<endl<<"y=="<<y<<endl;
        p = (x*(k/g));
        q = (y*(k*g));
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}
