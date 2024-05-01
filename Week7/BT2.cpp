#include <iostream>
#include <cmath>
using namespace std;

int powerSum(int X, int N, int currentNum = 1) {
    int power = pow(currentNum, N);
    if (power == X) {
        return 1; 
    } else if (power > X) {
        return 0;
    } else {
        return powerSum(X, N, currentNum + 1) + powerSum(X - power, N, currentNum + 1);
    }
}

int main() {
    int X, N;
    cin >> X >> N;
    int result = powerSum(X, N);
    cout << result << endl;
    return 0;
}
