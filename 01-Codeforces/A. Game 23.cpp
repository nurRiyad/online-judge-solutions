#include<bits/stdc++.h>
using namespace std;
//al asad nur riyad
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n,m;
    cin>>n>>m;
    if(m%n==0){
        long long x=m/n,sum=0,flag=0;
        while(x>1){
            if(x%2==0){
                sum++;
                x=x/2;
            }
            else if(x%3==0){
                sum++;
                x=x/3;
            }
            else if(x!=1){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<-1<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
