#include <iostream>
#include <fstream>

using namespace std;

void copyLines()
{
  ifstream ifs("input1.txt");
  ofstream ofs("output.txt");

  int linesCopied = 0;
  ifs >> noskipws;
  while (ifs)
  {
    string line;
    getline(ifs, line);
    ofs << line << endl;
    ++linesCopied;
  }

  ifs.close();
  ofs.close();

  cout << linesCopied << " lines copied." << endl;
}

int main()
{
    copyLines();
    return 0;
}
