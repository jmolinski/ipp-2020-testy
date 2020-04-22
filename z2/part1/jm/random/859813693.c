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
uuid: 859813693
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(20, 25, 4, 41);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 1, 19, 0) == 1 );
assert( gamma_move(board, 2, 16, 16) == 1 );
assert( gamma_move(board, 2, 5, 23) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 496 );
assert( gamma_move(board, 3, 11, 6) == 1 );
assert( gamma_move(board, 3, 14, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 21) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 17, 6) == 1 );
assert( gamma_move(board, 1, 18, 6) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 3, 14, 15) == 1 );
assert( gamma_move(board, 4, 24, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_free_fields(board, 1) == 488 );


char* board263466428 = gamma_board(board);
assert( board263466428 != NULL );
assert( strcmp(board263466428, 
"....................\n"
".....2..............\n"
"....................\n"
"....4...............\n"
"....................\n"
"....................\n"
"....................\n"
"..............3.....\n"
"................2...\n"
"..............3.....\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"...........3.....11.\n"
"....................\n"
"....................\n"
".....1........2.....\n"
"....................\n"
"............1.......\n"
"...................1\n") == 0);
free(board263466428);
board263466428 = NULL;
assert( gamma_move(board, 2, 20, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 22) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 23, 8) == 0 );
assert( gamma_move(board, 4, 17, 7) == 1 );
assert( gamma_move(board, 1, 3, 16) == 1 );


char* board706162261 = gamma_board(board);
assert( board706162261 != NULL );
assert( strcmp(board706162261, 
"....................\n"
".....2..............\n"
"..3.................\n"
"....4...............\n"
"....................\n"
"....................\n"
"....................\n"
"..............3.....\n"
"...1............2...\n"
"..............3.....\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
"....................\n"
".................4..\n"
"...........3.....11.\n"
"........3...........\n"
"....................\n"
".....1........2.....\n"
"....................\n"
"............1.......\n"
"...................1\n") == 0);
free(board706162261);
board706162261 = NULL;
assert( gamma_move(board, 2, 16, 13) == 1 );
assert( gamma_move(board, 2, 11, 19) == 1 );
assert( gamma_move(board, 3, 18, 11) == 1 );
assert( gamma_free_fields(board, 3) == 481 );
assert( gamma_golden_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 19, 13) == 1 );
assert( gamma_move(board, 4, 15, 2) == 1 );
assert( gamma_move(board, 1, 12, 21) == 1 );
assert( gamma_move(board, 1, 19, 14) == 1 );
assert( gamma_move(board, 2, 10, 19) == 1 );
assert( gamma_move(board, 3, 14, 18) == 1 );
assert( gamma_move(board, 3, 5, 18) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_move(board, 2, 4, 15) == 1 );
assert( gamma_move(board, 2, 17, 13) == 1 );
assert( gamma_move(board, 3, 0, 20) == 1 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 4, 14, 12) == 1 );
assert( gamma_move(board, 1, 8, 19) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 19, 23) == 1 );
assert( gamma_free_fields(board, 3) == 463 );
assert( gamma_move(board, 4, 17, 11) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 1, 17, 24) == 1 );
assert( gamma_move(board, 1, 6, 17) == 1 );
assert( gamma_free_fields(board, 1) == 459 );
assert( gamma_golden_move(board, 1, 18, 14) == 0 );
assert( gamma_move(board, 2, 18, 13) == 1 );
assert( gamma_move(board, 2, 18, 24) == 1 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 3, 7, 21) == 1 );
assert( gamma_move(board, 4, 9, 14) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 453 );
assert( gamma_move(board, 1, 23, 4) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 24) == 1 );
assert( gamma_move(board, 3, 6, 16) == 1 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_move(board, 1, 19, 14) == 0 );
assert( gamma_move(board, 1, 15, 9) == 1 );
assert( gamma_move(board, 2, 21, 14) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 3, 12, 15) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 21) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 17, 22) == 1 );


char* board263411166 = gamma_board(board);
assert( board263411166 != NULL );
assert( strcmp(board263411166, 
".................122\n"
".....2.............3\n"
"..3..............3..\n"
"....4..3..2.1.......\n"
"3...................\n"
"........1.22........\n"
".....3........3.....\n"
"......1.......3.....\n"
"...1..3.........2...\n"
"....2.......3.3.....\n"
".........4.........1\n"
"..4.............2224\n"
"...1..........4.....\n"
".................43.\n"
"......2.....3.......\n"
"...............1....\n"
"..........4....1....\n"
"...4.......42....4..\n"
"........4..33....11.\n"
".....1..3...........\n"
"..............4.....\n"
"...2.1.2......2.....\n"
"...............4....\n"
"............1.......\n"
"...................1\n") == 0);
free(board263411166);
board263411166 = NULL;
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 0, 18) == 1 );
assert( gamma_move(board, 2, 7, 13) == 1 );


char* board935965720 = gamma_board(board);
assert( board935965720 != NULL );
assert( strcmp(board935965720, 
".................122\n"
".....2.............3\n"
"..3..............3..\n"
"....4..3..2.1.......\n"
"3...................\n"
"........1.22........\n"
"2....3........3.....\n"
"......1.......3.....\n"
"...1..3.........2...\n"
"....2.......3.3.....\n"
".........4.........1\n"
"..4....2........2224\n"
"...1..........4.....\n"
".................43.\n"
"......2.....3.......\n"
"...............1....\n"
"..........4....1....\n"
"...4.......42....4..\n"
"........4..33....11.\n"
".....1..3...........\n"
"..............4.....\n"
"...2.1.2......2.....\n"
"...............4....\n"
"............1.......\n"
"...................1\n") == 0);
free(board935965720);
board935965720 = NULL;
assert( gamma_move(board, 3, 16, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 1, 22, 3) == 0 );
assert( gamma_move(board, 2, 20, 4) == 0 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 18, 15) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );


