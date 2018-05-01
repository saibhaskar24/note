#include<header.h>
void main()
  {
  display view;
  remainder *rem;
  view.page1();
  opt: clrscr();
  char option=view.options();
  switch(option)
    {
     case '1' :  {        
                          rem->local_time();
                          ifstream fin;                              //check today's dashboard
                          fin.open(rem->file_date,ios::in);
                          fin.read((char*)rem,sizeof(*rem));
                          rem->display();
                          getch();
                          goto opt;
                 }
     case '2' :  {                                                          //Set reminder
                         
                          rem->read();
	     		  rem -> file_name();
	     		  ofstream fout;
                          fout.open(rem->file_date,ios::out);
                          fout.write((char*)rem,sizeof(*rem));
                          getch();
                          goto opt;
                 }
     case '3' :  {        char ask_date[8];
	     		  cin>>ask_date;                                                  //Show events
                          ifstream fin;
                          fin.open(ask_date,ios::in);
                          fin.read((char*)rem,sizeof(*rem));
		          rem->display();
                          getch();
                          goto opt;
                  }
    case '4'   : { 
	                 cout<<"Thanks for using TaTa";
	    		getch();
	                  exit(o);
    		}
     default  :  {
                       cout<<"Invalid option";
                       goto opt;
                 }
     }
  }
       

        
                     
    
  


