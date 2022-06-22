#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, answer = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    int temp = n; //! to store the value of n for further printing
    for (int i = 0; n != 0; i++)
    {
        int bit = n & 1;
        //!  bit = n % 10  bhi ho skta hai coz last digit chahiye bs like n= 110 hai to 0 chahiye jo ki dono se aa jaega
        if (bit == 1)
        {
            answer += pow(2, i);
        }
    }
    cout << temp << " in decimal is " << answer;

    return 0;
}
