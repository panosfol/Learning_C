#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef enum {
    gg,
    droseros,
    kefalakis,
    sknipa,
    tsipoura,
    kala_eimai
    } Drunkness;

 typedef struct {
    Drunkness drunkness;
    bool      coitus;
    bool      drive;
    //tm        date;
    char*     location;
    bool      talked_to_ex;
} Craziness;

int main() {

    char ch1, char_temp;
    Craziness night;


    //printf ("Pou eisai?\n");

    printf ("Poso poutsa egines simera filos?\n");
    scanf ("%d ", &night.drunkness);
    switch (night.drunkness) {
        case 0: printf ("A eisai florakos shmera ok...\n"); break;
        case 1: printf ("Drosero se vrisko kati kaneis\n"); break;
        case 2: printf ("Opa tis..\n"); break;
        case 3: printf ("Epithetikos vlepo!\n"); break;
        case 4: printf ("A kala se kovo me taxi\n"); break;
        case 5: printf ("Poios se pligose agori moy?\n"); break;
    }
    printf ("Gamises toulaxiston?\t(y / n)\n");
    char_temp = getchar();
    while (char_temp != 'y' && char_temp != 'n') {
        printf ("Wrong letter broski\n");
        char_temp = getchar();
    }
    if (char_temp == 'y') 
        night.coitus = true;
    else
        night.coitus = false;
    printf ("Tha kaneis kamia malakia na odigiseis?\t(y / n)\n");
    char_temp = 'y';
    while (char_temp != 'y' && char_temp != 'n') {
        printf ("Wrong letter broski\n");
        char_temp = getchar();
    }
    if (char_temp == 'y') 
        night.drive = true;
    else 
        night.drive = false;
    if (night.drive && night.drunkness >= 3) 
        printf ("Toso zanta tha malakia na odigiseis pantos..\n");
    printf ("Se kamia prwhn esteiles?\t(y / n)\n");
    char_temp = getchar();
    while (char_temp != 'y' && char_temp != 'n') {
        printf ("Wrong letter broski\n");
        char_temp = getchar();
    }
    if (char_temp == 'y') 
        night.talked_to_ex = true;
    else
        night.talked_to_ex = false;
    return 0;
}
    


