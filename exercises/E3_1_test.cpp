#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{

    cout << "Enter observations, terminate with ^D:" << endl;
    int obsCount = 0;
    double sum = 0;
    double observation;

    while(cin >> observation)
    {
        sum += observation;
        ++obsCount;
    }

    cout << "The mean of " << obsCount << " observations is " << sum / obsCount << endl;

    return 0;
}
