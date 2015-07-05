#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;


    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int num = k, step = 0;

    if (arr[k] == 0)
    {
        for (int i = k ; i >= 0; i--)
        {
            if (arr[i] != 0)
                step++;
        }
        num = step;
    }
    else
    {
        for (int i = k-1 ; i < n; i++)
        {
            if (arr[i] == arr[i+1])
                num++;
            else
                break;
        }
    }
    cout << endl << num;

    return 0;
}
