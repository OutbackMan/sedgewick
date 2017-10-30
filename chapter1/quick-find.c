// Assume transitivity

// Take input values as elements of sets
// Sets represent connected components (vertices that can be joined by a path (unique vertices and edges))

#include <stdio.h>

#define OBJECT_SIZE 1000

int main(void)
{
	// Initiliase array of object values
	// Use object_values[OBJECT_NAME]
	int object_values[OBJECT_SIZE] = {0};
	
	for (int i = 0; i < OBJECT_SIZE; i++) {
		object_values[i] = i;
	}

	// Read in set
	int p1, p2;
	
	while (scanf("%d %d\n", &p1, &p2) == 2) {
		// Find, i.e check if connected
		if (object_values[p1] == object_values[p2]) {
			continue;
		}

		// Union, i.e. change all objects with same value as p1 to value of p2
		for (int t = object_values[p1], i = 0; i < OBJECT_SIZE; i++) {
			if (object_values[i] == t) {
				object_values[i] = object_values[p2];
			}
		}	
	
		printf(" %d %d\n", p1, p2);

	}

	return 0;
}
