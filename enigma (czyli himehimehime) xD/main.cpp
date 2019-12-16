#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
using namespace std;
bool win;
int difficulty;
bool Izi()
{

srand(time(NULL));
 int poprawna[4];
 int odp [4];
 int poprawna_odp [4];
 poprawna[0]=rand()%7+1;
 poprawna[0]=rand()%7+1;

 do
 {  srand(time(NULL));
    poprawna[1]=rand()%7+1;
 }while(poprawna[1]==poprawna[0]);
 do
 { srand(time(NULL));
    poprawna[2]=rand()%7+1;
 }while((poprawna[2]==poprawna[0])||(poprawna[2]==poprawna[1]));
 do
 {srand(time(NULL));
    poprawna[3]=rand()%7+1;
 }while((poprawna[3]==poprawna[0])||(poprawna[3]==poprawna[1])||(poprawna[3]==poprawna[2]));
 system("cls");
 for(int ij=7;ij>0;ij--)
{ poprawna_odp [0]=0;
 poprawna_odp [1]=0;
 poprawna_odp [2]=0;
 poprawna_odp [3]=0;

 for (int i=0;i<4;i++)
{
cout<<i+1<<":";
cin>>odp[i];
if (odp[i]==poprawna[0])
{
    poprawna_odp[0]=1;
}
else if(odp[i]==poprawna[1])
{
    poprawna_odp[1]=1;
}
else if(odp[i]==poprawna[2])
{
    poprawna_odp[2]=1;
}
else if(odp[i]==poprawna[3])
{
    poprawna_odp[3]=1;
}

}
int poprawnych=poprawna_odp[0]+poprawna_odp[1]+poprawna_odp[2]+poprawna_odp[3];
cout<<poprawnych<<endl;
if (poprawnych==4)goto win;
}
return 0;
if (false)
{win:
return 1;
}
}
bool Hrd()
{

srand(time(NULL));
 int poprawna[7];
 int odp [7];
 int poprawna_odp [7];
 poprawna[0]=rand()%10+1;
 poprawna[0]=rand()%10+1;

 do
 {  srand(time(NULL));
    poprawna[1]=rand()%10+1;
 }while(poprawna[1]==poprawna[0]);
 do
 { srand(time(NULL));
    poprawna[2]=rand()%10+1;
 }while((poprawna[2]==poprawna[0])||(poprawna[2]==poprawna[1]));
 do
 {srand(time(NULL));
    poprawna[3]=rand()%10+1;
 }while((poprawna[3]==poprawna[0])||(poprawna[3]==poprawna[1])||(poprawna[3]==poprawna[2]));
  do
 {srand(time(NULL));
    poprawna[4]=rand()%10+1;
 }while((poprawna[4]==poprawna[0])||(poprawna[4]==poprawna[1])||(poprawna[4]==poprawna[2])||(poprawna[4]==poprawna[3]));
  do
 {srand(time(NULL));
    poprawna[5]=rand()%10+1;
 }while((poprawna[5]==poprawna[0])||(poprawna[5]==poprawna[1])||(poprawna[5]==poprawna[2])||(poprawna[5]==poprawna[3])||(poprawna[5]==poprawna[4]));
 do
 {srand(time(NULL));
    poprawna[6]=rand()%10+1;
 }while((poprawna[9]==poprawna[0])||(poprawna[9]==poprawna[1])||(poprawna[9]==poprawna[2])||(poprawna[9]==poprawna[3])||(poprawna[9]==poprawna[4])||(poprawna[9]==poprawna[5]));
 system("cls");
 for(int ij=15;ij>0;ij--)
{ poprawna_odp [0]=0;
 poprawna_odp [1]=0;
 poprawna_odp [2]=0;
 poprawna_odp [3]=0;
poprawna_odp [4]=0;
poprawna_odp [5]=0;
poprawna_odp [6]=0;
 for (int i=0;i<6;i++)
{
cout<<i+1<<":";
cin>>odp[i];
if (odp[i]==poprawna[0])
{
    poprawna_odp[0]=1;
}
else if(odp[i]==poprawna[1])
{
    poprawna_odp[1]=1;
}
else if(odp[i]==poprawna[2])
{
    poprawna_odp[2]=1;
}
else if(odp[i]==poprawna[3])
{
    poprawna_odp[3]=1;
}
else if(odp[i]==poprawna[4])
{
    poprawna_odp[4]=1;
}
else if(odp[i]==poprawna[5])
{
    poprawna_odp[5]=1;
}
else if(odp[i]==poprawna[6])
{
    poprawna_odp[6]=1;
}
}
int poprawnych=poprawna_odp[0]+poprawna_odp[1]+poprawna_odp[2]+poprawna_odp[3]+poprawna_odp[4]+poprawna_odp[5]+poprawna_odp[6];
cout<<poprawnych<<endl;
if (poprawnych==6)goto win;
}
return 0;
if (false)
{win:
return 1;
}
}
bool Dmon()
{

srand(time(NULL));
 int poprawna[10];
 int odp [10];
 int poprawna_odp [10];
 poprawna[0]=rand()%18+1;
 poprawna[0]=rand()%18+1;

 do
 {  srand(time(NULL));
    poprawna[1]=rand()%18+1;
 }while(poprawna[1]==poprawna[0]);
 do
 { srand(time(NULL));
    poprawna[2]=rand()%18+1;
 }while((poprawna[2]==poprawna[0])||(poprawna[2]==poprawna[1]));
 do
 {srand(time(NULL));
    poprawna[3]=rand()%18+1;
 }while((poprawna[3]==poprawna[0])||(poprawna[3]==poprawna[1])||(poprawna[3]==poprawna[2]));
  do
 {srand(time(NULL));
    poprawna[4]=rand()%18+1;
 }while((poprawna[4]==poprawna[0])||(poprawna[4]==poprawna[1])||(poprawna[4]==poprawna[2])||(poprawna[4]==poprawna[3]));
  do
 {srand(time(NULL));
    poprawna[5]=rand()%18+1;
 }while((poprawna[5]==poprawna[0])||(poprawna[5]==poprawna[1])||(poprawna[5]==poprawna[2])||(poprawna[5]==poprawna[3])||(poprawna[5]==poprawna[4]));
 do
 {srand(time(NULL));
    poprawna[6]=rand()%18+1;
 }while((poprawna[6]==poprawna[0])||(poprawna[6]==poprawna[1])||(poprawna[6]==poprawna[2])||(poprawna[6]==poprawna[3])||(poprawna[6]==poprawna[4])||(poprawna[6]==poprawna[5]));
 do
 {srand(time(NULL));
    poprawna[7]=rand()%18+1;
 }while((poprawna[7]==poprawna[0])||(poprawna[7]==poprawna[1])||(poprawna[7]==poprawna[2])||(poprawna[7]==poprawna[3])||(poprawna[7]==poprawna[4])||(poprawna[7]==poprawna[5])||(poprawna[7]==poprawna[6]));
 do
 {srand(time(NULL));
    poprawna[8]=rand()%18+1;
 }while((poprawna[8]==poprawna[0])||(poprawna[8]==poprawna[1])||(poprawna[8]==poprawna[2])||(poprawna[8]==poprawna[3])||(poprawna[8]==poprawna[4])||(poprawna[8]==poprawna[5])||(poprawna[8]==poprawna[6])||(poprawna[8]==poprawna[7]));
 do
 {srand(time(NULL));
    poprawna[9]=rand()%18+1;
 }while((poprawna[9]==poprawna[0])||(poprawna[9]==poprawna[1])||(poprawna[9]==poprawna[2])||(poprawna[9]==poprawna[3])||(poprawna[9]==poprawna[4])||(poprawna[9]==poprawna[5])||(poprawna[9]==poprawna[6])||(poprawna[9]==poprawna[7])||(poprawna[9]==poprawna[8]));
 system("cls");
 for(int ij=20;ij>0;ij--)
{ poprawna_odp [0]=0;
 poprawna_odp [1]=0;
 poprawna_odp [2]=0;
 poprawna_odp [3]=0;
poprawna_odp [4]=0;
poprawna_odp [5]=0;
poprawna_odp [6]=0;
poprawna_odp [7]=0;
poprawna_odp [8]=0;
poprawna_odp [9]=0;
 for (int i=0;i<10;i++)
{
cout<<i+1<<":";
cin>>odp[i];
if (odp[i]==poprawna[0])
{
    poprawna_odp[0]=1;
}
else if(odp[i]==poprawna[1])
{
    poprawna_odp[1]=1;
}
else if(odp[i]==poprawna[2])
{
    poprawna_odp[2]=1;
}
else if(odp[i]==poprawna[3])
{
    poprawna_odp[3]=1;
}
else if(odp[i]==poprawna[4])
{
    poprawna_odp[4]=1;
}
else if(odp[i]==poprawna[5])
{
    poprawna_odp[5]=1;
}
else if(odp[i]==poprawna[6])
{
    poprawna_odp[6]=1;
}
else if(odp[i]==poprawna[7])
{
    poprawna_odp[7]=1;
}
else if(odp[i]==poprawna[8])
{
    poprawna_odp[8]=1;
}
else if(odp[i]==poprawna[9])
{
    poprawna_odp[9]=1;
}
}
int poprawnych=poprawna_odp[0]+poprawna_odp[1]+poprawna_odp[2]+poprawna_odp[3]+poprawna_odp[4]+poprawna_odp[5]+poprawna_odp[6]+poprawna_odp[7]+poprawna_odp[8]+poprawna_odp[9];
cout<<poprawnych<<endl;
if (poprawnych==9)goto win;
}
return 0;
if (false)
{win:
return 1;
}
}
int main()
{/**< cout << "Enigma loading... " << endl;
 Sleep(2500);
 system("cls");
 for (int i=3;i>0;i--)
{

    cout << ". " << endl;
 Sleep(800);
 system("cls");
    cout << ".. " << endl;
 Sleep(800);
 system("cls");  //Czyszczenie ekranu//
    cout << "... " << endl;
 Sleep(800);
  //Czyszczenie ekranu//

}*/
while (true)
{

   cout << "Loaded. " << endl;
Sleep(2500);
system("cls");
cout << "Choose difficulty:" << endl<<"1:Easy 2.Quite hard 3. Very hard"<<endl;
cin>>difficulty;
if(difficulty==1)win=Izi();
else if(difficulty==2)win=Hrd();
else if(difficulty==3)win=Dmon();
if(win==1)cout<<"Win"<<endl;
else cout<<"Lose"<<endl;
}


    return 0;
}
