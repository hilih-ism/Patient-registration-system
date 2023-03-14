#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int sortemenu(){
int choice;

  mainmenu:
      b:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** how do you want to sort your your list?" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> sort by first name" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> sort by card number" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> sort by sex" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> sort by blood type" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<5> sort by age" << endl << endl;
   cout << "\t\t\t\t\t\t\t\t<6> sort by address" << endl << endl;
   cout << "\t\t\t\t\t\t\t\t<7> sort by allocation center" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<8> sort by middle name" << endl << endl;
  cout<<  "\t\t\t\t\t\t\t\t<9> back"<<endl<<endl;
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
    if(choice==1 || choice==2 || choice==3 || choice==4 || choice==5 || choice==6 || choice==7 || choice==8 || choice==9 )
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

