#include <iostream>
#include <string.h>
#include <curses.h>
#include <stdlib.h>

#define DB_BOOK
#define DB_ABITUR


using namespace std;

class	book {

private:
	char  book_author[255];
	char  book_name[255];
	float book_printed;
	long  book_date;
public:
		void setBookMem (char *);
		char * getBookAuthor (void);
};

class	menu {

public:
	char drawMenuMain ();
	char drawMenuBook ();
	char drawMenuAbiturient ();
	char drawMenuAbiWork ();
	char choice;
};
