#include <iostream>
using namespace std;

void SubarraySum(int arr[], int n)
{
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 2};
    SubarraySum(arr, 3);

    return 0;
}