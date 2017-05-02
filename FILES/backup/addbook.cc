#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

main (){


	char 	book_name[256];
	char 	book_author[256];
	char 	book_pagenum[256];
	
	book_name[0]='\0';
	cout << "Введіть назву книжки:" << endl;
	cin.getline(book_name,sizeof(book_name));

	book_author[0]='\0';
	cout << "Введіть автора:" << endl;
	cin.getline(book_author,sizeof(book_author));

	book_pagenum[0]='\0';
	cout << "Введіть кількість сторінок у друкованих аркушах:" << endl;
	cin.getline(book_pagenum, sizeof(book_pagenum));
	
	fstream write_file("OBJ.txt", ios::binary | ios::out );
	write_file.write((char*)&book_name, sizeof(book_name));
	write_file.write((char*)&book_author, sizeof(book_author));
	write_file.write((char*)&book_pagenum, sizeof(book_pagenum));

	write_file.close();
}

