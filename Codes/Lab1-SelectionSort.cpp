#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    for (n = 10; n < 100; n++)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand();
        }
        clock_t start, end;
        start = clock();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (arr[j] < arr[i])
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[j] = temp;
                }
            }
        }
        end = clock();
        double total_time = double(end - start) / double(CLOCKS_PER_SEC / double(1000000.0));
        cout<<total_time<<", ";
    }

    return 0;
}