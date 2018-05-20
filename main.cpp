#include<header.h>
void main()
  {
  display view;
reminder *rem;
  view.page1();
  opt: clrscr();
  char option=view.options();
  switch(option)
    {
     case '1' :  {        
			  clrscr();
			  rem->local_time();
			  ifstream fin;                              //check today's dashboard
			  fin.open(rem->file_date,ios::in);
			  fin.read((char*)rem,sizeof(*rem));
			  rem->display();
			  cout << "Press any key to continue...";
			  getch();
			  goto opt;
		 }
     case '2' :  {                                                          //Set reminder
			  clrscr();
			  rem->read();
			  rem -> file_name();
			  ofstream fout;
			  fout.open(rem->file_date,ios::out);
			  fout.write((char*)rem,sizeof(*rem));
			  cout << "Saved. Press any key to continue...";
			  getch();
			  goto opt;
		 }
     case '3' :  {
			  clrscr();
			  char ask_date[8];
			  cout << "Enter a date in DDMMYYYY format: ";
			  cin>>ask_date;                                                  //Show events
			  ifstream fin;
			  fin.open(ask_date,ios::in);
			  fin.read((char*)rem,sizeof(*rem));
			  rem->display();
			  cout << "Press any key to continue...";
			  getch();
			  goto opt;
		  }
    case '4'   : {
			 clrscr();
			 gotoxy(25, 13);
			 cout << "Good bye. Have a great day ahead.";
			 delay(5000);
			 exit(0);
		}
     default  :  {
		       cout<<"Invalid option.";
		       goto opt;
		 }
     }
  }
       

        
                     
    
  


