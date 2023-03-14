/*   group 5 members
    name                    IDNO
    1  Ashenafi Alebachew  1306912
    2. Birzaf Tilahun      1307411
    3. Berihun Tessema     1307139
    4. Hildana Shisema     1307582
    5. Nigist Woldemichael 1308041
    6. Yihenew Addis       1203346
    */
#include <iostream>
#include <string>
#include<windows.h>
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
#include "enterance.h"
#include "mainmenu.h"
#include "inserting.h"
#include "deletionmenu.h"
#include "searchingmenu.h"
#include "oprationmenu.h"
#include "occurencemenu.h"
#include "updatemenu.h"
#include "sortingmenu.h"
#include "topmenu.h"
using namespace std;
struct patient{
 char fname[20];
 int cardNO;
 char mname[20];
 char sex[7];
 int age;
 int phone;
 char email[15];
 char Address[20];
 char emergency_name[20];
 string nationality;
 char bloodtype[3];
 int emergency_phone;
 string allocation;
 patient *next;

};
struct patient *start=NULL;
int AverageAge();
void insertAtBeginning();
void insertAtend();
void insertAtmiddle();
void deleteAtBeginning();
void deleteAtEnd();
void deletebyFname();
void deletebyCardNO();
void deletebysex();
void deletebymname();
void deletebyemername();
void deletebyBloodtype();
void deletebyAverageAge();
void deletebyAge();
void deletebyNodenumber();
void deletebyminAge();
void deletebymaxAge();
void displayForward();
void searchbyFname();
void searchbyCardNO();
void searchbysex();
void searchbyBloodtype();
void searchbyAVGage();
void searchbyAge();
void searchbyMname();
int MinimumAge();
int maximumAge();
int AverageAge();
void Numberofrecords();
void occurencebyFname();
void occurencebySex();
void occurencebyBloodtype();
void occurencebyAge();
void occurencebyAVGage();
void occurencebyMname();
void updateFname();
void updateCardNO();
void updateSex();
void updateBloodtype();
void updateAge();
void updateAddress();
void updatePhonenumber();
void sortbyFname();
void updateMname();
void sortbyCardNO();
void sortbySex();
void sortbyBloodtype();
void sortbyage();
void sortbyAddress();
void Top10name();
void Top7cardNO();
void Top15mname();
void Top20age();

   int main()
{
    enterance();
     int checker =0;
    mainentrance:
    int navigation;

    navigation = menu();
    if(navigation==1){
            int nav;
     nav = insertingrecord();
      if(nav==1){
          int amount;
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the number of patient you wish to enter:  ";
    cin>>amount;
      for(int i=1; i<=amount; i++){
        insertAtBeginning();
      }
       checker++;
      goto mainentrance;

      }
      else if(nav==2){
            int amount1;
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the number of patient you wish to enter at the end:  ";
    cin>>amount1;
    for(int i=1; i<=amount1; i++){
        insertAtend();
    }
     checker++;
      goto mainentrance;


      }
      else if(nav==3){
            int amount2;
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the number of patient you wish to enter at the middle:  ";
    cin>>amount2;
      for(int i=1; i<=amount2; i++){
        insertAtmiddle();
    }
     checker++;
      goto mainentrance;

      }
      else{
        goto mainentrance;
      }

    }
    else if(navigation==2){
        if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There is no information to display fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();
            goto mainentrance;
          }

        else
        {
             system("cls");
             displayenterance:

               displayForward();
              goto mainentrance;
             }

        }


    else if(navigation==3){
            if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There is no information to be deleted fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          }
          else{
            top:
        int nav3;
        nav3=deletionmenu();
        if(nav3==1){
        deleteAtBeginning();
          goto top;
        }
        else if(nav3==2){
            deleteAtEnd();
            goto top;
        }
        else if(nav3==3){
            deletebyFname();
            goto top;
        }
         else if(nav3==4){
            deletebyCardNO();
            goto top;
        }
         else if(nav3==5){
            deletebysex();
            goto top;
        }
         else if(nav3==6){
            deletebyBloodtype();
            goto top;
        }
        else if(nav3==7){
            deletebyAverageAge();
            goto top;
        }
        else if(nav3==8){
            deletebyAge();
            goto top;
        }
         else if(nav3==9){
            deletebyemername();
            goto top;
        }

        else if(nav3==10){
            deletebymname();
            goto top;
        }
         else if(nav3==11){
           deletebyNodenumber();
            goto top;
        }
        else if(nav3==12){
           deletebyminAge();
            goto top;
        }
        else if(nav3==13){
           deletebymaxAge();
            goto top;
        }
        else{

            goto mainentrance;
        }
    }
    }
    else if(navigation==4){
         if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There was no information to search for fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          }
          else{
                searchingenterance:
            int nav4;
            nav4=searchingmenu();
            if(nav4==1){
                searchbyFname();
               goto searchingenterance;
            }
            else if(nav4==2){
                searchbyCardNO();
                goto searchingenterance;
            }
             else if(nav4==3){
                searchbysex();
                goto searchingenterance;
            }
            else if(nav4==4){
                searchbyBloodtype();
                goto searchingenterance;
            }
            else if(nav4==5){
                searchbyAVGage();
                goto searchingenterance;
            }
            else if(nav4==6){
                searchbyAge();
                goto searchingenterance;
            }
            else if(nav4==7){
               // searchbyAllocation();
                goto searchingenterance;
            }
            else if(nav4==8){
                searchbyMname();
                goto searchingenterance;
            }
            else{
                goto mainentrance;
            }

          }

    }
    else if(navigation==5){
        if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There is no information to do operations fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          } else{
            oprationenterance:
        int nav5;
        nav5=oprationmenu();
         if(nav5==1){
            MinimumAge();
            goto oprationenterance;
         }
         else if(nav5==2){
            maximumAge();
            goto oprationenterance;
         }
         else if(nav5==3){
            AverageAge();
            goto oprationenterance;
         }
         else if(nav5==4){
            Numberofrecords();
            goto oprationenterance;
         }
         else{
                goto mainentrance;
            }
         }


          }
    else if(navigation==6){
             if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There was no information to see the occurences fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          }
    occurenceenterance:
    int nav6=Occurencemenu();
    if(nav6==1){
    occurencebyFname();
    goto occurenceenterance;
            }
    else if(nav6==2){
        occurencebySex();
         goto occurenceenterance;
    }
        else if(nav6==3){
        occurencebyBloodtype();
         goto occurenceenterance;
    }
     else if(nav6==5){
        occurencebyAge();
         goto occurenceenterance;
    }
     else if(nav6==6){
        occurencebyAVGage();
         goto occurenceenterance;
    }
     else if(nav6==7){
        occurencebyMname();
         goto occurenceenterance;
    }
    else{
        goto mainentrance;
    }

    }
    else if(navigation==7){
                if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There is no information to be updated fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          }
          else{
            updateenterance:
        int nav7=updatemenu();
            if(nav7==1){
                updateFname();
                goto updateenterance;
            }
            else if(nav7==2){
                updateCardNO();
                goto updateenterance;
            }
             else if(nav7==3){
                updateSex();
                goto updateenterance;
            }
             else if(nav7==4){
                updateBloodtype();
                goto updateenterance;
            }
            else if(nav7==5){
                updateAge();
                goto updateenterance;
            }
             else if(nav7==6){
                updateAddress();
                goto updateenterance;
            }
            else if(nav7==7){
                updatePhonenumber();
                goto updateenterance;
            }
            else if(nav7==8){
                updateMname();
                goto updateenterance;
            }
            else{
                goto mainentrance;
            }
          }



    }
     else if(navigation==8){
                if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There is no information to be sorted fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          }
           else{
            sortenterance:
        int nav8=sortemenu();
            if(nav8==1){
                sortbyFname();
                goto sortenterance;
            }
            else if(nav8==2){
             sortbyCardNO();
                goto sortenterance;
            }
             else if(nav8==3){
               sortbySex();
                goto sortenterance;
            }
             else if(nav8==4){
                sortbyBloodtype();
                goto sortenterance;
            }
             else if(nav8==5){
              sortbyage();
                goto sortenterance;
            }
            else if(nav8==5){
              sortbyAddress();
                goto sortenterance;
            }
             else{
                goto mainentrance;
            }
           }
     }
      else if(navigation==9){
                if (checker == 0)
        {   system("cls");
            cout <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry! There is no information recorded fill information and come back!";
            cout << "\n\n\t\t\t\t\tPress any key to choose another option ...";
            getch();

            goto mainentrance;
          }
            else{
            topenterance:
        int nav9=topmenu();
            if(nav9==1){
                Top10name();
                goto topenterance;
            }
             else if(nav9==2){
              Top7cardNO();
                goto topenterance;
            }
            else if(nav9==3){
              Top15mname();
                goto topenterance;
            }
             else if(nav9==4){
              Top20age();
                goto topenterance;
            }
            else{
                goto mainentrance;
            }


           }
      }
       return 0;
}

