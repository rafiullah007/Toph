#include <iostream>
#include<algorithm>
#include<math.h>
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
    int n,i,j;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        if(a[i-1]>a[i])
        {
            cout<<"No"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}
