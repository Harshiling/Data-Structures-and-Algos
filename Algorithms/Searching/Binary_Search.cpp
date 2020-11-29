//Binary Search used to search key in a sorted record
//Time complexity : o(log n)
//Space complexity :o(1)

#include<iostream>
using namespace std;

/*Binary Search Iterative
int BinarySearch(int array[] , int l , int r , int key){
   while(l <= r){
       int mid =  (l + r) /2 ;

       if(key == array[mid])
       return mid;

       else if(key > array[mid])
       l = mid + 1;
       
       else
       r = mid-1;
}
   return -1;
}*/

//Binary Seach Recursive
int BinarySearch(int arr[] , int l , int r , int key){

while(l <= r){
int mid =  ( l + r ) /2 ;

if(key == arr[mid])return mid;
else if(key > arr[mid]) return BinarySearch(arr , mid + 1 , r , key);
else return BinarySearch(arr , l , mid - 1 , key);
}
return -1;
}


int main()
{
    int n;
    cin>>n;

    int array[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>array[i];
    }
    int key ;
    cin>>key;

    int result = BinarySearch(array , 0 , n - 1 , key);
    (result == -1) ? cout<<"Element not found \n" : cout<<"Element found at index"<<" "<<result<<'\n';

}