void insertAtBeginning() {
	  patient *InsertNode=new patient;
	  cout<<endl<<"Enter first name of the patient"<<endl;
	  cin>>InsertNode->fname;
      cout<<endl<<"Enter middle name of the patient"<<endl;
	  cin>>InsertNode->mname;
      cout<<endl<<"Enter sex of patient"<<endl;
	  cin>>InsertNode->sex;
	    a:
	   cout<<endl<<"Enter AGE of patient"<<endl;
	  cin>>InsertNode->age;
   if (cin.fail() || InsertNode->age<0 || InsertNode->age>200){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto a;
    }
         b:
	   cout<<endl<<"Enter phone number"<<endl;
	  cin>>InsertNode->phone;
	  if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto b;
    }
	  cout<<endl<<"Enter email of the patient"<<endl;
	  cin>>InsertNode->email;
	  cout<<endl<<"Enter Address"<<endl;
	  cin>>InsertNode->Address;
	  c:
	  cout<<endl<<"Enter card number of the patient(5-digit)"<<endl;
	  cin>>InsertNode->cardNO;
	  	  if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto c;
    }
    for(patient *i=start; i!=NULL; i=i->next){
        if(i->cardNO==InsertNode->cardNO){
          cout<<"Error you can not inter the same two card number"<<endl;
            goto c;
        }

    }
	  cout<<endl<<"Enter Blood type of the patient"<<endl;
	  cin>>InsertNode->bloodtype;
	  Citizen:
	      int choice;
        cout << "\n\n\t Is the patient Ethiopian Citizen" ;
        cout << "\n\t---------------------------------------" ;
        cout << "\n\t\t<1> Yes  \t<2> No" ;
        cout << "\n\t\tEnter your choice:                 ";
        cin >> choice;
        if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto Citizen;
    }

        switch(choice)
        {
            case 1: InsertNode->nationality = "Ethiopian";
                    break;
            case 2: InsertNode->nationality= "Not Ethiopian";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    goto Citizen;

        }
        cout<<endl<<"Enter name of emergency contact"<<endl;
	  cin>>InsertNode->emergency_name;
	   cout<<endl<<"Enter phone number of emergency contact"<<endl;
	  cin>>InsertNode->emergency_phone;
	   allocate:
	      int choice1;
        cout << "\n\n\t where is patient's allocation center" ;
        cout << "\n\t---------------------------------------" ;
        cout << "\n\t\t<1> Emergency  \t<2> children care center" <<endl;
        cout << "\n\t\t<3> disability center  \t<4> HIV center " ;
        cout << "\n\t\tEnter your choice:                 ";
        cin >> choice1;
        if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto allocate;
    }

        switch(choice1)
        {
            case 1: InsertNode->allocation = "emergency";
                    break;
            case 2: InsertNode->allocation= " children care center";
                    break;
            case 3: InsertNode->allocation= " disability center";
                    break;
            case 4: InsertNode->allocation= " HIV center";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    goto Citizen;

        }

         system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ... ";
        Sleep(700);
        system("cls");


	  if(start==NULL)
          start=InsertNode;
       else {
          InsertNode->next=start;
          start=InsertNode;
       }
}
void insertAtend() {
	  patient *InsertNode=new patient;
	  cout<<endl<<"Enter first name of the patient"<<endl;
	  cin>>InsertNode->fname;
	  	  cout<<endl<<"Enter middle name of the patient"<<endl;
	  cin>>InsertNode->mname;
	  	  cout<<endl<<"Enter sex of patient"<<endl;
	  cin>>InsertNode->sex;
	    a:
	   cout<<endl<<"Enter AGE of patient"<<endl;
	  cin>>InsertNode->age;
	  if (cin.fail() || InsertNode->age<0 || InsertNode->age>200){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto a;
    }
	   cout<<endl<<"Enter phone number"<<endl;
	  cin>>InsertNode->phone;
	  cout<<endl<<"Enter email of the patient"<<endl;
	  cin>>InsertNode->email;
	  cout<<endl<<"Enter Address"<<endl;
	  cin>>InsertNode->Address;
	    v:
	  cout<<endl<<"Enter card number of the patient(5-digit)"<<endl;
	  cin>>InsertNode->cardNO;
	   if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto v;
    }
    for(patient *i=start; i!=NULL; i=i->next){
        if(i->cardNO==InsertNode->cardNO){
          cout<<"Error you can not inter the same two card number"<<endl;
            goto v;
        }

    }
      cout<<endl<<"Enter Blood type of the patient"<<endl;
	  cin>>InsertNode->bloodtype;
	  Citizen:
	      int choice;
        cout << "\n\n\t Is the patient Ethiopian Citizen" ;
        cout << "\n\t---------------------------------------" ;
        cout << "\n\t\t<1> Yes  \t<2> No" ;
        cout << "\n\t\tEnter your choice:                 ";
        cin >> choice;
         if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto Citizen;
    }

        switch(choice)
        {
            case 1: InsertNode->nationality = "Ethiopian";
                    break;
            case 2: InsertNode->nationality= "Not Ethiopian";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    goto Citizen;

        }
        cout<<endl<<"Enter name of emergency contact"<<endl;
	  cin>>InsertNode->emergency_name;
	   cout<<endl<<"Enter phone number of emergency contact"<<endl;
	  cin>>InsertNode->emergency_phone;
	   allocate:
	      int choice1;
        cout << "\n\n\t where is patient's allocation center" ;
        cout << "\n\t---------------------------------------" ;
        cout << "\n\t\t<1> Emergency  \t<2> children care center" <<endl;
        cout << "\n\t\t<3> disability center  \t<4> HIV center " ;
        cout << "\n\t\tEnter your choice:                 ";
        cin >> choice1;
        if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto allocate;
    }

        switch(choice1)
        {
            case 1: InsertNode->allocation = "emergency";
                    break;
            case 2: InsertNode->allocation= " children care center";
                    break;
            case 3: InsertNode->allocation= " disability center";
                    break;
            case 4: InsertNode->allocation= " HIV center";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    goto Citizen;

        }

         system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ... ";
        Sleep(700);
        system("cls");

	  InsertNode->next=NULL;
	   if(start==NULL)
          start=InsertNode;
       else {
          patient *temp=start;
          while(temp->next!=NULL) {
              temp=temp->next;
          }
          temp->next=InsertNode;
       }
}
void insertAtmiddle() {
	  patient *InsertNode=new patient;
	   cout<<endl<<"Enter first name of the patient"<<endl;
	  cin>>InsertNode->fname;
	  	  cout<<endl<<"Enter middle name of the patient"<<endl;
	  cin>>InsertNode->mname;
	  	  cout<<endl<<"Enter sex of patient"<<endl;
	  cin>>InsertNode->sex;
	    a:
	   cout<<endl<<"Enter AGE of patient"<<endl;
	  cin>>InsertNode->age;
	  if(InsertNode->age<0 || InsertNode->age>200){
        cout<<"invalid input insert agian";
        goto a;
	  }
	   cout<<endl<<"Enter phone number"<<endl;
	  cin>>InsertNode->phone;
	  cout<<endl<<"Enter email of the patient"<<endl;
	  cin>>InsertNode->email;
	  cout<<endl<<"Enter Address"<<endl;
	  cin>>InsertNode->Address;
	  x:
	  cout<<endl<<"Enter card number of the patient(5-digit)"<<endl;
	  cin>>InsertNode->cardNO;
	  if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto x;
    }
    for(patient *i=start; i!=NULL; i=i->next){
        if(i->cardNO==InsertNode->cardNO){
          cout<<"Error you can not inter the same two card number"<<endl;
            goto x;
        }

    }
      cout<<endl<<"Enter Blood type of the patient"<<endl;
	  cin>>InsertNode->bloodtype;
	  Citizen:
	      int choice;
        cout << "\n\n\t Is the patient Ethiopian Citizen" ;
        cout << "\n\t---------------------------------------" ;
        cout << "\n\t\t<1> Yes  \t<2> No" ;
        cout << "\n\t\tEnter your choice:                 ";
        cin >> choice;
         if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto Citizen;
    }

        switch(choice)
        {
            case 1: InsertNode->nationality = "Ethiopian";
                    break;
            case 2: InsertNode->nationality= "Not Ethiopian";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    goto Citizen;

        }
        cout<<endl<<"Enter name of emergency contact"<<endl;
	  cin>>InsertNode->emergency_name;
	   cout<<endl<<"Enter phone number of emergency contact"<<endl;
	  cin>>InsertNode->emergency_phone;
	   allocate:
	      int choice1;
        cout << "\n\n\t where is patient's allocation center" ;
        cout << "\n\t---------------------------------------" ;
        cout << "\n\t\t<1> Emergency  \t<2> children care center" <<endl;
        cout << "\n\t\t<3> disability center  \t<4> HIV center " ;
        cout << "\n\t\tEnter your choice:                 ";
        cin >> choice1;
        if (cin.fail()){
        cout<<endl<<"Invalid Input"<<endl;
        cin.clear();
        cin.ignore();
        goto allocate;
    }

        switch(choice1)
        {
            case 1: InsertNode->allocation = "emergency";
                    break;
            case 2: InsertNode->allocation= " children care center";
                    break;
            case 3: InsertNode->allocation= " disability center";
                    break;
            case 4: InsertNode->allocation= " HIV center";
                    break;
           default: cout << "\n\t\t\t\t\t\t\tWrong Input" << endl;
                    cout << "\t\t\t\t\t\t\tPress any key to choose another option ...";
                    goto Citizen;

        }

         system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSaved ... ";
        Sleep(700);
        system("cls");


	  if(start==NULL) {
			start=InsertNode;
	  }
	  else {
			 char new_patientname[25];
			 cout<<"Enter the name of the patient that you want to add before the new patient"<<endl;
			 cin>>new_patientname;
			 for(patient *i=start;i!=NULL;i=i->next) {
				  if(strcmp(new_patientname,i->fname)==0) {
					 if(i->next==NULL)  {
						 i->next=InsertNode;

                }
					 else {
                        InsertNode->next=i->next;
						i->next=InsertNode;

					 }
				  }
			}
	  }
}
void deleteAtBeginning() {
	  if(start==NULL){
		  cout<<endl<<"patient record list is empty"<<endl;
	  }
	  else if(start->next==NULL)
	  {
			start=NULL;
			cout<<"deleted successfully"<<endl;

	  }
	  else
	  {
			patient *temp=start;
			start=start->next;
			temp->next=NULL;
			cout<<endl<<"YOU DELETED "<<temp->fname<<" from the record"<<endl;
			delete temp;
	  }
	  cout << "\t\t\t\t\t\tPress any key to continue   ";
    getch();

}

