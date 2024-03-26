#include <iostream>
#include <vector>

using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int Fib(int n)
{
    vector<int> fib(n + 1);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n-1];
}

int main()
{
    int n;
    cin >> n;
    if (n<=0 || n>=50)
    {
        cout << "Invalid input." << endl;
        return 1;
    }
    cout << Fib(n) << endl;

    return 0;
}
