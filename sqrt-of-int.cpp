#include <iostream>
using namespace std;
long long int intPartOfSqrt(int num)
{
    int s = 0;
    int e = num;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == num)
        {
            return mid;
        }
        else if (square > num)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int num, int precisionCount, int integerPart)
{
    double factor = 1;
    double ans = integerPart;
    for(int i = 0; i < precisionCount; i++)
    {
        factor = factor/10;
        //* to have the 0.1,0.01,0.001 factor needed for adding to the integer part

        for(double j = ans; j*j < num; j = j + factor)
        //! j is taken as double because further on we're adding factor(i.e., double) to it.
        //* j = ans beacuse we need something in which we'll add the factor
        //* j*j < num we'll check if the obtained ans is less than the number
        //* = isn't included bcoz correct(purely equal) number milna mushkil hai as decimal me baat kr rhe hai 
        //*  j = j + factor we'll keep on adding 0.1 to make it go like, 0.1,0.2,0.3...
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int number,precision;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the no of digits you need after decimal: ";
    cin >> precision;

    int tempSoln = intPartOfSqrt(number);
    cout<<"Square root of "<<number<<" is "<<morePrecision(number, precision, tempSoln);

    return 0;
}
