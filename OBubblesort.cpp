#include<iostream>
using namespace std;


int main()
{
    int length  ;
    cin>>length;
    int array[length] ;

    for(int i = 0 ; i<length ; i++)
    cin>>array[i];


      for(int s_i = 0 ; s_i<length-1 ; s_i++) //s_i is the starting index which is 0 initially
    { 
       
        for(int c_i = 0 ; c_i <length-1; c_i++) //c_i is the next index to start index
        {
          if(array[c_i] < array[c_i+1])
          {
          swap(array[c_i] , array[c_i+1]);
          
          
          }
        }
       cout<<endl;
       
    }
      for(int i = 0 ; i<length ; i++)
    cout<<array[i]<<" "<<endl;
     

    }

   
   

     
       
        
  



