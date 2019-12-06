#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,v;
    cin>>n>>v;
    int neededoil=n-1;
    if(neededoil<=v){
        cout<<neededoil<<endl;
        return 0;
    }
    else{
        int cost=v;
        int oil=v;
        for(int i=2;;i++){
            oil+=1;
            cost+=i;
            if(oil>=neededoil){
                cout<<cost<<endl;
                return 0;
            }
        }
    }
    return 0;
}
