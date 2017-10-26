#include <iostream>
#include <fstream>

using namespace std;

void copyChars()
{
    string inputFileName;
    cout << "Enter input file name: ";
    cin >> inputFileName;
    ifstream ifs(inputFileName.c_str());
    ofstream ofs("output.txt");

    int charsCopied = 0;
    ifs >> noskipws;
    while(ifs)
    {
        char c;
        ifs >> c;
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
