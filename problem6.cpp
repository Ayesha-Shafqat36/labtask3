#include <iostream>
using namespace std;

main()
{
int megaBytes;
int conversion;

cout << "Enter Mega Bytes:";
cin >> megaBytes;

conversion=megaBytes*1024*1024*8;
cout << "Mega Bytes To Bit:"<< conversion;
}