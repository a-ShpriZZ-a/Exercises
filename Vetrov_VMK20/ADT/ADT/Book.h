#include <string>

using namespace std;

/*
	======================
	���������� ����� �����
	======================
*/

class Book
{
	// �������� �����.

public:
	// GET � SET �������� �����.
	const string& Title() const;
	void Title(const string& title);

	// GET � SET ������ �����.
	const string& Author() const;
	void Author(const string& author);

	// GET � SET ��� ������ �����.
	const int Year() const;
	void Year(int year);

	// GET � SET ����� �����.
	const int Count() const;
	void Count(int count);
	
	// GET � SET ������� �����.
	const double Rating() const;
	void Rating(double rating);

	// ����������� ������.
	Book(const string& title, const string& author, int year, int count, double rating);

	// ����������� �� ���������.
	Book();

	// ��������� ���������� � ������ � ������� ������.
	const string to_string() const;

	friend std::ostream& operator<<(std::ostream& os, const Book& object);


private:
	string title;   // �������� �����.
	string author;  // ����� �����.
	int year;       // ��� ������ �����. 
	int count;      // ����� �����.
	double rating;  // ������� �����.

	// ���������� ��������� �������� �����.
	void set_rating(double rating);

	// ���������� ��������� ���� ������ �����.
	void set_year(int year);

	// ���������� ���������� ������ �����.
	void set_count(int count);
};