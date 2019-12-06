/*
ID: alasadn1
TASK: gift1
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int n;
    fin>>n;
    map<string,int> mp;
    string s[n];
    for(int i=0;i<n;i++){
        string ss;
        fin>>ss;
        s[i]=ss;
        mp.insert(make_pair(ss,0));
    }
    for(int i=0;i<n;i++){
        string ss;
        fin>>ss;
        int a,b;
        fin>>a>>b;
        if(b==0) continue;
        mp[ss]=mp[ss]-a+(a%b);
        for(int j=0;j<b;j++){
            string sb;
            fin>>sb;
            mp[sb]=mp[sb]+(a/b);
        }
    }
    for(int i=0;i<n;i++){
        fout<<s[i]<<" "<<mp[s[i]]<<endl;
    }
    return 0;
}
