#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n - 1];
    int p = 1;
    srand(time(0));
    int x = rand() % n + 1;
    // cout<<"removed number via rand():"<<x<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == x)
        {
            p++;
        }
        arr[i] = p;
        p++;
    }
    long int sum_total = (n * (n + 1)) / 2;
    // cout << sum_total;
    long int sum_arr = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum_arr += arr[i];
    }
    long int num = sum_total - sum_arr;
    cout <<"Missing : "<< num << endl;
    cout<<"Array : ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}