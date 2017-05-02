#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

using namespace std;

main (){


	char buffer[100];
	float pages;
	fstream write_file("OBJ.txt", ios::binary | ios::out);

//	for (int i=0; i<=2; i++){
		cout << "Введіть назву книжки:" << endl;
		buffer[0]=0;
		cin.getline(buffer,sizeof(buffer));
		write_file.write((char*)&buffer, sizeof(buffer));

		cout << "Введіть автора:" << endl;
		buffer[0]=0;
		cin.getline(buffer,sizeof(buffer));
		write_file.write((char*)&buffer, sizeof(buffer));
		
		cout << "Введіть вартість:" << endl;
		buffer[0]=0;
		cin.getline(buffer,sizeof(buffer));
		write_file.write((char*)&buffer, sizeof(buffer));

//	}

	write_file.close();
}
