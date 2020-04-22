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
uuid: 519615265
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 4, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 207 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 11, 12) == 1 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );


char* board351940690 = gamma_board(board);
assert( board351940690 != NULL );
assert( strcmp(board351940690, 
"...............\n"
"..........24...\n"
"...............\n"
"..2............\n"
"....1..........\n"
"2..2........2..\n"
".1............4\n"
".....2.1.....3.\n"
"...............\n"
".......3.......\n"
".13..3.........\n"
"...............\n"
"...............\n"
"4....4.........\n") == 0);
free(board351940690);
board351940690 = NULL;
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_free_fields(board, 3) == 191 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 12, 13) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_free_fields(board, 3) == 182 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 9, 13) == 1 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 155 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_free_fields(board, 3) == 148 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 145 );
assert( gamma_move(board, 2, 7, 10) == 1 );


char* board482056457 = gamma_board(board);
assert( board482056457 != NULL );
assert( strcmp(board482056457, 
".32.2...34.441.\n"
"..1....3.324...\n"
".2.1...........\n"
"..2....2..1..2.\n"
"..411..13......\n"
"2..22.1..3.32..\n"
".1...4.4.2.2.14\n"
".1...2.1.....3.\n"
".23.......2...4\n"
"......134......\n"
"313..34........\n"
".11.3.3....4...\n"
"11.............\n"
"4.4..4..4.4....\n") == 0);
free(board482056457);
board482056457 = NULL;
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 138 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 13, 10) == 0 );


char* board426133922 = gamma_board(board);
assert( board426133922 != NULL );
assert( strcmp(board426133922, 
".32.2...34.441.\n"
"..121..3.324...\n"
".2.1...........\n"
"..2....2..1..2.\n"
".2411..13......\n"
"2..2211..3.32..\n"
".1...4.4.2.2.14\n"
".1...2.1.....3.\n"
".23.......2...4\n"
"......134..4...\n"
"313..34.....2..\n"
".11.3.3....4...\n"
"11..........4..\n"
"4.4.14..434....\n") == 0);
free(board426133922);
board426133922 = NULL;
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 11) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_free_fields(board, 4) == 129 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );


char* board775382762 = gamma_board(board);
assert( board775382762 != NULL );
assert( strcmp(board775382762, 
".32.2...34.441.\n"
".3121..3.324...\n"
"12.1..........3\n"
"..2....2..1..2.\n"
".24113.13......\n"
"2..2211..3.32..\n"
".1...4.442.2.14\n"
".1...2.1.....3.\n"
".23.......2...4\n"
"......134..4.1.\n"
"313..34.....2..\n"
".11.3.3....4...\n"
"11.....113..4..\n"
"4.4.141.434....\n") == 0);
free(board775382762);
board775382762 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_golden_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 14, 6) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_golden_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_golden_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_golden_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_free_fields(board, 2) == 81 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 12) == 1 );


char* board398723531 = gamma_board(board);
assert( board398723531 != NULL );
assert( strcmp(board398723531, 
"43222...34.441.\n"
"331211.3.324...\n"
"12.14.23.3....3\n"
".2234..2231..23\n"
"224113.133..2..\n"
"2.222114.3.32..\n"
"312..44442.2414\n"
".1.22211..3.233\n"
".23222....2..44\n"
"....3.134..4.1.\n"
"3133334.3..42.2\n"
"111.3.3....44.2\n"
"11..3..113..4..\n"
"4.41141.4344...\n") == 0);
free(board398723531);
board398723531 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );


char* board986582834 = gamma_board(board);
assert( board986582834 != NULL );
assert( strcmp(board986582834, 
"43222...34.441.\n"
"331211.3.324...\n"
"12214.23.3....3\n"
".2234..22312.23\n"
"224113.1334.2..\n"
"2.222114.3.32..\n"
"312..4444222414\n"
".1.22211.23.233\n"
".23222....2..44\n"
"....3.134.34.1.\n"
"313333433..42.2\n"
"111.323....44.2\n"
"11..3..113..4..\n"
"4.41141.43442..\n") == 0);
free(board986582834);
board986582834 = NULL;
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_move(board, 3, 11, 0) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );


char* board387098277 = gamma_board(board);
assert( board387098277 != NULL );
assert( strcmp(board387098277, 
"43222...34.441.\n"
"331211.3.324...\n"
"12214.23.3....3\n"
"12234..22312.23\n"
"224113.1334.2..\n"
"2.222114.3.321.\n"
"312..4444222414\n"
".1.22211.23.233\n"
".23222....2..44\n"
"....3.134.34.11\n"
"313333433..42.2\n"
"111.323....44.2\n"
"11..3..113..4..\n"
"4.41141.43442..\n") == 0);
free(board387098277);
board387098277 = NULL;
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_golden_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );


char* board100847194 = gamma_board(board);
assert( board100847194 != NULL );
assert( strcmp(board100847194, 
"43222...34.441.\n"
"33121113.324...\n"
"12214.23.3....3\n"
"12234.222312.23\n"
"224113.1334.22.\n"
"2.222114.3.321.\n"
"312..4444222414\n"
".1.22211.23.233\n"
".23222..2.2..44\n"
"3...3.134.34.11\n"
"313333433..42.2\n"
"111.323....4442\n"
"11..32.113.44..\n"
"4.41141443442..\n") == 0);
free(board100847194);
board100847194 = NULL;
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );


char* board365062668 = gamma_board(board);
assert( board365062668 != NULL );
assert( strcmp(board365062668, 
"43222...34.441.\n"
"33121113.324...\n"
"12214.23.3....3\n"
"12234.222312.23\n"
"224113.1334.22.\n"
"2.222114.33321.\n"
"312..4444222414\n"
"21.22211.23.233\n"
".23222..2.2..44\n"
"3...3.134.34.11\n"
"313333433..42.2\n"
"111.323....4442\n"
"11..32.113.44..\n"
"4.41141443442..\n") == 0);
free(board365062668);
board365062668 = NULL;
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_move(board, 1, 2, 13) == 1 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );


char* board366488346 = gamma_board(board);
assert( board366488346 != NULL );
assert( strcmp(board366488346, 
"43122...34.441.\n"
"33121113.324...\n"
"12214.23.3....3\n"
"12234.222312.23\n"
"224113.1334.22.\n"
"2.222114.33321.\n"
"312..4444222414\n"
"21.22241.23.233\n"
".23222..2.2..44\n"
"3...3.134.34.11\n"
"313333433..42.2\n"
"111.323....4442\n"
"11..32.113.44..\n"
"4.41141443442..\n") == 0);
free(board366488346);
board366488346 = NULL;
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 14, 9) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_golden_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 45 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_golden_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_golden_move(board, 4, 7, 9) == 0 );


gamma_delete(board);

    return 0;
}
