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
uuid: 462490125
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 11, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );


char* board390997943 = gamma_board(board);
assert( board390997943 != NULL );
assert( strcmp(board390997943, 
".......\n"
"4......\n"
"...1...\n"
".8....5\n"
".....3.\n"
".......\n"
"...72..\n"
".1.8...\n"
"4..5...\n"
".....3.\n"
".2.3...\n") == 0);
free(board390997943);
board390997943 = NULL;
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );


char* board855727801 = gamma_board(board);
assert( board855727801 != NULL );
assert( strcmp(board855727801, 
"..5.1..\n"
"4......\n"
"3..1...\n"
".8..6.5\n"
".....3.\n"
".....1.\n"
".8.724.\n"
".1.8...\n"
"4..5...\n"
".....3.\n"
".2.32..\n") == 0);
free(board855727801);
board855727801 = NULL;
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_golden_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );


char* board711782196 = gamma_board(board);
assert( board711782196 != NULL );
assert( strcmp(board711782196, 
"..5.1.7\n"
"488....\n"
"3..1.3.\n"
"48..695\n"
"..79.3.\n"
".....16\n"
".8.7243\n"
"11.887.\n"
"4265...\n"
".6...34\n"
"62.32..\n") == 0);
free(board711782196);
board711782196 = NULL;
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_free_fields(board, 9) == 31 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );


char* board420708637 = gamma_board(board);
assert( board420708637 != NULL );
assert( strcmp(board420708637, 
"..5.1.7\n"
"4887...\n"
"3..1.3.\n"
"48..695\n"
"..79.36\n"
"4....16\n"
".8.7243\n"
"11.8876\n"
"4265...\n"
".6...34\n"
"62732.7\n") == 0);
free(board420708637);
board420708637 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_golden_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );


char* board584631877 = gamma_board(board);
assert( board584631877 != NULL );
assert( strcmp(board584631877, 
"..5.1.7\n"
"48873..\n"
"3..1.3.\n"
"483.695\n"
"..79.36\n"
"481.216\n"
"8827243\n"
"11.8876\n"
"4265..2\n"
"66...34\n"
"62732.7\n") == 0);
free(board584631877);
board584631877 = NULL;
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );


char* board766353377 = gamma_board(board);
assert( board766353377 != NULL );
assert( strcmp(board766353377, 
"..5.1.7\n"
"48873..\n"
"3..1.3.\n"
"483.695\n"
"..79.36\n"
"4819216\n"
"8827243\n"
"11.8876\n"
"4265..2\n"
"66..634\n"
"62732.7\n") == 0);
free(board766353377);
board766353377 = NULL;
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );


char* board674333104 = gamma_board(board);
assert( board674333104 != NULL );
assert( strcmp(board674333104, 
"..5.1.7\n"
"48873..\n"
"3..1.3.\n"
"483.695\n"
"..79.36\n"
"4819216\n"
"8827243\n"
"11.8876\n"
"4265..2\n"
"66..634\n"
"62732.7\n") == 0);
free(board674333104);
board674333104 = NULL;
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 5) == 1 );


gamma_delete(board);

    return 0;
}
