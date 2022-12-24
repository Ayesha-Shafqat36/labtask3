#include <iostream>
using namespace std;

main()
{
string name;
int matric;
int inter;
int ecat;
float aggregate;

cout << "Enter Name:";
cin >> name;

cout << "Enter matric numbers:";
cin >> matric;
 
cout << " Enter Inter numbers:";
cin >> inter;

cout << "Enter Ecat numbers:";
cin >> ecat;

aggregate=(matric/1100.0)*10+(inter/550.0)*40+(ecat/400)*50;
cout << "Total Aggregate:" << aggregate;
}