char* board556185237 = gamma_board(board);
assert( board556185237 != NULL );
assert( strcmp(board556185237, 
".................122\n"
".....2.............3\n"
"..3..............3..\n"
"....4..3..2.1.......\n"
"3...................\n"
"........1.22........\n"
"2....3........3.....\n"
"......1.......3.....\n"
"...1..3.........2...\n"
"....2.......3.3...4.\n"
"3........4.........1\n"
"..4....2...3....2224\n"
"...1..4.......4.....\n"
".................43.\n"
"......2.....3...3...\n"
"...............1....\n"
"....1.....4....1....\n"
"...4.......42....4..\n"
"........4..33....11.\n"
".....1..3.4.........\n"
"..............4.....\n"
"...2.1.2......2.....\n"
".2.............4....\n"
"............1.......\n"
"...................1\n") == 0);
free(board556185237);
board556185237 = NULL;
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 3, 14, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 1, 20, 10) == 0 );
assert( gamma_move(board, 2, 18, 3) == 1 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 18) == 1 );
assert( gamma_move(board, 2, 19, 21) == 1 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_move(board, 1, 24, 12) == 0 );
assert( gamma_move(board, 1, 3, 24) == 1 );
assert( gamma_golden_move(board, 1, 11, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 1, 19, 6) == 1 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 16, 7) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 17) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 5, 17) == 1 );
assert( gamma_golden_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 5, 22) == 1 );
assert( gamma_move(board, 2, 16, 4) == 1 );
assert( gamma_golden_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 3, 13, 18) == 1 );
assert( gamma_move(board, 4, 10, 13) == 1 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 400 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 19) == 1 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 19, 20) == 1 );
assert( gamma_move(board, 2, 14, 14) == 1 );
assert( gamma_free_fields(board, 2) == 393 );
assert( gamma_golden_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 3, 22, 8) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 21, 14) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 22, 14) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 19, 17) == 1 );
assert( gamma_move(board, 3, 0, 16) == 1 );
assert( gamma_free_fields(board, 3) == 388 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 1, 12, 24) == 1 );
assert( gamma_move(board, 2, 15, 19) == 1 );
assert( gamma_golden_move(board, 2, 22, 4) == 0 );
assert( gamma_move(board, 3, 9, 19) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 3, 22, 10) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_free_fields(board, 4) == 380 );
assert( gamma_move(board, 1, 15, 24) == 1 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_move(board, 4, 19, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 1, 23, 2) == 0 );
assert( gamma_move(board, 2, 14, 22) == 1 );
assert( gamma_move(board, 2, 5, 19) == 1 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 14, 17) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 9, 18) == 1 );
assert( gamma_move(board, 4, 18, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 35 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 1, 16, 9) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 23) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_golden_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 1, 10, 17) == 1 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_move(board, 2, 9, 20) == 1 );
assert( gamma_move(board, 3, 22, 6) == 0 );
assert( gamma_move(board, 4, 23, 16) == 0 );
assert( gamma_move(board, 4, 17, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 16, 18) == 1 );
assert( gamma_move(board, 2, 3, 15) == 1 );
assert( gamma_move(board, 3, 15, 10) == 1 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 14) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_free_fields(board, 1) == 359 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 4, 15, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_free_fields(board, 4) == 355 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 23, 13) == 0 );
assert( gamma_move(board, 2, 15, 23) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 24, 1) == 0 );
assert( gamma_move(board, 4, 11, 22) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 3, 13, 2) == 1 );


char* board710084090 = gamma_board(board);
assert( board710084090 != NULL );
assert( strcmp(board710084090, 
"...1........1..1.122\n"
".....2.........2...3\n"
"..3..1.....4..2..3..\n"
"....4..3..2.1......2\n"
"3........2.........1\n"
".2..32..1322...2....\n"
"2....31..4...33.1...\n"
".....31.1.1...3....3\n"
"3..1..3.........2...\n"
"...22.......3.3...4.\n"
"33......14....2....1\n"
"..424132..43....2224\n"
"3..1..4.1.4...4.....\n"
"....4...1.....3..434\n"
"2.....22.32.3..33...\n"
"....11.4...3...11...\n"
"....1...1.4....1....\n"
"2..44.4..4.4223.34..\n"
"..2.3.1.44.33..4.111\n"
".3...33.3.4.........\n"
"..1421........4.2...\n"
"...2.1424.....2...2.\n"
".2...4.......3.4.4..\n"
"4..2........1.......\n"
"....2..2...........1\n") == 0);
free(board710084090);
board710084090 = NULL;
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 4, 21) == 0 );
assert( gamma_free_fields(board, 4) == 349 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_free_fields(board, 1) == 348 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 10, 22) == 1 );
assert( gamma_move(board, 1, 16, 17) == 1 );
assert( gamma_move(board, 2, 19, 19) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 1, 16) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_free_fields(board, 4) == 340 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 2, 20, 7) == 0 );
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_free_fields(board, 2) == 340 );
assert( gamma_move(board, 3, 16, 19) == 1 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 3, 21) == 1 );
assert( gamma_golden_move(board, 2, 6, 17) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 1, 13, 18) == 0 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_move(board, 2, 19, 4) == 1 );
assert( gamma_move(board, 3, 18, 18) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 14, 21) == 1 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 1, 21, 6) == 0 );
assert( gamma_move(board, 2, 12, 17) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_move(board, 3, 4, 18) == 1 );
assert( gamma_move(board, 3, 15, 14) == 1 );
assert( gamma_move(board, 4, 19, 13) == 0 );
assert( gamma_move(board, 1, 5, 23) == 0 );
assert( gamma_move(board, 2, 12, 16) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 21, 5) == 0 );
assert( gamma_move(board, 3, 18, 5) == 1 );
assert( gamma_move(board, 4, 16, 8) == 1 );


