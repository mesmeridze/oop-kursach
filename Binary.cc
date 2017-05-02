#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

class Library{
public:
	string name;
	int number;
	int age;
	Library() {
		name = "Noname";
		number = 12345;
		age = 20;
	}
	void show() {
	   cout <<" Name=" << name << endl 
			<<" Number=" << number << endl 
		   	<< " Age=" << age << endl << endl;
	}
};

int main() {

	Library obj[4];
	
	obj[0].name = "Andreo";
	obj[0].number = 999;
	obj[0].age = 32;

/*
	obj[1].name = "Vanja";
	obj[1].number = 888;
	obj[1].age = 45;
*/

	cout << "Save to file " << endl<<endl;
	obj[0].show();
	obj[1].show();
	fstream save_file("OBJ.txt", ios::binary | ios::out);

	if (save_file)
	{
	save_file.write((char*)&obj[0].name, sizeof(obj[0].name));
	save_file.write((char*)&obj[0].number, sizeof(obj[0].name));
	save_file.write((char*)&obj[0].age, sizeof(obj[0].name));

//	save_file.write((char*)&obj[1].name, sizeof(obj[0].name));
//	save_file.write((char*)&obj[1].number, sizeof(obj[0].name));
//	save_file.write((char*)&obj[1].age, sizeof(obj[0].name));

	}

	save_file.close();


	cout << "Reading From file "<< endl;
	cout << "-----------------"<< endl;
	string line;
	int k = 2;
	int a = 1;
	fstream load_file("OBJ.txt", ios::binary | ios::in);
	if (load_file) {
		
		while (getline(load_file,line)) {

			if (a == 3) { obj[k].age = atoi(line.c_str()); k++; a = 0; }
			if (a == 2) { obj[k].number = atoi(line.c_str());  }
			if (a == 1) { obj[k].name = line; }
			a++;
		}
	}


	obj[2].show();
	obj[3].show();

	cout << endl;
	return 0;
}
