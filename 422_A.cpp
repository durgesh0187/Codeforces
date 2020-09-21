#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define ff first
#define pr pair<int,int>
#define ll long long int
#define INF 1000000000
#define mod 1000000007
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 

 
int main()
{
    
    
	int a,b,ans=1;
	cin>>a>>b;
	int n = min(a,b);
	for(int i=1;i<=n;i++)
	{
	    ans*=i;
	}
	cout<<ans<<endl;
	
	return 0;
}