void deleteAtEnd() {
	 if(start==NULL ){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
		  cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();


	  }
	  else if(start->next==NULL)
	  {
			start=NULL;
			cout<<"deleted successfully"<<endl;
            cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();

	  }
	  else
	  {
			patient *temp1, *temp2;
			temp1=start;
			while(temp1->next!=NULL){
           temp2=temp1;
           temp1=temp1->next;
			}
			temp2->next=NULL;
			cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
			delete temp1;
			cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();

	  }
}
void deletebyFname(){
int found=0;
     if(start==NULL){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
		  found++;
        cout << "\t\t\t\t\t\tPress any key to continue   ";
        getch();
     }
	  else
	  {
	       char key[20];
	      cout<<"enter the first name of the patient that you want to delete"<<endl;
          cin>>key;
          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(strcmp(key,temp1->fname)==0) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     found++;
                     break;

                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                      found++;
                     break;

                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                     break;
                       cout << "\t\t\t\t\t\tPress any key to continue   ";
                         getch();

                 }
                  found++;
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }

				  }

			}

        if(found==0){
          cout<<"there is no such first name in the list"<<endl;
          cout << "\t\t\t\t\t\tPress any key to continue   ";
                         getch();

        }



	  }



void deletebyCardNO(){
 int found=0;
     if(start==NULL){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
            found++;
		     cout << "\t\t\t\t\t\tPress any key to continue   ";
                        getch();
}
	  else
	  {
	       double key;
	      cout<<"enter the card number that you want to delete"<<endl;
          cin>>key;
          int found=0;
          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(temp1->cardNO==key) {
                 if(temp1->next==NULL) {
                        found++;
                     deleteAtEnd();
                      found++;
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                      found++;
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                     found++;
                     break;
                      cout << "\t\t\t\t\t\tPress any key to continue   ";
                        getch();
                 }
                  found++;
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }
            found++;

				  }

			}

        if(found==0){
          cout<<"there is no such card number in the list"<<endl;
             cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();
        }



	  }


