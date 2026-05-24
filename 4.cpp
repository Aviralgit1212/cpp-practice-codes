#include <iostream>
using namespace std;   
int main()
{
    int a, b, sum;
    float avg;
    cout << "Enter two numbers: ";
    cout<<"the first numer is: ";
    cin >> a;
    cout<<"the second number is: ";
    cin>>b;
    sum = a + b;
    cout<<"the sum is: "<< sum << endl;
    avg = sum / 2.0;
    cout<<"the avg is: "<< avg << endl;
    return 0;
}