#include <iostream>
using namespace std;

int main()
{

    int h, b, area;

    float dc = 1 / 2;

    cout << "Enter the b:";
    cin >> b;

    cout << "Enter the h:";
    cin >> h;

    area = dc * h * b;

    cout << area;

    return 0;
}