#include<iostream>

#include "Rombo.h"

int main() {

	Rhombus romboA(10, 5);
	Rhombus romboB = romboA;
	Rhombus romboC, romboD;

	romboC = romboB;

	romboD.SetDim(1, 1);

	if (romboC == romboB)
		cout << "romboC has the same size of romboB " << endl;
	else
		cout << "romboC has not the same size of romboB " << endl;


	return 0;

}