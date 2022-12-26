#include <iostream>
using namespace std;

void printSum(int arr[][4], int row, int col)
{
    cout << "Row wise sum: ";
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
    cout << "Column wise sum: ";
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
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

    printSum(arr, 3, 4);
    return 0;
}