char* board803084862 = gamma_board(board);
assert( board803084862 != NULL );
assert( strcmp(board803084862, 
"...1........1..1.122\n"
".....2.........2...3\n"
"..3..1....34..2..3..\n"
"...14..3..2.1.4....2\n"
"3........2.........1\n"
".2..32..1322...23..2\n"
"2...331..4...33.1.3.\n"
".....32.1.1.2.3.1..3\n"
"33.1..3.....2...2...\n"
"...22.......3.3...4.\n"
"33......14....23...1\n"
"..424132..43....2224\n"
"3..1..4.1.4...4.....\n"
"....4...1.....3..434\n"
"2.....22.32.3..33...\n"
"..1.11.4..33...11...\n"
".4..1...1.4....14...\n"
"2.144.4..4.4223.34..\n"
"..2.3.1.44.33..4.111\n"
".3..333.334.......3.\n"
".31421...2....4.2..2\n"
"...2.1424..2..2...2.\n"
".2...4.......3.4.4..\n"
"4..2....4...1.......\n"
"....2..2...........1\n") == 0);
free(board803084862);
board803084862 = NULL;
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 2, 2, 16) == 1 );
assert( gamma_move(board, 3, 17, 21) == 1 );
assert( gamma_busy_fields(board, 3) == 51 );
assert( gamma_free_fields(board, 4) == 320 );
assert( gamma_move(board, 1, 18, 10) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 110 );
assert( gamma_move(board, 3, 2, 14) == 1 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 19, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 24, 7) == 0 );
assert( gamma_move(board, 3, 10, 19) == 0 );
assert( gamma_move(board, 4, 19, 2) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 14, 13) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 20, 10) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 1, 16, 18) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 50 );
assert( gamma_golden_move(board, 2, 18, 14) == 0 );
assert( gamma_move(board, 3, 20, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 15, 16) == 1 );
assert( gamma_move(board, 1, 19, 18) == 1 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_free_fields(board, 1) == 310 );
assert( gamma_move(board, 2, 16, 15) == 1 );
assert( gamma_free_fields(board, 2) == 108 );
assert( gamma_move(board, 3, 19, 16) == 1 );
assert( gamma_move(board, 3, 11, 17) == 1 );
assert( gamma_move(board, 4, 18, 15) == 0 );
assert( gamma_free_fields(board, 4) == 307 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 3, 21, 1) == 0 );
assert( gamma_move(board, 3, 8, 15) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 18, 19) == 1 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 1) == 304 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 22, 1) == 0 );
assert( gamma_move(board, 1, 11, 19) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_free_fields(board, 3) == 304 );
assert( gamma_move(board, 4, 15, 22) == 1 );
assert( gamma_free_fields(board, 4) == 303 );
assert( gamma_move(board, 1, 14, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board934804444 = gamma_board(board);
assert( board934804444 != NULL );
assert( strcmp(board934804444, 
"...1........1..1.122\n"
".....2.........2...3\n"
"..3..1....34..24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.........1\n"
".2..32..1322...23.42\n"
"2...331..4...33.1.31\n"
".....32.1.132.3.1..3\n"
"3321..3.....2..42..3\n"
"...22...3...3.3.2.4.\n"
"333.....14....23...1\n"
"..424132..43..2.2224\n"
"3..1..4.1.4...4.....\n"
"....41..1.....3..434\n"
"2..1..22.32.3..33.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.4..4.4223.34..\n"
"..2.3.1.44.33..4.111\n"
".3..333.334.......3.\n"
".31421...2.3..4.2..2\n"
"...2.1424..2..2...2.\n"
".2...4.....1.3.4.4.4\n"
"4..2....4...1......1\n"
"...12..2...........1\n") == 0);
free(board934804444);
board934804444 = NULL;
assert( gamma_move(board, 2, 21, 15) == 0 );
assert( gamma_move(board, 2, 19, 7) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 7, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 44 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 22, 9) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_free_fields(board, 2) == 102 );
assert( gamma_golden_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 11, 24) == 1 );
assert( gamma_move(board, 4, 14, 15) == 0 );
assert( gamma_move(board, 1, 11, 20) == 1 );
assert( gamma_move(board, 2, 21, 9) == 0 );
assert( gamma_move(board, 3, 24, 0) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_free_fields(board, 3) == 297 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 22, 12) == 0 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 19, 5) == 1 );
assert( gamma_move(board, 3, 9, 24) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_free_fields(board, 4) == 292 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 24, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 13, 15) == 1 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_golden_move(board, 4, 3, 18) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 3, 12, 24) == 0 );
assert( gamma_move(board, 4, 23, 9) == 0 );
assert( gamma_free_fields(board, 4) == 289 );
assert( gamma_move(board, 1, 14, 19) == 1 );
assert( gamma_move(board, 2, 24, 10) == 0 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 15) == 1 );
assert( gamma_move(board, 4, 12, 18) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 1, 16, 11) == 1 );
assert( gamma_move(board, 2, 22, 3) == 0 );
assert( gamma_move(board, 2, 2, 22) == 0 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_move(board, 3, 4, 24) == 1 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 1, 12, 22) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 280 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 2, 17, 22) == 0 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 17) == 1 );
assert( gamma_move(board, 3, 15, 7) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 2, 23) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_free_fields(board, 1) == 277 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 7, 24) == 0 );


char* board422229712 = gamma_board(board);
assert( board422229712 != NULL );
assert( strcmp(board422229712, 
"...13....3.41..1.122\n"
".....2.........2...3\n"
"..3..1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1.......1\n"
".2..32..1322..123.42\n"
"2...331.14..433.1.31\n"
"....332.1.132.3.1..3\n"
"3321..3.....2..42..3\n"
"3..22...3...333.2.4.\n"
"333....314....23...1\n"
"..424132..43312.2224\n"
"3..1..4.1.4...4.....\n"
"3...411.13....3.1434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.4.4223334..\n"
"..2.3.1.44.33..4.111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"...2.1424..2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4..2....4..11......1\n"
"...12.32...........1\n") == 0);
free(board422229712);
board422229712 = NULL;
assert( gamma_move(board, 3, 21, 0) == 0 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_move(board, 1, 23, 6) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 16, 6) == 1 );
assert( gamma_move(board, 4, 17, 17) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 22, 13) == 0 );
assert( gamma_move(board, 4, 19, 23) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 1, 21, 1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 23, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 1, 17, 0) == 1 );


char* board307293321 = gamma_board(board);
assert( board307293321 != NULL );
assert( strcmp(board307293321, 
"...13....3.41..1.122\n"
".....2.........2...3\n"
"..3..1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1.......1\n"
".2..32..1322..123.42\n"
"2...331.14..433.1.31\n"
"....332.1.132.3.14.3\n"
"3321..3.....2..42..3\n"
"3..22...3...333.2.4.\n"
"333....314....23...1\n"
"..424132..43312.2224\n"
"3..1..4.1.4...4.....\n"
"3...411.13....3.1434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334..\n"
"..2.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"...2.1424..2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4..2....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board307293321);
board307293321 = NULL;
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 21, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 0, 18) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 1, 15, 11) == 1 );
assert( gamma_move(board, 2, 3, 19) == 0 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_move(board, 3, 20, 8) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 13, 19) == 0 );
assert( gamma_free_fields(board, 4) == 96 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 22, 4) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 5, 16) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 3, 21, 0) == 0 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 18) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 72 );
assert( gamma_free_fields(board, 3) == 266 );
assert( gamma_move(board, 4, 24, 13) == 0 );
assert( gamma_move(board, 4, 1, 18) == 0 );
assert( gamma_golden_move(board, 4, 21, 12) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 12, 16) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 12, 19) == 1 );
assert( gamma_move(board, 3, 0, 24) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 1, 2, 18) == 1 );
assert( gamma_move(board, 1, 18, 18) == 0 );
assert( gamma_move(board, 2, 24, 10) == 0 );
assert( gamma_move(board, 3, 19, 17) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 1, 20, 16) == 0 );
assert( gamma_move(board, 2, 20, 12) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 0, 18) == 0 );
assert( gamma_move(board, 4, 24, 7) == 0 );
assert( gamma_move(board, 4, 0, 19) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_move(board, 3, 21, 16) == 0 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 4, 9, 24) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 23, 9) == 0 );
assert( gamma_move(board, 1, 9, 24) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 9, 18) == 0 );


char* board175989868 = gamma_board(board);
assert( board175989868 != NULL );
assert( strcmp(board175989868, 
"...13....3.41..1.122\n"
".....2.........2...3\n"
"..3..1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1.......1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"....332.1.132.3.14.3\n"
"3321.33.....2..42..3\n"
"3..22...3...333.2.4.\n"
"333.3..314....23...1\n"
"..4241322143312.2224\n"
"3..1.44.1.4...4.....\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334..\n"
"..2.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"...2.1424..2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board175989868);
board175989868 = NULL;
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 52 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 17) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_move(board, 1, 2, 24) == 1 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 10, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_free_fields(board, 1) == 92 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 2, 4, 21) == 0 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 19, 7) == 1 );
assert( gamma_move(board, 1, 12, 24) == 0 );
assert( gamma_move(board, 2, 18, 10) == 0 );
assert( gamma_move(board, 3, 10, 19) == 0 );
assert( gamma_move(board, 3, 3, 22) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 54 );


