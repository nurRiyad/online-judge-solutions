#include<bits/stdc++.h>
using namespace std;
//al asad nur riyad
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int fst=0,lst=0,mx=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]==1) fst++;
        else break;
    }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==1) lst++;
        else break;
    }
    mx=max(mx,(fst+lst));
    for(int i=0;i<v.size();i++){
        int sum=0;
        while(v[i]==1){
            sum++;
            i++;
        }
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
    return 0;
}
