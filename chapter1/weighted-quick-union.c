// Connect the smaller tree to the larger tree to prevent the growth of long paths

#include <stdio.h>

#define OBJECT_SIZE 1000

int main(void)
{
	// Initiliase array of object values
	// Use object_values[OBJECT_NAME]
	int object_values[OBJECT_SIZE] = {0};
	int object_value_tree_size[OBJECT_SIZE] = {0};

	int i, j;
	
	for (i = 0; i < OBJECT_SIZE; i++) {
		object_values[i] = i;
		object_value_tree_size[i] = 1;
	}

	// Read in set
	int p1, p2;
	
	while (scanf("%d %d\n", &p1, &p2) == 2) {
	
		for (i = p1; i != object_values[i]; i = object_values[i])
			;
		
		for (j = p2; j != object_values[j]; j = object_values[j])
			;

		if (i == j) {
			continue;
		}

		// Union
		if (object_value_tree_size[i] < object_value_tree_size[j]) {
			object_values[i] = j; 
			object_value_tree_size[j] += object_value_tree_size[i];
		} else {
			object_values[j] = i; 
			object_value_tree_size[i] += object_value_tree_size[j];
		}

		printf(" %d %d\n", p1, p2);

	}

	return 0;
}
