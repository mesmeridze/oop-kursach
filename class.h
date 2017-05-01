#include <iostream>
#include <string.h>
#include <string>
//#include <curses.h>
#include <stdlib.h>
#include <fstream>
#include <unistd.h>
#include <stdio.h>


#define DB_BOOK "FILES/OBJ.txt"
#define DB_ABITUR


using namespace std;

class	book {

private:
	char  	book_name[255];
	char  	book_author[255];
	char	book_pagenum[256];

public:
		void setBookMem (char *);
		char * getBookAuthor (void);
		void showBooks (void);
		void setBookName(char *);
		book ();
};

class	menu {

public:
	char drawMenuMain ();
	char drawMenuBook ();
	char drawMenuAbiturient ();
	char drawMenuAbiWork ();
	char choice;
};
