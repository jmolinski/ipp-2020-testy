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
uuid: 699791699
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 6, 6, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board784830979 = gamma_board(board);
assert( board784830979 != NULL );
assert( strcmp(board784830979, 
".2.4\n"
"64..\n"
"..5.\n"
".441\n"
"1...\n"
"...1\n") == 0);
free(board784830979);
board784830979 = NULL;
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board557009798 = gamma_board(board);
assert( board557009798 != NULL );
assert( strcmp(board557009798, 
".254\n"
"64.6\n"
"3255\n"
"4441\n"
"13.5\n"
"4411\n") == 0);
free(board557009798);
board557009798 = NULL;
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
