#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name = "Olumide Mowanuolaoluwa Longe";
	string firstname, middlename, lastname;

	int index;
	index = name.find(" ");
	firstname = name.substr(0, index);
	name = name.substr(index + 1, name.length() - 1);
	index = name.find(" ");
	middlename = name.substr(0, index);
	lastname = name.substr(index + 1, name.length() - 1);
	cout << "First Name: " << firstname << endl;
	cout << "Middle Name: " << middlename << endl;
	cout << "Last Name: " << lastname << endl;

	system("pause");
	return 0;
}