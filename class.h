#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


#define DB_BOOK "FILES/OBJ.txt"
#define DB_ABITUR


using namespace std;

class	book {

private:
	char  	book_name[256];
	char  	book_author[256];
	char	book_pagenum[256];

public:
	/*	void setBookMem (char *); */
	/*		char * getBookAuthor (void); */
		void showBooks (void);
		int setBookAll(void);
		char * getBookAll(int);
		void addBook(void);
		book ();
};

class	menu {

public:
	char drawMenuMain ();
	char drawMenuBook ();
	char drawMenuBookAdd ();
	char drawMenuAbiturient ();
	char drawMenuAbiWork ();
	char choice;
};
