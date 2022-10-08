//linear search using recursion 
#include<iostream> 
using namespace std; 
bool search(int arr[],int target,int size){
    if(size==0) return false ;
   else if(arr[0]==target) return true ;
   else   return search(arr+1,target,size-1);  
}
int main(){ 
 int arr[]={2,3,4,9,6};
 cout<<search(arr ,9 ,5);
return 0;
}