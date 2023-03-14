#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
int deletionmenu(){
int choice;

  mainmenu:
      b:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** what do you want to delete" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> delete the first patient record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> delete the last patient record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> delete by name" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> delete by card number" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<5> delete by sex" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<6> delete by blood type" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<7> delete by average age" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<8> delete by age" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<9> delete by emergency contact name" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<10> delete by middle name" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<11> delete by node number" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<12> delete the minimum age patient" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<13> delete the maximum age patient" << endl << endl;
  cout<<  "\t\t\t\t\t\t\t\t<14> back"<<endl<<endl;
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
    if(choice ==1 || choice ==2 || choice==3 || choice==4 || choice==5 || choice==6 || choice==7 || choice==8 || choice==9 || choice==10 || choice==11 || choice==12 || choice==13 || choice==14 )
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

