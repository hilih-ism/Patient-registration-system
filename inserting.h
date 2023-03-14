#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

int insertingrecord(){
 int choice;

  mainmenu:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Where do you want to insert the record" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> At the beginning" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> At the end of the record" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> At the middle of the record" << endl << endl;
  cout<<  "\t\t\t\t\t\t\t\t<4> back"<<endl<<endl;
  cout<<  "\t\t\t\t\t\t\t\t--------------------------------------------"<<endl<<endl;
  cout<<  "\t\t\t\t\t\t\t insert your choice:     ";
  cin>>choice;
   system("cls");

 if(choice ==1 || choice ==2 || choice==3 || choice==4  )
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





