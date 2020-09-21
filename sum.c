#include <stdio.h>
#include <stdlib.h>
#include<math.h>

// Main function
int main (int argc, char *argv[]) {

    FILE *f;
    f = fopen(argv[1], "r");

    int numbers[10];
    int i;

    if(f == NULL) {
        printf("File Not Found");
        exit(0);
    }
    int sum;

    for(i = 0; i < 10; i++) {
        fscanf(f, "%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("%d\n",sum);

    fclose(f);
    return 0;

}

// EOF