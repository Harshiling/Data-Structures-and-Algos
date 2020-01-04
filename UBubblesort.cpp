#include<iostream>
using namespace std;


int main()
{
    int length  = 9 ;
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for(int s_i = 0 ; s_i<length-1 ; s_i++) //s_i is the starting index which is 0 initially
    {
        for(int c_i = 0 ; c_i <length-s_i; c_i++) //c_i is the next index to start index
        {
          if(array[c_i] > array[c_i+1]){
         
          swap(array[c_i] , array[c_i+1]);
          
            
        
        }
        
        
        
     
    }
     
      
      
    }
     
        
     }
     
       
        
  



