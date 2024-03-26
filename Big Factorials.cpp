#include <iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int Fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    int sum = 1;
    for (int i = 2; i <= n; ++i)
    {
        sum *= i;
        sum %= 10000;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    if (n <= 0 || n >= 1000)
    {
        cout << "Invalid input." << endl;
        return 1;
    }

    int ans = Fact(n);

    cout << ans << endl;

    return 0;
}

