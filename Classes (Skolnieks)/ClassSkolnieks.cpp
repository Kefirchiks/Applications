#pragma hdrstop
#pragma argsused

#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <vcl.h>
#include <conio.h>
#include <iostream.h>

class Skolnieks {
		public:
				char vards[30];
				char grupa[5];
				int  kurss;
				void getSkolnieks();
				void printSkolnieks();

				int stipendija(int vidAtzime, int kavejumi)
						{
							if (vidAtzime >=4 && kavejumi <=10)
							{
								cout << "Audzekna stipendija = 15 Ls";
							}
							else cout << "Audzekna stipendija = 7 Ls";
		return EXIT_SUCCESS;				}
};
Skolnieks mySkolnieks;
void Skolnieks::getSkolnieks()
{
		cout << "Ievadiet audzekna VARDU: ";
		cin  >> mySkolnieks.vards;
		cout << "Ievadiet audzekna GRUPU: ";
		cin  >> mySkolnieks.grupa;
		cout << "Ievadiet audzekna KURSU: ";
		cin  >> mySkolnieks.kurss;

}
void Skolnieks::printSkolnieks()
{
        system("CLS"); // ClearScreen
		cout<< "Audzekna vards: " << mySkolnieks.vards << endl;
		cout<< "Audzekna grupa: " << mySkolnieks.grupa << endl;
		cout<< "Audzekna kurss: " << mySkolnieks.kurss << endl;
};
int main(){
int atzime;
int kavejumusk;

	mySkolnieks.getSkolnieks();
        cout << "Ievadiet audzekna videjo atzimi: ";
        cin  >> atzime;
        cout << "Ievadiet audzekna kavejumu skaitu: ";
        cin  >> kavejumusk;
        mySkolnieks.printSkolnieks();
        mySkolnieks.stipendija(atzime, kavejumusk);
  getch();

  return EXIT_SUCCESS;

}

