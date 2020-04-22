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
uuid: 851196091
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 6, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 191 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_free_fields(board, 5) == 188 );


char* board605133286 = gamma_board(board);
assert( board605133286 != NULL );
assert( strcmp(board605133286, 
"....2..........\n"
"...............\n"
".........3.....\n"
"....6........3.\n"
".5.......4.....\n"
"........2......\n"
"........6.3....\n"
"...............\n"
"....4......4...\n"
"...4...........\n"
"...............\n"
"..1.31.........\n"
"..5.5......3...\n"
"66.1.....1.....\n") == 0);
free(board605133286);
board605133286 = NULL;
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_free_fields(board, 2) == 186 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_golden_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_free_fields(board, 1) == 159 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_free_fields(board, 3) == 156 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 13, 12) == 1 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 14, 11) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_free_fields(board, 6) == 129 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_free_fields(board, 1) == 127 );
assert( gamma_free_fields(board, 2) == 127 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 13, 11) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 2, 12, 12) == 0 );


char* board156419560 = gamma_board(board);
assert( board156419560 != NULL );
assert( strcmp(board156419560, 
"162.2...1..3...\n"
".........5.311.\n"
".........3.2.43\n"
".12266..22.1.3.\n"
".5....3..4..3..\n"
"2.5...5.3..34..\n"
"346.....6636...\n"
".1.2364.2.5....\n"
"....4..1...45..\n"
".1.45..65...6.5\n"
"24.4.4.2.1..3..\n"
"321.31...3.....\n"
"..5.5.4....3.1.\n"
"16.1424..1533..\n") == 0);
free(board156419560);
board156419560 = NULL;
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_golden_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );


char* board189878809 = gamma_board(board);
assert( board189878809 != NULL );
assert( strcmp(board189878809, 
"162.2...1.53...\n"
".4.......5.311.\n"
".........3.2.43\n"
".12266..22.1.3.\n"
".5....3..4..3..\n"
"2.5..65.34.34..\n"
"346.....6636...\n"
".1.2364.2.5.15.\n"
"....4..1...45..\n"
".1.45..65...6.5\n"
"24.4.4.211..3..\n"
"321.31...3.....\n"
"..5.5.4....3.1.\n"
"16.1424..1533..\n") == 0);
free(board189878809);
board189878809 = NULL;
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );


char* board254223311 = gamma_board(board);
assert( board254223311 != NULL );
assert( strcmp(board254223311, 
"162.2...1.53...\n"
".4.......5.311.\n"
".....5...3.2.43\n"
".12266..22.1.3.\n"
".5....3..4..3..\n"
"2.5..65.34.34..\n"
"346.....6636...\n"
".1.2364.2.5.15.\n"
"....4..1...45..\n"
".1.45..65...6.5\n"
"24.4.4.211.23..\n"
"321.31...3.....\n"
"..5.5.4.2..3.1.\n"
"16.1424..1533..\n") == 0);
free(board254223311);
board254223311 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_free_fields(board, 4) == 111 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 8) == 1 );
assert( gamma_free_fields(board, 6) == 110 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 14, 8) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_golden_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_free_fields(board, 4) == 95 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_golden_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );


