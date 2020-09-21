#include<bits/stdc++.h>
using namespace std;


set<int> s;
int n,x,y;

int main()
{
	cin>>n>>x;
	y=x,s.insert(x);
	while(--n)
	{
		cin>>x;
		y=__gcd(x,y);
		s.insert(x);
	}
	s.count(y)?cout<<y:cout<<-1;
}