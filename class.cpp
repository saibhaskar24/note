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
  class set_remainder
{
int d,m,y;
char s[100],s1[100];
public:
void read()
{
cout<<"Enter title:"<<endl;
gets(s);
cout<<"Enter description:"<<endl;
gets(s1);
cout<<"Enter the date to be remainded"<<endl;
cin>>d;
cout<<"Enter the month in number"<<endl;
cin>>m;
cout<<"Enter the year in numbers"<<endl;
cin>>y;
}
void display()
{
time_t t;
t=time(0);
struct tm *k;
k=localtime(&t);
if((k->tm_year+1900)==y){
if(k->tm_mon==m){
if(k->tm_mday==d)
cout<<s<<endl;
cout<<s1<<endl;
}}
}
};
