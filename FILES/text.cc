#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

main (){


        char    book_name[256];

        book_name[0]='\0';
        cout << "Введіть назву книжки:";

	cin.getline(book_name,256);
	cout << book_name << endl;

}
