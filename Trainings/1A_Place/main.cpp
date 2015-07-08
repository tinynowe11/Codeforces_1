#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n = 0, m = 0, a = 0;
    double x = 0, y = 0;
    long long int result = 0;

    cin >> n >> m >> a;

    x = ceil (n/a);
    y = ceil (m/a);

    result = x * y;

    cout << result;

    return 0;
}











/*#include <iostream>
#include <cmath>
#include <fstream>
#include <ostream>

using namespace std;

int main()
{
    float n = 0, m = 0, a = 0;
    float x = 0, y = 0, result = 0;

    ifstream F;
    F.open("input.txt");
    F >> n;
    F >> m;
    F >> a;

    ofstream f;
    f.open("output.txt");

    x = ceil (n/a);
    y = ceil (m/a);

    result = x * y;

    cout << result;

    f<<result<<"\t";

    f.close();
    F.close();

    return 0;
}*/
