#pragma once
#include "Cargo.h"
#include "Coordinates.h"
#include <string>

/* >>> by ShpriZZ <<< */

class Piece : public Cargo
{
	/// <summary>
	/// ����, ������� ����� �������� �����������.
	/// </summary>

	int count;        // ����������.
	Coordinates size; // ������� �����.

public:
	// GET SET ����������.
	const int Count();
	void Count(int c);

	// GET SET �������.
	const Coordinates Size();
	void Size(const Coordinates& s);

	// GET ����� ������ �������� �����.
	const double GetPieceVolume();

	// GET ����� ������ �������� �����.
	const double GetPieceMass();

	std::string to_string();

	// �����������
	Piece(int c, const Coordinates& s, double m, int p, short d);
};

