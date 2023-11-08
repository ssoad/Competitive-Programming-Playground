#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    int arr[n][n], arr2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Swap
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // j = i
        {
            // swap(arr[i][j], arr[n-1-j][i]);
            // int temp = arr[i][j];
            arr2[i][j] = arr[n-1-j][i];
            // arr2[n-1-j][i] = temp;
        }
    }
    // Display Array
    cout << "Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            // cout << arr[n-1-j][i] << " ";
             cout << arr2[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}