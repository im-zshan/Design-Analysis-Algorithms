#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, num, index;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout << "Enter Numbers: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nEnter a Number to Search: ";
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }
    cout << "\nFound at Index No." << index;
    cout << endl;
    return 0;
}