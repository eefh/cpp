#include <iostream>
using namespace std;

float multiply(float a, float b)
{
    return a * b;
}
int main()
{
    float a = 3.14159;
    float b = 2.0;
    cout << multiply(a, b) << endl;
    return 0;
}