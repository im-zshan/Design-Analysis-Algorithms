#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n][n];
    int b[n][n];
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % n + 1;
            b[i][j] = rand() % n + 1;
        }
    }
    cout << "First Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "second Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    auto start = chrono::high_resolution_clock::now();
    int r = 1 + (rand() % n);
    ios_base::sync_with_stdio(false);

    int sum = 0;
    int multiply[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }

            multiply[i][j] = sum;
            sum = 0;
        }
    }

    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << endl<<fixed << time_taken << setprecision(9) << " Seconds";


    // cout << endl
    //      << "Multiplied Matrix" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << multiply[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    return 0;
}