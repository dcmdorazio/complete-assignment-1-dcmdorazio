#include <stdio.h>
#include <stdlib.h>

// Look funtion
int look(const void *a, const void *b){
	// Compares the elements in the list.
    return (*(int *)a - *(int *)b);
}


// Main function
int main(int argc, char *argv[]){
	FILE *fPointer;
	char *pointer = argv[1];
	fPointer = fopen(pointer, "r");
	int num1;
	int array_size = 0;

	while(fscanf(fPointer, "%d", &num1) == 1){
        array_size++;
	}

	fclose(fPointer);
	fopen(pointer, "r");

	int arr[array_size];

	for(int i = 0; i < array_size; i++){
        fscanf(fPointer, "%d", &arr[i]);
	}
	fclose(fPointer); // Closes the pointer for FILE

    /* Calls upon the qsort to sort the array of numbers
    ** and then uses the look function. */
	qsort(arr, array_size, sizeof(int), look);

 // for loop to arrange the "array_Size"
	for(int a = 0; a < array_size - 1; a++){
        printf("%d ", arr[a]);
	}
	printf("%d\n", arr[array_size - 1]);

	return 0;
    printf("\n");


} //EOF
