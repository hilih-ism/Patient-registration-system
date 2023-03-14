#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int Occurencemenu(){
int choice;

  mainmenu:
      b:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** on what attribute you want to find number of occurences" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> number of occurence by first name" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> number of occurence by sex" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> number of occurence by blood type" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> number of occurence by allocation area" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<5> number of occurence by age" << endl << endl;
   cout << "\t\t\t\t\t\t\t\t<6> number of occurence by average age" << endl << endl;//how many patients do have equal age with the average age
   cout << "\t\t\t\t\t\t\t\t<7> number of occurence by middle name" << endl << endl;
  cout<<  "\t\t\t\t\t\t\t\t<8> back"<<endl<<endl;
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
    if(choice ==1 || choice ==2 || choice==3 || choice==4 || choice==5 || choice==6 || choice==7 || choice==8 )
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