char* board220550490 = gamma_board(board);
assert( board220550490 != NULL );
assert( strcmp(board220550490, 
"..113....3.41..1.122\n"
".....2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1.......1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2...332.1.132.3.14.3\n"
"3321.33.....2..42..3\n"
"3..22...3...333.2.4.\n"
"333.3..3144...23...1\n"
"..4241322143312.2224\n"
"3..1.44.1.43..4.....\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334.4\n"
".32.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"...2.1424..2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board220550490);
board220550490 = NULL;
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 15, 20) == 1 );
assert( gamma_golden_move(board, 2, 14, 19) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 11, 16) == 1 );
assert( gamma_move(board, 4, 7, 21) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_free_fields(board, 4) == 93 );


char* board498984388 = gamma_board(board);
assert( board498984388 != NULL );
assert( strcmp(board498984388, 
"..113....3.41..1.122\n"
".....2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2...332.1.132.3.14.3\n"
"3321.33....32..42..3\n"
"3..22...3...333.2.4.\n"
"333.3..3144...23...1\n"
"..4241322143312.2224\n"
"3..1.44.1.43..4.....\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334.4\n"
".32.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.1424..2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board498984388);
board498984388 = NULL;
assert( gamma_move(board, 1, 3, 17) == 1 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 9, 16) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 14, 16) == 1 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_move(board, 4, 23, 4) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_golden_move(board, 2, 19, 4) == 0 );
assert( gamma_move(board, 3, 1, 23) == 1 );
assert( gamma_move(board, 3, 19, 16) == 0 );
assert( gamma_move(board, 4, 20, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 3, 11, 23) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 3, 7, 16) == 1 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 10, 10) == 0 );


char* board277130669 = gamma_board(board);
assert( board277130669 != NULL );
assert( strcmp(board277130669, 
"..113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.1.132.3.14.3\n"
"3321.333...32.342..3\n"
"3..22...3...333.2.4.\n"
"333.3..3144...23...1\n"
"..4241322143312.2224\n"
"3..1.44.1.43..4.....\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334.4\n"
".32.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board277130669);
board277130669 = NULL;
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 54 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 1, 17, 16) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 19, 21) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_move(board, 3, 15, 4) == 0 );


char* board629101495 = gamma_board(board);
assert( board629101495 != NULL );
assert( strcmp(board629101495, 
"..113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.1.132.3.14.3\n"
"3321.333...32.342..3\n"
"3..22...3...333.2.4.\n"
"333.3..3144...23...1\n"
"..4241322143312.2224\n"
"3..1.44.1.43..4.....\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334.4\n"
".32.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board629101495);
board629101495 = NULL;
assert( gamma_move(board, 4, 24, 14) == 0 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board540740552 = gamma_board(board);
assert( board540740552 != NULL );
assert( strcmp(board540740552, 
"..113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.1.132.3.14.3\n"
"3321.333...32.342..3\n"
"3..22...3...333.2.4.\n"
"333.3..3144...23...1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.....\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334.4\n"
".32.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board540740552);
board540740552 = NULL;
assert( gamma_move(board, 2, 17, 23) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );


char* board875969215 = gamma_board(board);
assert( board875969215 != NULL );
assert( strcmp(board875969215, 
"..113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.1.132.3.14.3\n"
"3321.333...32.342..3\n"
"3..22...3...333.2.4.\n"
"333.3..3144...23...1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.....\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
".4..1...1.4....14...\n"
"2.144.44.444223334.4\n"
".32.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board875969215);
board875969215 = NULL;
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 80 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 16, 12) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 1, 20, 16) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 4, 21) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 1, 23, 8) == 0 );
assert( gamma_move(board, 2, 22, 6) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_move(board, 4, 2, 24) == 0 );
assert( gamma_move(board, 1, 0, 24) == 1 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 2, 16, 12) == 1 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 3, 18, 17) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_move(board, 1, 7, 21) == 0 );


char* board505224222 = gamma_board(board);
assert( board505224222 != NULL );
assert( strcmp(board505224222, 
"1.113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.1.132.3.1433\n"
"3321.333...32.342..3\n"
"3..22...3...333.2.4.\n"
"333.3..3144...23...1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2..1..22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
"44..1...1.4....14...\n"
"2.144444.444223334.4\n"
".32.3.1.44.33..43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32.........1.1\n") == 0);
free(board505224222);
board505224222 = NULL;
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 15) == 0 );
assert( gamma_move(board, 1, 21, 16) == 0 );
assert( gamma_move(board, 1, 16, 0) == 1 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 17, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 82 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 16) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 23, 7) == 0 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 18, 7) == 1 );
assert( gamma_move(board, 2, 6, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 5, 16) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 19, 6) == 0 );
assert( gamma_move(board, 4, 12, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 9, 23) == 0 );
assert( gamma_move(board, 2, 17, 15) == 1 );


char* board405485893 = gamma_board(board);
assert( board405485893 != NULL );
assert( strcmp(board405485893, 
"1.113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.1.132.3.1433\n"
"3321.333...32.342..3\n"
"3..22...3...333.224.\n"
"333.3..3144.4.23...1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2..14.22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
"44..1...1.4....14...\n"
"2.144444144422333414\n"
".3223.1.44.333.43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32..3.....11.1\n") == 0);
free(board405485893);
board405485893 = NULL;
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 21, 9) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );


char* board507471264 = gamma_board(board);
assert( board507471264 != NULL );
assert( strcmp(board507471264, 
"1.113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.1.132.3.1433\n"
"3321.333...32.342..3\n"
"3..22...3...333.224.\n"
"333.3..3144.4.23...1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2..14.22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
"44..1...1.4....14...\n"
"2.144444144422333414\n"
".3223.1.44.333.43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32..3.....11.1\n") == 0);
free(board507471264);
board507471264 = NULL;
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 6, 24) == 0 );
assert( gamma_move(board, 2, 13, 15) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_move(board, 3, 23, 5) == 0 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );


char* board573107421 = gamma_board(board);
assert( board573107421 != NULL );
assert( strcmp(board573107421, 
"1.113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.14132.3.1433\n"
"3321.333...32.342..3\n"
"3..22...3...333.224.\n"
"333.3..3144.4.23...1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2..14.22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
"44..1...1.4....14...\n"
"2.144444144422333414\n"
".3223.1.44.333.43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..1.3.4.4.4\n"
"4.32....4..11......1\n"
"..412.32..3.....11.1\n") == 0);
free(board573107421);
board573107421 = NULL;
assert( gamma_move(board, 2, 17, 2) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 16, 18) == 0 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 23, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 24) == 0 );
assert( gamma_move(board, 4, 23, 12) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 83 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 2, 24) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );


char* board772475916 = gamma_board(board);
assert( board772475916 != NULL );
assert( strcmp(board772475916, 
"1.113....3.41..1.122\n"
".3...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.14132.3.1433\n"
"3321.333...32.342..3\n"
"3..22...3...333.224.\n"
"333.3..3144.4.23...1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2.114.22.32.3.433.1.\n"
"..1.11.41.33...11...\n"
"44..1...1.4....14...\n"
"21144444144422333414\n"
".3223.1.44.333.43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..4..113.4.4.4\n"
"4.32....4..11......1\n"
"..412.32..3.....11.1\n") == 0);
free(board772475916);
board772475916 = NULL;
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 60 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 24, 10) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 19, 6) == 0 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 20, 8) == 0 );
assert( gamma_move(board, 4, 8, 19) == 0 );
assert( gamma_move(board, 4, 9, 17) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_golden_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 1, 18, 1) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_free_fields(board, 2) == 84 );
assert( gamma_move(board, 4, 23, 6) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 19, 8) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 16, 14) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 20, 4) == 0 );
assert( gamma_move(board, 1, 21, 18) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 5, 19) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 0, 23) == 1 );
assert( gamma_golden_move(board, 3, 21, 10) == 0 );


