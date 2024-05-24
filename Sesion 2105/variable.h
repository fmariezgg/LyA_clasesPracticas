#define MAX_STR 60 //maximo de string
#define MAX_REG 1000 //maximo de registr


typedef struct {
    char cif[MAX_STR];
    char name[MAX_STR];
    char lastName[MAX_STR];
    int year;
} PERSON;

PERSON people[MAX_REG]; //people es tipo PERSON, y person es una estrctura
int pos = 0;

