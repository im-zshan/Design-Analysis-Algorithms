#include <bits/stdc++.h>
using namespace std; 
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition (int arr[], int low, int high) 
{
    int pivot = arr[high]; 
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) 
    {
        if (arr[j] < pivot) 
        {
            i++;
            swap(&arr[i], &arr[j]); 
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}
void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    }
}
int main()
{
    int n;
    for (n = 10; n <= 100; n++)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand();
        }
        clock_t start, end;
        start = clock();
        quickSort(arr, 0, n - 1);
        end = clock();
        double total_time = double(end - start) / double(CLOCKS_PER_SEC / double(1000000.0));
        cout << total_time << ", ";
    }

    return 0;
}