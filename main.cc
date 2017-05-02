#include "class.h"
#include "function.h"

int main (){

	char choice;
	menu Menus;
	book loc;
	setlocale(LC_ALL, "Russian");

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
							if (loc.setBookAll()==1) break;
							cout << string(50, '\n');
							cout << "\033[2;1H";

							cout << "Додаю наступну книжку:" << endl;
							cout << "Назва:"  << loc.getBookAll(1) << endl;
							cout << "Автор:" << loc.getBookAll(2) << endl;
							cout << "Сторінок:" << loc.getBookAll(3) << endl << endl;
							while (true){
								switch (choice = Menus.drawMenuBookAdd()){
									case '1':
										loc.addBook();
										break;
									case '2':
										break;
									default:
										break;
								}
								if ((choice=='1') || (choice=='2')) break;
							}


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
