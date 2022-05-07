#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class bank{
   char name[50];
   long int amt;
   public: 
      long int accno;
      bank(){}
      void openacc(){
         cout<<"enter name: ";
         cin>>name;
         cout<<"enter account number: ";
         cin>>accno;
         cout<<"enter opening amt: ";
         cin>>amt;
      }
      void deposit(){
         long int addamt;
         cout<<"enter amount to deposit: ";
         cin>>addamt;
         amt=amt+addamt;
      }
      void withdraw(){
         long int witamt;
         cout<<"enter amt to withdraw: ";
         cin>>witamt;
         if(witamt<=amt){
            amt=amt-witamt;
            cout<<"withraw successful"<<endl;
         }
         else{
            cout<<"insufficient balance"<<endl;
         }
      }
      void displaydata(){
         cout<<endl<<"name: "<<name<<endl;
         cout<<"acc no: "<<accno<<endl;
         cout<<"balance: "<<amt<<endl;
      }
};
void console(){
   cout<<"________________bank__________________"<<endl
       <<"|1.display account info               |"<<endl
       <<"|2.deposit                            |"<<endl
       <<"|3.withdraw                           |"<<endl
       <<"|4.another acc data                   |"<<endl
       <<"|5.back                               |"<<endl
       <<"|_____________________________________|"<<endl;
}
void newdata(){
   cout<<" ________________bank_________________"<<endl
       <<"|Enter your choice                    |"<<endl
       <<"|1.Open new account                   |"<<endl
       <<"|2.Open existing account              |"<<endl
       <<"|3.Exit from program                  |"<<endl
       <<"|_____________________________________|"<<endl;
}
int main(){
   bank o1[100],o2;
   int n,a,cho,nf;
   char cho1;
   int j=0;
   B:
   newdata();
   cin>>cho;
   switch(cho){
      case 1: C:
              o1[j].openacc();
              j++;
              break;
      case 2:  if(j<=0){
              cout<<"no data to display"<<endl;
              goto B;
              }
              goto A;
              break;
      case 3: exit(0);
   }
   cout<<"do you wish to add more acc:(y/n)?"<<endl;
   cin>>cho1;
   if(cho1=='y' || cho1=='Y'){
      goto C;
   }
   else{
      goto A;
   }
   A:
   nf=j;
   cout<<"Enter account number for which u would like to operate: ";
   cin>>n;
   for(int i=0;i<nf;i++){
     if(n==o1[i].accno){
         a=i;
     }
   }
   //for o2
   while(1){
   system("cls");
   cout<<" for acc no:"<<n<<endl;
   console();
   int choice;
   cout<<"enter your choice: ";
   cin>>choice;
   switch(choice){
      case 1: o1[a].displaydata();
              cout<<"press any key to continue."<<endl;
              getch();
              break;
      case 2: o1[a].deposit();
              o1[a].displaydata();
              cout<<"press any key to continue."<<endl;
              getch();
              break;
      case 3: o1[a].withdraw();
              o1[a].displaydata();
              cout<<"press any key to continue."<<endl;
              getch();
              break;
      case 4: goto A;
              break;
      case 5: goto B;
              break;
      default: cout<<"enter any choice from above"<<endl;
   }
   }
   getch();
}