#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the values of a,b and c:";
    cin >> a >> b >> c;
    //finds the real roots, if any, of the equation ax²+bx+c=0
    double delta = pow(b,2)-4*a*c;
    if(delta < 0){
        cout << "no real roots";
    }else{
        double root = sqrt(delta);
        double root1 = (-b+root)/(2*a);
        double root2 = (-b-root)/(2*a);
        cout << "The real roots are:" << root1 << ", " << root2 << endl;
    }

    return 0;
}
