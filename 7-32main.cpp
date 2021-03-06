#include <iostream>
#include <string>

using namespace std;

class Window_mgr {
public:
	void clear();
};

class Screen {
	friend void Window_mgr::clear();

private:
	unsigned int height = 0, width = 0;
	unsigned int cursor = 0;
	string contents;
public:
	Screen() = default;

	Screen(unsigned int ht, unsigned int wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
};

void Window_mgr::clear()
{
	Screen myScreen(10, 20, 'X');
	cout << myScreen.contents << endl;
	myScreen.contents = "";
	cout << myScreen.contents << endl;
}

int main()
{
	Window_mgr w;
	w.clear();
	return 0;
}