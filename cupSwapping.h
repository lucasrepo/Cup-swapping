#include <vector>

char cupPositionSwapping(const std::vector<char> &cupPosition, char ball)
{
	/*
	i = primera posicion a comparar;
	z = siguiente posicion.
	El bucle for se detiene cuando i llegue a su ultimo elemento a comparar
	*/
	for(int i=0, z=1; i<=4; i+=2)
	{
		/*Si los numeros NO son iguales, compara*/
		if(cupPosition.at(i) != cupPosition.at(z))
		{
			/*Si la pelota se encuentra en i*/
			if(ball == cupPosition.at(i))
			{
				/*Pelota pasa a z*/
				ball = cupPosition.at(z);
			}
			/*Si la pelota se encuentra en z*/
			else if(ball == cupPosition.at(z))
			{
				/*Pelota pasa a i*/
				ball = cupPosition.at(i);
			}
		}
		z+=2;
	}
	return ball;
}
