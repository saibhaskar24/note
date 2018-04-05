class display 
{
  public:
  void page1()
  {
   char b=2,a[]="welcome to beta note maker";
   clrscr();
   gotoxy(25, 12);
   for(int i=0;i<strlen(a);++i)
   {
    delay(100);
    cout<<a[i];
   }
   cout<<b;
    gotoxy(25,15);
    cout<<"press enter to continue";
    getch();
  }
  char options()
  {
   gotoxy(25,10);
    cout<<"1.check today's dashboard";
    gotoxy(25,11);
    cout<<"2.set reminder";
    gotoxy(25,12);
    cout<<"3. Show events";
    char option;
    gotoxy(25,13);
    cout<<"Enter your option";
    cin>>option;
    getch();
    return option;
  }  
  

};
  
