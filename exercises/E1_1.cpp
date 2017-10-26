#include <iostream>
//#include <string>
#include <iomanip>

//using namespace std;

int main()
{
    std::cout << "1" << "Hello, universe!" << std::endl;

    //To make this compile, you will have to #include <string> as well as <iostream>.
    //TODO ??
    const std::string greeting = "Hello, universe!";
    std::cout << "2" << greeting << std::endl;

    const std::string hlo = "Hello";
    const std::string sep = ", ";
    const std::string uni = "universe";
    const std::string exc = "!";
    std::cout << "3" << hlo + sep + uni + exc << std::endl;

    //error: invalid operands of types ‘const char [8]’ and ‘const char [10]’ to binary ‘operator+’|
    //cout << "Hello, " + "universe!" << endl;

    std::cout << "4" << "Hello, " "universe!" << std::endl;

    const std::string sep1 = std::string(7, '.');
    std::cout << "5" << hlo + sep1 + uni + exc << std::endl;

    std::cout << "6" << "Hello" + sep + uni + exc << std::endl;

    const double PI = 3.1415926535;
    std::cout <<
        PI << std::endl <<
        std::setw(20) << PI << std::endl <<
        std::setw(20) << std::fixed << std::setprecision(2) << PI << std::endl;


    const std::string chapters[] = { "Introduction", "Stuff", "Summary" };
    const int pages[] = { 1, 26, 53 };
    for (int c = 0; c < 3; ++c)
    {
        std::cout << std::left << std::setw(15) << chapters[c] << std::right << std::setw(3) << pages[c] << std::endl;
    }

    return 0;
}
