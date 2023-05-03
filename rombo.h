/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a rhombus
class Rhombus
{
protected:
	float diagH;
	float diagV;
	float Side();
	float perimeter;
	float area;

	virtual float Area() = 0;
	virtual float Perimeter() = 0;
public:
	Rhombus();
	Rhombus(float dH, float dV);
	Rhombus(const Rhombus& r);

	virtual ~Rhombus();

	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);
	/// @name BASIC HANDLING
	/// @{
	void Init();
	void Init(const Rhombus& r);
	void Reset();
	/// @}

	void SetDim(float dH, float dV);
	void SetDiagH(float dH);
	void SetDiagV(float dV);

	void GetDiagonals(float& dH, float& dV);
	float GetDiagH();
	float GetDiagV();
	float GetSide();
	float GetArea();
	float GetPerimeter();


	/// @name DEBUG and SERIALIZATION 
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	/// @}


};

#endif
