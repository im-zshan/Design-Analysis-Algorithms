#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    long long n;
    cout << "Enter size of array(M) : ";
    cin >> n;
    int arr[n];
    srand(time(0));
    long int x = rand() % n + 1;
    for (int i = 0; i < n; i++)
    {
        if (i < x)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
    cout<<"expected output : "<<x<<endl;
    long long temp=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            temp++;
        }
        else
        break;
    }
    cout<<"Number of 0's : "<<temp<<endl;
    // for (int i = 0; i < n ; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}