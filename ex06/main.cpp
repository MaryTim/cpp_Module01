#include "Harl.hpp"

void printMessages(std::string level) {
    Harl harl;

	int i = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++) {
		if (levels[i] == level)
			break;
	}

    switch(i) {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
			std::cout << "DEFAULT. I'm not sure how tired I'm today..." << std::endl;
    }
}

int main(int argc, char **argv) {
    Harl harl;
    if (argc < 2)
	{
		std::cout << "Please check your arguments!" << std::endl;
		return 1;
	}
	printMessages(argv[1]);
    return 0;
}