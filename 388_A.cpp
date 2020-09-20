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
    
    int n;
    cin>>n;
    
    if(n%2==1)
    {
    	n/=2;
    	n--;
    	cout<<n+1<<endl<<3<<" ";
	}
	else
	{
		n/=2;
		cout<<n<<endl;
	}
	for(int i=0;i<n;i++)
	{
		cout<<2<<" ";
	}
	cout<<endl;
    
    
	return 0;
}