char* board599022341 = gamma_board(board);
assert( board599022341 != NULL );
assert( strcmp(board599022341, 
"1.113....3.41..1.122\n"
"33...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.1.4..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.14132.3.1433\n"
"3321.333...32.342..3\n"
"3..22...3...333.224.\n"
"333.3..3144.4.231..1\n"
"..4241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2.114.22.3233.433.1.\n"
"..1.11.41.33...11...\n"
"44..1...1.4....14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334.......33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..411113.4.4.4\n"
"4.32....4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board599022341);
board599022341 = NULL;
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 16, 16) == 0 );
assert( gamma_move(board, 1, 16, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_free_fields(board, 3) == 221 );
assert( gamma_move(board, 4, 9, 17) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 23, 4) == 0 );
assert( gamma_move(board, 4, 15, 5) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 75 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 21, 5) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_move(board, 1, 23, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 13, 16) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 9, 21) == 0 );
assert( gamma_move(board, 4, 17, 15) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 13, 21) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 60 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_busy_fields(board, 4) == 60 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 17, 14) == 1 );
assert( gamma_move(board, 3, 19, 6) == 0 );
assert( gamma_move(board, 4, 19, 13) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 14) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 4, 23, 16) == 0 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_golden_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 61 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 15, 23) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 19, 7) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_busy_fields(board, 4) == 61 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 20, 2) == 0 );
assert( gamma_move(board, 2, 20, 6) == 0 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 77 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 62 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 24, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_move(board, 1, 4, 16) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 16, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 22, 13) == 0 );
assert( gamma_move(board, 4, 1, 18) == 0 );
assert( gamma_move(board, 1, 19, 13) == 0 );
assert( gamma_move(board, 1, 11, 17) == 0 );
assert( gamma_free_fields(board, 2) == 212 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 1, 2, 24) == 0 );
assert( gamma_free_fields(board, 1) == 81 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 23) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 62 );


char* board942522433 = gamma_board(board);
assert( board942522433 != NULL );
assert( strcmp(board942522433, 
"1.113....3.41..1.122\n"
"33...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.114..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332.14132.3.1433\n"
"33211333...322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2.114.22.3233.433.1.\n"
"..1.11.41133...11...\n"
"44..1...1.4....14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board942522433);
board942522433 = NULL;
assert( gamma_move(board, 1, 21, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 4) == 0 );
assert( gamma_move(board, 3, 7, 17) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board885897485 = gamma_board(board);
assert( board885897485 != NULL );
assert( strcmp(board885897485, 
"1.113....3.41..1.122\n"
"33...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.114..3.2\n"
"3........2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332314132.3.1433\n"
"33211333...322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1.44.1143..4.2...\n"
"3...411.13....311434\n"
"2.114.22.3233.433.1.\n"
"..1.11.41133...11...\n"
"44..1...1.4....14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board885897485);
board885897485 = NULL;
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 10, 20) == 0 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 78 );
assert( gamma_busy_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 7, 20) == 1 );
assert( gamma_move(board, 4, 22, 0) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 19, 12) == 1 );
assert( gamma_move(board, 2, 7, 23) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 2, 12, 20) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 24, 14) == 0 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_move(board, 2, 19, 13) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 10, 19) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 1, 1, 22) == 0 );
assert( gamma_golden_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 19, 8) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 19) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 9, 22) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 24) == 0 );
assert( gamma_move(board, 1, 19, 8) == 0 );
assert( gamma_move(board, 2, 23, 6) == 0 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 3, 14, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 89 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board199868115 = gamma_board(board);
assert( board199868115 != NULL );
assert( strcmp(board199868115, 
"1.113....3.41..1.122\n"
"33...2.........2...3\n"
"..33.1....341.24.3..\n"
"...14..3..2.114..3.2\n"
"3......3.2.1...2...1\n"
".2..32..13223.123.42\n"
"2.1.331.14..433.1.31\n"
"2..1332314132.3.1433\n"
"33211333...322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1.44.1143..4.2..2\n"
"3...411.13....311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.2..14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board199868115);
board199868115 = NULL;
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 3, 10, 16) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 63 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 2, 13, 22) == 1 );
assert( gamma_move(board, 3, 6, 23) == 1 );
assert( gamma_move(board, 3, 19, 14) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 4, 18, 24) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 24) == 0 );
assert( gamma_move(board, 1, 4, 19) == 0 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 1, 18) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 65 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board645997256 = gamma_board(board);
assert( board645997256 != NULL );
assert( strcmp(board645997256, 
"1.113....3.41..1.122\n"
"33...23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.114..3.2\n"
"3......3.2.1...2...1\n"
".2..32..13223.123.42\n"
"211.331.14..433.1.31\n"
"2..1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.13....311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.2..14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board645997256);
board645997256 = NULL;
assert( gamma_move(board, 1, 21, 16) == 0 );
assert( gamma_move(board, 1, 17, 19) == 0 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 20, 1) == 0 );
assert( gamma_move(board, 3, 9, 24) == 0 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 24, 16) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 1, 20, 8) == 0 );
assert( gamma_move(board, 2, 17, 13) == 0 );
assert( gamma_move(board, 2, 8, 21) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 23) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board943759302 = gamma_board(board);
assert( board943759302 != NULL );
assert( strcmp(board943759302, 
"1.113....3.41..1.122\n"
"33...23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.114..3.2\n"
"3......3.2.1...2...1\n"
".2..32..13223.123.42\n"
"211.331.14..433.1.31\n"
"2..1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.13....311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.2..14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...2.\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board943759302);
board943759302 = NULL;
assert( gamma_move(board, 4, 19, 3) == 1 );


char* board986074880 = gamma_board(board);
assert( board986074880 != NULL );
assert( strcmp(board986074880, 
"1.113....3.41..1.122\n"
"33...23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.114..3.2\n"
"3......3.2.1...2...1\n"
".2..32..13223.123.42\n"
"211.331.14..433.1.31\n"
"2..1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.13....311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.2..14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...24\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board986074880);
board986074880 = NULL;
assert( gamma_move(board, 1, 19, 13) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 15, 21) == 1 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 3, 19, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 22, 18) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 4, 3, 23) == 1 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 1, 20, 10) == 0 );
assert( gamma_golden_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 22, 18) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );


char* board232523982 = gamma_board(board);
assert( board232523982 != NULL );
assert( strcmp(board232523982, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.1142.3.2\n"
"3......3.2.1...2...1\n"
".2..32..13223.123.42\n"
"211.331.14..433.1.31\n"
"2..1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.2..14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...24\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board232523982);
board232523982 = NULL;
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 18, 6) == 0 );


