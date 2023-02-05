#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for ( i = 0; i < n-1; i++)
    {
        swapped =false;
        for ( j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped =true;
            }
        }
        if(swapped==false)
        break;
    }
}
int main()
{
    int n;
    for ( n = 0; n <=100; n++)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i]=rand();
        }
        clock_t start,end;
        start =clock();
        bubblesort(arr,n);
        end =clock();
        double total_time = double(end-start)/double(CLOCKS_PER_SEC/double(1000000.0));
        cout<<total_time<<", ";
    }
    return 0;
}