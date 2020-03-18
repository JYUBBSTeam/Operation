#include <iostream>
#include<string>
#include<cmath>
#include "operation/fourArithmedic.h"

using namespace std;
int main()
{
    char ch;
    string m_snum1, m_snum2;
    while (cin>>m_snum1>>ch>>m_snum2)
    {
        FourArithmedic _fourArithmedic(m_snum1, ch, m_snum2);
    }
    return 0;
}
