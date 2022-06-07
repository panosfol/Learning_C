#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    const char *suit_code[] = {"clubs", "spades", "hearts", "diamonds"};
    char result[30][30];

    srand ((unsigned) time(NULL));

    printf ("Enter number of cards in hand: ");
    scanf ("%d", &num_cards);

    printf ("Your hand: ");
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]) {
            in_hand [suit][rank] = true;
            strcpy (result[num_cards - 1], rank_code[rank]);
            strcat (result[num_cards - 1], " of ");
            strcat (result[num_cards - 1], suit_code[suit]);
            printf ("%s\n", result[num_cards - 1]);
            num_cards--;
        }
    }
    return 0;
}