#include<bits/stdc++.h>
using namespace std;
string alfasort(string a,string b)
{
    for(int i=0;i<3;i++){
        if(a[i]<b[i]){
            return a;
        }
        if(b[i]<a[i]){
            return b;
        }
    }
}

int main()
{
    int b1,g1,c1,b2,g2,c2,b3,g3,c3,mi;
    string x;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
        int bgc=(b2+b3)+(g1+g3)+(c1+c2);
        //cout<<bgc<<endl;
        mi=bgc;
        x="BGC";
        int bcg=(b2+b3)+(c1+c3)+(g1+g2);
        //cout<<bcg<<endl;
        if(mi>bcg){
            mi=bcg;
            x="BCG";
        }
        else if(mi==bcg) x=alfasort(x,"BCG");
        int cbg=(c2+c3)+(b1+b3)+(g1+g2);
        //cout<<cbg<<endl;
        if(mi>cbg){
            mi=cbg;
            x="CBG";
        }
        else if(mi==cbg) x=alfasort(x,"CBG");
        int cgb=(c2+c3)+(g1+g3)+(b1+b2);
        //cout<<cgb<<endl;
        if(mi>cgb){
            mi=cgb;
            x="CGB";
        }
        else if(mi==cgb) x=alfasort(x,"CGB");
        int gbc=(g2+g3)+(b1+b3)+(c1+c2);
        //cout<<gbc<<endl;
        if(mi>gbc){
            mi=gbc;
            x="GBC";
        }
        else if(mi==gbc) x=alfasort(x,"GBC");
        int gcb=(g2+g3)+(c1+c3)+(b1+b2);
        //cout<<gcb<<endl;
        if(mi>gcb){
            mi=gcb;
            x="GCB";
        }
        else if(mi==gcb) x=alfasort(x,"GCB");
        cout<<x<<" "<<mi<<endl;
    }
    return 0;
}
