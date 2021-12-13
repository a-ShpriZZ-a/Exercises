#pragma once
#include "Cargo.h"
#include <string>

/* >>> by ShpriZZ <<< */

class Bulk: public Cargo
{
	/// <summary>
	/// �������/������������/�������� ����.
	/// </summary>

	double volume;

public:
	// GET SET ������ ����/��������.
	const double Volume();
	void Volume(double v);

	// ���������� ������������ to_string.
	const std::string to_string();

	// ����������� ������.
	Bulk(double v, double m, int p, short d);
};

