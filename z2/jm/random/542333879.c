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
uuid: 542333879
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 14, 5, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_free_fields(board, 4) == 151 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_free_fields(board, 5) == 149 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 3) == 146 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 136 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_free_fields(board, 3) == 134 );


char* board871192442 = gamma_board(board);
assert( board871192442 != NULL );
assert( strcmp(board871192442, 
"...2...4....\n"
".4..2.....4.\n"
"1...........\n"
".4...2......\n"
".......2.4..\n"
"..3.......4.\n"
".1.5.....1..\n"
"...4.......4\n"
"....5.....5.\n"
"..........3.\n"
"...41.1..3..\n"
"...3...1...5\n"
"....15....2.\n"
"3...42...3..\n") == 0);
free(board871192442);
board871192442 = NULL;
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );


char* board642336147 = gamma_board(board);
assert( board642336147 != NULL );
assert( strcmp(board642336147, 
"...2...45...\n"
".4..2.....4.\n"
"1...........\n"
".4...25.....\n"
".......2.4..\n"
"..3.......4.\n"
".1.5.....1..\n"
"...4.......4\n"
"....5.4.2.5.\n"
"..........3.\n"
"...41.1..3..\n"
"4..3...1...5\n"
"2...15....2.\n"
"3...42...3..\n") == 0);
free(board642336147);
board642336147 = NULL;
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 121 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 119 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_free_fields(board, 2) == 114 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_free_fields(board, 3) == 103 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );


char* board523776665 = gamma_board(board);
assert( board523776665 != NULL );
assert( strcmp(board523776665, 
"...2...45..3\n"
".4..2...1.4.\n"
"1.....3..45.\n"
"24.2.351....\n"
".......2344.\n"
"..31......4.\n"
".1.51....1.5\n"
".4.42.543..4\n"
"1..45.4.2553\n"
"........213.\n"
".3.41.1333..\n"
"4.13...1..35\n"
"2.5.15..4.24\n"
"3..442...3.2\n") == 0);
free(board523776665);
board523776665 = NULL;
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_free_fields(board, 5) == 93 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 9, 5) == 0 );


char* board129294226 = gamma_board(board);
assert( board129294226 != NULL );
assert( strcmp(board129294226, 
"...2...45..3\n"
".4..2...1.4.\n"
"1....23..45.\n"
"24.2.351....\n"
".......2344.\n"
"2.31....4.4.\n"
".1.515...1.5\n"
".4.42.543..4\n"
"1.245.4.2553\n"
"........213.\n"
".3.41.1333.2\n"
"4.13...1.335\n"
"2.5.15..4.24\n"
"3..442...3.2\n") == 0);
free(board129294226);
board129294226 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );


char* board462149563 = gamma_board(board);
assert( board462149563 != NULL );
assert( strcmp(board462149563, 
"...2...45..3\n"
".4..2...1.4.\n"
"1....23..45.\n"
"24.2.351....\n"
".......2344.\n"
"2.31....4.4.\n"
".1.515...1.5\n"
".4.42.543..4\n"
"1.245.4.2553\n"
"........213.\n"
".3.41.1333.2\n"
"4.13...1.335\n"
"2.5.15..4.24\n"
"3..442...3.2\n") == 0);
free(board462149563);
board462149563 = NULL;
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_free_fields(board, 3) == 85 );
assert( gamma_golden_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_free_fields(board, 2) == 80 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );


char* board570431526 = gamma_board(board);
assert( board570431526 != NULL );
assert( strcmp(board570431526, 
"...2...45..3\n"
".4..2...1.4.\n"
"1...223.445.\n"
"24.2.351....\n"
".5..2.22344.\n"
"2.31....434.\n"
".1.515...1.5\n"
"24242.543..4\n"
"1.245.4.2553\n"
"..5155..213.\n"
".3.41.1333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442...3.2\n") == 0);
free(board570431526);
board570431526 = NULL;
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board915691274 = gamma_board(board);
assert( board915691274 != NULL );
assert( strcmp(board915691274, 
"5..2...45..3\n"
".4..2...1.4.\n"
"1...223.4451\n"
"24.2.351....\n"
".5..22223444\n"
"2.31...1434.\n"
".1.515.5.1.5\n"
"24242.543..4\n"
"1.245.4.2553\n"
"..5155..213.\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442...3.2\n") == 0);
free(board915691274);
board915691274 = NULL;
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_free_fields(board, 1) == 26 );


