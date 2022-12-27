
#include "Car.h"

int main(void)
{
	//Hur många bilar det är och lägger dom i en array med namnet cars
	car_t car1, car2, car3;
	car_t* cars[] = { &car1 , &car2 , &car3 };

	//Detfinerar vad de olika delarna i struckten är
	car_init(&car1, "Volvo", "V70", "Black", 2000, TRANSMISSON_MANUAL);
	car_init(&car2, "BWM", "Z3", "Silver", 1995, TRANSMISSON_AUTOMATIC);
	car_init(&car3, "Ford", "Fokus", "Gray", 2002, TRANSMISSON_MANUAL);

	//Skriver bilen till ett text document
	FILE* ostream = fopen("cars.txt", "a");
	
	for (int i = 0; i < 3; i++)
	{
		car_print(cars[i], ostream);
	}

	car_text_read("cars.txt");

	return 0;
}