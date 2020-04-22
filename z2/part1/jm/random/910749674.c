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
uuid: 910749674
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 10, 4, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 8) == 1 );


char* board907811390 = gamma_board(board);
assert( board907811390 != NULL );
assert( strcmp(board907811390, 
"...........\n"
".........1.\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n") == 0);
free(board907811390);
board907811390 = NULL;
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 96 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_free_fields(board, 4) == 92 );


char* board180867940 = gamma_board(board);
assert( board180867940 != NULL );
assert( strcmp(board180867940, 
"...4..3....\n"
"..334....1.\n"
"....1.2....\n"
"2.......1..\n"
"...2.....3.\n"
"......24...\n"
"........3..\n"
"...........\n"
".......1.3.\n"
".........4.\n") == 0);
free(board180867940);
board180867940 = NULL;
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );


char* board173349263 = gamma_board(board);
assert( board173349263 != NULL );
assert( strcmp(board173349263, 
".434..3.24.\n"
"..334....1.\n"
".4..1.2..2.\n"
"213....213.\n"
"...2..1..3.\n"
"...22.24...\n"
".......43..\n"
"...........\n"
".22.1..1.3.\n"
"..4.3..344.\n") == 0);
free(board173349263);
board173349263 = NULL;
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );


char* board274124461 = gamma_board(board);
assert( board274124461 != NULL );
assert( strcmp(board274124461, 
".434.43.24.\n"
"11334...212\n"
".4..1.2.122\n"
"213...1213.\n"
"...2221113.\n"
"...22.24.2.\n"
"...1.1443..\n"
".2..3.4....\n"
"22211..1.3.\n"
"..4133.344.\n") == 0);
free(board274124461);
board274124461 = NULL;
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 1, 0, 10) == 0 );


char* board922157058 = gamma_board(board);
assert( board922157058 != NULL );
assert( strcmp(board922157058, 
".434.43.24.\n"
"11334...212\n"
".4..1.2.122\n"
"213...1213.\n"
"...2221113.\n"
"...22.24.2.\n"
"...1.1443..\n"
".2..3.4....\n"
"22211.11.3.\n"
"2.4133.344.\n") == 0);
free(board922157058);
board922157058 = NULL;
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );


char* board617634866 = gamma_board(board);
assert( board617634866 != NULL );
assert( strcmp(board617634866, 
".434.43.24.\n"
"11334..2212\n"
".4..122.122\n"
"213..11213.\n"
"...2221113.\n"
"...22.24.2.\n"
"..11.1443..\n"
".2..3.4....\n"
"22411.11.3.\n"
"2.4133.344.\n") == 0);
free(board617634866);
board617634866 = NULL;
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 13 );


char* board152470044 = gamma_board(board);
assert( board152470044 != NULL );
assert( strcmp(board152470044, 
".434.43.24.\n"
"11334..2212\n"
".4..122.122\n"
"213..11213.\n"
"...2221113.\n"
"...22.24.2.\n"
"..11.1443..\n"
".24.3.4....\n"
"22411.11.3.\n"
"2.4133.344.\n") == 0);
free(board152470044);
board152470044 = NULL;
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );


char* board635122364 = gamma_board(board);
assert( board635122364 != NULL );
assert( strcmp(board635122364, 
".434.43.24.\n"
"11334..2212\n"
".44.1222122\n"
"213..112133\n"
"...2221113.\n"
"...22.24.2.\n"
"..11.1443..\n"
".24.314....\n"
"22411111333\n"
"2.4133.344.\n") == 0);
free(board635122364);
board635122364 = NULL;
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board617635223 = gamma_board(board);
assert( board617635223 != NULL );
assert( strcmp(board617635223, 
".434.43.24.\n"
"11334..2212\n"
".44.1222122\n"
"213..112133\n"
"...2221113.\n"
"...22.24.2.\n"
"..11.1443..\n"
".24.314....\n"
"22411111333\n"
"2.4133.344.\n") == 0);
free(board617635223);
board617635223 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );


char* board265694779 = gamma_board(board);
assert( board265694779 != NULL );
assert( strcmp(board265694779, 
".434.43.24.\n"
"11334..2212\n"
".44.1222122\n"
"213..112133\n"
"...22211132\n"
"...22.24.2.\n"
"..11.1443..\n"
".24.314....\n"
"22411111333\n"
"2.4133.344.\n") == 0);
free(board265694779);
board265694779 = NULL;
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


gamma_delete(board);

    return 0;
}
