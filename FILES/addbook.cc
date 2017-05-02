#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

main (){


	char 	book_name[256];
	char 	book_author[256];
	char 	book_pagenum[256];

	char 	buffer[256];
	
	book_name[0]='\0';
	cout << "Введіть назву книжки:";
	cin.getline(book_name,sizeof(book_name));

	book_author[0]='\0';
	cout << "Введіть автора:";
	cin.getline(book_author,sizeof(book_author));

	book_pagenum[0]='\0';
	cout << "Введіть кількість сторінок у друкованих аркушах:";
	cin.getline(book_pagenum, sizeof(book_pagenum));

	int i=3;
	buffer[0]='\0';
	fstream read_file("OBJ.txt", ios::binary | ios::in);	
	while (read_file.read((char*)&buffer, 256)){

		if ((i % 3)==0)	{
			if (strcmp(buffer, book_name) == 0) {
				cout << "Така книжка вже є у бібліотеці" << endl;
				read_file.close();
				return 0;	
			}
		}
		buffer[0]='\0';
		i++;
	}
	read_file.close();

	fstream write_file("OBJ.txt", ios::binary | ios::out | ios::app);
	write_file.write((char*)&book_name, sizeof(book_name));
	write_file.write((char*)&book_author, sizeof(book_author));
	write_file.write((char*)&book_pagenum, sizeof(book_pagenum));

	write_file.close();
}

