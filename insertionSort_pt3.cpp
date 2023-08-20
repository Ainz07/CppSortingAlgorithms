// This is a code on how to do Insertion Sort using Recursion.

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    if (n <= 1)
        return;
    insertionSort(arr, n - 1);
    int i = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > i)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = i;
}

void print(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }

    insertionSort(a, n);

    print(a, n);
    return 0;
}