void deletebysex(){
  int found=0;
     if(start==NULL){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
		   found++;
		    cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();
     }
	  else
	  {
	       char key[20];
	      cout<<"enter gender of the patient that you want to delete"<<endl;
          cin>>key;
          int found=0;
          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(strcmp(key,temp1->sex)==0) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                     break;
                 }
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }
					 found++;
				  }

			}

        if(found==0)
            cout<<"there is no such gender in the list"<<endl;
             cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();

}
void deletebymname(){
     int found=0;
     if(start==NULL){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
		   cout << "\t\t\t\t\t\tPress any key to continue   ";
            getch();
            found++;
     }
	  else
	  {
	       char key[20];
	      cout<<"enter the middle name of the patient that you want to delete"<<endl;
          cin>>key;

          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(strcmp(key,temp1->mname)==0) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                     break;
                 }

            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }

				  }
				   found++;

			}

        if(found==0){
            cout<<"there is no such middle name in the list"<<endl;
             cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();
        }


}
void deletebyBloodtype(){
    int found=0;
 if(start==NULL){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
		   cout << "\t\t\t\t\t\tPress any key to continue   ";
         getch();
         found++;
 }
	  else
	  {
	       char key[20];
	      cout<<"enter the first name of the patient that you want to delete"<<endl;
          cin>>key;
          int found=0;
          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(strcmp(key,temp1->bloodtype)==0) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                     break;
                 }
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }
					 found++;
				  }

			}


      if(found==0)
            cout<<"there is no such blood type in the list"<<endl;
            cout << "\t\t\t\t\t\tPress any key to continue   ";
         getch();


	  }
