// Adivina tu Eevee.cpp
//

#include <iostream>

int main()
{
	std::printf("esas son las evoluciones de Eevee disponibles, elige una y prueba el programa: Jolteon, Flareon, Umbreon, Espeon, Sylveon \n \n");
	bool x = false;
	std::cout << "¿tu Eevee tiene pelaje o detalles en el cuello? 0 = no  1 = si" << std::endl;
	std::cin >> x;
	if (x == true)
	{
		std::cout << "¿tu Eevee tiene orejas afiladas? 0 = no  1 = si" << std::endl;
		std::cin >> x;
		if (x == true)
		{
			std::cout << "¿tu Eevee es tipo electrico? 0 = no  1 = si" << std::endl;
			std::cin >> x;
			if (x == true)
			{
				std::cout << "tu Eevee es Jolteon" << std::endl;
			}
			else
			{
				std::cout << "tu Eevee es Flareon" << std::endl;
			}
		}
		else
		{
			std::cout << "tu Eevee es Sylveon" << std::endl;
		}
	}
	else
	{
		std::cout << "¿tu Eevee es un tipo psiquico? 0 = no  1 = si " << std::endl;
		std::cin >> x;
		if (x == true)
		{
			std::cout << "tu Eevee es Espeon" << std::endl;
		}
		else
		{
			std::cout << "tu Eevee es Umbreon" << std::endl;
		}
    }
}