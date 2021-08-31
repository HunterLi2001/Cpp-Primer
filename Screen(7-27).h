#include <iostream>
#include <string>
using namespace std;
#ifndef SCREEN
#define SCREEN
class Screen {
private:
	string data;
	string::size_type position = 0;
	string::size_type width = 0;
	string::size_type height = 0;
public:
	Screen() = default;
	Screen(string::size_type w, string::size_type h) : width(w), height(h), data(h* w, ' ') {}
	Screen(string::size_type w, string::size_type h, char c) :width(w), height(h), data(h* w, c) {}
	inline char getData()const { return data[position]; }
	Screen& move(string::size_type r, string::size_type c)
	{
		string::size_type row = r * width;
		position = row + c;
		return *this;
	}
	inline Screen& set(char c)
	{
		data[position] = c;
		return *this;
	}
	inline Screen& set(string::size_type r, string::size_type col, char ch)
	{
		data[r * width + col] = ch;
		return *this;
	}
	ostream& display(ostream& os)const
	{
		os << data;
		return os;
	}
};
#endif // !SCREEN

