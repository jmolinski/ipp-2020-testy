#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 947838811
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 4, 6, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );


char* board544678933 = gamma_board(board);
assert( board544678933 != NULL );
assert( strcmp(board544678933, 
"32.13..\n"
"..5...4\n"
"5..4...\n"
"..13...\n") == 0);
free(board544678933);
board544678933 = NULL;
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board497431669 = gamma_board(board);
assert( board497431669 != NULL );
assert( strcmp(board497431669, 
"32.13..\n"
"22514.4\n"
"51.4.2.\n"
".113..5\n") == 0);
free(board497431669);
board497431669 = NULL;
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );


char* board755622372 = gamma_board(board);
assert( board755622372 != NULL );
assert( strcmp(board755622372, 
"32213..\n"
"22514.4\n"
"51.4.2.\n"
".113..5\n") == 0);
free(board755622372);
board755622372 = NULL;
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );


char* board412787163 = gamma_board(board);
assert( board412787163 != NULL );
assert( strcmp(board412787163, 
"322131.\n"
"22514.4\n"
"51.4.2.\n"
"5113..5\n") == 0);
free(board412787163);
board412787163 = NULL;


gamma_delete(board);

    return 0;
}
