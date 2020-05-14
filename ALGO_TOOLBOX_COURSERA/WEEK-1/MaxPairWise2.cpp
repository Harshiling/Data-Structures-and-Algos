#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
#define e '\n';
typedef long int l;
typedef long long int ll;
typedef float f;
typedef double d;



ll max_fast(ll n , vector<ll>v)
{

  ll max = *max_element(v.begin() , v.end());
  ll small = INT_MIN , secmax = 0 ;
  std::vector<ll>::iterator it; 
  
  
  it = find(v.begin() , v.end() ,  max);

  //to find index of max element ya ppa
  ll h = it - v.begin();
  
  for(int i = 0 ; i<n ; i++)
  {
    if(v[i] > small && i != h){
    small = v[i];
    secmax = i;}

  } 
   ll res = max * ll(v[secmax]);
   
   return res;

}



/*{
    ll index1 = 0;
    for(int i = 1 ; i <n ; i++)
    {
        if( v[i]  > v[index1])
            index1 = i;
    }
    ll index2 = 0 , small = INT_MIN;
    for(int j = 0 ; j <n ; j++)
    {
      
      if(v[j] > small && ( j != index1))   3  1 2 3 i1=2 ,  
      {
        small = v[j];
        index2 = j;
      }
      
    }
    ll res = (ll)(v[index1]) * v[index2];
    
    return res;
}*/
                 
int main()
{
   /* //STRESS TEST
    while(true)
    {
        int n = rand() % 1000 + 2; 
        cout<<n<<e;
        vector<int>a;
        for(int i = 0 ; i<n ; i++)
            a.push_back(rand() % 100000);

        for(int i = 0 ; i<n ; i++){
            cout<<a[i]<<' ';}

        cout<<e;

        
        ll res2 = max_fast(n , a);

        if(res1 != res2){
            cout<<"WRONG"<<' '<<res1<<" "<<res2<<e;
            break;
        }
        else
        {

            cout<<"OK"<<e;}
    }*/


    ll n;
    cin>>n;

    vector<ll>v(n);n ;
    for(int i = 0 ; i< n ; i++)
        cin>>v[i];

    ll res1  = max_fast(n , v);
    cout<<res1<<e;

    return 0;
}
