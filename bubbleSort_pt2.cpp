// This is a code on how to do Bubble Sort using basic loops in ascending order.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int didswap = 0;
        for (int j = 1; j <= n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                didswap = 1;
            }
        }
        if (didswap == 0)
            break;
    }
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

    bubbleSort(a, n);

    print(a, n);
    return 0;
}