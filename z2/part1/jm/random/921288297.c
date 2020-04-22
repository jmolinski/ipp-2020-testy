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
uuid: 921288297
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 5, 5, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );


char* board183211897 = gamma_board(board);
assert( board183211897 != NULL );
assert( strcmp(board183211897, 
"....1\n"
"2....\n"
"....2\n"
".....\n"
".....\n") == 0);
free(board183211897);
board183211897 = NULL;
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board373009683 = gamma_board(board);
assert( board373009683 != NULL );
assert( strcmp(board373009683, 
".3.51\n"
"2...1\n"
"5.112\n"
".45.1\n"
"3..2.\n") == 0);
free(board373009683);
board373009683 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board761650770 = gamma_board(board);
assert( board761650770 != NULL );
assert( strcmp(board761650770, 
".3.51\n"
"2...1\n"
"5.112\n"
".45.1\n"
"33.2.\n") == 0);
free(board761650770);
board761650770 = NULL;
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );


gamma_delete(board);

    return 0;
}