char* board766509708 = gamma_board(board);
assert( board766509708 != NULL );
assert( strcmp(board766509708, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.1142.3.2\n"
"3......3.2.1...2...1\n"
".2..32..13223.123.42\n"
"211.331.14..433.1.31\n"
"2..1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.2..14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
".32.333.334....4..33\n"
".31421...2.3..4.2..2\n"
"..22.14242.2..2...24\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board766509708);
board766509708 = NULL;
assert( gamma_move(board, 2, 23, 18) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 15, 15) == 0 );
assert( gamma_move(board, 2, 9, 18) == 0 );
assert( gamma_move(board, 2, 13, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 23, 13) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 20, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 16, 19) == 0 );
assert( gamma_golden_move(board, 3, 17, 6) == 0 );
assert( gamma_move(board, 4, 24, 8) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 17) == 1 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 4, 20, 17) == 0 );
assert( gamma_move(board, 4, 15, 4) == 1 );
assert( gamma_free_fields(board, 4) == 193 );
assert( gamma_move(board, 1, 20, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 68 );
assert( gamma_move(board, 4, 11, 19) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 9, 20) == 0 );
assert( gamma_move(board, 4, 7, 19) == 1 );
assert( gamma_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_move(board, 4, 19, 21) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board630544754 = gamma_board(board);
assert( board630544754 != NULL );
assert( strcmp(board630544754, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.1142.3.2\n"
"3......3.2.1...2...1\n"
".2..32.413223.123.42\n"
"211.331.14..433.1.31\n"
"22.1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....4..33\n"
".31421...2.3..442..2\n"
"..22.14242.2..2...24\n"
".2...4..411113.4.4.4\n"
"4.32..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board630544754);
board630544754 = NULL;
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 21, 11) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );


char* board440587046 = gamma_board(board);
assert( board440587046 != NULL );
assert( strcmp(board440587046, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.1142.3.2\n"
"3......3.2.1...2...1\n"
".2..32.413223.123.42\n"
"211.331.14..433.1.31\n"
"22.1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....4..33\n"
".31421...2.3..442..2\n"
"..22.14242.2..2...24\n"
".2...4..411113.4.4.4\n"
"4332..3.4.111.....11\n"
"..412.32..3.....11.1\n") == 0);
free(board440587046);
board440587046 = NULL;
assert( gamma_move(board, 4, 15, 1) == 1 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_move(board, 2, 24, 10) == 0 );
assert( gamma_move(board, 2, 5, 20) == 1 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 19, 0) == 0 );
assert( gamma_move(board, 4, 2, 18) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 2, 17, 13) == 0 );
assert( gamma_move(board, 2, 2, 24) == 0 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 21, 8) == 0 );
assert( gamma_free_fields(board, 3) == 105 );
assert( gamma_golden_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 4, 8, 17) == 0 );
assert( gamma_golden_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 79 );


char* board505335677 = gamma_board(board);
assert( board505335677 != NULL );
assert( strcmp(board505335677, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...14..3..2.1142.3.2\n"
"3....2.3.2.1...2...1\n"
".2..32.413223.123.42\n"
"211.331.14..433.1.31\n"
"22.1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....4..33\n"
".31421...2.3..442..2\n"
"..22.14242.2..2...24\n"
".2...4..411113.4.4.4\n"
"4332..3.4.111..4..11\n"
"..412.32..3.....11.1\n") == 0);
free(board505335677);
board505335677 = NULL;
assert( gamma_move(board, 2, 9, 18) == 0 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 3, 23, 13) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 16, 22) == 0 );
assert( gamma_move(board, 3, 17, 15) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 71 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_free_fields(board, 3) == 105 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 19, 13) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 4, 21, 9) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 13) == 0 );
assert( gamma_move(board, 3, 16, 18) == 0 );
assert( gamma_move(board, 3, 10, 19) == 0 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_move(board, 1, 23, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 16, 5) == 1 );
assert( gamma_move(board, 4, 19, 17) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 15, 19) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 1, 16, 18) == 0 );
assert( gamma_move(board, 1, 7, 22) == 0 );
assert( gamma_golden_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 71 );
assert( gamma_move(board, 1, 24, 6) == 0 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 2, 24, 8) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 93 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 1, 24, 10) == 0 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 17, 4) == 1 );
assert( gamma_move(board, 3, 8, 21) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 1, 21, 2) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 22, 4) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 19, 12) == 0 );
assert( gamma_golden_move(board, 2, 14, 9) == 0 );


char* board326120232 = gamma_board(board);
assert( board326120232 != NULL );
assert( strcmp(board326120232, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...14..33.2.1142.3.2\n"
"3....2.3.2.1...2...1\n"
".2..32.413223.123.42\n"
"211.331.14..433.1.31\n"
"22.1332314132.3.1433\n"
"33211333..3322342..3\n"
"3..22...3.3.333.224.\n"
"333.3..3144.442312.1\n"
".44241322143312.2224\n"
"3..1444.1143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....43.33\n"
".31421...223..4422.2\n"
"..22.14242.2..2...24\n"
".2...4..411113.4.4.4\n"
"4332..3.44111..4..11\n"
"..412.32..3.....11.1\n") == 0);
free(board326120232);
board326120232 = NULL;
assert( gamma_move(board, 3, 8, 16) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 4, 8, 21) == 0 );
assert( gamma_busy_fields(board, 1) == 79 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 2, 15, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 71 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 6, 14) == 1 );
assert( gamma_free_fields(board, 3) == 182 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 16, 18) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 15, 11) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 1, 18, 20) == 1 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 23, 17) == 0 );
assert( gamma_move(board, 2, 18, 8) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 18) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 18) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 20, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 17, 20) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 1, 4, 18) == 0 );
assert( gamma_move(board, 2, 8, 22) == 0 );
assert( gamma_move(board, 3, 16, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 98 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 9, 22) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 3, 9, 24) == 0 );
assert( gamma_move(board, 3, 2, 19) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 24) == 0 );
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_golden_move(board, 4, 23, 15) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 3, 19, 3) == 0 );
assert( gamma_move(board, 4, 20, 16) == 0 );
assert( gamma_move(board, 1, 10, 18) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 10, 24) == 0 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 17, 13) == 0 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 73 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 23, 12) == 0 );
assert( gamma_move(board, 2, 19, 0) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 3, 12, 21) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 3, 17, 5) == 1 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_move(board, 2, 18, 15) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 23, 12) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_free_fields(board, 3) == 174 );
assert( gamma_move(board, 4, 15, 15) == 1 );
assert( gamma_move(board, 4, 2, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 75 );
assert( gamma_golden_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 3, 23, 11) == 0 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 75 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 3, 6, 20) == 1 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 1, 17, 20) == 1 );
assert( gamma_move(board, 1, 14, 14) == 0 );
assert( gamma_move(board, 2, 0, 18) == 0 );


