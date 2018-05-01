/*	This section contains all the classes and the definitions of all the functions included in the specific classes.
*	Please follow these guidelines for optimal readability of code and easy debugging
*	1. Use tabs and proper indentation.
*	2. Try to comment the code you write.
*	3. Specify the access specifiers even if it isn't required by the compiler.
*/

//New class: display
class display {
public:
	void page1() {
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
	
	char options() { //Displays the available options and takes input from user for the required operation
		gotoxy(25, 10);
		cout << "1. Check today's dashboard";
	
		gotoxy(25,11);
		cout << "2. Set reminder";
	
		gotoxy(25,12);
		cout << "3. Show events";
	
		char option;
		gotoxy(25,13);
		cout << "Enter your option: ";
		cin >> option;
		getch();
		return option;
	}	
};
//new class:remainder 
class remainder {
private:
	int date, month ,year;
	char title[100], description[100];
	char sdate[8],smonth[8],syear[10];

public:
	char file_date[8];
	void read() { //Reads required parameters for storing the information
		cout << "Enter the title:" << endl;
		gets(title);
		
		cout << "Write a description:" << endl;
		gets(description );
		
		cout<<"Enter the date to be remainded"<<endl;
		cin>>date;
		
		cout<<"Enter the month in number"<<endl;
		cin>>month;
		
		cout<<"Enter the year in numbers"<<endl;
		cin>>year;
	}
	void display() { //Checks for data and prints accordingly *Modification Required*
		
					cout << title << endl;
					cout << description<< endl;
				
	}
	void file_name() {
		          
		          
		          itoa(date, sdate,8);           
                          itoa(month,smonth,8);
                          itoa(year,syear,10);
                          strcat(sdate,smonth);
                          strcat(sdate,syear);
		         strcpy(file_date,sdate);
	}
	void local_time() {
			struct tm *k;
		        k = localtime(&t);	
			date = k->tm_mday;
		        month = k->tm_mon;
			year = k -> tm_year + 1900;
		        file_name();
	}
		
};
