#pragma hdrstop
#pragma argsused

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iostream.h>

class Skola
{
	protected:
		int     numurs;
		char    nosaukums[50],
				Adrese[50];
	public:
		virtual void pabeigtSkolu(){  //
			printf("Klase SKOLA \n\n");
		}
		void setNumurs( int p_numurs ) //Direktora "setters"
		{
			this->numurs = p_numurs;
		};
		void setNosaukums( char p_nosaukums[] ) //Direktora "setters"
		{
			strncpy( this->nosaukums, p_nosaukums, 50 );
		};
		void setAdrese( char p_Adrese[] ) //Direktora "setters"
		{
			strncpy( this->Adrese, p_Adrese, 50 );
		};
		int getNumurs() //Direktora "getters"
		{
			return this->numurs;
		};
		char* getNosaukums() //Direktora "getters"
		{
			return this->nosaukums;
		};
		char* getAdrese() //Direktora "getters"
		{
			return this->Adrese;
		};
		// setSchool metodes definesana outline funkcijai
		void setSchool( int numurs, char nosaukums[], char adrese[] );
		////////////////
		void getSchool() //iekšējā getSchool metode
		{
			printf("Skola: %d %s %s\n", this->numurs, this->nosaukums, this->Adrese);
		};
};
void Skola::setSchool( int numurs, char nosaukums[], char adrese[] ) //Areja setSchool metode
{
	this->setNumurs( numurs );
	this->setNosaukums( nosaukums );
	this->setAdrese( adrese );
};

class Augstskola: public Skola
{
    private:
		int katedruSkaits;
    public:
		Augstskola()
		{
			this->getSchool();
		};
			void getSchool()
		{
			printf("Skola: %d %s %s %d\n", this->numurs, this->nosaukums, this->Adrese, this->katedruSkaits);
		};

        void pabeigtSkolu(){
			printf("Klase AUGSTSKOLA\n\n");
		}
};

int main()
{
	//Skola *ManaSkola, *ManaSkola2;

    //Pirmais 2 klases
    Skola *ManaSkola;
    Augstskola *ManaSkola2;
	char text[50];

    ManaSkola = new Skola;
	ManaSkola2 = new Augstskola;
	ManaSkola->setSchool(1, "RTK", "Braslas iela");
	ManaSkola->getSchool();
	ManaSkola->pabeigtSkolu();
	ManaSkola2->pabeigtSkolu();

	//Otrais variants 1 klase
    Skola *ManaSkola3, *ManaSkola4;
	ManaSkola3 = new Skola;
	ManaSkola4 = new Augstskola;

	ManaSkola3->pabeigtSkolu();
	ManaSkola4->pabeigtSkolu();
	delete ManaSkola;
    delete ManaSkola2;
    delete ManaSkola3;
	delete ManaSkola4;
	getch();
	return EXIT_SUCCESS;
};
