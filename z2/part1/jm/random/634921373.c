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
uuid: 634921373
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 11, 4, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 73 );


char* board697311682 = gamma_board(board);
assert( board697311682 != NULL );
assert( strcmp(board697311682, 
"........1\n"
"2....1.1.\n"
".4....2..\n"
"1........\n"
"14.......\n"
"........3\n"
"14.2..234\n"
".4.1....1\n"
".....2...\n"
".3.2.3...\n"
"...1.3..2\n") == 0);
free(board697311682);
board697311682 = NULL;
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_golden_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 61 );


char* board345311194 = gamma_board(board);
assert( board345311194 != NULL );
assert( strcmp(board345311194, 
"......3.1\n"
"22...1.1.\n"
".4....22.\n"
"1.2....3.\n"
"14.......\n"
"......1.3\n"
"14.2.1234\n"
".441..3.1\n"
".....2...\n"
".3.2.3.22\n"
"..41.3..2\n") == 0);
free(board345311194);
board345311194 = NULL;
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );


char* board173850265 = gamma_board(board);
assert( board173850265 != NULL );
assert( strcmp(board173850265, 
"......3.1\n"
"22...1.1.\n"
".4....22.\n"
"1.2....3.\n"
"14.......\n"
"......1.3\n"
"14.2.1234\n"
".441..3.1\n"
".....2...\n"
".3.2.3.22\n"
".441.3..2\n") == 0);
free(board173850265);
board173850265 = NULL;
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );


char* board907678582 = gamma_board(board);
assert( board907678582 != NULL );
assert( strcmp(board907678582, 
"......3.1\n"
"22...1.1.\n"
".4....22.\n"
"1.2....3.\n"
"14.......\n"
"......1.3\n"
"14.2.1234\n"
".441..3.1\n"
".....2...\n"
".3.2.3.22\n"
".441.3..2\n") == 0);
free(board907678582);
board907678582 = NULL;
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_move(board, 3, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_golden_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_golden_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 8, 4) == 0 );


char* board191615905 = gamma_board(board);
assert( board191615905 != NULL );
assert( strcmp(board191615905, 
"2..4.2311\n"
"22.4.1311\n"
"4424..222\n"
"1422.4.22\n"
"142..223.\n"
"..33.31.3\n"
"141241234\n"
".4413.341\n"
".332.2...\n"
".3.2.3222\n"
"444113..2\n") == 0);
free(board191615905);
board191615905 = NULL;
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );


char* board240035887 = gamma_board(board);
assert( board240035887 != NULL );
assert( strcmp(board240035887, 
"2..4.2311\n"
"22.4.1311\n"
"4424..222\n"
"1422.4.22\n"
"142..223.\n"
"..33.31.3\n"
"141241234\n"
".4413.341\n"
".332.2...\n"
"43.2.3222\n"
"444113..2\n") == 0);
free(board240035887);
board240035887 = NULL;
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );


char* board448748446 = gamma_board(board);
assert( board448748446 != NULL );
assert( strcmp(board448748446, 
"2..4.2311\n"
"22.4.1311\n"
"4424..222\n"
"1422.4.22\n"
"142..223.\n"
"..33.31.3\n"
"141241234\n"
".4413.341\n"
".332.2...\n"
"43.2.3222\n"
"444113..2\n") == 0);
free(board448748446);
board448748446 = NULL;
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );


char* board663518177 = gamma_board(board);
assert( board663518177 != NULL );
assert( strcmp(board663518177, 
"22.4.2311\n"
"22.4.1311\n"
"4424..222\n"
"1422.4.22\n"
"1422.2434\n"
"1.33.31.3\n"
"141241234\n"
".4413.341\n"
".332.2..1\n"
"434233222\n"
"4441133.2\n") == 0);
free(board663518177);
board663518177 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );


gamma_delete(board);

    return 0;
}
