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
uuid: 669728508
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 4, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_free_fields(board, 2) == 212 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 11, 14) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 1, 14, 13) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );


char* board965071083 = gamma_board(board);
assert( board965071083 != NULL );
assert( strcmp(board965071083, 
"...2.......4...\n"
"4...44.....3..1\n"
".1.3.........2.\n"
"..3.1......4...\n"
"3.2.32......4..\n"
"...............\n"
".....1...32....\n"
".4.......3.....\n"
"4.............2\n"
"...2..41.......\n"
"....31.143.....\n"
"33.......3.....\n"
".........41.2..\n"
"..1.......3.2..\n"
"2.3.........1..\n") == 0);
free(board965071083);
board965071083 = NULL;
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_golden_move(board, 1, 10, 4) == 0 );


char* board249573229 = gamma_board(board);
assert( board249573229 != NULL );
assert( strcmp(board249573229, 
"...2.......4...\n"
"4...44.....3..1\n"
".1.3.........2.\n"
"..3.1......4...\n"
"3.2.32......4..\n"
"...............\n"
".....1...32....\n"
".4.......3.....\n"
"4.............2\n"
"...2..41.......\n"
"....31.143.....\n"
"33.......3.....\n"
".........41.2.1\n"
"..1.......3.2..\n"
"2.3.........1..\n") == 0);
free(board249573229);
board249573229 = NULL;
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_golden_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 176 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_free_fields(board, 1) == 173 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_move(board, 4, 5, 14) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_golden_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 8, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );


char* board988350728 = gamma_board(board);
assert( board988350728 != NULL );
assert( strcmp(board988350728, 
"...2.4.....4...\n"
"4...44.44..3..1\n"
".1331.......42.\n"
"..3.1.3....4...\n"
"3.2.32......4..\n"
"...............\n"
".....1.3.321...\n"
".4.....2231....\n"
"4.....41...1..2\n"
".2.2.141.2.3...\n"
"....312143.....\n"
"3332..33.31.2..\n"
"1........41.2.1\n"
"..1...434.312.2\n"
"2.3.44......1..\n") == 0);
free(board988350728);
board988350728 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board113972145 = gamma_board(board);
assert( board113972145 != NULL );
assert( strcmp(board113972145, 
"...2.4.....4...\n"
"4...44.44..3..1\n"
".1331.......42.\n"
"..3.1.3....4...\n"
"3.2.32......4..\n"
"...............\n"
".....1.3.321...\n"
".44....2231....\n"
"4.....41...1..2\n"
".2.2.141.2.3...\n"
"....312143.....\n"
"3332..33.31.2..\n"
"1......3.41.2.1\n"
"..1...434.312.2\n"
"2.3.44......1..\n") == 0);
free(board113972145);
board113972145 = NULL;
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 12, 5) == 1 );


char* board582427492 = gamma_board(board);
assert( board582427492 != NULL );
assert( strcmp(board582427492, 
"...2.4.....4...\n"
"4...44.44..3..1\n"
".1331.......42.\n"
"..3.1.3....4...\n"
"3.2.32......4..\n"
"...............\n"
".....1.3.321...\n"
".44....2231....\n"
"4.....41...1..2\n"
".2.2.141.2.33..\n"
"....312143.....\n"
"3332..33.31.2..\n"
"1......3.41.2.1\n"
"..1...434.312.2\n"
"2.3.44......1..\n") == 0);
free(board582427492);
board582427492 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_golden_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 10, 13) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );


char* board510404272 = gamma_board(board);
assert( board510404272 != NULL );
assert( strcmp(board510404272, 
"...2.4.....4...\n"
"41..44.44.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"3.2.32......4..\n"
"...........3...\n"
".....1.3.3211..\n"
"444....2231....\n"
"4.43..41.2.1..2\n"
".2.2.141.2.33..\n"
"...3312143.....\n"
"33323333.31.2..\n"
"1......3.41.2.1\n"
"..14..434.312.2\n"
"2.3.44......1..\n") == 0);
free(board510404272);
board510404272 = NULL;
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_golden_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 14) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board961474606 = gamma_board(board);
assert( board961474606 != NULL );
assert( strcmp(board961474606, 
"1..2.4.....4...\n"
"41..44.44.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"3.2.32......4..\n"
"...........3...\n"
".....1.3.3211..\n"
"444....22311...\n"
"4.43..41.2.1..2\n"
".2.2.141.2.33..\n"
"...3312143.....\n"
"33323333131.2..\n"
"1.4....3441.2.1\n"
"1.14..434.312.2\n"
"2.3.44......1..\n") == 0);
free(board961474606);
board961474606 = NULL;
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board943313623 = gamma_board(board);
assert( board943313623 != NULL );
assert( strcmp(board943313623, 
"1..2.4.....4...\n"
"41..44.44.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"3.2.32......4..\n"
"...........3...\n"
".....1.3.3211..\n"
"444....22311...\n"
"4.43..41.2.1..2\n"
".2.2.141.2.33..\n"
"...3312143.....\n"
"33323333131.2..\n"
"1.4....3441.2.1\n"
"1.14..434.312.2\n"
"2.3.44......1..\n") == 0);
free(board943313623);
board943313623 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 10, 14) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );


