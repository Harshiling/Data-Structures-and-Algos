#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

int main()
{
    int array[2] = {2,3};
    int sum = 0.0;
    for(int i = 0 ; i<2 ; i++)
    sum = (sum + array[i])/2;
    cout<<sum<<endl;
}