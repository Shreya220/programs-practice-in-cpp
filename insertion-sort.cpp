#include <iostream>
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
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current; // j ke through humne aage vali value check kri and false hua ya lst elemnt tha to loop nhi chala
        // curently j ki to wo prev vali hi value hai to +1 kra and khaali spot pr current value daal di.
    }
    // ** LEARNING**
    //* i=1 se start kra coz we consider 1st element to be sorted.
    //* current me we'll keep the value jise sorted array ke elements se check krna h
    //* j is for checking sorted array ke elements i.e. elements me konsi value kam hai
    //* while loop se we check ki ky sorted ka jth element curret se bada h if yes then ek index peeche jao
    //* keep on checking this for previous indexes in sorted array
    //*sb jb ek ek index peeche jayenge then j+1 th  index empty hoga and waha humara current value aa jayega 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//ANOTHER METHOD FOR INSERTION SORT
void insertionSort(int n, vector<int> &arr){
    for(int i = 1 ; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0;j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}
