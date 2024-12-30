// This is a code on how to do Bubble Sort using basic loops in descending order.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap = 1;
            }
        }
        if (didswap == 0) break;
    }
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
