#include "class.h"
#include "function.h"

int main (){

	char choice;
	menu Menus;
	/*char test[255];

	strcpy (test,"Hello OOP");
	book current;	
	current.setBookMem(test);
	cout << current.getBookAuthor();
	*/

	while (true) {

	//	choice = Menus.drawMenuMain();
		
		switch (Menus.drawMenuMain()) {
			case '0': exit(0);
				break;
			case '1':
				while (true){

					switch (choice = Menus.drawMenuBook()){
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
