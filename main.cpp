#include<header.h>
void main()
  {
   display view;
  view.page1();
  opt: clrscr();
  char option=view.options();
  switch(option)
    {
     case '1' : 
     case '2' :
     case '3' :
     default  : {
                       cout<<"Invalid option";
                       goto opt;
                }
     }
  }
       

        
                     
    
  


