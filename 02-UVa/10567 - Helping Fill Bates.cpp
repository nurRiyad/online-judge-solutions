#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("riyad.txt");
    string a;
    cin>>a;
    int n;
    cin>>n;
    while(n--){
        string b;
        int x,y,flag=1;
        cin>>b;
        for(int i=0,j=0;i<a.size();i++){
            if(a[i]==b[j]){
                if(j==0) x=i;
                if(j==b.size()-1){
                    cout<<"Matched "<<x<<" "<<i<<endl;
                    flag=0;
                    break;
                }
                j++;
            }
        }
        if(flag) cout<<"Not matched"<<endl;
    }
    return 0;
}
