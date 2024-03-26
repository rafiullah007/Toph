#include<bits/stdc++.h>
using namespace std;

    /*
    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)
    */

double cal(int h , int m )
{
    double sum = (30*h)-5.5*m;
    return sum ;
}

int main()
{
    int h, m;
    cin>>h>>m;
    double ans = cal(h,m);
    if(ans>180)
    {
        double a = 360-ans;
        cout<<fixed<<setprecision(7)<<a<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(7)<<ans<<endl;
    }
}

