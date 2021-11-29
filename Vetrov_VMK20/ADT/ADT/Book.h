#include <string>
#include <stdexcept>

using namespace std;

class Book
{
public:
	const string& Title() const;
	void Title(const string& title);

	const string& Author() const;
	void Author(const string& author);

	const int& Year() const;
	void Year(const int& year);

	const int& Count() const;
	void Count(const int& count);

	const double& Rating() const;
	void Rating(const double& rating);

	// ����������� ������.
	Book(const string& title, const string& author, const int& year, const int& count, const double& rating);

	// ��������� ���������� � ������ � ������� ������.
	const string to_string() const;

private:
	string title;   // �������� �����.
	string author;  // ����� �����.
	int year;       // ��� ������ �����. 
	int count;      // ����� �����.
	double rating;  // ������� �����.

	// ���������� ��������� �������� �����.
	void SetRating(const double& rating);

	// ���������� ��������� ���� ������ �����.
	void SetYear(const int& year);

	// ���������� ���������� ������ �����.
	void SetCount(const int& count);
};