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

    int step = 0;

    if (arr[k-1]==0)
    {
        for (int i = 0; i<k;i++)
            if(arr[i]!=0)
                step++;
    }

    else
    {
        for (int i=k-1; i<n; i++)
        {
            if (arr[k-1]==arr[i+1])
                step++;
        }
        step=step+k;
    }

    cout << endl << step;

    return 0;
}
