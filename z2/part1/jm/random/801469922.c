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
uuid: 801469922
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 8, 17);
assert( board != NULL );


assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board579910080 = gamma_board(board);
assert( board579910080 != NULL );
assert( strcmp(board579910080, 
"4......\n"
"5.63...\n"
".....5.\n"
"7...641\n"
"8.14...\n"
"422.3..\n"
"3..64.3\n"
".6.5...\n"
".5...7.\n"
".35....\n") == 0);
free(board579910080);
board579910080 = NULL;
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );


char* board228823023 = gamma_board(board);
assert( board228823023 != NULL );
assert( strcmp(board228823023, 
"4.5.4.1\n"
"5463.8.\n"
"..2.851\n"
"7.7.641\n"
"8.14...\n"
"422.353\n"
"34.64.3\n"
".6.5...\n"
".56..72\n"
"835...6\n") == 0);
free(board228823023);
board228823023 = NULL;
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_free_fields(board, 7) == 26 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_golden_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 1, 9) == 0 );


char* board365645001 = gamma_board(board);
assert( board365645001 != NULL );
assert( strcmp(board365645001, 
"4758431\n"
"5463.8.\n"
".427851\n"
"7777647\n"
"8.142..\n"
"422.353\n"
"34.64.3\n"
"1655..3\n"
".56..72\n"
"835.186\n") == 0);
free(board365645001);
board365645001 = NULL;
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 8, 6) == 0 );


gamma_delete(board);

    return 0;
}
