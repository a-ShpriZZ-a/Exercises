#pragma once
#include <string>

/* >>> by ShpriZZ <<< */

class Coordinates
{
	/// <summary>
	/// ��������� ������� ���������.
	/// </summary>

public:
	double X; // X-����������.
	double Y; // Y-����������.
	double Z; // Z-����������.
 	 
	const std::string to_string();

	Coordinates(double x, double y, double z);
	Coordinates() = default;
};

