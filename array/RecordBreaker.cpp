#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int arr[] = {1, 2, 0, 7, 2, 0, 2, 2};
    int n = 8;
    arr[n] = -1;
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0, mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
            mx = max(mx, arr[i]);
        }
    }
    cout << ans;
    return 0;
}
