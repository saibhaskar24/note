#include<header.h>
void main()
  {
  display view;
  char date[8];
  remainder *rem;
  view.page1();
  opt: clrscr();
  char option=view.options();
  switch(option)
    {
     case '1' :  {                                                         // Check today's dashboard
                          strcpy(date, );
                          ifstream fin;
                          fin.open(date,ios::in);
                          fin.read((char*)rem,sizeof(*rem));
       
                          rem->display();
                          getch();
                          goto opt;
                 }
     case '2' :  {                                                          //Set reminder
                          cin>>date;
                          ofstream fout;
                          fout.open(date,ios::out);
                          rem->read();
                          fout.write((char*)rem,sizeof(*rem));

                          getch();
                          goto opt;
                 }
     case '3' :  {        cin>>date,;                                                  //Show events
                          ifstream fin;
                          fin.open(date,ios::in);
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
       

        
                     
    
  


