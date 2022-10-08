// #include <iostream>
// using namespace std;
// int merge(int arr[], int s, int e)
// {
//     int mid = s + (e - s) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *arr1 = new int[len1];
//     int *arr2 = new int[len2];

//     // copy values
//     int mainArrayIndex = s;

//     for (int i = 0; i < len1; i++)
//     {
//         arr1[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         arr2[i] = arr[mainArrayIndex++];
//     }

//     // sort 2 arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (arr1[index1] < arr2[index2])
//         {
//             arr[mainArrayIndex++] = arr1[index1++];

//         }
//         else
//            { arr[mainArrayIndex++] = arr2[index2++];}
//     }
//     while (index1<len1)
//     {
//         arr[mainArrayIndex++]=arr1[index1++];

//     }
//     while (index2<len2)
//     {
//         arr[mainArrayIndex++]=arr2[index2++];

//     }

//     delete []arr1 ;
//     delete []arr2 ;

// }
// void solve(int arr[], int s, int e )
// {
//     if (s >= e)
//         return;
//     int mid = s + (e - s) / 2;
//     solve(arr, s, mid);
//     solve(arr, mid + 1, e);

//     merge(arr, s, e);
// }
// int main()
// {
//     int arr[12] = {2, 1, 44,4,123, 7, 6, 8, 4, 12, 17, 69};
//     int n = 12;
//     int count=0 ;
//     solve(arr, 0,n-1);
//     for (int i = 0; i < 12; i++)
//     {
//         cout<<arr[i]<<" ";
//     }   cout<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
void s2merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainIndex++] = arr1[index1++];
        }
        else
            arr[mainIndex++] = arr2[index2++];
    }
    while (index1 < len1)
    {
        arr[mainIndex++] = arr1[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = arr2[index2++];
    }
}
void merge(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    merge(arr, s, mid);
    merge(arr, mid + 1, e);
    s2merge(arr, s, e);
}

int main()
{
    int arr[12] = {4, 5, 6, 5, 4, 1, 2, 3, 7, 8, 45, 15};
    int n = 12;
    merge(arr, 0, n - 1);
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
