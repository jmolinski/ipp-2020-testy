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
uuid: 462126404
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 15, 7, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board249199801 = gamma_board(board);
assert( board249199801 != NULL );
assert( strcmp(board249199801, 
"...1.........\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".....2.......\n"
".............\n"
".............\n"
"2............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n") == 0);
free(board249199801);
board249199801 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board782398674 = gamma_board(board);
assert( board782398674 != NULL );
assert( strcmp(board782398674, 
"...1.........\n"
".............\n"
"....1........\n"
".............\n"
"..5..........\n"
".............\n"
".....2....6..\n"
".............\n"
".............\n"
"2............\n"
".............\n"
".............\n"
"...........6.\n"
".............\n"
".............\n") == 0);
free(board782398674);
board782398674 = NULL;
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_free_fields(board, 6) == 180 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 9, 13) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_free_fields(board, 5) == 173 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 12, 14) == 1 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_golden_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_golden_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_free_fields(board, 2) == 160 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_free_fields(board, 5) == 147 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_free_fields(board, 6) == 146 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );


char* board927791027 = gamma_board(board);
assert( board927791027 != NULL );
assert( strcmp(board927791027, 
"..11.1......2\n"
"...6.....4...\n"
"....1.....4..\n"
".7..6....152.\n"
"..5....3.1...\n"
".........55.2\n"
".3..724.236.3\n"
"...27.6.3.5.4\n"
"............5\n"
"2..1.....5...\n"
"4.2.......6..\n"
"....7.5...2..\n"
".6....6....6.\n"
"..3.661743..2\n"
"6..3..44.....\n") == 0);
free(board927791027);
board927791027 = NULL;
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_free_fields(board, 3) == 136 );
assert( gamma_move(board, 6, 6, 2) == 0 );


char* board342562129 = gamma_board(board);
assert( board342562129 != NULL );
assert( strcmp(board342562129, 
"..11.1......2\n"
"...6.....4...\n"
"....1.....4..\n"
".7..6....152.\n"
"..5....371...\n"
".........55.2\n"
".3..724.236.3\n"
"...27.6.3.5.4\n"
"............5\n"
"2..1.....5...\n"
"4.2.......6..\n"
"....7.5...2..\n"
".6....6....6.\n"
"..3.661743..2\n"
"6..3..44.....\n") == 0);
free(board342562129);
board342562129 = NULL;
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 133 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_free_fields(board, 4) == 132 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_golden_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 8, 14) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board773377243 = gamma_board(board);
assert( board773377243 != NULL );
assert( strcmp(board773377243, 
"..11.1..6..32\n"
"3..61.1..4...\n"
"7...1.7...43.\n"
".7.56.7.2152.\n"
"..5....371...\n"
"...77....55.2\n"
".3.6724.236.3\n"
"..227.6.3.5.4\n"
"....25...3..5\n"
"2..1.....5...\n"
"4.2..1.4.16..\n"
"..647.5...2.1\n"
"364...6....63\n"
"..3.661743.52\n"
"62.3..44...6.\n") == 0);
free(board773377243);
board773377243 = NULL;
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 12, 13) == 1 );
assert( gamma_free_fields(board, 4) == 98 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );


char* board731238933 = gamma_board(board);
assert( board731238933 != NULL );
assert( strcmp(board731238933, 
"..11.1..6..32\n"
"34.61.1..4..4\n"
"7...1.7...43.\n"
".7.56.7.2152.\n"
".151...3712..\n"
"...77....55.2\n"
".3.6724.236.3\n"
".6227.6.3.5.4\n"
"....25...3..5\n"
"2..1.....5...\n"
"4.2..1.4.16.2\n"
"..647.5...2.1\n"
"364...6..5.63\n"
"..3.661743.52\n"
"62.3..44...6.\n") == 0);
free(board731238933);
board731238933 = NULL;
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 13) == 1 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_golden_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 3, 7) == 0 );


char* board321517057 = gamma_board(board);
assert( board321517057 != NULL );
assert( strcmp(board321517057, 
"..11.1..6..32\n"
"34.6131174..4\n"
"74..167...43.\n"
".7.565752152.\n"
".151...3712..\n"
"...77....55.2\n"
"63.6724.236.3\n"
".6227.6.365.4\n"
"....25...3..5\n"
"2.51...6.5...\n"
"442..1.4.16.2\n"
".4647.5...2.1\n"
"364...6335.63\n"
"..3.661143.52\n"
"62.3..44...67\n") == 0);
free(board321517057);
board321517057 = NULL;
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );


char* board748953154 = gamma_board(board);
assert( board748953154 != NULL );
assert( strcmp(board748953154, 
"..11.1..6..32\n"
"34.6131174..4\n"
"74..167...43.\n"
".7.565752152.\n"
".151...3712..\n"
"...77....5572\n"
"63.6724.236.3\n"
".6227.6.365.4\n"
"....25...3..5\n"
"2.51...6.5...\n"
"442..1.4.16.2\n"
".4647.5...2.1\n"
"364...6335.63\n"
"..3.661143152\n"
"62.3..44...67\n") == 0);
free(board748953154);
board748953154 = NULL;
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_free_fields(board, 7) == 76 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 13, 11) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );


