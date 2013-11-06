#pragma hdrstop
#pragma argsused

#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <vcl.h>
#include <conio.h>
#include <iostream.h>

class Shape {
	protected:
		int dimension;
	public:
// Iekšējā metode stipendijas aprēķināšanai
	inline int setDimension(int *vertiba_p)
		{
			cout << "Ievadiet dimension: ";
			cin >> dimension;
				*vertiba_p = dimension;
			return *vertiba_p;
		}
	int getDimension()
	{
		system("CLS");
		cout << "Dimension = " << dimension << endl;
		return EXIT_SUCCESS;
	}
	virtual void getArea()
	{
	int laukums;
		laukums = (dimension * dimension);
		cout << "Laukums = " << laukums << endl;
	}
};
class CRec: public Shape
	{
	public:
	void printMala(int *vertiba)
	{
	cout << "Mala ir = " << *vertiba;
	}

};
/*
// Pārslogota funkcija
	void setDimension(Shape *B)
		{
	Shape jauns; // Statisks objekts
	Shape *vecs;
	Shape *baigais;
	//delete baigais; // Dzēš dinamisko objektu + izsauc destruktor
		 cout << "Mala ir vienada: " << *baigais << endl;
		}  */
int main()
{
	int vertiba_p;
	const int MAX = 4;

Shape myShape; // Izveido objektu
CRec myRec;

   char *menu[MAX] = {
				   "Zara Ali",
				   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };

Shape *dimension; // Norāde uz 'protected' dimension
	myShape.setDimension(&vertiba_p);
	myShape.getDimension();
   //	setDimension();
	myShape.getArea();

	myRec.printMala(&vertiba_p);

	getch();
return EXIT_SUCCESS;
}
