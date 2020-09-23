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
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l = s.length();
		if(l>10)
		{
		    cout<<s[0]<<l-2<<s.back()<<endl;
		}
		else
		{
		    cout<<s<<endl;
		}
		
	}
	return 0;
}