void deletebyAverageAge(){
  int temp=AverageAge();
    int found=0;
     if(start==NULL)
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
	  else
	  {

          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(temp1->age < temp) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED ages below the average age"<<endl;
                     delete temp1;
                     break;
                 }
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }
					 found++;
				  }

			}

        if(found==0)
            cout<<"there is no such first name in the list"<<endl;
             cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();


}
void deletebyAge(){
       int found=0;
      if(start==NULL){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
		    cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();
      }
	  else
	  {
	       int key;
	      cout<<"enter the age of the patient that you want to delete"<<endl;
          cin>>key;

          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(key==temp1->age) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                     break;
                     cout << "\t\t\t\t\t\tPress any key to continue   ";
                      getch();
                 }
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }
					 found++;
				  }

			}

        if(found==0){
            cout<<"there is no such age in the list"<<endl;
             cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();
        }

}
void deletebyNodenumber(){
    int nodenumber;
    patient *index=start;
    patient *del;
cout<<"enter the node number that you want to delete"<<endl;
cin>>nodenumber;
for(int i=1; i<nodenumber-2; i++){
    index=index->next;
}
 del=index->next;
 index->next=del->next;
 del->next=NULL;
 cout<<"you have successfully deleted "<<del->fname<<" from the list";
 delete del;
 cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();
}
void deletebyemername(){
int found=0;
     if(start==NULL){
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
		  found++;
        cout << "\t\t\t\t\t\tPress any key to continue   ";
        getch();
     }
	  else
	  {
	       char key[20];
	      cout<<"enter emergency name of the patient that you want to delete"<<endl;
          cin>>key;
          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(strcmp(key,temp1->emergency_name)==0) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     found++;
                     break;

                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                      found++;
                     break;

                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                     break;
                       cout << "\t\t\t\t\t\tPress any key to continue   ";
                         getch();

                 }
                  found++;
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }

				  }

			}

        if(found==0){
          cout<<"there is no such emergency contact name in the list"<<endl;
          cout << "\t\t\t\t\t\tPress any key to continue   ";
                         getch();

        }



	  }
void deletebyminAge(){

int temp=MinimumAge();
    int found=0;
     if(start==NULL){

      cout<<endl<<"the list is empty, cannot delete"<<endl;
		  cout << "\t\t\t\t\t\tPress any key to continue   ";
             getch();
     }

	  else
	  {

          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(temp1->age==temp) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     found++;
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                      found++;
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                     delete temp1;
                        break;
                 }
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }
					 found++;
				  }

			}

        if(found==0)
            cout<<"there is no such first name in the list"<<endl;
             cout << "\t\t\t\t\t\tPress any key to continue   "<<endl;
             getch();

}
void deletebymaxAge(){

int temp=maximumAge();
    int found=0;
     if(start==NULL){
        cout<<endl<<"the list is empty, cannot delete"<<endl;
		  cout << "\t\t\t\t\t\tPress any key to continue   "<<endl;
             getch();


     }

	  else
	  {

          patient *temp1=start, *temp2=start;
         while(temp1!=NULL) {
            if(temp1->age==temp) {
                 if(temp1->next==NULL) {
                     deleteAtEnd();
                     found++;
                     break;
                 }
                 else if(temp1==start) {
                     deleteAtBeginning();
                     found++;
                     break;
                 }
                 else {
                     temp2->next=temp1->next;
                     temp1->next=NULL;
                     cout<<endl<<"YOU DELETED "<<temp1->fname<<endl;
                      found++;
                     delete temp1;
                     break;
                 }
                  found++;
            }
            else {
                 temp2=temp1;
                 temp1=temp1->next;
            }
					 found++;
				  }

			}

        if(found==0)
            cout<<"there is no such first name in the list"<<endl;
             cout << "\t\t\t\t\t\tPress any key to continue   "<<endl;
             getch();

}
void swapvalue(patient *i,patient *j)
{
    patient *temp = new patient;
    strcpy(temp->fname,i->fname);
    strcpy(temp->mname,i->mname);
    temp->cardNO,i->cardNO;
    strcpy(temp->sex,i->sex);
    strcpy(temp->email,i->email);
     strcpy(temp->Address,i->Address);
    temp->age=i->age;
    //strcpy(temp->nationality,i->nationality);
   // strcpy(temp->allocation=i->allocation);
    strcpy(temp->bloodtype,i->bloodtype);
    strcpy(temp->emergency_name,i->emergency_name);
     temp->phone=i->phone;
     temp->emergency_phone=i->emergency_phone;


   strcpy(i->fname,j->fname);
    strcpy(i->mname,j->mname);
    i->cardNO,j->cardNO;
    strcpy(i->sex,j->sex);
    strcpy(i->email,j->email);
    strcpy(i->Address,j->Address);
    i->age=j->age;
    //strcpy(i->nationality,j->nationality);
    //strcpy(i->allocation=j->allocation);
    strcpy(i->bloodtype,j->bloodtype);
    strcpy(i->emergency_name,j->emergency_name);
     i->phone=j->phone;
     i->emergency_phone=j->emergency_phone;

      strcpy(j->fname,temp->fname);
    strcpy(j->mname,temp->mname);
    j->cardNO,temp->cardNO;
    strcpy(j->sex,temp->sex);
    strcpy(j->email,temp->email);
    strcpy(j->Address,temp->Address);;
    i->age=temp->age;
    //strcpy(j->nationality,temp->nationality);
    //strcpy(j->allocation=temp->allocation);
    strcpy(j->bloodtype,temp->bloodtype);
    strcpy(j->emergency_name,temp->emergency_name);
     j->phone=temp->phone;
     j->emergency_phone=temp->emergency_phone;
}
void displayForward(){
  int num=1;
if(start==NULL){
		 cout<<endl<<"list is empty"<<endl;
		 cout << "\t\t\t\t\t\tPress any key to return   ";
            getch();
}
	 else {
		 cout<<endl<<"List of the recorded patients"<<endl;
   for(patient *i = start; i!=NULL; i=i->next)
       {
             cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;

}
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

	 }
 }