char* board332655975 = gamma_board(board);
assert( board332655975 != NULL );
assert( strcmp(board332655975, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...14..33.2.1142.3.2\n"
"3....233.2.1...2.111\n"
".23.32.413223.123.42\n"
"211.3313141.433.1.31\n"
"22.1332314132.3.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"333.3.33144.442312.1\n"
"444241322143312.2224\n"
"3..144431143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.14242.2..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3.44111..4..11\n"
"..412.32..3.....11.1\n") == 0);
free(board332655975);
board332655975 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 4, 17, 23) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 16, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 23, 2) == 0 );
assert( gamma_move(board, 2, 5, 21) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_golden_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 21, 6) == 0 );


char* board107538446 = gamma_board(board);
assert( board107538446 != NULL );
assert( strcmp(board107538446, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...142.33.2.1142.3.2\n"
"3....233.2.1...2.111\n"
".23.32.413223.123.42\n"
"211.3313141.433.1.31\n"
"22.1332314132.3.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"333.3.33144.442312.1\n"
"444241322143312.2224\n"
"3..144431143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.14242.2..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3.44111..4..11\n"
"..412.32..3.....11.1\n") == 0);
free(board107538446);
board107538446 = NULL;
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board443296559 = gamma_board(board);
assert( board443296559 != NULL );
assert( strcmp(board443296559, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3..\n"
"...142.33.2.1142.3.2\n"
"3....233.2.1...2.111\n"
".23.32.413223.123.42\n"
"211.3313141.433.1.31\n"
"22.1332314132.3.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"333.3.33144.442312.1\n"
"444241322143312.2224\n"
"3..144431143..4.2..2\n"
"3...411.134...311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.14242.2..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3.44111..4..11\n"
"..412.32..3.....11.1\n") == 0);
free(board443296559);
board443296559 = NULL;
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_move(board, 4, 23, 10) == 0 );
assert( gamma_move(board, 4, 9, 23) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_move(board, 3, 23, 16) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 13, 23) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 2, 2, 18) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 4, 22, 16) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 24, 1) == 0 );
assert( gamma_move(board, 1, 17, 13) == 0 );
assert( gamma_move(board, 2, 0, 15) == 0 );
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 17, 23) == 0 );
assert( gamma_golden_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 15, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 102 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 2, 19, 22) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 21, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_move(board, 4, 2, 13) == 0 );


char* board716288964 = gamma_board(board);
assert( board716288964 != NULL );
assert( strcmp(board716288964, 
"1.113....3.41..1.122\n"
"33.4.23........2...3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3....233.2.1...2.111\n"
".23.32.413223.123.42\n"
"211.3313141.433.1.31\n"
"22.1332314132.3.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"333.3.33144.442312.1\n"
"444241322143312.2224\n"
"3..144431143..4.2..2\n"
"3...411.1344..311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333.43111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.14242.2..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3.44111..4..11\n"
"..412.32..3.....11.1\n") == 0);
free(board716288964);
board716288964 = NULL;
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 18, 1) == 0 );
assert( gamma_move(board, 2, 19, 23) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_move(board, 3, 21, 19) == 0 );
assert( gamma_move(board, 4, 14, 6) == 1 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 21, 9) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 18, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 1, 18, 1) == 0 );
assert( gamma_move(board, 2, 20, 4) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 0, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 102 );
assert( gamma_move(board, 4, 8, 17) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 1, 17, 23) == 1 );
assert( gamma_move(board, 2, 19, 19) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 102 );
assert( gamma_move(board, 4, 8, 22) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 2, 16, 14) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 102 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 2, 20, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 21, 0) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 2, 10, 18) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 4, 24, 14) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 22) == 0 );
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 13, 21) == 0 );


char* board307224353 = gamma_board(board);
assert( board307224353 != NULL );
assert( strcmp(board307224353, 
"1.113....3.41..1.122\n"
"33.4.23........2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3....233.2.1...2.111\n"
".23.32.413223.123.42\n"
"211.3313141.433.1.31\n"
"22.1332314132.3.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"333.3.33144.442312.1\n"
"444241322143312.2224\n"
"3..144431143..4.2..2\n"
"3...411.1344..311434\n"
"2.114.22.3233.433.1.\n"
"4.1.11.41133...11...\n"
"44..1...1.4.22.14...\n"
"21144444144422333414\n"
".3223.1144.333443111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3.44111..4..11\n"
"..412.32..3.....11.1\n") == 0);
free(board307224353);
board307224353 = NULL;
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 23, 13) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 24, 13) == 0 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 3, 13, 20) == 0 );
assert( gamma_move(board, 4, 14, 18) == 0 );
assert( gamma_move(board, 4, 9, 22) == 0 );
assert( gamma_busy_fields(board, 4) == 77 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 0, 20) == 0 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 74 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 23, 4) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 2, 24) == 0 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_free_fields(board, 2) == 164 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 3, 23, 9) == 0 );
assert( gamma_move(board, 4, 19, 7) == 0 );
assert( gamma_move(board, 4, 17, 8) == 1 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 24, 5) == 0 );
assert( gamma_move(board, 4, 23, 16) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 14, 18) == 0 );
assert( gamma_free_fields(board, 2) == 163 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 102 );
assert( gamma_move(board, 4, 13, 12) == 1 );
assert( gamma_move(board, 4, 18, 8) == 1 );
assert( gamma_move(board, 1, 16, 17) == 0 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_golden_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 2, 24, 8) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_golden_move(board, 1, 13, 17) == 0 );
assert( gamma_move(board, 2, 20, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 4, 24, 7) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 10, 23) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 2, 23, 14) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 84 );
assert( gamma_move(board, 1, 7, 23) == 0 );
assert( gamma_move(board, 2, 22, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 11, 21) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 20, 4) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 2, 19, 19) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 22) == 0 );
assert( gamma_move(board, 1, 23, 10) == 0 );
assert( gamma_move(board, 1, 15, 23) == 0 );
assert( gamma_move(board, 3, 21, 18) == 0 );
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 23, 14) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 24, 1) == 0 );
assert( gamma_move(board, 1, 0, 24) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 19) == 1 );
assert( gamma_move(board, 1, 22, 0) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 24, 6) == 0 );
assert( gamma_move(board, 1, 20, 3) == 0 );
assert( gamma_move(board, 1, 16, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_golden_move(board, 4, 9, 4) == 0 );


char* board441889432 = gamma_board(board);
assert( board441889432 != NULL );
assert( strcmp(board441889432, 
"1.113....3.41..1.122\n"
"33.4.23........2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3....233.2.1...2.111\n"
".23.324413223.123.42\n"
"211.3313141.433.1.31\n"
"22.1332314132.3.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"333.3133144.442312.1\n"
"444241322143312.2224\n"
"3..144431143444.2..2\n"
"3...411.1344..311434\n"
"2.114.22432334433.1.\n"
"4.1.11.41133...11...\n"
"44..14..1.4.22.1444.\n"
"21144444144422333414\n"
".322321144.333443111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3.44111.44..11\n"
"..412.32..3.....11.1\n") == 0);
free(board441889432);
board441889432 = NULL;
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 84 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 20, 12) == 0 );
assert( gamma_move(board, 3, 4, 20) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_golden_move(board, 2, 22, 15) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 1, 10, 18) == 0 );
assert( gamma_move(board, 2, 0, 24) == 0 );
assert( gamma_move(board, 2, 17, 20) == 0 );
assert( gamma_move(board, 3, 23, 16) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 88 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_move(board, 3, 14, 18) == 0 );
assert( gamma_move(board, 4, 16, 23) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board497631129 = gamma_board(board);
assert( board497631129 != NULL );
assert( strcmp(board497631129, 
"1.113....3.41..1.122\n"
"33.4.23........2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3...3233.2.1...2.111\n"
".23.324413223.123.42\n"
"211.3313141.433.1.31\n"
"22.1332314132.3.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"33323133144.442312.1\n"
"444241322143312.2224\n"
"3..144431143444.2..2\n"
"3..4411.1344..311434\n"
"2.114.22432334433.1.\n"
"4.1.11.41133...11...\n"
"44..14..1.4.22.1444.\n"
"21144444144422333414\n"
".322321144.333443111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3444111.44..11\n"
"..412.32..3.....11.1\n") == 0);
free(board497631129);
board497631129 = NULL;
assert( gamma_move(board, 2, 22, 7) == 0 );
assert( gamma_move(board, 3, 21, 16) == 0 );
assert( gamma_move(board, 3, 19, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 88 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 0) == 0 );
assert( gamma_move(board, 2, 18, 24) == 0 );
assert( gamma_move(board, 3, 20, 12) == 0 );
assert( gamma_move(board, 3, 13, 17) == 1 );


char* board602315223 = gamma_board(board);
assert( board602315223 != NULL );
assert( strcmp(board602315223, 
"1.113....3.41..1.122\n"
"33.4.23........2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3...3233.2.1...2.111\n"
".23.324413223.123.42\n"
"211.3313141.433.1.31\n"
"22.133231413233.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"33323133144.442312.1\n"
"444241322143312.2224\n"
"3..144431143444.2..2\n"
"3..4411.1344..311434\n"
"2.114.22432334433.1.\n"
"4.1.11.41133...11...\n"
"44..14..1.4.22.1444.\n"
"21144444144422333414\n"
".322321144.333443111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3444111.44..11\n"
"..412.32..3.....11.1\n") == 0);
free(board602315223);
board602315223 = NULL;
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 10, 24) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 23, 13) == 0 );
assert( gamma_move(board, 3, 19, 20) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 18, 15) == 0 );
assert( gamma_move(board, 1, 6, 23) == 0 );
assert( gamma_move(board, 2, 24, 14) == 0 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );


