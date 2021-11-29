#include <string>
#include <stdexcept>

#include "book.h"

using namespace std;

const string& Book::Title() const { return title; }                // GET ��������.
void Book::Title(const string& title) { this->title = title; }     // SET ��������.

const string& Book::Author() const { return author; }              // GET �����.
void Book::Author(const string& author) { this->author = author; } // SET �����.

const int& Book::Year() const { return year; }                     // GET ��� ������.
void Book::Year(const int& year) { SetYear(year); }                // SET ��� ������.

const int& Book::Count() const { return count; }                   // GET �����.
void Book::Count(const int& count) { SetCount(count); }            // SET �����.

const double& Book::Rating() const { return rating; }              // GET �������.
void Book::Rating(const double& rating) { SetRating(rating); }     // SET �������.

Book::Book(const string& title, const string& author, const int& year, const int& count, const double& rating)
{
	this->title = title;   // ��������.
	this->author = author; // �����.
	SetYear(year);         // ��� ������.
	SetCount(count);       // �����.
	SetRating(rating);     // �������.
}

void Book::SetRating(const double& rating)
{
	if (rating < 0 || rating > 10) throw invalid_argument("Rating value error!");
	else this->rating = rating;
}

void Book::SetYear(const int& year)
{
	if (year > 2021) throw invalid_argument("Year value error!");
	else this->year = year;
}

void Book::SetCount(const int& count)
{
	if (count < 0) throw invalid_argument("Count value error!");
	else this->count = count;
}

const string Book::to_string() const
{
	string info;
	info = "\"" + title + "\" by " + author + " at " + std::to_string(year);
	info += " - Count:" + std::to_string(count) + " Rating:" + std::to_string(rating);
	return info;
}