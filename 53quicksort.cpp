#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            cnt++;
    } int pivotIndex=s + cnt ;
    swap(arr[s], arr[s+cnt]);
    int i = 0;
    int j = e;
    while (i <pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < (s + cnt) && j > (s + cnt))
            swap(arr[i++], arr[j--]);
    }
    return (s + cnt);
}

void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;
    int p = partition(arr, s, e);
    // left part sort karo
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {11, 25, 2, 4, 5};
    quicksort(arr, 1, 5);
    for (int i = 1; i <= 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
