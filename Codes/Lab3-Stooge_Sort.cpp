#include<bits/stdc++.h>
using namespace std;
void stoogeSort(int left, int right, int arr[])
{

	if (right-left+1 == 2 && arr[left] > arr[right])
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}

	else if (right-left+1>2)
	{
		int m = (right-left+1)/3;
		stoogeSort(left, right-m, arr);
		stoogeSort(left+m, right, arr);
		stoogeSort(left, right-m, arr);
	}
}
int main()
{
    int n;
    scanf("%d",n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        a[i]=1+rand()%10;
    }
    stoogeSort(0,n,a);

    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}