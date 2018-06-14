/*	This section contains all the classes and the definitions of all the functions included in the specific classes.
*	Please follow these guidelines for optimal readability of code and easy debugging
*	1. Use tabs and proper indentation.
*	2. Try to comment the code you write.
*	3. Specify the access specifiers even if it isn't required by the compiler.
*/

//New class: display
class display {
public:
	void page1();

	char options() { //Displays the available options and takes input from user for the required operation
		gotoxy(25, 10);
		cout << "1. Check today's dashboard.";
		gotoxy(25,11);
		cout << "2. Set reminder.";
		gotoxy(25,12);
		cout << "3. Show events.";
		gotoxy(25,13);
		cout << "4. Exit.";
		char option;
		gotoxy(25,14);
		cout << "Enter your option: ";
		cin >> option;
		return option;
	}
};

void display :: page1() {
		char b = 2,a[]="Welcome to note maker (beta)";
		clrscr();
		gotoxy(25, 12);
		
		for(int i = 0; i < strlen(a); ++i) {
			delay(100);
			cout << a[i];
		} //Displays welcome message with delay in output of each character.
	
		cout << b;
		gotoxy(25, 15);
		cout << "Press enter to continue...";
		getch();
	}
	
	
//new class:reminder
class reminder {
private:
	char date[2], month[2] ,year[4];
	char title[100], description[100];

public:
	char file_date[8];
	void read() { //Reads required parameters for storing the information
		cout << "Enter the title:" << endl;
		gets(title);
		cout << "Write a description:" << endl;
		gets(description );
		cout<<"Enter the date to be reminded"<<endl;
		cin>>date;
		cout<<"Enter the month in number"<<endl;
		cin>>month;
		cout<<"Enter the year in numbers"<<endl;
		cin>>year;
	}
	void display() { //Checks for data and prints accordingly *Modification Required*
					cout<<"Title:\n";
					cout << title << endl;
					cout<<"Description:\n";
					cout << description<< endl;

	}
	void file_name() {
			  strcpy(file_date,date);
			  strcat(file_date,month);
			 strcat(file_date,year);
	}
	void local_time() {
	char date[8];
	_strdate(date);
	file_date[0] = date[3];
	file_date[1] = date[4];	
	file_date[2] = date[0];
	file_date[3] = date[1];
	file_date[4] = '2';
	file_date[5] = '0';
	file_date[6] = date[6];
	file_date[7] = date[7];	
	}
};
