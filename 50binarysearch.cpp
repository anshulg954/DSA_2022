#include <iostream>
using namespace std;
bool binarysearch(int arr[], int target, int s, int e)
{

    if (s > e)
        return false;
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
        return true;
    else if (arr[mid] > target)
    {
        binarysearch(arr , target, s,mid-1);
    }
    else
    {
        
        binarysearch(arr, target, mid+1,e);
    }
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6};
   cout<< binarysearch(arr, 30,0, 5-1)<<endl;
    return 0;
}