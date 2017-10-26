#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    bool useChar = true;

    string inputFileName;
    string outputFileName;
    string key;

    cout << "Enter input file name:" << endl;
    cin >> inputFileName;
    ifstream ifs(inputFileName.c_str());
    ifs >> noskipws;

    cout << "Enter output file name:" << endl;
    cin >> outputFileName;
    ofstream ofs(outputFileName.c_str());

    if(useChar)
    {
        char key;
        cout << "Enter your char key:" << endl;
        cin >> key;

        while (ifs)
        {
            char c;
            ifs >> c;
            ofs << char(c^key);
        }
    }
    else
    {
        string key;
        cout << "Enter your string key:" << endl;
        cin >> key;
    }





    ifs.close();
    ofs.close();
    return 0;
}
