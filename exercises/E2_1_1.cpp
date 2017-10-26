#include <iostream>
#include <fstream>

using namespace std;

void copyChars()
{
    ifstream ifs("input1.txt");
    ofstream ofs("output.txt");

    int charsCopied = 0;
    ifs >> noskipws;
    char c;
    while(ifs.get(c))
    {
        //ifs >> c;
        cout << c << "we got something here." << endl;
        ofs << c;
        ++charsCopied;//The bug is the number of characters copied
    }

    ifs.close();
    ofs.close();

    cout << charsCopied << " characters copied." << endl;
}

int main()
{
    copyChars();
    return 0;
}
