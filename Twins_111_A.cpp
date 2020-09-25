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
 
string s1;
int s[105],b;

int main()
{
	int n;
	cin>>n;
	int sum=0,count=0;
	int a[n];
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/2;
    sort(a,a+n);
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans+=a[i];
        count++;
        if(ans>sum)
        {
            break;
        }
    }
    cout<<count<<endl;
	
    
	

	return 0;
}