char* board521579333 = gamma_board(board);
assert( board521579333 != NULL );
assert( strcmp(board521579333, 
"162.266.1.533..\n"
".44......5.311.\n"
".....5...362.43\n"
".12266.622.163.\n"
".5...631.4..3..\n"
"2.5..65334.3462\n"
"346.454.66364..\n"
".122364.245415.\n"
".1..42.1...45..\n"
".1.452.654.46.5\n"
"24.4.4.211.23..\n"
"321431.2.3.3...\n"
".65.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board521579333);
board521579333 = NULL;
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board790229503 = gamma_board(board);
assert( board790229503 != NULL );
assert( strcmp(board790229503, 
"162.266.1.533..\n"
".44......5.311.\n"
".....55..362.43\n"
".12266.622.163.\n"
".5...631.4..3..\n"
"2.5..65334.3462\n"
"346.454.66364..\n"
".122364.245415.\n"
".1..42.1...45..\n"
".1.452.654.46.5\n"
"24.4.4.211.23..\n"
"321431.2.3.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board790229503);
board790229503 = NULL;
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );


char* board289061071 = gamma_board(board);
assert( board289061071 != NULL );
assert( strcmp(board289061071, 
"162.266.1.533..\n"
".44......5.311.\n"
".....55..362.43\n"
".12266.622.163.\n"
".5...631.4..3..\n"
"2.5..65334.3462\n"
"346.454.66364..\n"
".122364.245415.\n"
".1..42.1...45..\n"
".1.452.654.46.5\n"
"24.4.4.211.23..\n"
"321431.2.3.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board289061071);
board289061071 = NULL;
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_golden_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board973257142 = gamma_board(board);
assert( board973257142 != NULL );
assert( strcmp(board973257142, 
"162.266.115333.\n"
".44...6..5.311.\n"
".....55..362143\n"
".12266.622.163.\n"
".5...631.4..3..\n"
"2.5..65334.3462\n"
"346.454.66364..\n"
".122364.245415.\n"
".1..42.1...45..\n"
".1.452.654.46.5\n"
"24.4.4.211.23..\n"
"321431.2.3.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board973257142);
board973257142 = NULL;
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );


char* board507398260 = gamma_board(board);
assert( board507398260 != NULL );
assert( strcmp(board507398260, 
"162.266.115333.\n"
".44...6..5.311.\n"
".....55..362143\n"
".12266.622.163.\n"
".5...631.4..3..\n"
"2.5.665334.3462\n"
"346.454.66364..\n"
".122364.245415.\n"
".1..42.1...45..\n"
".1.452.654.46.5\n"
"24.4.4.211.23..\n"
"321431.2.3.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board507398260);
board507398260 = NULL;
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_golden_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 14, 13) == 1 );
assert( gamma_golden_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );


char* board912423631 = gamma_board(board);
assert( board912423631 != NULL );
assert( strcmp(board912423631, 
"162.266.1153336\n"
".44...6..5.311.\n"
"...2.55..362143\n"
"112266.622.163.\n"
".5...63134..3..\n"
"2.5.665334.3462\n"
"346.454.66364..\n"
".122364.245415.\n"
".1..42.1...45..\n"
".1.4526654.46.5\n"
"24.4.4.211.23..\n"
"321431.213.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board912423631);
board912423631 = NULL;
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_busy_fields(board, 6) == 27 );
assert( gamma_move(board, 1, 13, 8) == 0 );


char* board873970289 = gamma_board(board);
assert( board873970289 != NULL );
assert( strcmp(board873970289, 
"162.266.1153336\n"
".44...6..5.3116\n"
"...2.55.2362143\n"
"1122666622.163.\n"
".5...63134..3..\n"
"2.55665334.3462\n"
"346.454466364..\n"
".1223644245415.\n"
".1..42.1...45..\n"
".1.4526654.46.5\n"
"24.434.2111233.\n"
"321431.213.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board873970289);
board873970289 = NULL;
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 27 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board179007624 = gamma_board(board);
assert( board179007624 != NULL );
assert( strcmp(board179007624, 
"162.266.1153336\n"
".44...6..5.3116\n"
"...2.55.2362143\n"
"1122666622.163.\n"
".5...63134..3..\n"
"2.55665334.3462\n"
"346.454466364..\n"
".1223644245415.\n"
".1..42.1...45..\n"
".1.4526654.46.5\n"
"24.434.2111233.\n"
"321431.213.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board179007624);
board179007624 = NULL;
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );


char* board588609917 = gamma_board(board);
assert( board588609917 != NULL );
assert( strcmp(board588609917, 
"162.266.1153336\n"
".44...6..5.3116\n"
"...2.55.2362143\n"
"1122666622.163.\n"
".5...63134..3..\n"
"2.55665334.3462\n"
"346.454466364..\n"
".1223644245415.\n"
".1..42.15..45..\n"
".1.4526654.4665\n"
"24.434.2111233.\n"
"321431.213.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board588609917);
board588609917 = NULL;
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 14, 5) == 1 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );


char* board891750040 = gamma_board(board);
assert( board891750040 != NULL );
assert( strcmp(board891750040, 
"162.266.1153336\n"
".44...6..5.3116\n"
"...2.55.2362143\n"
"1122666622.163.\n"
".5...63134..3..\n"
"2.55665334.3462\n"
"346.454466364..\n"
".1223644245415.\n"
".1..42.15..45.5\n"
".1.4526654.4665\n"
"24.434.2111233.\n"
"321431.213.3...\n"
"165.524.2..3.1.\n"
"16.14246.1533..\n") == 0);
free(board891750040);
board891750040 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 14, 1) == 1 );


gamma_delete(board);

    return 0;
}