char* board584677210 = gamma_board(board);
assert( board584677210 != NULL );
assert( strcmp(board584677210, 
"..11.1..6..32\n"
"34.6131174144\n"
"74.4167..2432\n"
".7.565752152.\n"
".151...3712..\n"
"...77....5572\n"
"63.67244236.3\n"
".622736.36514\n"
"....25.4.3..5\n"
"2.51.5.6.5...\n"
"442..124.16.2\n"
".4647.5...251\n"
"364.5.6335.63\n"
"..3.661143152\n"
"62.3..44.2.67\n") == 0);
free(board584677210);
board584677210 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 66 );


char* board485246602 = gamma_board(board);
assert( board485246602 != NULL );
assert( strcmp(board485246602, 
"..11.1..6..32\n"
"34.6131174144\n"
"74.4167..2432\n"
".7.565752152.\n"
".151...3712..\n"
"...77....5572\n"
"63.67244236.3\n"
".622736.36514\n"
"....25.4.3..5\n"
"2.51.5.6.5...\n"
"442..124.16.2\n"
".4647.5...251\n"
"364.5.6335.63\n"
"..3.661143152\n"
"62.3..44.2.67\n") == 0);
free(board485246602);
board485246602 = NULL;
assert( gamma_move(board, 4, 11, 10) == 1 );


char* board202626586 = gamma_board(board);
assert( board202626586 != NULL );
assert( strcmp(board202626586, 
"..11.1..6..32\n"
"34.6131174144\n"
"74.4167..2432\n"
".7.565752152.\n"
".151...37124.\n"
"...77....5572\n"
"63.67244236.3\n"
".622736.36514\n"
"....25.4.3..5\n"
"2.51.5.6.5...\n"
"442..124.16.2\n"
".4647.5...251\n"
"364.5.6335.63\n"
"..3.661143152\n"
"62.3..44.2.67\n") == 0);
free(board202626586);
board202626586 = NULL;
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_free_fields(board, 7) == 64 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_golden_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_free_fields(board, 4) == 61 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );


char* board495564927 = gamma_board(board);
assert( board495564927 != NULL );
assert( strcmp(board495564927, 
"..11.1..6..32\n"
"3446131174144\n"
"74.6167..2432\n"
".7.565752152.\n"
"1151..737124.\n"
"...77....5572\n"
"63567244236.3\n"
".622736136514\n"
".3..2544.3..5\n"
"2.51.5.6.54..\n"
"442.512441672\n"
".4647.54..251\n"
"364.5.6335.63\n"
"..3.661143152\n"
"62.3..4472567\n") == 0);
free(board495564927);
board495564927 = NULL;
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_golden_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_golden_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_golden_move(board, 7, 13, 10) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_golden_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_golden_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_golden_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );


char* board892870859 = gamma_board(board);
assert( board892870859 != NULL );
assert( strcmp(board892870859, 
"3.11.1..6..32\n"
"3446131174144\n"
"74.6167..3432\n"
"27.565752152.\n"
"1151..737124.\n"
"...77..7.7572\n"
"63567244236.3\n"
"6622736136514\n"
".31.2544.53.5\n"
"2651.5.6.54..\n"
"442.512441672\n"
".4647.54..251\n"
"36415.6335.63\n"
".33.661143152\n"
"62.3..4472567\n") == 0);
free(board892870859);
board892870859 = NULL;
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );


char* board377268836 = gamma_board(board);
assert( board377268836 != NULL );
assert( strcmp(board377268836, 
"3.11.1..6..32\n"
"3446131174144\n"
"74.6167..3432\n"
"27.565752152.\n"
"1151..737124.\n"
"...77..7.7572\n"
"63567244236.3\n"
"6622736136514\n"
".31.2544.53.5\n"
"2651.5.6.54..\n"
"442.512441672\n"
".4647.54..251\n"
"36415.6335.63\n"
".33.661143152\n"
"62.3..4472567\n") == 0);
free(board377268836);
board377268836 = NULL;
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 12, 13) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 12, 12) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_golden_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_golden_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );


char* board222035726 = gamma_board(board);
assert( board222035726 != NULL );
assert( strcmp(board222035726, 
"3.11.1..6..32\n"
"3446131174144\n"
"74.6167..3432\n"
"27.565752152.\n"
"1151..737124.\n"
"...77..7.7572\n"
"63567244236.3\n"
"6622736136514\n"
".31.2544.53.5\n"
"2651.5.6.541.\n"
"442.512441672\n"
".4647.54..251\n"
"36415.6335463\n"
".33.661143152\n"
"62.3..4472567\n") == 0);
free(board222035726);
board222035726 = NULL;
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );


gamma_delete(board);

    return 0;
}
