#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

main (){


	char buffer[256];
	buffer[0]='\0';
	fstream read_file("OBJ.txt", ios::binary | ios::in);
	
	while (read_file.read((char*)&buffer, sizeof(buffer))){
		cout << "===" << buffer << "===" << endl;
		buffer[0]='\0';
	}
	
	read_file.close();

}

