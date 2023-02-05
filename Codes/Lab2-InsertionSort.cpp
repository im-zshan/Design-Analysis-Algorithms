#include <iostream>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int avg_time = 0;
    for (int q = 0; q < 10; q++)
    {
        int arr[n];
        srand(time(0));
        for (int i = 0; i < n; i++)
        {
            int x = rand() % n;
            arr[i] = x;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        auto start = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);
        int N = sizeof(arr) / sizeof(arr[0]);
        if (N <= 10)
        {
            insertionSort(arr, N);
            /*int i;
            for (i = 0; i < N; i++)
                cout << arr[i] << " ";
            cout << endl;*/
        }
        else
        {
            quickSort(arr, 0, N - 1);
            /*for (int i = 0; i < N; i++)
            {
                cout << arr[i] << " ";
            }*/
        }
        auto end = chrono::high_resolution_clock::now();
        double time_taken =
            chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        cout << "Time taken by program is : " << fixed
             << time_taken;
        cout << " nanoseconds" << endl;
        int timearray[10];
        timearray[q] = time_taken;
        avg_time += timearray[q];
    }
    avg_time /= 10;
    if (n <= 10)
        cout << "Average time for Insertion Sort : " << avg_time;
    else
        cout << "Average time for Quick Sort : " << avg_time;
    return 0;
}
