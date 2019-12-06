#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,m,i,j,a,b,mini=INT_MIN;
	cin>>n>>m>>i>>j>>a>>b;
	vector<int> v;
	if(abs(i-1)%a==0&&abs(j-1)%b==0)
	{
		if(((abs(i-1)/a)+(abs(j-1)/b))%2==0)
		{
			v.push_back(max((abs(i-1)/a),(abs(j-1)/b)));
		}
	}
	if(abs(i-1)%a==0&&abs(j-m)%b==0)
	{
		if(((abs(i-1)/a)+(abs(j-m)/b))%2==0)
		{
			v.push_back(max((abs(i-1)/a),(abs(j-m)/b)));
		}
	}
	if(abs(i-n)%a==0&&abs(j-1)%b==0)
	{
		if(((abs(i-n)/a)+(abs(j-1)/b))%2==0)
		{
			v.push_back(max((abs(i-n)/a),(abs(j-1)/b)));
		}
	}
	if(abs(i-n)%a==0&&abs(j-m)%b==0)
	{
		if(((abs(i-n)/a)+(abs(j-m)/b))%2==0)
		{
			v.push_back(max((abs(i-n)/a),(abs(j-m)/b)));
		}
	}
	sort(v.begin(),v.end());
	int flag=1;
	if(v.size()>0){
        if(v[0]==0) {cout<<0<<endl; flag=0;}
        else if(n>a&&m>b) {cout<<v[0]<<endl; flag=0;}
	}
	if(flag)cout<<"Poor Inna and pony!";
	return 0;
}