char* board550952733 = gamma_board(board);
assert( board550952733 != NULL );
assert( strcmp(board550952733, 
"5..2..545..3\n"
".4..2...1.4.\n"
"1...223.4451\n"
"24.2.351..2.\n"
".53.22223444\n"
"2.31...1434.\n"
".1.515.5.1.5\n"
"24242.543.34\n"
"1.245.4.2553\n"
"..5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442...3.2\n") == 0);
free(board550952733);
board550952733 = NULL;
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );


char* board347546942 = gamma_board(board);
assert( board347546942 != NULL );
assert( strcmp(board347546942, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..2.\n"
".53.22223444\n"
"2.31...1434.\n"
".1.515.511.5\n"
"24242.543.34\n"
"1.245.4.2553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..33.2\n") == 0);
free(board347546942);
board347546942 = NULL;
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );


char* board817632989 = gamma_board(board);
assert( board817632989 != NULL );
assert( strcmp(board817632989, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..2.\n"
".53.22223444\n"
"2.31...1434.\n"
".1.515.511.5\n"
"24242.543.34\n"
"1.245.4.2553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..33.2\n") == 0);
free(board817632989);
board817632989 = NULL;
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board176280897 = gamma_board(board);
assert( board176280897 != NULL );
assert( strcmp(board176280897, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..2.\n"
".53.22223444\n"
"2.31...1434.\n"
".1.515.511.5\n"
"24242.543.34\n"
"1.245.442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..33.2\n") == 0);
free(board176280897);
board176280897 = NULL;
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board800113674 = gamma_board(board);
assert( board800113674 != NULL );
assert( strcmp(board800113674, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..2.\n"
".53.22223444\n"
"2.31...1434.\n"
".1.515.511.5\n"
"24242.543.34\n"
"1.245.442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..33.2\n") == 0);
free(board800113674);
board800113674 = NULL;
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_golden_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );


char* board127707655 = gamma_board(board);
assert( board127707655 != NULL );
assert( strcmp(board127707655, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..5.\n"
".53.22223244\n"
"2.31...1434.\n"
".1.515.511.5\n"
"24242.543.34\n"
"12245.442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..3332\n") == 0);
free(board127707655);
board127707655 = NULL;
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 23 );


char* board470256948 = gamma_board(board);
assert( board470256948 != NULL );
assert( strcmp(board470256948, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..5.\n"
".53.22223244\n"
"2.31...1434.\n"
".15515.511.5\n"
"24242.543.34\n"
"12245.442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..3332\n") == 0);
free(board470256948);
board470256948 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_free_fields(board, 3) == 21 );


char* board679148584 = gamma_board(board);
assert( board679148584 != NULL );
assert( strcmp(board679148584, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..5.\n"
".53.22223244\n"
"2.31...1434.\n"
".15515.511.5\n"
"24242.543.34\n"
"12245.442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..3332\n") == 0);
free(board679148584);
board679148584 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );


char* board802078213 = gamma_board(board);
assert( board802078213 != NULL );
assert( strcmp(board802078213, 
"5..2..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..5.\n"
".53.22223244\n"
"2.31...1434.\n"
".15515.511.5\n"
"24242.543.34\n"
"12245.442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442..3332\n") == 0);
free(board802078213);
board802078213 = NULL;
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );


char* board846514880 = gamma_board(board);
assert( board846514880 != NULL );
assert( strcmp(board846514880, 
"5.22..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..5.\n"
".53.22223244\n"
"2.31...1434.\n"
".15515.511.5\n"
"24242.543.34\n"
"122454442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442.33332\n") == 0);
free(board846514880);
board846514880 = NULL;
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board477610613 = gamma_board(board);
assert( board477610613 != NULL );
assert( strcmp(board477610613, 
"5.22..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..5.\n"
".53.22224244\n"
"2.31...1434.\n"
".15515.511.5\n"
"24242.543.34\n"
"122454442553\n"
"3.5155..2133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442.33332\n") == 0);
free(board477610613);
board477610613 = NULL;
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );


char* board637419854 = gamma_board(board);
assert( board637419854 != NULL );
assert( strcmp(board637419854, 
"5.22..545..3\n"
".4..23.11.43\n"
"1...223.4451\n"
"2422.351..5.\n"
".53.22224244\n"
"2.31...1434.\n"
".15515.511.5\n"
"24242.543.34\n"
"122454442553\n"
"3.5155.32133\n"
"23.4131333.2\n"
"4213...1.335\n"
"225.15..4.24\n"
"3..442.33332\n") == 0);
free(board637419854);
board637419854 = NULL;
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 10, 13) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 9, 13) == 1 );
assert( gamma_golden_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );


gamma_delete(board);

    return 0;
}
