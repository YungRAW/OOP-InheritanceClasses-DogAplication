#include "CaineCuPete.h";
#include "CaineFaraPete.h"

int main() {


	int choice;

	std::cout << "Alegeti tipul de caine:" << std::endl;
	std::cout << "1.Caine cu pete" << std::endl;
	std::cout << "2.Caine fara pete" << std::endl;

	std::cin >> choice;

	switch (choice) {

	case 1: {

		Caine *caine = new CaineCuPete();
		caine->readInfo();
		std::cout << std::endl;
		caine->displayInfo();
	}
	case 2: {
		Caine *caine = new CaineFaraPete();
		caine->readInfo();
		std::cout << std::endl;
		caine->displayInfo();
	}
	}

	std::cin.get();

	return 0;
}