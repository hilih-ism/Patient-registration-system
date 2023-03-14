#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int topmenu(){
int choice;

  mainmenu:
      b:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** the top lists" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> top 10 patient names" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> top 7 card  number" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> top 15 middle names" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> top 20 age" << endl << endl;
  cout<<  "\t\t\t\t\t\t\t\t<5> back"<<endl<<endl;
  cout<<  "\t\t\t\t\t\t\t\t--------------------------------------------"<<endl<<endl;
  cout<<  "\t\t\t\t\t\t\t insert your choice:     ";
  cin>>choice;
  if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto b;
    }
   system("cls");
    if(choice ==1 || choice ==2 || choice==3 || choice==4 || choice==5 )
 {

  return choice;
 }
   else
   {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto mainmenu;
   }

}

