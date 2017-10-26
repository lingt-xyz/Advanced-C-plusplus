#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    //skipws, noskipws: Enables or disables skipping of leading whitespace (enabled by default)
    char c1, c2, c3, c4, c5;
    cout << "Enter your input: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    //cin >> noskipws >> c1 >> c2 >> c3>> c4 >> c5;
    cout << "c1=" << c1 << ", c2=" << c2 << ", c3=" << c3 << ", c4=" << c4 << ", c5=" << c5 << "." << endl;

    return 0;
}