void searchbyFname(){
     int found=0;
     int num=1;
     if(start==NULL )
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
        else
	  {
	       char key[20];
	      cout<<"enter the first name of the patient that you want to search for"<<endl;
          cin>>key;
          for(patient *i=start;i!=NULL;i=i->next) {
            if(strcmp(key,i->fname)==0){
                cout<<endl<<"here is the result found"<<endl;
                  cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;
              found++;
            }

            }
            if(found==0){

                cout<<endl<<"no such first names exists"<<endl;

            }

          cout << "\t\t\t\t\t\tPress any key to return   ";
               getch();
          }

	  }
void searchbyCardNO(){
    int num=1;
    int found=0;
    double key;
    cout<<"enter card number that you want to search for"<<endl;
    cin>>key;
    for(patient *i=start; i!=NULL; i=i->next){
        if(key==i->cardNO){
            cout<<endl<<"here is the result found"<<endl;
                  cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age:"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
             num++;
             found++;
        }
    }
    if(found==0){
        cout<<"there is no patient with such card number"<<endl;
    }
    cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

}
void searchbysex(){
    int num=1;
    int found=0;
    char key[20];
    cout<<"enter sex that you want to search for"<<endl;
    cin>>key;
    for(patient *i=start; i!=NULL; i=i->next){
        if(strcmp(key,i->sex)==0){
            cout<<endl<<"here is the result found"<<endl;
                  cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age:"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
             num++;
             found++;
        }
    }
    if(found==0){
        cout<<"there is no patient with such nationality"<<endl;
    }
    cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();


}
void searchbyBloodtype(){
 int num=1;
    int found=0;
    char key[3];
    cout<<"enter blood type that you want to search for"<<endl;
    cin>>key;
    for(patient *i=start; i!=NULL; i=i->next){
        if(strcmp(key,i->bloodtype)==0){
            cout<<endl<<"Here is the result found"<<endl;
                  cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
             num++;
             found++;
        }
    }
    if(found==0){
        cout<<"there is no patient with such nationality"<<endl;
    }
    cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();




}
void searchbyAVGage(){
    int num=1;
    cout<<"Here is the result found patients that have the same age with the average age"<<endl;
     int temp=AverageAge();
  for(patient *i=start; i!=NULL; i=i->next){
    if(i->age==temp){
       cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

                  cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
             num++;
    }
  }


 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();




}
void searchbyAge(){
    int num=1;
    int key;
    cout<<"enter age value to be searched in the list"<<endl;
    cin>>key;
  for(patient *i=start; i!=NULL; i=i->next){
    if(i->age==key){
       cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

                  cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
             num++;
    }
  }
  if(num==1)
    cout<<"there is no patient in the list with that age"<<endl;


 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();




}
void searchbyMname(){
     int found=0;
     int num=1;
     if(start==NULL)
		  cout<<endl<<"the list is empty, cannot delete"<<endl;
        else
	  {
	       char key[20];
	      cout<<"enter the middle name of the patient that you want to search for"<<endl;
          cin>>key;
          for(patient *i=start;i!=NULL;i=i->next) {
            if(strcmp(key,i->mname)==0){
                cout<<endl<<"here is the result found"<<endl;
                  cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"emergency contact name:"<<left<<setw(15)<<i->emergency_name<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"emergency contact phone:"<<left<<setw(15)<<i->emergency_phone<<setw(27)<<"|"<<endl;

               cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;
              found++;
            }

            }
            if(found==0){

                cout<<endl<<"no such middle names exists"<<endl;

            }

          cout << "\t\t\t\t\t\tPress any key to return   ";
               getch();
          }

	  }
int MinimumAge(){
  int temp=start->age;
    char name[20];
   for(patient *i=start; i!=NULL; i=i->next){
       if(temp >= i->age){
        temp=i->age;
        strcpy(name,i->fname);
        break;
       }
   }
   cout<<"minimum age of the recorded patient list is:"<<temp<<endl;
   cout<<"the patient's name with that minimum age is: "<<name<<endl;

 cout << "\t\t\t\t\t\tPress any key to continue   ";
    getch();


return temp;
}
int maximumAge(){
  int temp=start->age;
  char key[20];
   for(patient *i=start; i!=NULL; i=i->next){
       if(temp <= i->age){
        temp=i->age;
        strcpy(key,i->fname);
        break;
       }
   }
   cout<<"maximum age of the recorded patient list is:"<<temp<<endl;
   cout<<"the patient's name with that maximum age is:"<<key<<endl;

   cout << "\t\t\t\t\t\tPress any key to continue   ";
    getch();


return temp;
}
int AverageAge(){
    int sum=0;
    int counter=0;
    int avg;
   for(patient *i=start; i!=NULL; i=i->next){
     sum=sum+i->age;
     counter++;
   }
  avg=sum/counter;

   cout<<"Approximate Average age of the recorded patient list is: "<<avg<<endl;
       cout << "\t\t\t\t\t\tPress any key to continue   ";
    getch();
    return avg;
}
void Numberofrecords(){
  int counter=0;
   for(patient *i=start; i!=NULL; i=i->next){
     counter++;
   }
   cout<<"the number of patient records in the hospital is: "<<counter<<endl;
   cout << "\t\t\t\t\t\tPress any key to continue   "<<endl;
    getch();

 }
void occurencebyFname(){
 int counter=0;
 char key[20];
 cout<<"enter the first name that you want to find the number of occurence"<<endl;
 cin>>key;
 for(patient *i=start; i!=NULL; i=i->next){
    if(strcmp(key, i->fname)==0)
        counter++;

 }
cout<<"there are "<<counter<<" patients which have the same first name with "<<key<<endl<<endl;
cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

 }
void occurencebySex(){
 int counter=0;
 char key[20];
 cout<<"enter the sex that you want to find the number of occurrence"<<endl;
 cin>>key;
 for(patient *i=start; i!=NULL; i=i->next){
    if(strcmp(key, i->sex)==0)
        counter++;

 }
cout<<"there are "<<counter<<" "<<key<<" patients in the recored "<<endl<<endl;
cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

 }