char* board140134904 = gamma_board(board);
assert( board140134904 != NULL );
assert( strcmp(board140134904, 
"1.113....3441..1.122\n"
"33.4.23........2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3...3233.2.1...2.111\n"
".23.324413223.123.42\n"
"211.3313141.433.1.31\n"
"22.133231413233.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"33323133144.442312.1\n"
"444241322143312.2224\n"
"3..144431143444.2..2\n"
"3..4411.1344..311434\n"
"2.114.22432334433.1.\n"
"4.1.11.41133...11...\n"
"44..14..1.4.22.1444.\n"
"21144444144422333414\n"
".322321144.333443111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3444111.44..11\n"
"..412.32..3.....11.1\n") == 0);
free(board140134904);
board140134904 = NULL;
assert( gamma_move(board, 1, 21, 18) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 19, 17) == 0 );
assert( gamma_move(board, 2, 16, 12) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 104 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 24) == 0 );


char* board679180082 = gamma_board(board);
assert( board679180082 != NULL );
assert( strcmp(board679180082, 
"1.113....3441..1.122\n"
"33.4.23........2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3...3233.2.1...2.111\n"
".23.324413223.123.42\n"
"211.3313141.433.1.31\n"
"22.133231413233.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"33323133144.442312.1\n"
"444241322143312.2224\n"
"3..144431143444.2..2\n"
"3..4411.1344..311434\n"
"2.114.22432334433.1.\n"
"4.1.11.41133...11...\n"
"44..14..1.4.22.1444.\n"
"21144444144422333414\n"
".322321144.333443111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3444111.44..11\n"
"..412.32..3.....11.1\n") == 0);
free(board679180082);
board679180082 = NULL;
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 23, 2) == 0 );
assert( gamma_move(board, 2, 17, 12) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 18, 18) == 0 );
assert( gamma_move(board, 3, 19, 6) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 21, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 89 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 21, 16) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_move(board, 4, 5, 19) == 0 );
assert( gamma_move(board, 1, 17, 2) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 1, 16, 18) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_free_fields(board, 1) == 59 );


char* board530741066 = gamma_board(board);
assert( board530741066 != NULL );
assert( strcmp(board530741066, 
"1.113....3441..1.122\n"
"33.4.23........2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.2.1142.3.2\n"
"3...3233.2.1...2.111\n"
".23.324413223.123.42\n"
"211.3313141.433.1.31\n"
"22.133231413233.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"33323133144.442312.1\n"
"444241322143312.2224\n"
"3..144431143444.22.2\n"
"3..441131344..311434\n"
"2.114.22432334433.1.\n"
"421.11.41133...11...\n"
"44..14..1.4.2231444.\n"
"21144444144422333414\n"
".322321144.333443111\n"
"432.333.334....43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3444111.44..11\n"
"..412.32..3.1...11.1\n") == 0);
free(board530741066);
board530741066 = NULL;
assert( gamma_move(board, 2, 22, 18) == 0 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 89 );
assert( gamma_move(board, 1, 21, 1) == 0 );
assert( gamma_move(board, 2, 13, 15) == 0 );
assert( gamma_move(board, 2, 14, 21) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 3, 10, 23) == 1 );
assert( gamma_move(board, 4, 1, 20) == 0 );
assert( gamma_move(board, 4, 11, 21) == 1 );
assert( gamma_move(board, 1, 23, 14) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );


char* board556384523 = gamma_board(board);
assert( board556384523 != NULL );
assert( strcmp(board556384523, 
"1.113....3441..1.122\n"
"33.4.23...3....2.1.3\n"
"..33.1....341224.3.2\n"
"...142.33.241142.3.2\n"
"3...3233.2.1...2.111\n"
".23.324413223.123.42\n"
"211.3313141.433.1.31\n"
"22.133231413233.1433\n"
"332113333.3322342..3\n"
"3..22...3.3.3334224.\n"
"33323133144.442312.1\n"
"444241322143312.2224\n"
"3..144431143444.22.2\n"
"3..441131344..311434\n"
"2.114.22432334433.1.\n"
"421.11.41133...11...\n"
"44..14..1.4.2231444.\n"
"21144444144422333414\n"
".322321144.333443111\n"
"432.333.334..3.43333\n"
"431421...223..4422.2\n"
"..22.1424222..2...24\n"
".2.3.4..411113.4.4.4\n"
"4332..3444111.44..11\n"
"..412.32..3.1...11.1\n") == 0);
free(board556384523);
board556384523 = NULL;
assert( gamma_move(board, 3, 21, 6) == 0 );
assert( gamma_free_fields(board, 3) == 85 );
assert( gamma_golden_move(board, 3, 16, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 1, 15, 20) == 0 );
assert( gamma_move(board, 2, 6, 19) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 13, 13) == 0 );


gamma_delete(board);

    return 0;
}
