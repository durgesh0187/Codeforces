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
    int a,b,count=0;
    cin>>a>>b;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count<<endl;
    
    
    
    
	return 0;
}