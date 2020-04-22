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
uuid: 355245772
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 13, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 165 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 13, 11) == 1 );
assert( gamma_move(board, 4, 10, 11) == 1 );


char* board212455476 = gamma_board(board);
assert( board212455476 != NULL );
assert( strcmp(board212455476, 
"..............\n"
"..........4..4\n"
"2.2....5.2....\n"
".4......4.....\n"
".....3........\n"
"..............\n"
"53...3..5..1..\n"
"....1...25....\n"
".........1.1.2\n"
"..............\n"
".1....35......\n"
"4...45........\n"
"..............\n") == 0);
free(board212455476);
board212455476 = NULL;
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_free_fields(board, 4) == 152 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );


char* board817777772 = gamma_board(board);
assert( board817777772 != NULL );
assert( strcmp(board817777772, 
"..............\n"
"4.....3..44..4\n"
"2.2.1..532....\n"
".4......4.....\n"
"2....3........\n"
"1.............\n"
"53...3..5..1..\n"
"...21...252...\n"
".........1.1.2\n"
"..............\n"
".1....35......\n"
"4...45........\n"
"...........5..\n") == 0);
free(board817777772);
board817777772 = NULL;
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 140 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );


char* board963264885 = gamma_board(board);
assert( board963264885 != NULL );
assert( strcmp(board963264885, 
"..............\n"
"4.....3..44..4\n"
"222.1..532....\n"
".4...3..42....\n"
"2....3........\n"
"1.............\n"
"53..13.15..1..\n"
"...211..2524..\n"
".........1.1.2\n"
"..............\n"
".1..3.35......\n"
"4..445.253....\n"
"...4...2.3.5..\n") == 0);
free(board963264885);
board963264885 = NULL;
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );


char* board995937538 = gamma_board(board);
assert( board995937538 != NULL );
assert( strcmp(board995937538, 
"..............\n"
"4....33..444.4\n"
"222.1..532....\n"
".4...3..42....\n"
"2....3........\n"
"1......1......\n"
"53..13.15..1..\n"
"..2211..2524..\n"
".........1.1.2\n"
"..............\n"
".11.3.35......\n"
"4..445.253....\n"
"...4...2.3.5..\n") == 0);
free(board995937538);
board995937538 = NULL;
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );


char* board496195508 = gamma_board(board);
assert( board496195508 != NULL );
assert( strcmp(board496195508, 
"..............\n"
"4....33..444.4\n"
"222.1..532....\n"
".4...3..42....\n"
"2....33.......\n"
"1......1......\n"
"53..13.15..1..\n"
"..2211..2524..\n"
".........1.1.2\n"
"..............\n"
".11.3.35......\n"
"4..445.253....\n"
"...4...2.3.55.\n") == 0);
free(board496195508);
board496195508 = NULL;
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_golden_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );


char* board142652953 = gamma_board(board);
assert( board142652953 != NULL );
assert( strcmp(board142652953, 
"..............\n"
"4....33..444.4\n"
"222.1..532....\n"
".4...3..42....\n"
"2....33.......\n"
"1......1......\n"
"53..13.15..1..\n"
"..2211..2524..\n"
".........1.1.2\n"
"..............\n"
".11.3.35......\n"
"4..445.253....\n"
"...4...2.3.55.\n") == 0);
free(board142652953);
board142652953 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_golden_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 12, 11) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );


char* board577679930 = gamma_board(board);
assert( board577679930 != NULL );
assert( strcmp(board577679930, 
"..............\n"
"4...1333.44444\n"
"22211..532....\n"
".4...3..42....\n"
"2...333....4..\n"
"1......1......\n"
"53..13.15..1..\n"
"..2211..2524..\n"
".........1.1.2\n"
".........1....\n"
".1133.35......\n"
"4..445.253....\n"
"...4...2.3.55.\n") == 0);
free(board577679930);
board577679930 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_move(board, 5, 10, 0) == 0 );
assert( gamma_golden_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 7, 9) == 0 );


char* board124661940 = gamma_board(board);
assert( board124661940 != NULL );
assert( strcmp(board124661940, 
"..............\n"
"4.2.1333.44444\n"
"22211..532....\n"
".42..3..42....\n"
"2...333.5..4..\n"
"1...3..1......\n"
"53..13112..1..\n"
"..2211..2524..\n"
".........1.122\n"
".........1....\n"
"11133.35......\n"
"4..445.253....\n"
"...44..2.3.55.\n") == 0);
free(board124661940);
board124661940 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );


char* board809591011 = gamma_board(board);
assert( board809591011 != NULL );
assert( strcmp(board809591011, 
"..............\n"
"4.2.1333.44444\n"
"22211..532....\n"
".42..3..42....\n"
"2...33335..4..\n"
"1..33..1......\n"
"53..13112..1..\n"
"..2211..2524..\n"
".........1.122\n"
".........1....\n"
"11133.35......\n"
"4..445.253....\n"
"...44..2.3.55.\n") == 0);
free(board809591011);
board809591011 = NULL;
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );


char* board837754891 = gamma_board(board);
assert( board837754891 != NULL );
assert( strcmp(board837754891, 
"..2...........\n"
"422.1333.44444\n"
"22211..532....\n"
".422.3.442....\n"
"2...33335..4..\n"
"1..33..12.....\n"
"53..13112..1..\n"
"..2211..2524..\n"
".........1.122\n"
"1........1....\n"
"11133.35......\n"
"4..445.253....\n"
"...44..2.3.55.\n") == 0);
free(board837754891);
board837754891 = NULL;
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );


char* board719883943 = gamma_board(board);
assert( board719883943 != NULL );
assert( strcmp(board719883943, 
".22...........\n"
"422.1333.44444\n"
"22211..532....\n"
".422.3.442....\n"
"2...33335..44.\n"
"1..33..12.....\n"
"53..13112..1..\n"
"..2211..2524..\n"
".........1.122\n"
"1........1....\n"
"11133.35......\n"
"4..445.253....\n"
"...44..2.3.55.\n") == 0);
free(board719883943);
board719883943 = NULL;
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 9, 12) == 1 );


gamma_delete(board);

    return 0;
}
