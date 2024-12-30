// This is a code on how to do Insertion Sort using basic While loop.

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main()
{
    int n; 
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    insertionSort(a, n);

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    
    return 0;
}
