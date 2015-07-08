#include <iostream>
#include <string>

using namespace std;

int main()
{
    string my_str;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> my_str;
        if (my_str.length() > 10)
            cout << my_str[0] << my_str.length() - 2 << my_str[my_str.length()-1]<< endl;
        else
            cout << my_str << endl;
    }
    return 0;
}
