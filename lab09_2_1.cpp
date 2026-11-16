
#include <iostream>
#include "functions.h"

using namespace std;

#define Z_VALUE 2

int main()
{
    double x, y, z = Z_VALUE, w;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

#if Z_VALUE > 0 && Z_VALUE < 5

    w = MIN(SQR(x) + y + z, x * y * z);

#else

    w = MAX(SQR(x) + SQR(y + z), x * y);

#endif

    PRINT_RESULT(w);

    return 0;
}
