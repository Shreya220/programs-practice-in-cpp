#include <iostream>
using namespace std;
int linerarSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int n, key, i;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key: ";
    cin >> key;
    // for (i = 0; i < n; i++)
    // {
    //     if (key == arr[i])
    //         break;
    // }
    // if (i == n)
    //     cout << "-1";
    // else
    //     cout << i;
    cout << linerarSearch(arr, n, key);
    return 0;
}