void occurencebyBloodtype(){
 int counter=0;
 char key[20];
 cout<<"enter the blood type that you want to find the number of occurrence"<<endl;
 cin>>key;
 for(patient *i=start; i!=NULL; i=i->next){
    if(strcmp(key, i->bloodtype)==0)
        counter++;

 }
cout<<"there are "<<counter<<" "<<key<<" blood type patients in the recored "<<endl<<endl;
cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

 }
void occurencebyAge(){
 int counter=0;
 int key;
 cout<<"enter the Age value that you want to find the number of occurrence"<<endl;
 cin>>key;
 for(patient *i=start; i!=NULL; i=i->next){
    if((key == i->age))
        counter++;

 }
cout<<"there are "<<counter<<" "<<key<<" old year patients in the recored "<<endl<<endl;
cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

 }
void occurencebyAVGage(){
 int temp=AverageAge();
int counter=0;
 for(patient *i=start; i!=NULL; i=i->next){
    if(i->age==temp)
        counter++;

 }
cout<<endl<<"there are "<<counter<<" patients who have equal age with the average age "<<endl<<endl;
cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



}
void occurencebyMname(){
 int counter=0;
 char key[20];
 cout<<"enter the middle name that you want to find the number of occurrence"<<endl;
 cin>>key;
 for(patient *i=start; i!=NULL; i=i->next){
    if(strcmp(key, i->mname)==0)
        counter++;

 }
cout<<endl<<"there are "<<counter<<" patients which have the same middle name with "<<key<<endl<<endl;
cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

 }
void updateFname(){
 char key[20];
 char newkey[20];
 int found=0;
 cout<<"enter the first name of the patient that you want to update"<<endl;
 cin>>key;
 cout<<"enter the new name that is going to substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(strcmp(key, i->fname)==0){
   strcpy(i->fname,newkey);
    cout<<"Done! you have succesfully changed "<<key<<" to "<<i->fname;
    found++;
  }


 }
   if(found==0)
    cout<<"there is no such first name the list";

 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void updateCardNO(){
 double key;
 double newkey;
 int found=0;
 cout<<"enter the card number of the patient that you want to update"<<endl;
 cin>>key;
 cout<<"enter the new card number that is going to substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(key == i->cardNO){
   i->cardNO=newkey;
    cout<<"Done! you have successfully changed the card number "<<key<<" to "<<i->cardNO;
  }


 }
 if(found==0)
    cout<<"there is no such card number in the list";

 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void updateSex(){
 char key[20];
 char newkey[10];
 int found=0;
 cout<<"enter the name of the patient that you want to update the sex"<<endl;
 cin>>key;
 cout<<"enter the new gender that is going to be substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(strcmp(key, i->fname)==0){
   strcpy(i->sex,newkey);
    cout<<"Done! you have successfully updated the gender of "<<key<<" to "<<i->sex;
  }


 }
 if(found==0)
    cout<<"there is no such first name the list";

 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void updateBloodtype(){
 char key[20];
 char newkey[3];
 cout<<"enter the name of the patient that you want to update the blood type"<<endl;
 cin>>key;
 cout<<"enter the new blood type that is going to be substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(strcmp(key, i->fname)==0){
   strcpy(i->bloodtype,newkey);
    cout<<"Done! you have successfully updated the blood type of "<<key<<" to "<<i->bloodtype;
  }


 }

 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void updateAge(){
 char key[20];
 int newkey;
 cout<<"enter the name of the patient that you want to update the age"<<endl;
 cin>>key;
 cout<<"enter the new age that is going to be substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(strcmp(key, i->fname)==0){
   i->age=newkey;
    cout<<"Done! you have successfully updated the age of "<<key<<" to "<<i->age;
  }


 }

 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void updateAddress(){
 double key;
 char newkey[20];
 int found=0;
 cout<<"enter the card number of the patient that you want to update the address"<<endl;
 cin>>key;
 cout<<"enter the new address that is going to substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(key==i->cardNO){
   strcpy(i->Address,newkey);
    cout<<"Done! you have successfully updated the Address of the patient with card number "<<key<<" to "<<i->Address;
    found++;
  }


 }
 if(found==0){
    cout<<"there is no such card number in the list";
 }
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void updatePhonenumber(){
 double key;
 double newkey;
 int found=0;
 cout<<"enter the card number of the patient that you want to update the address"<<endl;
 cin>>key;
 cout<<"enter the new phone number that is going to substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(key == i->cardNO){
   i->phone==newkey;
    cout<<"Done! you have successfully updated the phone number of the patient with card number "<<key<<" to "<<i->phone;
  }


 }
 if(found==0)
    cout<<"there is no such first name the list";

 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void updateMname(){
 double key;
 char newkey[20];
 int found=0;
 cout<<"enter the card number of the patient that you want to update"<<endl;
 cin>>key;
 cout<<"enter the new middle name that is going to substitute"<<endl;
 cin>>newkey;
 for(patient *i=start; i!=NULL; i=i->next){
  if(key==i->cardNO){
   strcpy(i->mname,newkey);
    cout<<"Done! you have successfully changed middle name of "<<key<<" to "<<i->mname;
    found++;
  }


 }
if(found==0)
    cout<<"there is no such first name the list";
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();



 }
