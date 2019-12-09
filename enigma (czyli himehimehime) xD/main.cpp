#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
using namespace std;
bool win;
bool Izi()
{
srand(time(NULL));
 int poprawna[4];
 poprawna[0]=rand()%7;
 poprawna[0]=rand()%7;
 cout<<"1:"<< poprawna[0]<<endl;
 do
 {  srand(time(NULL));
    poprawna[1]=rand()%7;
    cout<<"2:"<< poprawna[1]<<endl;
 }while(poprawna[1]==poprawna[0]);
 do
 { srand(time(NULL));
    poprawna[2]=rand()%7;
    cout<<"3:"<< poprawna[2]<<endl;
 }while((poprawna[2]==poprawna[0])||(poprawna[2]==poprawna[1]));
 do
 {srand(time(NULL));
    poprawna[3]=rand()%7;
    cout<< "4:"<<poprawna[3]<<endl;
 }while((poprawna[3]==poprawna[0])||(poprawna[3]==poprawna[1])||(poprawna[3]==poprawna[2]));
return 1;
}
int main()
{
    cout << "Enigma loading... " << endl;
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
 system("cls"); //Czyszczenie ekranu//

}

   cout << "Loaded. " << endl;
//  cout << "Choose difficulty:" << endl;
Sleep(2500);
win=Izi();
    return 0;
}
