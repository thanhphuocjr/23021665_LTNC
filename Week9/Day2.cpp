#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string input;
    double a, b, c;

    getline(cin, input);
    a = stod(input);
    getline(cin, input);
    b = stod(input);
    getline(cin, input);
    c = stod(input);

    double sum1 = b * a / 100;
    double sum2 = c * a / 100;
    double sum3 = sum1 + sum2 + a;
    
    cout << fixed << setprecision(0) << sum3;
    return 0;
}
