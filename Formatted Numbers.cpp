#include <iostream>
#include <string>

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
    int num;
    cin >> num;
    string s = to_string(num);
    int n = s.size();
    string s2;
    for (int i = 0; i < n; ++i)
    {
        if ((n-i)%3 == 0 && i != 0)
        {
            s2 += ',';
        }
        s2 += s[i];
    }

    cout << s2 << endl;

    return 0;
}
