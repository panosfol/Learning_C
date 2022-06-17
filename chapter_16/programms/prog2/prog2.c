#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN + 1];
    int price;
    int on_hand;
};


int find_part (int, int, struct part []);
void insert (int , struct part []);
void search (int , struct part []);
void update (int , struct part []);
void print (int , struct part []);

int main(void) {
    char code;
    struct part inventory[MAX_PARTS];
    int num_parts = 0;
    
    for (;;) {
        printf ("Enter operation code: ");
        scanf (" %c", &code);
        while (getchar() != '\n')
            ;
        switch (code) {
            case 'i' : insert (num_parts, inventory);
                       num_parts++;
                       break;
            case 's' : search(num_parts ,inventory);
                       break;
            case 'u' : update(num_parts, inventory);
                       break;
            case 'p' : print(num_parts, inventory);
                       break;
            case 'q' : return 0;
            default: printf ("Illegal code\n");
        }
        printf ("\n");
    }
}

int find_part (int number, int num_parts ,struct part inventory[])
{
    int i;

    for (i = 0; i < num_parts; i++)
        if (inventory[i].number == number)
            return i;
    return -1;
}

void insert (int num_parts, struct part inventory[])
{
    int part_number;

    if (num_parts == MAX_PARTS) {
        printf ("Database is full; can't add more parts.\n");
        return;
    }
    
    printf ("Enter part number: ");
    scanf ("%d", &part_number);
    if (find_part(part_number, num_parts, inventory) >= 0) {
        printf ("Part already exists.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf ("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf ("Enter quantity on hands: ");
    scanf ("%d", &inventory[num_parts].on_hand);
    printf ("Enter price of item: ");
    scanf ("%d", &inventory[num_parts].price);
    return;
}

void search (int num_parts, struct part inventory[]) {
    int i, number;

    printf ("Enter part number: ");
    scanf ("%d", &number);
    i = find_part(number, num_parts, inventory);
    if (i >= 0) {
        printf ("Part name: %s\n", inventory[i].name);
        printf ("Quantity on hand: %d\n", inventory[i].on_hand);
        printf ("Price of item: %d\n", inventory[i].price);
    } else
      printf ("Part not found.\n");
}

void update (int num_parts, struct part inventory[]) {
    int i, number, change;

    printf ("Enter part number: ");
    scanf ("%d", &number);
    i = find_part(number, num_parts, inventory);
    if (i >= 0) {
        printf ("Enter change in quantity on hand: ");
        scanf ("%d", &change);
        inventory[i].on_hand += change;
    } else
      printf ("Part not found.\n");
}

void print (int num_parts, struct part inventory[]) {
    int i;
    
    printf ("Part Number    Part name                  "
            "Quantity on hand           Price\n");
    for (i = 0; i < num_parts; i++)
        printf ("%7d        %-25s%11d%20d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand, inventory[i].price);
}