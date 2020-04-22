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
uuid: 704231078
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 5, 7, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 54 );


char* board486491351 = gamma_board(board);
assert( board486491351 != NULL );
assert( strcmp(board486491351, 
"6....25........\n"
"5.4...........6\n"
"..31....4.1.42.\n"
"..57..3..7..3..\n"
".2.7.6..7......\n") == 0);
free(board486491351);
board486491351 = NULL;
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_free_fields(board, 7) == 41 );


char* board481122662 = gamma_board(board);
assert( board481122662 != NULL );
assert( strcmp(board481122662, 
"66..3252.7..43.\n"
"5.437.7......26\n"
"..31.5..4.1.42.\n"
"..57..3..7..3..\n"
"72.756..7......\n") == 0);
free(board481122662);
board481122662 = NULL;
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );


char* board271451336 = gamma_board(board);
assert( board271451336 != NULL );
assert( strcmp(board271451336, 
"66473252.7..43.\n"
"5.437.7....6.26\n"
"6231.5..4.1.42.\n"
".357.235.7..35.\n"
"72.756..7....7.\n") == 0);
free(board271451336);
board271451336 = NULL;
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 14, 4) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 6, 0, 14) == 0 );


char* board243940383 = gamma_board(board);
assert( board243940383 != NULL );
assert( strcmp(board243940383, 
"66473252.7..436\n"
"5.437.7.1..6.26\n"
"6231.5..4.1.42.\n"
".357.235.76.35.\n"
"72.7564.73.3.7.\n") == 0);
free(board243940383);
board243940383 = NULL;
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 14, 2) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_golden_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );


char* board570223455 = gamma_board(board);
assert( board570223455 != NULL );
assert( strcmp(board570223455, 
"6647325217.7436\n"
"5743777.1..6526\n"
"6231.5..4.15427\n"
"4357.235.76.35.\n"
"7277564673.3.7.\n") == 0);
free(board570223455);
board570223455 = NULL;
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );


char* board480093910 = gamma_board(board);
assert( board480093910 != NULL );
assert( strcmp(board480093910, 
"6647325217.7436\n"
"5743777.1..6526\n"
"6231.5.34.15427\n"
"4357.235.76.35.\n"
"7277564673.3.7.\n") == 0);
free(board480093910);
board480093910 = NULL;
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