void sortbyFname()
{
     if(start==NULL)
        cout<<endl<<"the list is empty, cannot sort."<<endl<<endl;
    else if (start -> next == NULL)
        cout<<endl<<"the recorded list is sorted successfully!"<<endl<<endl;
    else
    {
        for(patient *i=start; i->next!=NULL; i=i->next)
            for(patient *j=i->next; j!=NULL; j=j->next)
                if  (strcmp(i -> fname , j -> fname)>0)
                    swapvalue(i,j);
    }


int num=1;
       cout<<"here is the list when it sorted alphabetically"<<endl;
 for(patient *i=start; i!=NULL; i=i->next){

     cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;

}
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();
}
void sortbyCardNO()
{
    if(start==NULL)
        cout<<endl<<"the list is empty, cannot sort."<<endl<<endl;
    else if (start -> next == NULL)
        cout<<endl<<"the recorded list is sorted successfully!"<<endl<<endl;
    else
    {
        for(patient *i=start; i->next!=NULL; i=i->next)
            for(patient *j=i->next; j!=NULL; j=j->next)
                if  (i -> cardNO > j -> cardNO)
                    swapvalue(i,j);
    }


int num=1;
 cout<<"Here is the result when the list sort in card number"<<endl;
 for(patient *i=start; i!=NULL; i=i->next){

     cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

            cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;

}
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();
}
void sortbySex()
{
    if(start==NULL)
        cout<<endl<<"the list is empty, cannot sort."<<endl<<endl;
    else if (start -> next == NULL)
        cout<<endl<<"the recorded list is sorted successfully!"<<endl<<endl;
    else
    {
        for(patient *i=start; i->next!=NULL; i=i->next)
            for(patient *j=i->next; j!=NULL; j=j->next)
                if  (strcmp(i ->sex , j -> sex)>0)
                    swapvalue(i,j);
    }

int num=1;
cout<<"Here is the result when the list sort in sex"<<endl;
 for(patient *i=start; i!=NULL; i=i->next){

     cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

                 cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;

}
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();
}
void sortbyBloodtype()
{
    if(start==NULL)
        cout<<endl<<"the list is empty, cannot sort."<<endl<<endl;
    else if (start -> next == NULL)
        cout<<endl<<"the recorded list is sorted successfully!"<<endl<<endl;
    else
    {
        for(patient *i=start; i->next!=NULL; i=i->next)
            for(patient *j=i->next; j!=NULL; j=j->next)
                if  (strcmp(i ->bloodtype , j -> bloodtype)>0)
                    swapvalue(i,j);
    }

int num=1;
cout<<"Here is the result when the list sort by blood type"<<endl;
 for(patient *i=start; i!=NULL; i=i->next){

     cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

                 cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;

}
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();
}
void sortbyage()
{
    if(start==NULL)
        cout<<endl<<"the list is empty, cannot sort."<<endl<<endl;
    else if (start -> next == NULL)
        cout<<endl<<"the recorded list is sorted successfully!"<<endl<<endl;
    else
    {
        for(patient *i=start; i->next!=NULL; i=i->next)
            for(patient *j=i->next; j!=NULL; j=j->next)
                if  (i ->age > j ->age)
                    swapvalue(i,j);
    }


int num=1;
cout<<"Here is the result when the list sort by age"<<endl;
 for(patient *i=start; i!=NULL; i=i->next){

     cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

                 cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;

}
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();
}
void sortbyAddress(){
 if(start==NULL)
        cout<<endl<<"\t\tMembers' list is empty, cannot sort."<<endl<<endl;
    else if (start -> next == NULL)
        cout<<endl<<"\t\tMembers' list sorted successfully!"<<endl<<endl;
    else
    {
        for(patient *i=start; i->next!=NULL; i=i->next)
            for(patient *j=i->next; j!=NULL; j=j->next)
                if  (strcmp(i ->Address , j -> Address)>0)
                    swapvalue(i,j);
    }

int num=1;
cout<<"Here is the result when the list sort by address"<<endl;
 for(patient *i=start; i!=NULL; i=i->next){

     cout << "\n------------------------------------------------------------------------------"<<endl;
             cout<<setw(5)<<" "<<setw(27)<<"card Number:"<<left<<setw(15)<<i->cardNO<<setw(27)<<"|"<<endl;

             cout<<left<<setw(5)<<num<<left<<setw(27)<< "First name:"<<left<<setw(15)<<i->fname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Middle name:"<<left<<setw(15)<<i->mname<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Age"<<left<<setw(15)<<i->age<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Gender:"<<left<<setw(15)<<i->sex<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Phone Number:"<<left<<setw(15)<<i->phone<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Email Address:"<<left<<setw(15)<<i->email<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Street Address:"<<left<<setw(15)<<i->Address<<setw(27)<<"|"<<endl;

             cout<<setw(5)<<" "<<setw(27)<<"Nationality:"<<left<<setw(15)<<i->nationality<<setw(27)<<"|"<<endl;

              cout<<setw(5)<<" "<<setw(27)<<"Blood type:"<<left<<setw(15)<<i->bloodtype<<setw(27)<<"|"<<endl;

                 cout<<setw(5)<<" "<<setw(27)<<"Allocation center:"<<left<<setw(15)<<i->allocation<<setw(27)<<"|"<<endl;
              num++;

}
 cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

}
void Top10name(){
    Numberofrecords();
    cout<<"top ten first names are: "<<endl;
     patient *j=start;
for(int i=1; i<=10; i++){

 cout<<j->fname<<endl;
      j=j->next;
}


cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();


}
void Top7cardNO(){
    Numberofrecords();
    cout<<"top ten card numbers are: "<<endl;
     patient *j=start;
for(int i=1; i<=7; i++){

 cout<<j->cardNO<<endl;
      j=j->next;
}


cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();


}
void Top15mname(){
    Numberofrecords();
    cout<<"top ten middle names are: "<<endl;
     patient *j=start;
for(int i=1; i<=15; i++){

 cout<<j->mname<<endl;
      j=j->next;
}


cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();


}
void Top20age(){
    Numberofrecords();
    cout<<"top ten ages are: "<<endl;
  patient *temp1;
for(patient *i=start; i!=NULL; i=i->next)
        {
                for(patient *j=start->next; j!=NULL; j=j->next)
                {
                        if(i->age < j->age)
                        {
                                temp1=j;
                                j=i;
                                i=temp1;

                        }
                }
        }
        patient *x=start;
   for(int i=1; i<=20; i++){

 cout<<x->age<<endl;
      x=x->next;
}
cout << "\t\t\t\t\t\tPress any key to return   ";
    getch();

}



