// This is a code on how to do quick Sort using Recursion.

#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high)
{
    if (low >= high) return;
    int pivot = arr[high];
    int i = low - 1, j = high;
    
    while (i < j)
    {
        while (arr[++i] < pivot) ;
        while (j >= 0 && arr[--j] > pivot) ;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[i], arr[high]);

    quickSort(arr, low, i - 1);
    quickSort(arr, i + 1, high);
}

int main()
{
    int n; 
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    
    return 0;
}