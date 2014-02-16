#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
string UserName;
string PassWord;

cout << "Welcome to data protectoin!\n";
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << "Welcome to data protection!\n";
cout << endl;
cout << "Enter your user name...\n";
cout << endl;
getline (cin,UserName);
cout << "Enter your password...\n";
cout << endl;
getline (cin,PassWord);
cout << "protecting your data...\n";
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << "Data protected...\n";
Sleep(2000);
system("cls");


cout << "To acuier you data do /data ...";
int a = 0;
while(a < 500)
{
  cout << "Username: " << UserName << endl;
  cout << "Password: " << PassWord << endl;
}

}
