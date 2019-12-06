/*==============================================*\
ID:          shahidul_brur

Name:     Md. Shahidul Islam
Study:      CSE, BRUR
Address:  Rangpur, Bangladesh

 mail: shahidul.cse.brur@gmail.com
 FB  : fb.com/shahidul.brur
 Blog: shahidul-brur.blogspot.com(in Bengali),
       shahidul-brur-en.blogspot.com(in English)
\*===============================================*/
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
//using namespace __gnu_pbds;
using namespace std;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef vector<ii> vii;
typedef vector<il> vil;
typedef vector<li> vli;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define all(a)  a.begin(), a.end()
#define mem(a, b)     memset(a, b, sizeof(a))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))

int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};

const double PI = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
const int maxn = 1005;
const int LOGN = 20;
ll c[maxn][maxn];
char s[maxn][maxn];
int n, m;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>n>>m;
    f0(i,n)
    {
        cin>>s[i];
    }
    f0(j,m)
    {
        f0(i,n)
        {
            int k = i, cur = 1;
            //cout << k << " , " << j << ":\n======\n" << s[k][j] << ": ";
            while(i+1<n && s[i+1][j]==s[k][j]) {
                cur++;
                //cout << s[i+1][j] << ", ";
                i++;
            }
//            cout << c[k][j] << ": ";
            while(k<=i) {
                c[k][j]=cur;
                cur--;
                k++;
                //cout << c[p][j] << ", ";
            }
//            cout << "\n";
        }
    }
    ll tot = 0LL;
//    f0(i,n)
//    {
//        f0(j,m)
//        {
//            cout << c[i][j] << " ";
//        }
//        cout << "\n";
//    }
    f0(i,n)
    {
        f0(j,m)
        {
            int cnt = c[i][j], cur=0, k=j;
            if(i+3*cnt-1>=n) {
                //cout << " 0\n";
                continue;
            }
            char a = s[i][j], b = s[i+cnt][j], cc = s[i+2*cnt][j];
            while(k<m && s[i][k]==a && c[i][k]==cnt && s[i+cnt][k]==b &&
                  c[i+cnt][k]==cnt && s[i+2*cnt][k]==cc && c[i+2*cnt][k]>=cnt){
                cur++;
                k++;
            }
            if(j!=k) j=k-1;
//            cout << i << ", " << k << ": ";
//            cout << cur << "\n";
            tot+=cur*1LL*(cur+1)/2;
        }
    }
    cout << tot;
    return 0;
}
