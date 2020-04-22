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
uuid: 567081654
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 5, 9, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board633014383 = gamma_board(board);
assert( board633014383 != NULL );
assert( strcmp(board633014383, 
"...5.6\n"
"...4..\n"
"....7.\n"
".8..2.\n"
"..1...\n") == 0);
free(board633014383);
board633014383 = NULL;
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );


char* board472059525 = gamma_board(board);
assert( board472059525 != NULL );
assert( strcmp(board472059525, 
"6.75.6\n"
"...4..\n"
"....7.\n"
"98..2.\n"
".911.3\n") == 0);
free(board472059525);
board472059525 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_golden_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );


char* board566876891 = gamma_board(board);
assert( board566876891 != NULL );
assert( strcmp(board566876891, 
"6.75.6\n"
"86.7..\n"
"..8.7.\n"
"98..2.\n"
"3911.3\n") == 0);
free(board566876891);
board566876891 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_golden_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_golden_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_free_fields(board, 6) == 2 );


gamma_delete(board);

    return 0;
}
