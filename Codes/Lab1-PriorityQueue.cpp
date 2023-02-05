#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int a[], int b[], int m, int n, int k)
{
    int arr[m + n];
    int j = 0, l = 0;
    for (int i = 0; i < (m + n); i++)
    {
        if (i < m)
        {
            arr[i] = a[j++];
        }
        else
        {
            arr[i] = b[l++];
        }
    }
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main()
{
    int a[10]={22,72,12,24,5,8,32,55,61,73};
    int b[10]={1,2,3,4,6,7,9,10,11,12};
    int k=7;
    int sml=kthSmallest(a,b,10,10,k);
    cout<<"kth Smallest Element is "<<sml;
}