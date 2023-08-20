// This is a code on how to do selection Sort using basic loops.

#include <iostream>
using namespace std;

void selectionSort(int arr[], int i, int n)
{
    if (i >= n - 1)
        return;
    int mini = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[mini])
        {
            mini = j;
        }
    }
    swap(arr[mini], arr[i]);
    selectionSort(arr, i + 1, n);
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

    selectionSort(a, 0, n);

    print(a, n);
    return 0;
}