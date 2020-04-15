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
uuid: 232947710
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 5, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_free_fields(board, 8) == 8 );


char* board886908634 = gamma_board(board);
assert( board886908634 != NULL );
assert( strcmp(board886908634, 
"76.\n"
".1.\n"
".1.\n"
"32.\n"
"..3\n") == 0);
free(board886908634);
board886908634 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_free_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_free_fields(board, 7) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 5 );


char* board444521885 = gamma_board(board);
assert( board444521885 != NULL );
assert( strcmp(board444521885, 
"76.\n"
"514\n"
".16\n"
"32.\n"
"..3\n") == 0);
free(board444521885);
board444521885 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board521208013 = gamma_board(board);
assert( board521208013 != NULL );
assert( strcmp(board521208013, 
"76.\n"
"514\n"
".16\n"
"32.\n"
"..3\n") == 0);
free(board521208013);
board521208013 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );


char* board361007350 = gamma_board(board);
assert( board361007350 != NULL );
assert( strcmp(board361007350, 
"76.\n"
"514\n"
"616\n"
"32.\n"
".43\n") == 0);
free(board361007350);
board361007350 = NULL;


gamma_delete(board);

    return 0;
}
