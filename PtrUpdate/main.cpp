#include "Dinosaur.h"

void main()
{
	const int array_size = 20;

	Dinosaur Rex[array_size];

	for (int i = 0; i < array_size; ++i)
	{
		Rex[i] = createasaurusRex();
		printasaurusRex(Rex[i]);
		modifyasaurusRef(Rex[i]);
		printasaurusRex(Rex[i]);
	}
	
	system("pause");
}