#pragma once
#include <string>

/* >>> by ShpriZZ <<< */

class Coordinates
{
	/// <summary>
	/// ��������� ������� ���������.
	/// </summary>

	double x; // X-����������.
	double y; // Y-����������.
	double z; // Z-����������.

public:
	const double X();
	void X(double x);

	const double Y();
	void Y(double y);

	const double Z();
	void Z(double z);

	const std::string to_string();

	Coordinates(double x, double y, double z);
	Coordinates() = default;
};

