#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

int menu()
{

   int choice;

  mainmenu:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Where do you want to go" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> ADD patient record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> DISPLAY EXSISTING RECORDS" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> Delete a patient record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> Search for a record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<5> operations " << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<6> count number of occurrence" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<7> update a record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<8> sort a record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<9> records at the top" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<10> Exit" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\tEnter your choice:       ";
  cin >> choice;
  if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto mainmenu;
    }
  cout << endl << endl;
 if(choice ==1 || choice ==2 || choice==3 || choice ==4 || choice ==5 || choice==6 || choice ==7 || choice==8 || choice==9 || choice==10 )
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
