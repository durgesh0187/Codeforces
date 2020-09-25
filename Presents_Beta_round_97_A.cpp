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

ll n;
ll arr[150],b;

int main()
{
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>b;
		arr[b]=i;
	}
	
	for(ll i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}

