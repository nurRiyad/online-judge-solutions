#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a,b,c;
string fn(string aa,string bb,string cc){
   if(aa=="AB"||aa=="BC"||aa=="AC"){
        if(bb=="AB"||bb=="BC"||bb=="AC"){
            if(cc=="AB"||cc=="BC"||cc=="AC"){
                return "ABC";
            }
        }
   }
   if(aa=="AB"||aa=="AC"||aa=="CB"){
        if(bb=="AB"||bb=="AC"||bb=="CB"){
            if(cc=="AB"||cc=="AC"||cc=="CB"){
                return "ACB";
            }
        }
   }
   if(aa=="BA"||aa=="BC"||aa=="AC"){
        if(bb=="BA"||bb=="BC"||bb=="AC"){
            if(cc=="BA"||cc=="BC"||cc=="AC"){
                return "BAC";
            }
        }
   }
   if(aa=="BA"||aa=="BC"||aa=="CA"){
        if(bb=="BA"||bb=="BC"||bb=="CA"){
            if(cc=="BA"||cc=="BC"||cc=="CA"){
                return "BCA";
            }
        }
   }
   if(aa=="AB"||aa=="CB"||aa=="CA"){
        if(bb=="AB"||bb=="CB"||bb=="CA"){
            if(cc=="AB"||cc=="CB"||cc=="CA"){
                return "CAB";
            }
        }
   }
   if(aa=="BA"||aa=="CB"||aa=="CA"){
        if(bb=="BA"||bb=="CB"||bb=="CA"){
            if(cc=="BA"||cc=="CB"||cc=="CA"){
                return "CBA";
            }
        }
   }
    return "Impossible";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //string a,b,c;
    cin>>a>>b>>c;
    string aa,bb,cc;
    if(a[1]=='<'){
        aa+=a[0];
        aa+=a[2];
    }
    else{
        aa+=a[2];
        aa+=a[0];
    }
    if(b[1]=='<'){
        bb+=b[0];
        bb+=b[2];
    }
    else{
        bb+=b[2];
        bb+=b[0];
    }
    if(c[1]=='<'){
        cc+=c[0];
        cc+=c[2];
    }
    else{
        cc+=c[2];
        cc+=c[0];
    }
    //cout<<aa<<" "<<bb<<" "<<cc<<endl;
    cout<<fn(aa,bb,cc)<<endl;
    return 0;
}
