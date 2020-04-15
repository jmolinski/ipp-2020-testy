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
uuid: 611691591
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 13, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 83 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );


char* board163052402 = gamma_board(board);
assert( board163052402 != NULL );
assert( strcmp(board163052402, 
".2....6\n"
".......\n"
".......\n"
"...5...\n"
".......\n"
"...7...\n"
"......1\n"
".......\n"
".3.....\n"
"..1....\n"
".......\n"
"2.....5\n"
"...3..6\n") == 0);
free(board163052402);
board163052402 = NULL;
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_free_fields(board, 8) == 79 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_free_fields(board, 8) == 74 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_golden_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );


char* board226929675 = gamma_board(board);
assert( board226929675 != NULL );
assert( strcmp(board226929675, 
".26...6\n"
".......\n"
".......\n"
"...5...\n"
".18...6\n"
"...7...\n"
".6.1..1\n"
"..67...\n"
".3....5\n"
".1117.4\n"
".5.....\n"
"2.8.2.5\n"
"..236.6\n") == 0);
free(board226929675);
board226929675 = NULL;
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_golden_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );


char* board207103794 = gamma_board(board);
assert( board207103794 != NULL );
assert( strcmp(board207103794, 
"426.4.6\n"
".......\n"
".35....\n"
"18.5.8.\n"
".188..6\n"
"..77...\n"
".6.1..1\n"
"7.67..2\n"
".7.1..5\n"
"41117.4\n"
".57.5.3\n"
"2.8.2.5\n"
"..236.6\n") == 0);
free(board207103794);
board207103794 = NULL;
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board656822253 = gamma_board(board);
assert( board656822253 != NULL );
assert( strcmp(board656822253, 
"426.4.6\n"
".....8.\n"
".35....\n"
"18.5.8.\n"
".188..6\n"
"4.77...\n"
"46.1..1\n"
"7.67..2\n"
".7.1..5\n"
"41117.4\n"
".57.5.3\n"
"2.8.2.5\n"
"..236.6\n") == 0);
free(board656822253);
board656822253 = NULL;
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 2, 11) == 1 );


char* board135103031 = gamma_board(board);
assert( board135103031 != NULL );
assert( strcmp(board135103031, 
"426.4.6\n"
"..8..8.\n"
".35....\n"
"18.5.8.\n"
"2188..6\n"
"4.77...\n"
"46.1..1\n"
"7.67..2\n"
".7.1..5\n"
"41117.4\n"
".57.5.3\n"
"2.8.225\n"
"..236.6\n") == 0);
free(board135103031);
board135103031 = NULL;
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 8) == 32 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );


char* board861669119 = gamma_board(board);
assert( board861669119 != NULL );
assert( strcmp(board861669119, 
"426.4.6\n"
".38..8.\n"
"635..6.\n"
"1855.84\n"
"2188..6\n"
"4.77...\n"
"46.1..1\n"
"7.674.2\n"
"57.1125\n"
"4111734\n"
".57.5.3\n"
"268.225\n"
"..236.6\n") == 0);
free(board861669119);
board861669119 = NULL;
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_move(board, 2, 11, 2) == 0 );


char* board976941409 = gamma_board(board);
assert( board976941409 != NULL );
assert( strcmp(board976941409, 
"426.4.6\n"
".38..8.\n"
"635..6.\n"
"1855.84\n"
"2188..6\n"
"4.77...\n"
"46.1..1\n"
"71674.2\n"
"57.1125\n"
"4111734\n"
".57.5.3\n"
"268.225\n"
"..236.6\n") == 0);
free(board976941409);
board976941409 = NULL;
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_free_fields(board, 7) == 22 );


char* board444544865 = gamma_board(board);
assert( board444544865 != NULL );
assert( strcmp(board444544865, 
"426.4.6\n"
"238..8.\n"
"635..6.\n"
"1855.84\n"
"2188.36\n"
"4.77...\n"
"46.1..1\n"
"7167432\n"
"5771125\n"
"4111734\n"
".573553\n"
"268.225\n"
"..236.6\n") == 0);
free(board444544865);
board444544865 = NULL;
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_golden_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );


char* board383823472 = gamma_board(board);
assert( board383823472 != NULL );
assert( strcmp(board383823472, 
"42664.6\n"
"238.58.\n"
"635..6.\n"
"1855284\n"
"2188.36\n"
"4.77...\n"
"46.1..8\n"
"7167432\n"
"5771125\n"
"4111734\n"
"7573553\n"
"268.225\n"
"..236.6\n") == 0);
free(board383823472);
board383823472 = NULL;
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_golden_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 2) == 0 );


gamma_delete(board);

    return 0;
}
