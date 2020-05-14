#include<bits/stdc++.h>
using namespace std;

#define e '\n';
typedef long int l;
typedef long long int ll;
typedef float f;
typedef double d;


int main()
{
   int n;
   cin>>n;
   vector<ll>v(n);
   for(int i = 0 ; i<n ; i ++)
   cin>>v[i];

   ll pair = 0;
   for(int i = 0 ; i < n-1 ; i++)
   {
     for(int j = i + 1 ; j<n ; j++){
  
     if(v[i] * v[j] > pair)
     pair = v[i] * v[j];}
   }
   
   cout<<pair<<'\n';

  return 0;
   }


