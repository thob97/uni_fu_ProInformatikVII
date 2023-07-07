#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

int main(int argc, char *argv[]){ 

int temp;
char *name = argv[1];
char *name2 = argv[2];
FILE *datei  = fopen( name, "r");
FILE *datei2 = fopen(name2, "w");

if (datei==NULL) {
    //printf("Datei %s konnte nicht geöffnet werden \n", name);
    perror(name);
    return (1);
    }

    printf("Datei %s konnte geöffnet werden \n", name);
    printf("Inhalt von text datei:");
    while ((temp = fgetc(datei)) != EOF) {
        printf("%c",temp);
        fputc(temp, datei2);
        /* fwrite(&temp, sizeof(temp), 1, datei2); */
    }
    printf("\n");
    fclose(datei);
    fclose(datei2);

}


/* #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){ 

int i;
char temp[64];
char *name = argv[1];
char *name2 = argv[2];
FILE *datei  = fopen( name, "r");
FILE *datei2 = fopen(name2, "w");

if (datei==NULL) {
    printf("Datei %s konnte nicht geöffnet werden \n", name);
    }
else {
    printf("Datei %s konnte geöffnet werden \n", name);
    printf("Inhalt von text datei:");
    while (1) {
        if (feof(datei)) {
            break;
        }
        i = fread(temp, sizeof(temp), 64, datei);
        printf(temp);
        printf("\n");
        fwrite(temp, sizeof(temp), i, datei2);
        }
        
    fclose(datei);
    fclose(datei2);
    }    

} */