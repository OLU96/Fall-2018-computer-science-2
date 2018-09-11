
#include <iostream>
#include <fstream>  
#include <cctype>  
#include <string>
using namespace std;
int main()
{
	int i;
	char ch; string str;
	char *inname = "quote.txt";
	char *outname = "upquote.txt";
	ifstream infile(inname);
	if (!infile) {
		cout << "Could not open the file!\n";
		return 0;
	}
	while (infile >> ch) {
		str += toupper(ch);
	}
	ofstream outfile(outname);
	for (i = str.size() - 1; i >= 0; i--)
	{
		outfile << str[i] << " ";

	}
	system("pause");

	return 0;
}