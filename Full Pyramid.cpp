#include <iostream>

using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {

        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }


        for (int k = 1; k <= i; ++k) {
            cout << "*";

            if (k < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
