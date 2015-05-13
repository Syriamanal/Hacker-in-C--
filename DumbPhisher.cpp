#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
string UserName;
string PassWord;

cout << "Welcome to data protectoin!;
for(int a = 0; a < 5; a++)
{
cout << endl;
}
cout << "Welcome to data protection!" << endl;
cout << "Enter your user name..." << endl;
getline (cin,UserName);
cout << "Enter your password... << endl";
getline (cin,PassWord);
cout << "protecting your data..." << endl;
for(int a = 0; a < 5; a++)
{
cout << endl;
}
cout << "Data protected...\n";
Sleep(2000);
system("cls");

string data = ""
cout << "To Acquire Your Data Do /data ...";
getline(cin,data);
if(data = "/data")
{
  cout << "Username: " << UserName << endl;
  cout << "Password: " << PassWord << endl;
  Sleep(2000);
}

}
