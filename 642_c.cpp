#include<bits/stdc++.h>
#define pb push_back
#define p pop()
#define vi vector<int>
#define f first
#define pr pair<int,int>
#define ll long long int
#define INF 1000000000
#define mod 1000000007
#define e endl
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
		ll n,res=0;
		cin>>n;
		
		for(ll i=1;i<=n/2;i++)
		{
			res += (2*i+1)*i;
			res += (2*i+1)*i;
			
			res += (2*i+1-2)*i;
			res += (2*i+1-2)*i;
		}
		cout<<res<<e;
	}
    
    
	return 0;
}
