#include<iostream>
#include <fstream>

using namespace std;



int main()
{
	ofstream FileWrite;
	char str[] = {"Some_text_that_was_write_in_the_file"};
	char* str1 = new char[strlen(str)];

	FileWrite.open("File.txt");
	FileWrite << str;
	FileWrite.close();
	
	ifstream FileRead;
	FileRead.open("File.txt");

	if (FileRead.is_open())
	{
		
		FileRead >> str1;
		FileRead.close();
	}
	else
	{
		cout << "File cannot open! " << endl;
	}
	cout << str1 << endl;

	return 0;
}
