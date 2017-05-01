book::book(){
	book_name[0]='\0';
	book_author[0]='\0';
	book_pagenum[0]='\0';
}

void book::setBookMem(char  *newBook){
	strcpy (book_author, newBook);
}

char * book::getBookAuthor(){
	return (book_author);
}

void book::setBookName(char buffer[255]){
	strcat(book_name, buffer);
	printf ("%s\n",book_name);
	sleep (3);
}

char menu::drawMenuMain (){

	char choice;
	cout << string(50, '\n');
	cout << "\033[2;1H";
	cout << "Оберіть потрібний пункт :" << "\n\n";
	cout << "1. Робота з книжками" << "\n";
	cout << "2. Робота з абітурієнтами"<< "\n";
	cout << "3. Видача/Повернення книжок" << "\n";
	cout << "4. Налаштування" << "\n";
	cout << "0. Завершення роботи з програмою" << "\n";
	cout << "--------------------------" << "\n";
	return getchar();
}

char menu::drawMenuBook (){

	cout << string(50, '\n');
	cout << "\033[2;1H";
	cout << "Робота з книжками :" << "\n\n";
	cout << "1. Перелік книжок" << "\n";
	cout << "2. Додати нову" << "\n";
	cout << "3. Видалити" << "\n";
	cout << "4. Змінити назву або автора" << "\n";
	cout << "5. Знайти книжку" << "\n";
	cout << "0. Вийти в головне меню" << "\n";
	cout << "--------------------------" << "\n";

	return getchar();
}

char menu::drawMenuAbiturient(){

	cout << string(50, '\n');
	cout << "\033[2;1H";
	cout << "Работа з абітурієнтами :" << "\n\n";
	cout << "1. Перелік абітурієнтів" << "\n";
	cout << "2. Додати абітурієнта" << "\n";
	cout << "3. Змінити інформацію" << "\n";
	cout << "4. Знайти" << "\n";
	cout << "0. Вийти в головне меню" << "\n";
	cout << "--------------------------" << "\n";

	return getchar();
}

char menu::drawMenuAbiWork (){

	cout << string(50, '\n');
	cout << "\033[2;1H";
	cout << "Видача/Повернення книжок :" << "\n\n";
	cout << "1. Перелік книжок" << "\n";
	cout << "2. Показати видані книжки" << "\n";
	cout << "3. Показати невидані книжки" << "\n";
	cout << "4. Видити книжку студенту" << "\n";
	cout << "5. Повернення книжки у бібліотеку" << "\n";
	cout << "6. Знайти інформацію про книжку" << "\n";
	cout << "7. Знайти інформацію про абітурієнта" << "\n";
	cout << "0. Вийти в головне меню" << "\n";
	cout << "--------------------------" << "\n";

	return getchar();
}

void book::showBooks (void){

	char buffer[256];
        buffer[0]='\0';
        fstream read_file(DB_BOOK, ios::binary | ios::in);
	read_file.seekg (0, std::ios::beg);
        if (!read_file.is_open()){
                cout << "Неможливо відкрити бібліотеку книжок" << endl;
		sleep (3);
                exit (0);
        }
        int i=1;
	system ("clear");
        printf ("%-30s%-30s%-30s\n","Назва", "Автор", "Кількість сторінок");

        while (read_file.read(buffer, sizeof(buffer))){
                switch (i){
                        case 1:
                                book_name[0]='\0';
                                strcat (book_name,buffer);
                                break;
                        case 2:
                                book_author[0]='\0';
                                strcat (book_author,buffer);
                                break;
                        case 3:
                                book_pagenum[0]='\0';
                                strcat (book_pagenum,buffer);
                                printf ("%-30s\t%-30s\t%-30s\n",book_name,book_author,book_pagenum);
                                i=0;
                                break;
                        default:
                                break;
                }
                i++;
		buffer[0]='\0';
        }

	sleep (5);
}
