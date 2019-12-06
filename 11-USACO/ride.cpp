/*
ID: alasadn1
TASK: ride
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");

    string a,b;
    fin>>a>>b;
    long long pod1=1,pod2=1;
    for(int i=0;i<a.size();i++){
        pod1*=a[i]-64;
    }
    for(int i=0;i<b.size();i++){
        pod2*=b[i]-64;
    }
    if(pod1%47==pod2%47) fout<<"GO"<<endl;
    else fout<<"STAY"<<endl;
    return 0;
}
