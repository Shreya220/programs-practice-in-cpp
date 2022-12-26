#include <iostream>
using namespace std;

int largestRowSum(int arr[][4], int row, int col)
{
    cout << "Largest row sum is:";
    int maxi = INT_MIN;
    int rowIndex = -1; // to store the index of row having largest sum
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << maxi << endl;
    return rowIndex;
}

int main()
{

    int arr[3][4];

    cout << "Enter elements for 2D array:";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "The elements of 2D array are:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int index = largestRowSum(arr, 3, 4);
    cout << "Max row sum is at row having index " << index << endl;
    return 0;
}