char* board846485488 = gamma_board(board);
assert( board846485488 != NULL );
assert( strcmp(board846485488, 
"1..2.4....34..1\n"
"41..44444.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"332.32......4..\n"
"...........3...\n"
"....4113.3211..\n"
"444..1.22311...\n"
"4.43..41.2.1..2\n"
".2.2.141.2.33..\n"
"...3312143.....\n"
"33323333131.2..\n"
"1.4....3441.2.1\n"
"1.14..434.312.2\n"
"2.3.44......1..\n") == 0);
free(board846485488);
board846485488 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );


char* board646998415 = gamma_board(board);
assert( board646998415 != NULL );
assert( strcmp(board646998415, 
"1..2.4....34..1\n"
"41.444444.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"332.32......4..\n"
"....3......3...\n"
"....4113.3211..\n"
"444..1222311...\n"
"4.43..41.221..2\n"
".2.2.141.2433..\n"
"...3312143.....\n"
"33323333131.2.1\n"
"1.42...3441.2.1\n"
"1.144.434.312.2\n"
"2.3.44......1..\n") == 0);
free(board646998415);
board646998415 = NULL;
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );


char* board783509618 = gamma_board(board);
assert( board783509618 != NULL );
assert( strcmp(board783509618, 
"1..2.4....34..1\n"
"41.444444.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"332.32....4.4..\n"
"....3......3...\n"
"....4113.3211..\n"
"444..1222311...\n"
"4.43..41.221..2\n"
".2.2.141.2433..\n"
"...3312143.3...\n"
"3332333313112.1\n"
"1.42..43441.2.1\n"
"1.144.434.312.2\n"
"2.3.44......1..\n") == 0);
free(board783509618);
board783509618 = NULL;
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );


char* board190567390 = gamma_board(board);
assert( board190567390 != NULL );
assert( strcmp(board190567390, 
"1..2.4....34..1\n"
"41.444444.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"332.32....4.4..\n"
"....3..3...3...\n"
"....4113.3211..\n"
"444..1222311...\n"
"4.43..41.221..2\n"
".2.2.141.2433..\n"
"...3312143.3...\n"
"3332333313112.1\n"
"1.42..43441.2.1\n"
"1.144.434.312.2\n"
"223.44......1..\n") == 0);
free(board190567390);
board190567390 = NULL;
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board691581451 = gamma_board(board);
assert( board691581451 != NULL );
assert( strcmp(board691581451, 
"1..2.4....34..1\n"
"41.444444.33..1\n"
"11331.......42.\n"
"..3.1.3...44...\n"
"332.32....4.4..\n"
".3..3..3...3...\n"
"....4113.3211..\n"
"444..1222311...\n"
"4.43..41.221..2\n"
".2.2.141.2433..\n"
"...3312143.3...\n"
"3332333313112.1\n"
"1.42..43441.2.1\n"
"1.144.434.312.2\n"
"223.44......1..\n") == 0);
free(board691581451);
board691581451 = NULL;
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_golden_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 3, 14, 11) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 12, 11) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 13, 14) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 13, 9) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_golden_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 39 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );


char* board893304083 = gamma_board(board);
assert( board893304083 != NULL );
assert( strcmp(board893304083, 
"1..2.4..4.34.11\n"
"412444444.33..1\n"
"11331....4..42.\n"
".33.123...444.3\n"
"332.323..14.4..\n"
"332.3..3.1.3.1.\n"
"....4113.32111.\n"
"444.41222311..4\n"
"4.44..4122211.2\n"
".2.2.141.2433..\n"
"...3312143.32..\n"
"3332333313112.1\n"
"1.423343441.2.1\n"
"1.144.434.312.2\n"
"223.44.....11..\n") == 0);
free(board893304083);
board893304083 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 9, 14) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_golden_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );


