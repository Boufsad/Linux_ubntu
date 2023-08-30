// exercice1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>// INCLUDE THE HEADER FILE INTO THE COMPILER 
#include <string>
#include <sstream>
using namespace std;
int a(0);
int b(0);
#define prim 120; 
string message;
int main()
{
	//string message;
	string sold;
	cout << "Hi,what's your name: ";
		getline(cin, message);//cin>> message
		cout << "lest to meet you " << message << "\n give me your actual solde please: ";
		getline(cin, sold);
		sigma:
		cout << "\nchoose your service" << "\n 1:total sold" << "\n 2:extract money" << "\n 3:help\n";
		getline(cin, message);
		stringstream(sold)>>a;
		stringstream(message) >> b;
		switch (b)
		{
		case 1:
			a += prim;
			cout << "your total price its: " <<"\t"<< a;
			break;
		case 2:
			cout << "your money its:" << a;
			break;
		case 3: 
			cout << "what can i help you";
			break;
		}
		goto sigma;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
