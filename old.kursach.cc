#include <iostream>
#include <stdio.h>

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
		void setBookNew (char *);
		void getBookNew (void);
};

void book::setBookNew(char  newBook[255]){
	sprintf (book_author,"%s", newBook);
}
void book::getBookNew(){
	cout << book_author;
}

int main (){

	char test[255];

	sprintf (test,"Hello OOP");
	book current;	
	current.setBookNew(test);
	current.getBookNew();
}