char* board951258239 = gamma_board(board);
assert( board951258239 != NULL );
assert( strcmp(board951258239, 
"1..2.4..4434.11\n"
"412444444.33..1\n"
"11331....4..42.\n"
".33.123..3444.3\n"
"332.323..1434..\n"
"332.3..3.1.3.1.\n"
"....4113.32111.\n"
"444.412223111.4\n"
"4.44..4122211.2\n"
".2.2.141.2433..\n"
"...3312143.32..\n"
"3332333313112.1\n"
"11423343441.2.1\n"
"1.144.434.312.2\n"
"223.44.....11..\n") == 0);
free(board951258239);
board951258239 = NULL;
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 12, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );


char* board748587685 = gamma_board(board);
assert( board748587685 != NULL );
assert( strcmp(board748587685, 
"1..2.4..4434411\n"
"412444444.33..1\n"
"11331....4..42.\n"
".33.123..3444.3\n"
"3322323..1434..\n"
"332.3..3.1.3.1.\n"
"....4113.32111.\n"
"444.412223111.4\n"
"4.44..4122211.2\n"
".222.141.2433..\n"
"...3312143.32..\n"
"3332333313112.1\n"
"11423343441.2.1\n"
"12144.434.312.2\n"
"223.44.....11..\n") == 0);
free(board748587685);
board748587685 = NULL;
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 13, 10) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );


char* board655356748 = gamma_board(board);
assert( board655356748 != NULL );
assert( strcmp(board655356748, 
"1..2.4..4434411\n"
"412444444.33..1\n"
"11331....4..42.\n"
".33.123..3444.3\n"
"3322323..14341.\n"
"332.3..3.1.3.1.\n"
"....4113.32111.\n"
"444.412223111.4\n"
"4.44..4122211.2\n"
".222.141.2433..\n"
"...3312143.32.2\n"
"3332333313112.1\n"
"11423343441.2.1\n"
"12144.434.312.2\n"
"223.44.....11..\n") == 0);
free(board655356748);
board655356748 = NULL;
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_golden_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 5, 13) == 0 );


char* board739464064 = gamma_board(board);
assert( board739464064 != NULL );
assert( strcmp(board739464064, 
"1..2.4..4434411\n"
"412444444.33..1\n"
"11331....4..42.\n"
".33.123..3444.3\n"
"3322323..143413\n"
"332.3..3.1.3.1.\n"
"....4113.32111.\n"
"444.412223111.4\n"
"4.44..4122211.2\n"
".222.141.2433..\n"
"...3312143.32.2\n"
"3332333313112.1\n"
"11423343441.2.1\n"
"12144.434.312.2\n"
"223.44.....11..\n") == 0);
free(board739464064);
board739464064 = NULL;
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_golden_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_free_fields(board, 4) == 29 );


char* board559278152 = gamma_board(board);
assert( board559278152 != NULL );
assert( strcmp(board559278152, 
"1..2.4..4434411\n"
"412444444.33..1\n"
"1133124..4..42.\n"
".332123..3444.3\n"
"3322323..143413\n"
"33233..3.1.3.1.\n"
"....4113.32111.\n"
"444.412223111.4\n"
"4.44..4122211.2\n"
".222.141.2433..\n"
"...3312143.32.2\n"
"3332333313112.1\n"
"11423343441.2.1\n"
"12144.4343312.2\n"
"223.44.....11..\n") == 0);
free(board559278152);
board559278152 = NULL;
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_free_fields(board, 2) == 59 );


char* board510585393 = gamma_board(board);
assert( board510585393 != NULL );
assert( strcmp(board510585393, 
"1..2.4..4434411\n"
"412444444.33..1\n"
"1133124..4..42.\n"
".332123..3444.3\n"
"3322323..143413\n"
"33233..3.1.3.1.\n"
"....4113.32111.\n"
"444.412223111.4\n"
"4.44..4122211.2\n"
".222.141.2433.2\n"
"...3312143.32.2\n"
"3332333313112.1\n"
"11423343441.2.1\n"
"12144.4343312.2\n"
"223.44.....11..\n") == 0);
free(board510585393);
board510585393 = NULL;


gamma_delete(board);

    return 0;
}
