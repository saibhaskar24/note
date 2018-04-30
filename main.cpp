#include<header.h>
void main()
  {
  display view;
  struct tm *k;
	k = localtime(&t);
  remainder *rem;
  view.page1();
  opt: clrscr();
  char option=view.options();
  switch(option)
    {
     case '1' :  {        
                          
                          ifstream fin;                              //check today's dashboard
                          fin.open(sdate,ios::in);
                          fin.read((char*)rem,sizeof(*rem));
       
                          rem->display();
                          getch();
                          goto opt;
                 }
     case '2' :  {                                                          //Set reminder
                          ofstream fout;
                          fout.open(rem->file_date,ios::out);
                          rem->read();
                          fout.write((char*)rem,sizeof(*rem));
                          getch();
                          goto opt;
                 }
     case '3' :  {        cin>>sdate,;                                                  //Show events
                          ifstream fin;
                          fin.open(sdate,ios::in);
                          fin.read((char*)rem,sizeof(*rem));

                          rem->display();
                          getch();
                          goto opt;
                  }
     default  :  {
                       cout<<"Invalid option";
                       goto opt;
                 }
     }
  }
       

        
                     
    
  


