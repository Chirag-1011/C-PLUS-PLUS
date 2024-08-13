#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=7;

    b=a+b;
    a=b-a;
    
    b=b-a;
    

    cout <<a <<endl;
    cout<<b;

}