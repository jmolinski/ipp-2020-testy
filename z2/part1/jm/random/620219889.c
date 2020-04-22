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
uuid: 620219889
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 9, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board213111634 = gamma_board(board);
assert( board213111634 != NULL );
assert( strcmp(board213111634, 
".45...\n"
"......\n"
"....98\n"
"43..5.\n"
"6.16.9\n"
"23.12.\n"
".11672\n"
"793.5.\n"
"5....3\n"
"......\n") == 0);
free(board213111634);
board213111634 = NULL;
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );


char* board302105544 = gamma_board(board);
assert( board302105544 != NULL );
assert( strcmp(board302105544, 
".45...\n"
"..8.2.\n"
"..4.98\n"
"43..5.\n"
"6.1699\n"
"23.12.\n"
".11672\n"
"793.5.\n"
"55...3\n"
".....8\n") == 0);
free(board302105544);
board302105544 = NULL;
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_free_fields(board, 9) == 24 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_golden_move(board, 7, 4, 4) == 1 );
assert( gamma_golden_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_golden_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );


gamma_delete(board);

    return 0;
}
