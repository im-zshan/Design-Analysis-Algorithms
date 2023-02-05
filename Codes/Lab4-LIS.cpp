#include <iostream>

using namespace std;

int lis(int a[], int n)
{
    int len = 1;
    int *d = new int[n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        d[i] = 1;
        for (j = 0; j < i; j++)
        {
            if (a[i] > a[j] && d[i] < d[j] + 1)
                d[i] = d[j] + 1;
        }
        if (d[i] > len)
            len = d[i];
    }

    // delete[] d;
    return len;
}

/*Driver Code*/

int main()
{
    int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 7};
    cout <<"length of longest Increasing Subsequence : "<< lis(a, 23) << endl;
    return 0;
}