#include <iostream>

struct rect {
	int x;
	int y;
	int h;
	int w;
};

int add(int a, int b) {
	return a + b;
}

int main() {
	rect r1;
	r1.x = 10;
	r1.y = 20;
	r1.h = 20;
	r1.w = 20;

	std::cout << "R1.x: " << r1.x << std::endl;
	std::cout << "R1.y: " << r1.y << std::endl;
	std::cout << "R1.h: " << r1.h << std::endl;

	int result = add(10, 10);

	std::cout << "add -tulos: " << result << std::endl;

	/*int numero = 0;
	std::cin >> numero;
	switch (numero)

	{
	case 0:
		std::cout << "Numero on 0" << std::endl;
		break;
	default:
		std::cout << "Numero ei ole 0" << std::endl;
		break;
	}*/
	
	
	
	/*std::cout << "Anna numero." << std::endl;
	std::cin >> numero;

	std::cout << "Annoit " << numero << std::endl;
	
	bool testi = false;

	if (testi){
	std::cout << "Arvo on tosi." << std::endl;

	}

	if (numero < 40){
		std::cout << "Pienempi kuin 40" << std::endl;
	}
	else{
		std::cout << "Isompi kuin 40" << std::endl;
	}*/
	
	
	
	/*int meaningOfLife = 42;

	if (meaningOfLife == 42){
		std::cout << "Don't panic." << std::endl;
	}*/
	
	
	//std::cout << "Hello world!" << std::endl;

	return 0;

}