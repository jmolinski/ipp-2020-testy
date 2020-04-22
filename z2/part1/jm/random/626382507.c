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
uuid: 626382507
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 11, 4, 36);
assert( board != NULL );


assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 15, 5) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_free_fields(board, 2) == 162 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 149 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_free_fields(board, 1) == 137 );


char* board602804624 = gamma_board(board);
assert( board602804624 != NULL );
assert( strcmp(board602804624, 
".......2..3.....\n"
"..24...3...1....\n"
"..4.....1...3...\n"
"4.........1.....\n"
"..2..3.2....3...\n"
"...1.1...2.....3\n"
".....1.423.22.2.\n"
"4..44.........1.\n"
"......3.2...2...\n"
"44..3........2..\n"
".......1..3.....\n") == 0);
free(board602804624);
board602804624 = NULL;
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_golden_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 15, 4) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 131 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_free_fields(board, 3) == 124 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 119 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );


char* board128679848 = gamma_board(board);
assert( board128679848 != NULL );
assert( strcmp(board128679848, 
".......22.3.....\n"
"..24...32..1....\n"
"..4.....1...3...\n"
"4..3.1....1.....\n"
".323.3421...3...\n"
"1..1.1...2.....3\n"
".....1.423.22.21\n"
"4..44....1.4241.\n"
"..3..33.2..12...\n"
"44.43.....2..2..\n"
"...43..2..3.....\n") == 0);
free(board128679848);
board128679848 = NULL;
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 14, 6) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );


char* board375620041 = gamma_board(board);
assert( board375620041 != NULL );
assert( strcmp(board375620041, 
".......2233..3..\n"
"..24...322.1....\n"
"4.4.....1...3...\n"
"4..3.1.1..1.....\n"
".323.3421.3.3.1.\n"
"1..1.1...2.....3\n"
".....1.423.22.21\n"
"4..44....1.4241.\n"
"..3..33.2..12...\n"
"44.43..2..2..2..\n"
"...43.42..3.....\n") == 0);
free(board375620041);
board375620041 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_move(board, 2, 15, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 100 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board845701079 = gamma_board(board);
assert( board845701079 != NULL );
assert( strcmp(board845701079, 
".......22334.3..\n"
".324...322.1..2.\n"
"4.4.....1...3...\n"
"4..3.1.1..1.....\n"
".323.3421.3.3.1.\n"
"1..1.1..122....3\n"
".....1.423.22.21\n"
"4..44...41.4241.\n"
"1.3..33.2..12...\n"
"44.43..2..2..2..\n"
"...43.42..3....2\n") == 0);
free(board845701079);
board845701079 = NULL;
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board435696058 = gamma_board(board);
assert( board435696058 != NULL );
assert( strcmp(board435696058, 
".......22334.3..\n"
".324...322.1..2.\n"
"4.4.....1...3...\n"
"4..32111.112..4.\n"
".323.342133.341.\n"
"1..1.1..122....3\n"
"....31.423322.21\n"
"4..44...41.4241.\n"
"1.34333.2..12...\n"
"44.43..2..2..2..\n"
"...43.42.43....2\n") == 0);
free(board435696058);
board435696058 = NULL;
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board210400174 = gamma_board(board);
assert( board210400174 != NULL );
assert( strcmp(board210400174, 
"..1....2233443..\n"
".324...322.1..2.\n"
"4.4....31...3...\n"
"4..32111.112..4.\n"
".323.342133.341.\n"
"1..1.1.1122....3\n"
"..2.31.423322.21\n"
"4.244.2.41.4241.\n"
"1.34333.2..12...\n"
"44.43..2.42..2..\n"
".2.43.42.43....2\n") == 0);
free(board210400174);
board210400174 = NULL;
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_golden_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 14, 10) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board702080720 = gamma_board(board);
assert( board702080720 != NULL );
assert( strcmp(board702080720, 
"..1....22334431.\n"
".324...322.1..2.\n"
"4.4....312..3...\n"
"4..32111.1122.4.\n"
".323.342133.341.\n"
"1..1.1.1122....3\n"
"..2331.423322.21\n"
"41244.2.41.4241.\n"
"1.34333.2..12...\n"
"44.43..2.42..2..\n"
".2.43.42.43.4..2\n") == 0);
free(board702080720);
board702080720 = NULL;
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_golden_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 15, 3) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 29 );


char* board864253568 = gamma_board(board);
assert( board864253568 != NULL );
assert( strcmp(board864253568, 
"..1232.22334431.\n"
".32424.322.1..2.\n"
"4.41...3424.3..1\n"
"4..32111.1122.4.\n"
".323.342133.341.\n"
"1..111.1122....3\n"
"..1331.423322.21\n"
"41244.2.41.42412\n"
"1.34333423.12...\n"
"441434.2.421.2..\n"
"42.43.42.43.4.32\n") == 0);
free(board864253568);
board864253568 = NULL;
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_golden_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_golden_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );


char* board691751397 = gamma_board(board);
assert( board691751397 != NULL );
assert( strcmp(board691751397, 
"..1232.22334431.\n"
".32424.322.1..2.\n"
"4.412..3424.3..1\n"
"4..32111.1122.4.\n"
"1323.342133.341.\n"
"1..111.1122..4.3\n"
"..13314423322.21\n"
"41244.2.41.42412\n"
"1.34333423.123..\n"
"441434.22421.2..\n"
"42.43.42.43.4.32\n") == 0);
free(board691751397);
board691751397 = NULL;
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );


char* board841459795 = gamma_board(board);
assert( board841459795 != NULL );
assert( strcmp(board841459795, 
"..1232.22334431.\n"
".32424.322.1..2.\n"
"4.412..3424.3..1\n"
"4..32111.1122.4.\n"
"1323.342133.341.\n"
"1..111.1122..4.3\n"
"..13314423322.21\n"
"41244.2.41.42412\n"
"1.34333423.123..\n"
"441434.22421.2..\n"
"42.43.42.43.4.32\n") == 0);
free(board841459795);
board841459795 = NULL;
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board936053328 = gamma_board(board);
assert( board936053328 != NULL );
assert( strcmp(board936053328, 
"..1232.22334431.\n"
".32424.322.1..2.\n"
"4.412..3424.31.1\n"
"4..32111.1122.4.\n"
"1323.342133.341.\n"
"1..111.1122..4.3\n"
"..13314423322.21\n"
"41244.2.41.42412\n"
"1.34333423.123..\n"
"441434.22421.2..\n"
"42.43.42.43.4.32\n") == 0);
free(board936053328);
board936053328 = NULL;
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_golden_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_golden_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 15, 10) == 1 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );


char* board451456996 = gamma_board(board);
assert( board451456996 != NULL );
assert( strcmp(board451456996, 
"2.1232.223344312\n"
"132424.322.1..2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.341.\n"
"1..111.1122.34.3\n"
"..13314423322.21\n"
"41244.2.41.42412\n"
"1434333423.123..\n"
"441434.22421.2..\n"
"42.43.42343.4432\n") == 0);
free(board451456996);
board451456996 = NULL;
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 38 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 4, 15, 6) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board772389162 = gamma_board(board);
assert( board772389162 != NULL );
assert( strcmp(board772389162, 
"2.1232.223344312\n"
"132424.322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.3414\n"
"1..111.1122.34.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.123..\n"
"441434.22421.2..\n"
"42.43.42343.4432\n") == 0);
free(board772389162);
board772389162 = NULL;
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );


char* board760596977 = gamma_board(board);
assert( board760596977 != NULL );
assert( strcmp(board760596977, 
"2.1232.223344312\n"
"132424.322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.3414\n"
"1..111.1122.34.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.1232.\n"
"441434.22421.2..\n"
"42.43.42343.4432\n") == 0);
free(board760596977);
board760596977 = NULL;
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 1, 7, 5) == 0 );


char* board308021926 = gamma_board(board);
assert( board308021926 != NULL );
assert( strcmp(board308021926, 
"2.1232.223344312\n"
"132424.322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.3414\n"
"1..111.1122.34.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.1232.\n"
"441434.22421.2..\n"
"42.43.42343.4432\n") == 0);
free(board308021926);
board308021926 = NULL;
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board107601904 = gamma_board(board);
assert( board107601904 != NULL );
assert( strcmp(board107601904, 
"2.1232.223344312\n"
"132424.322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.3414\n"
"1..111.1122.34.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.1232.\n"
"441434.22421.2..\n"
"42.43.42343.4432\n") == 0);
free(board107601904);
board107601904 = NULL;
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_golden_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_golden_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );


char* board278397073 = gamma_board(board);
assert( board278397073 != NULL );
assert( strcmp(board278397073, 
"2.1232.223344312\n"
"1324241322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.3414\n"
"1..111.1122134.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.1232.\n"
"441434.22421.24.\n"
"42.43.42343.4432\n") == 0);
free(board278397073);
board278397073 = NULL;
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_golden_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );


char* board739137251 = gamma_board(board);
assert( board739137251 != NULL );
assert( strcmp(board739137251, 
"2.1232.223344312\n"
"1324241322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.3414\n"
"1..111.1122134.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.1232.\n"
"441434.22421.24.\n"
"42.43.42343.4432\n") == 0);
free(board739137251);
board739137251 = NULL;
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );


char* board957111316 = gamma_board(board);
assert( board957111316 != NULL );
assert( strcmp(board957111316, 
"2.1232.223344312\n"
"1324241322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.342133.3414\n"
"1..111.1122134.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.1232.\n"
"441434.22421.24.\n"
"42.43.4234314432\n") == 0);
free(board957111316);
board957111316 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );


char* board492286736 = gamma_board(board);
assert( board492286736 != NULL );
assert( strcmp(board492286736, 
"2.1232.223344312\n"
"1324241322411.2.\n"
"4.412..3424.31.1\n"
"4..32111.112224.\n"
"1323.34213323414\n"
"1.4111.1122134.3\n"
"..13314423322.21\n"
"41244.2.41442412\n"
"1434333423.1232.\n"
"441434.22421.24.\n"
"42.43.4234314432\n") == 0);
free(board492286736);
board492286736 = NULL;
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 15, 7) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );


gamma_delete(board);

    return 0;
}
