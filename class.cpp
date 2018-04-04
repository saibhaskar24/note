class enterence 
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
  }
};
