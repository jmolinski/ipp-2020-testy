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
uuid: 320127662
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 14, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 12, 1) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 14, 0) == 1 );
assert( gamma_move(board, 7, 13, 1) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 8, 13, 5) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_golden_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 12) == 0 );


char* board207905014 = gamma_board(board);
assert( board207905014 != NULL );
assert( strcmp(board207905014, 
"2.5..6.......87\n"
"24....2....6...\n"
"..21.....1...1.\n"
"3......7.8...7.\n"
".54..58.317.87.\n"
".......8.2...36\n") == 0);
free(board207905014);
board207905014 = NULL;
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );


char* board651003558 = gamma_board(board);
assert( board651003558 != NULL );
assert( strcmp(board651003558, 
"2.57.6....7.487\n"
"24...62..4.6...\n"
"..2131...1...1.\n"
"3...56.7.865.7.\n"
"754..58.317.87.\n"
".1.6.728.2...36\n") == 0);
free(board651003558);
board651003558 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );


char* board254100852 = gamma_board(board);
assert( board254100852 != NULL );
assert( strcmp(board254100852, 
"2.57.6....7.487\n"
"24...62..4.6...\n"
"..2131...1...1.\n"
"3...56.7.865.7.\n"
"754..58.317.87.\n"
".1.6.728.2...36\n") == 0);
free(board254100852);
board254100852 = NULL;
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_golden_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board462711144 = gamma_board(board);
assert( board462711144 != NULL );
assert( strcmp(board462711144, 
"8.57.6....7.487\n"
"24...62..4.6...\n"
"..2131...1...1.\n"
"3...56.7.865.7.\n"
"754..58.317.87.\n"
"8116.728.2...36\n") == 0);
free(board462711144);
board462711144 = NULL;
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 8, 1, 14) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 41 );


char* board984762079 = gamma_board(board);
assert( board984762079 != NULL );
assert( strcmp(board984762079, 
"8.57.6....7.487\n"
"24...62..4.6...\n"
"..2131...1...1.\n"
"3...56.7.865.7.\n"
"754..58.317.87.\n"
"8116.72862...36\n") == 0);
free(board984762079);
board984762079 = NULL;
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );


char* board550851445 = gamma_board(board);
assert( board550851445 != NULL );
assert( strcmp(board550851445, 
"8.57.6....7.487\n"
"24...62..4.6...\n"
"..2131...1...1.\n"
"3...56.7.865.7.\n"
"754..58.317.87.\n"
"8116.72862...36\n") == 0);
free(board550851445);
board550851445 = NULL;
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_free_fields(board, 2) == 39 );


char* board602307858 = gamma_board(board);
assert( board602307858 != NULL );
assert( strcmp(board602307858, 
"8.57.6....7.487\n"
"24...62.24.6...\n"
"..2131.1.1...1.\n"
"3...56.7.865.7.\n"
"754..58.317.87.\n"
"8116.72862...36\n") == 0);
free(board602307858);
board602307858 = NULL;
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 7, 14, 2) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );


char* board548506786 = gamma_board(board);
assert( board548506786 != NULL );
assert( strcmp(board548506786, 
"8157.6..1.7.487\n"
"241.662.24.6...\n"
"..2131.1.1.671.\n"
"3.7.56.7.865.77\n"
"754.858.317587.\n"
"8116.72862...36\n") == 0);
free(board548506786);
board548506786 = NULL;
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_golden_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_golden_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 14, 4) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );


char* board391330968 = gamma_board(board);
assert( board391330968 != NULL );
assert( strcmp(board391330968, 
"8157.6..1.7.487\n"
"2418662.24.6..8\n"
"..2131.121.671.\n"
"3.7.5677.865.77\n"
"7542858.317587.\n"
"8116.72862...36\n") == 0);
free(board391330968);
board391330968 = NULL;
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );


char* board190471200 = gamma_board(board);
assert( board190471200 != NULL );
assert( strcmp(board190471200, 
"8157.6..1.7.487\n"
"2418662.24.6..8\n"
"..2131.121.671.\n"
"337.5677.865.77\n"
"7542858.317587.\n"
"8116.72862...36\n") == 0);
free(board190471200);
board190471200 = NULL;
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );


char* board638030378 = gamma_board(board);
assert( board638030378 != NULL );
assert( strcmp(board638030378, 
"8157.6..1.7.487\n"
"2418662.24.6..8\n"
".42131.121.671.\n"
"337.5677.865.77\n"
"7542858.317587.\n"
"8116.72862...36\n") == 0);
free(board638030378);
board638030378 = NULL;
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );


char* board636795056 = gamma_board(board);
assert( board636795056 != NULL );
assert( strcmp(board636795056, 
"8157.6..1.7.487\n"
"2418662.24.67.8\n"
".42131.121.671.\n"
"337.5677.865.77\n"
"7542858.317587.\n"
"8116.72862...36\n") == 0);
free(board636795056);
board636795056 = NULL;
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_free_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_free_fields(board, 6) == 15 );


char* board824833669 = gamma_board(board);
assert( board824833669 != NULL );
assert( strcmp(board824833669, 
"8157.6.7177.487\n"
"2418662.24.67.8\n"
".42131.1211671.\n"
"337.5477.865277\n"
"7546858.317587.\n"
"8116.728624.636\n") == 0);
free(board824833669);
board824833669 = NULL;
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );


gamma_delete(board);

    return 0;
}
