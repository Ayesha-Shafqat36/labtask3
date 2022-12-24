#include <iostream>
using namespace std;

main()
{
int roll_number;
float aggregate;
char section;
string name;

cout << "Enter your roll number: ";
cin >> roll_number ;

cout << "Enter your aggregate: ";
cin >> aggregate;

cout << "Enter your section: ";
cin >> section;

cout << "Enter your name: " ;
cin >> name; 
cout << endl;
cout << "my roll_number is: " << roll_number << endl;
cout << "my aggregate is: "   << aggregate   << endl;
cout << "my section is: "     << section     << endl;
cout << "my name is: "        << name        << endl;
}