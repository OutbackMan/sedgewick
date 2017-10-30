// Every object value is a pointer to another object.
// The root of a tree is a pointer to itself. We move up towards the root.
// Object connected, i.e. in the same set, if final pointer points to same object

#include <stdio.h>

#define OBJECT_SIZE 1000

int main(void)
{
	// Initiliase array of object values
	// Use object_values[OBJECT_NAME]
	int object_values[OBJECT_SIZE] = {0};

	int i, j;
	
	for (i = 0; i < OBJECT_SIZE; i++) {
		object_values[i] = i;
	}

	// Read in set
	int p1, p2;
	
	while (scanf("%d %d\n", &p1, &p2) == 2) {
	
		// Find, traverse tree until reach pointer to self, i.e. object value same as object name
		for (i = p1; i != object_values[i]; i = object_values[i])
			;
		
		for (j = p2; j != object_values[j]; j = object_values[j])
			;

		if (i == j) {
			continue;
		}

		// Union
		object_values[i] = j;

		printf(" %d %d\n", p1, p2);

	}

	return 0;
}
