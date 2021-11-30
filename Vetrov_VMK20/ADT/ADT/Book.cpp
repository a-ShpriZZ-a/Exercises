#include <string>
#include <stdexcept>

#include "book.h"

using namespace std;

/*
	======================
	���������� ����� �����
	======================
*/

const string& Book::Title() const { return title; }                // GET ��������.
void Book::Title(const string& title) { this->title = title; }     // SET ��������.

const string& Book::Author() const { return author; }              // GET �����.
void Book::Author(const string& author) { this->author = author; } // SET �����.

const int Book::Year() const { return year; }                     // GET ��� ������.
void Book::Year(int year) { set_year(year); }                     // SET ��� ������.

const int Book::Count() const { return count; }                   // GET �����.
void Book::Count(int count) { set_count(count); }                 // SET �����.

const double Book::Rating() const { return rating; }              // GET �������.
void Book::Rating(double rating) { set_rating(rating); }          // SET �������.

Book::Book(const string& title, const string& author, int year, int count, double rating)
{
	this->title = title;   // ��������.
	this->author = author; // �����.
	set_year(year);         // ��� ������.
	set_count(count);       // �����.
	set_rating(rating);     // �������.
}

Book::Book()
{
	title = "NO_NAME";    // ��������.
	author = "NO_AUTHOR"; // �����.
	year = 0;             // ��� ������.
	count = 0;            // �����.
	rating = 0;           // �������.
}

void Book::set_rating(double rating)
{
	// ������� ����� ������������� �� 0 �� 10.
	if (rating < 0 || rating > 10) throw invalid_argument("Rating value error!");
	else this->rating = rating;
}

void Book::set_year(int year)
{
	// ��� ������ ���� ������ ��� ����� 2021.
	if (year > 2021 || year < -2000) throw invalid_argument("Year value error!");
	else this->year = year;
}

void Book::set_count(int count)
{
	// ����� �� ����� ���� ������ ����.
	if (count < 0) throw invalid_argument("Count value error!");
	else this->count = count;
}

const string Book::to_string() const
{
	// ������������ ������ ���������� � �����.
	string info;
	info = "\"" + title + "\" by " + author + " at " + std::to_string(year);
	info += " - Count:" + std::to_string(count) + " Rating:" + std::to_string(rating);
	return info;
}

ostream& operator<<(ostream& os, const Book& object)
{
	os << object.to_string();
	return os;
}