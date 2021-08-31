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
	Screen(char c, string::size_type w, string::size_type h) :width(w), height(h), data(h* w, c) {}
	inline char getData()const { return data[position]; }
};
#endif // !SCREEN

