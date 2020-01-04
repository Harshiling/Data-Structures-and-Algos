#include<iostream>
using namespace std;


int main()
{
    int length  = 9 , count;
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for(int s_i = 0 ; s_i<length-1 ; s_i++) //s_i is the starting index which is 0 initially
    { 
        count = 0;
       
        for(int c_i = 0 ; c_i <length; c_i++) //c_i is the next index to start index
        {
          if(array[c_i] > array[c_i+1])
          {
          swap(array[c_i] , array[c_i+1]);
          count = 1;
          
          }
        }
       cout<<endl;
       if(count == 0){
       cout<<"outer loop terminated on"<<" "<<s_i+1<<"th iteration"<<endl;
       break;
      }
     
     

    }

    cout<<"Sorted array"<<endl;
    for(int i = 0 ; i<length ; i++)
    cout<<array[i]<<" "<<endl;
}
     
       
        
  



