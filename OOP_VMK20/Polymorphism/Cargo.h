#pragma once
#include <string>

/* >>> by ShpriZZ <<< */

class Cargo
{
	/// <summary>
	/// ���������� � ����������� �����.
	/// </summary>

	int price;       // ��������� ��������.
	double mass;     // ����� ���� �����.
	short dangerous; // ����� ���������.

public:
	// GET SET �����.
	void Mass(double m);
	const double Mass();
	
	// GET SET ���� ��������.
	void Price(int p);
	const int Price();

	// GET SET ������ ���������.
	void Dangerous(short d);
	const short Dangerous();

	// ���������� � ������ � STRING.
	virtual std::string to_string();

	// �����������.
	Cargo(double m, int p, short d);
	Cargo() = default;
};

