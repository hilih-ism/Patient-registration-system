#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int oprationmenu(){
int choice;

  mainmenu:
      b:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** what do you want to calculate" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> minimum age of the patient list" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> maximum age of the patients" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> Average age of the list" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> number of patients in the hospital" << endl << endl;
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

