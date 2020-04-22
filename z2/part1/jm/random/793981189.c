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
uuid: 793981189
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 6, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_golden_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );


char* board519929461 = gamma_board(board);
assert( board519929461 != NULL );
assert( strcmp(board519929461, 
"..6....3..\n"
"....1.....\n"
".1.2.355..\n"
".....23...\n"
"41...64...\n"
"..3...55..\n"
"..656.....\n") == 0);
free(board519929461);
board519929461 = NULL;
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );


char* board392554951 = gamma_board(board);
assert( board392554951 != NULL );
assert( strcmp(board392554951, 
"316.1253..\n"
"....1..1..\n"
".1526355.6\n"
"..2..23...\n"
"416..64.3.\n"
"5.34.555.4\n"
"2665643.6.\n") == 0);
free(board392554951);
board392554951 = NULL;
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_golden_move(board, 2, 4, 4) == 0 );


char* board811721545 = gamma_board(board);
assert( board811721545 != NULL );
assert( strcmp(board811721545, 
"316.1253..\n"
"..5.1..1.2\n"
".1526355.6\n"
"..2..23.2.\n"
"416..64.3.\n"
"5.34.555.4\n"
"2665643.6.\n") == 0);
free(board811721545);
board811721545 = NULL;
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );


char* board677560643 = gamma_board(board);
assert( board677560643 != NULL );
assert( strcmp(board677560643, 
"316.12535.\n"
".65.1..1.2\n"
".1526355.6\n"
"..2..23.2.\n"
"416..64.3.\n"
"5.34.555.4\n"
"266564316.\n") == 0);
free(board677560643);
board677560643 = NULL;
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );


char* board906280340 = gamma_board(board);
assert( board906280340 != NULL );
assert( strcmp(board906280340, 
"316.12535.\n"
".65.1..1.2\n"
".1526355.6\n"
"..2..23.2.\n"
"4166.64.3.\n"
"5.34.55554\n"
"266564316.\n") == 0);
free(board906280340);
board906280340 = NULL;
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_golden_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );


char* board434464793 = gamma_board(board);
assert( board434464793 != NULL );
assert( strcmp(board434464793, 
"3164125354\n"
"665.113152\n"
"11526335.6\n"
"3.26623.2.\n"
"4166464.3.\n"
"5634.55554\n"
"266564316.\n") == 0);
free(board434464793);
board434464793 = NULL;
assert( gamma_move(board, 6, 4, 3) == 0 );


char* board198933951 = gamma_board(board);
assert( board198933951 != NULL );
assert( strcmp(board198933951, 
"3164125354\n"
"665.113152\n"
"11526335.6\n"
"3.26623.2.\n"
"4166464.3.\n"
"5634.55554\n"
"266564316.\n") == 0);
free(board198933951);
board198933951 = NULL;
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 9) == 0 );


gamma_delete(board);

    return 0;
}
