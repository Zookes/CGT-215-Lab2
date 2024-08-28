#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;
	
	cout << "Hi, my name is Liam and this is simple program to solve the equation: \n";
	cout << "Ax + B = 0\n"; 
	cout << "For x\n\n";
	
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;

    X = (0 - B)/A;
    
    cout<<"\nSolving " << A << "x +" << B << "= 0 for x..."; 

    cout<<"\n\nThe answer is: \n";
    cout<< "x = " << X << endl;
}

