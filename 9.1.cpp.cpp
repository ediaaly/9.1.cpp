#include <iostream>
#include <cmath>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;

    if (x_p <= -1 || x_k > 1 || x_p > x_k || dx <= 0 || e <= 0)
    {
        cout << "Wrong input!" << endl;
        return 1;
    }

    cout << endl;
    cout << "Table of ln(1+x)" << endl;

    cout << "+------------+------------------+------------------+------------+" << endl;
    cout << "|     x      |     ln(1+x)      |       Sum        |     n      |" << endl;
    cout << "+------------+------------------+------------------+------------+" << endl;

    x = x_p;

    while (x <= x_k)
    {
        sum();

        cout << "|" << setw(12) << fixed << setprecision(4) << x
            << "|" << setw(18) << log(1 + x)
            << "|" << setw(18) << s
            << "|" << setw(12) << n << "|" << endl;

        x += dx;
    }

    cout << "+------------+------------------+------------------+------------+" << endl;

    return 0;
}