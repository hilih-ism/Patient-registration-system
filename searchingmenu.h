#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int searchingmenu(){
int choice;

  mainmenu:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** what do you want to search" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> search by first name" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> search by card number" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> search by sex" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> search by blood type" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<5> search by average age" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<6> search by age" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<7> search by allocating center" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<8> search by middle name" << endl << endl;
  cout<<  "\t\t\t\t\t\t\t\t<9> back"<<endl<<endl;
  cout<<  "\t\t\t\t\t\t\t\t--------------------------------------------"<<endl<<endl;
  cout<<  "\t\t\t\t\t\t\t insert your choice:     ";
  cin>>choice;
   system("cls");
    if(choice ==1 || choice ==2 || choice==3 || choice==4 || choice==5 || choice==6 || choice==7 || choice==8 || choice==9 )
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

