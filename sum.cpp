#include <cmath>
#include "sum.h"
#include "dod.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum()
{
    n = 1;
    a = x;
    s = a;

    do
    {
        dod();
        n++;
        s += a;
    } while (fabs(a) > e);
}