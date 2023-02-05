#include <bits/stdc++.h>
using namespace std;
int find(int A[], int B[], int m, int n, int k_req)
{
    int k = 0, i = 0, j = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            if (k == k_req)
                return A[i];
            i++;
        }
        else
        {
            k++;
            if (k == k_req)
                return B[j];
            j++;
        }
    }
    while (i < m)
    {
        k++;
        if (k == k_req)
            return A[i];
        i++;
    }
    while (j < n)
    {
        k++;
    if (k == k_req)
        return B[j];
    j++;
    }
}
int main()
{
    int A[5]={1,5,7,9,10};
    int B[4]={2,3,6,8};
    int k=4;
    cout<<find(A,B,5,4,k);
    return 0;
}