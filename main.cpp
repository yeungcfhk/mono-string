#include <iostream>
#include "MonoString.h"

using namespace std;

int main()
{
    MonoString ms("Hello world!");
    cout << ms << endl;
    cout << ms.length();
    return 0;
}
