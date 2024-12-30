// This is a code on how to do Merge Sort using Recursion by Love Babbar.

#include <iostream>
using namespace std;

void merge(int input[], int start, int mid, int end)
{
    int output[end - start + 1];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end)
    {
        if (input[i] < input[j])
        {
            output[k] = input[i];
            i++;
            k++;
        }
        else
        {
            output[k] = input[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        output[k] = input[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        output[k] = input[j];
        j++;
        k++;
    }

    int n = 0;
    for (int i = start; i <= end; i++)
    {
        input[i] = output[n];
        n++;
    }
}

void mergeSort(int input[], int start, int end)
{
    if (start >= end) return;
    int mid = (start + end) / 2;
    mergeSort(input, start, mid);
    mergeSort(input, mid + 1, end);
    merge(input, start, mid, end);
}

int main()
{
    int n; 
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    
    return 0;
}
