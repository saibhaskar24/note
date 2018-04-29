#include<header.h>
void main()
  {
  display view;
  char sdate[8],smonth[8],syear[10];
  remainder *rem;
  view.page1();
  opt: clrscr();
  char option=view.options();
  switch(option)
    {
     case '1' :  {        itoa(date, sdate,8);           // Check today's dashboard
                          itoa(month,smonth,8);
                          itoa(year,syear,10);
                          strcat(sdate,smonth);
                          strcat(sdate,syear);
                          ifstream fin;
                          fin.open(sdate,ios::in);
                          fin.read((char*)rem,sizeof(*rem));
       
                          rem->display();
                          getch();
                          goto opt;
                 }
     case '2' :  {                                                          //Set reminder
                          cin>>date;
                          ofstream fout;
                          fout.open(sdate,ios::out);
                          rem->read();
                          fout.write((char*)rem,sizeof(*rem));

                          getch();
                          goto opt;
                 }
     case '3' :  {        cin>>date,;                                                  //Show events
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
       

        
                     
    
  


