/// \file romboclass.cpp
///	\brief class Rhombus: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "Rombo.h"

/// @brief default constructor 
Rhombus::Rhombus() {

	cout << "Rhombus - constructor - default" << endl;

	diagH = 0.;
	diagV = 0.;

}
/// @brief constructor 
/// @param dH diagonale orizzontale del rombo
/// @param dV diagonale verticale del rombo

Rhombus::Rhombus(float dH, float dV) {

	diagH = 0.;
	diagV = 0.;

	cout << "rhombus -constructor" << endl;

	if (dH <= 0.)
		cout << "warning: rhombus -constructor: dH should be >0" << endl;
	else
		diagH = dH;

	if (dV <= 0.)
		cout << "warning: rhombus -constructor: dH should be >0" << endl;
	else
		diagV = dV;
}

/// @brief destructor
Rhombus::~Rhombus() {
	cout << "Rhombus- destructor" << endl;
}

/// @brief copy constructor 
/// @param reference to the object that should be copied 
Rhombus::Rhombus(const Rhombus& r) {
	cout << "Rhombus - copy constructor" << endl;

	diagH = r.diagH;
	diagV = r.diagV;
}

/// @brief overload of operator = 
/// @param reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rhombus& Rhombus::operator=(const Rhombus& r) {

	cout << "Rhombus-operator=" << endl;

	diagH = r.diagH;
	diagV = r.diagV;

	return *this;
}
/// @brief overload of operator == 
/// @param reference to the object on the right side of the operator 
/// @return true if the two objects is the same   
bool Rhombus::operator==(const Rhombus& r) {

	if (r.diagH == diagH && r.diagV == diagV)
		return true;

	return false;
}


/// @brief set side of the object
/// @param side of the rhombus
float Rhombus::Side() {
	return (float)sqrt(pow(diagH / 2, 2) + pow(diagV / 2, 2));
}


/// @brief set diagH of the object
/// @param dH diagH
void Rhombus::SetDiagH(float dH) {
	if (diagH < 0.) {
		cout << "warning: Rhombus- DiagH: should be >0" << endl;
		return;
	}
	diagH = dH;
}

/// @brief set diagV of the object
/// @param dV diagV
void Rhombus::SetDiagV(float dV) {
	if (diagV < 0.) {
		cout << "warning: Rhombus- DiagV: should be >0" << endl;
		return;
	}
	diagV = dV;
}

/// @brief set diagH and diagV of the object
/// @param dH diagH
/// @param dV diagV 
void Rhombus::SetDim(float dH, float dV) {

	SetDiagH(dH);
	SetDiagV(dV);
}

/// @brief get diagonalH and diagonalV of the object(rhombus) and return in the given variabiles
/// @param given variable to return diagH in pixels
/// @param given variable to return diagV in pixels
void Rhombus::GetDiagonals(float& dH, float& dV) {

	dH = diagH;
	dV = diagV;
	return;

}
/// @brief get diagH of the object
/// @return diagH of the object
float Rhombus::GetDiagH() {
	return diagH;
}

/// @brief get diagV of the object
/// @return diagV of the object in pixels
float Rhombus::GetDiagV() {
	return diagV;
}

/// @brief get the side of the object
/// @return side of the object in pixels
float Rhombus::GetSide() {
	return Side();
}

/// @brief calculate the area of the object(rhombus) 
/// @return value of the rhombus area
float Rhombus::GetArea() {

	return ((float)diagH * (float)diagV)/ (float)2;

}

/// @brief calculate the perimeter of the object(rhombus)
/// @return value of the rhombus perimeter with the value of the side 
float Rhombus::GetPerimeter() {
	float side = Side();

	return (side * 4);
	
}

/// @brief initialization of the object as a copy of an object 
/// @param r reference to the object that should be copied 
void Rhombus::Init(const Rhombus& p) {
	Reset();
}

/// @brief default initialization of the object
void Rhombus::Init() {
	Reset();
	perimeter = 0.;
	area = 0.;
}

/// @brief total reset of the object  
void Rhombus::Reset() {
	perimeter = 0.;
	area = 0.;
}

/// @brief write an error message 
/// @param string message to be printed
void Rhombus::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Rhombus --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void Rhombus::WarningMessage(const char* string) {

	cout << endl << "WARNING -- Rhombus --";
	cout << string << endl;

}



/// @brief for debugging: all about the object
void Rhombus::Dump() {

	cout << endl;
	cout << "Perimeter = " << GetPerimeter() << endl;
	cout << "Area = " << GetArea() << endl;
	cout << endl;

}

