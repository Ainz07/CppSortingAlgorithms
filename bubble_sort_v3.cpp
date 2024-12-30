// This is a code on how to do Bubble Sort using Recursion.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n <= 1)
        return;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            swap(arr[i - 1], arr[i]);
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    int n; 
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    bubbleSort(a, n);

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    
    return 0;
}
