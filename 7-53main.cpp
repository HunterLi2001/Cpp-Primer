#include <iostream>

class Debug {
	bool hardware;
	bool io;
	bool other;
public:
	constexpr Debug(bool hw = true, bool Io = true, bool Other = true) : hardware(hw), io(Io), other(Other) {}

	void setHardware(bool c) { hardware = c; }

	void setIo(bool c) { io = c; }

	void setOther(bool c) { hardware = c; }
};

int main()
{
	Debug d;
}
