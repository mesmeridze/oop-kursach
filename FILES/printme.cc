#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>

using namespace std;

main (){


	char 	buffer[256];

        char    *book_name = new char[256];
        char    *book_author = new char [256];
        char    *book_pagenum = new char [256];

	buffer[0]='\0';
	fstream read_file("OBJ.txt", ios::binary | ios::in);
	if (!read_file.is_open()){
		cout << "Неможливо відкрити бібліотеку книжок" << endl;
		exit (0);
	}

	int i=1;	
	printf ("%-30s%-30s%-30s\n","Назва", "Автор", "Кількість сторінок");

	while (read_file.read((char*)&buffer, sizeof(buffer))){

		switch (i){
			case 1:
				book_name[0]='\0';
				strcat (book_name,buffer);
				break;
			case 2:
				book_author[0]='\0';
				strcat (book_author,buffer);
				break;
			case 3: 
				book_pagenum[0]='\0';
				strcat (book_pagenum,buffer);
				//printf ("%-30s\t%-30s\t%-30s\n",book_name,book_author,book_pagenum);
				cout << setw (20) << left << book_name;
				cout << setw (20) << left << setfill('-')  << book_author << endl;
				i=0;
				break;
			default:
				break;
		}
		i++;
	}
	
	read_file.close();
	delete book_name,book_author,book_pagenum;

}

