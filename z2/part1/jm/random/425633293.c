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
uuid: 425633293
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 0 );


char* board193507118 = gamma_board(board);
assert( board193507118 != NULL );
assert( strcmp(board193507118, 
"....5.....\n"
"..........\n"
"......1...\n"
".....4.6.4\n"
"..3.......\n"
"..........\n"
"..........\n"
".......2..\n") == 0);
free(board193507118);
board193507118 = NULL;
assert( gamma_move(board, 1, 6, 3) == 1 );


char* board909111979 = gamma_board(board);
assert( board909111979 != NULL );
assert( strcmp(board909111979, 
"....5.....\n"
"..........\n"
"......1...\n"
".....4.6.4\n"
"..3...1...\n"
"..........\n"
"..........\n"
".......2..\n") == 0);
free(board909111979);
board909111979 = NULL;
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );


char* board337151364 = gamma_board(board);
assert( board337151364 != NULL );
assert( strcmp(board337151364, 
"....5.....\n"
"66.8..4...\n"
"..4...1...\n"
".....4.6.4\n"
"..3..71...\n"
"..5368...4\n"
"...1......\n"
"..3.2..2..\n") == 0);
free(board337151364);
board337151364 = NULL;
assert( gamma_golden_move(board, 7, 0, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_golden_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_golden_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board475815181 = gamma_board(board);
assert( board475815181 != NULL );
assert( strcmp(board475815181, 
"2881544518\n"
"66287617..\n"
"2.42541...\n"
".411742634\n"
"7637.2185.\n"
"2653683..4\n"
"33.1.72487\n"
"333625.2..\n") == 0);
free(board475815181);
board475815181 = NULL;
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );


char* board101299155 = gamma_board(board);
assert( board101299155 != NULL );
assert( strcmp(board101299155, 
"2881544518\n"
"66287617..\n"
"2.42541...\n"
".411742634\n"
"7637.2185.\n"
"2653683..4\n"
"33.1.72487\n"
"333625.2..\n") == 0);
free(board101299155);
board101299155 = NULL;
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_golden_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );


gamma_delete(board);

    return 0;
}
