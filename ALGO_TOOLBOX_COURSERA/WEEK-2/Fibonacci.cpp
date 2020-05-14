#include<bits/stdc++.h>
using namespace std;

#define e '\n';
typedef long int l;
typedef long long int ll;
typedef float f;
typedef double d;

vector<ll> fibo(int n)
{
  vector<ll>v(n);
  v[0] = 0;
  v[1] = 1;
  for(int i = 2 ; i < n ; i++)//2 3 4 
  v[i] = v[i-1] + v[i-2];
 
return v;
}

int main()
{
  int n;
  cin>>n;
  vector<ll>fibonacci = fibo(n);
  for(int i = 0 ; i<n ; i++)
  cout<<fibonacci[i]<<" ";
return 0;
}
