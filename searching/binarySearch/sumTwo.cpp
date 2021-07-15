// given unsorted array & a number x ,
//  we need to find if there is a pair in the array with sum equal to x

#include <iostream>
using namespace std;

int isPair(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (arr[l] + arr[r] == x)
            return 1;
        else if (arr[l] + arr[r] > x)
            r--;
        else
            l++;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 8, 9, 11, 12, 20, 30}, x = 23;
    int res = isPair(arr, 8, x);
    if (res != -1)
        cout << " found" << endl;
    else
        cout << "not found";
    return 0;
}
