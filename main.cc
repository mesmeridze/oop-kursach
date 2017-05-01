#include "class.h"
#include "function.h"

int main (){

	char choice;
	menu Menus;
	book loc;
	char buffer[255];

	while (true) {

		switch (Menus.drawMenuMain()) {
			case '0': exit(0);
				break;
			case '1':
				while (true){

					switch (choice = Menus.drawMenuBook()){
						case '1':
							loc.showBooks();
							break; 

						case '2':
							system ("clear");
							buffer[0]='\0';
							cout << "Введіть назву книжки:";
							cin.ignore();
							cin.getline(buffer,sizeof(buffer));
							cout << "===" << buffer << "===" << endl;
							sleep (5);
							//loc.setBookName(buffer);

							break; 
						case '3':
							break; 
						case '4':
							break; 
						case '5':
							break; 
						default: break;
					}
					

					if (choice == '0') break;

				}
				break;

			case '2':
				while (true){

					switch (choice = Menus.drawMenuAbiturient()){
						case '1':
							break; 
						case '2':
							break; 
						case '3':
							break; 
						case '4':
							break; 
						case '5':
							break; 
						default: break;
					}
	
					if (choice == '0')  break;
					
				}
				break;

			case '3':
				while (true){

					switch (choice = Menus.drawMenuAbiWork()){
						case '1':
							break; 
						case '2':
							break; 
						case '3':
							break; 
						case '4':
							break; 
						case '5':
							break; 
						default: break;
					}
	
					if (choice == '0')  break;
					
				}
				break;
			
			default:
				break;
		}
	}
}
