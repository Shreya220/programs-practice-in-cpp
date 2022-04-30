#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT_MIN; // VALUE OF THE MINIMUM POSSIBLE INTEGER
    int minNo = INT_MAX; // VALUE OF THE MAXIMUM POSSIBLE INTEGER
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]); // max() is an inbuilt function which returns max of the two numbers
        // if (arr[i] > maxNo)
        //     maxNo = arr[i];

        minNo = min(minNo, arr[i]);
        // if (arr[i] < minNo)
        //     minxNo = arr[i];
    }
    cout << "Max amongst all number is: " << maxNo << endl;
    cout << "Min amongst all number is: " << minNo << endl;
    return 0;
}
