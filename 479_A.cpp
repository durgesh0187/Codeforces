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
    int n,k,d;
    cin>>n>>k;
    while(k--)
    {
        d=n%10;
        if(d!=0)
        {
            n--;
        }
        else if(d==0)
        {
            n/=10;
        }
    }
    cout<<n<<endl;
    
    
    
	return 0;
}