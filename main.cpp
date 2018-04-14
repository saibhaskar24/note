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
     case '1' :  {                                                         // Check today's dashboard
                          ifstream fin;
                          fin.open("",ios::in);
                          fin.read((char*)rem,sizeof(*rem));
       
                          rem->display();
                          getch();
                          goto opt;
                 }
     case '2' :  {                                                          //Set reminder
                          ofstream fout;
                          fout.open("",ios::app|ios::ate);
                          if(!fout)
                          {
                          cout<<"File not exist ";
                          exit(1);}
                          rem->read();
                          fout.write((char*)rem,sizeof(*rem));

                          getch();
                          goto opt;
                 }
     case '3' :  {                                                          //Show events
                          ifstream fin;
                          fin.open("",ios::in);
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
       

        
                     
    
  


