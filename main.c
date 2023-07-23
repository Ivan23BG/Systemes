#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int ex;
    char exercise[12];
    char command[128];
    while (1) {
        printf("What exercise would you like to visualise ?\n");
        scanf("%d",&ex);
        if (ex == 0) {
            break;
        }
        if (ex < 10) {
            sprintf(exercise, "Exercice_0%d", ex);
        } else {
            sprintf(exercise, "Exercice_%d", ex);
        } // find the correct file name

        sprintf(command, "gcc %s.c -o Execs/%s\n", exercise, exercise);
        system(command);
        for (int i = 0; i < 128; i++) {
            command[i] = '\0';
        }

        sprintf(command, "Execs\\%s\n", exercise); // add ./ if not using config
        system(command);
        printf("\n");
    }

    return 0;
}
