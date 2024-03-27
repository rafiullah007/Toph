#include <iostream>
#define n 6
#define limit 20
using namespace std;


    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


int main()
{
    int a[n] = { 1, 5, 10, 50, 100, 500 };
    int taka;
    cin>>taka;
    int a2[limit] = { 0 };
    int i, k = 0;
    for (i = n - 1; i >= 0; i--) {
        while (taka >= a[i]) {
            taka -= a[i];
            a2[k++] = a[i];
        }
    }

    for (i = k-1; i >= 0; i--) {
        cout << a2[i] << " ";
    }

    return 0;
}

