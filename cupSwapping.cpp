/*
Function that return the letter position that te ball is at,
once I finish swapping the cup, the swaps will be given to you as an array
*/
#include <iostream>
#include <string>
#include "cupSwapping.h"

int main()
{
	std::vector<char> cupPosition;
	/*Auxiliar y posicion inicial de la pelota*/
	std::string aux;
	char ball= 'b';

	/*Pedir orden*/
	for(int i=0; i<3; i++)
	{
		std::cout << "Mezclar: "; std::cin >> aux;
		cupPosition.push_back(aux.at(0));
		std::cout << "Con: "; std::cin >> aux;		
		cupPosition.push_back(aux.at(0));
	}
	/*Obtener posición*/
	char m = cupPositionSwapping(cupPosition, ball);
	/*Mostrar posición*/
	std::cout << "La pelota está en la copa " << m << std::endl;
	return EXIT_SUCCESS;
}
