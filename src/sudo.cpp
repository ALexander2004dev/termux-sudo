#include "cstdlib"
#include "string"
#include "iostream"

int main(int argc, char* argv[])
{
	if (argc > 2) {
		for (int i = 1; i < argc -1; ++i)
		{
			std::string command = argv[i];
			system(command.c_str());
		}
	}
	else {
		std::cout << "usage: " << argv[0] << " <command>" << std::endl;
	}
	return 0;
}
