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
uuid: 794386123
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 10, 9, 49);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 123 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );


char* board303102471 = gamma_board(board);
assert( board303102471 != NULL );
assert( strcmp(board303102471, 
"......9......\n"
"....8...33...\n"
"56.....4.25..\n"
"......4......\n"
"3.......45.8.\n"
"11...........\n"
"......1...94.\n"
"..9..67...1.2\n"
"....2......2.\n"
".............\n") == 0);
free(board303102471);
board303102471 = NULL;
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_free_fields(board, 7) == 83 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );


char* board143428376 = gamma_board(board);
assert( board143428376 != NULL );
assert( strcmp(board143428376, 
"....4896.8..5\n"
"1...8...335..\n"
"56.....4.25..\n"
"93....4...9..\n"
"3..2..2.45.8.\n"
"11.7.....6.4.\n"
"......1..894.\n"
"..9..67...1.2\n"
"45..254....2.\n"
"..7..338.....\n") == 0);
free(board143428376);
board143428376 = NULL;
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_free_fields(board, 7) == 75 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_golden_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 12, 9) == 0 );
assert( gamma_free_fields(board, 9) == 50 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board293677097 = gamma_board(board);
assert( board293677097 != NULL );
assert( strcmp(board293677097, 
".54.4896.8..5\n"
"12.383..335..\n"
"5679...43253.\n"
"93.2.14.2.9..\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2.86.41.58942\n"
"..9.467789162\n"
"45..257..7.2.\n"
".17..338.7...\n") == 0);
free(board293677097);
board293677097 = NULL;
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 8, 0) == 1 );
assert( gamma_move(board, 9, 5, 7) == 1 );


char* board578024534 = gamma_board(board);
assert( board578024534 != NULL );
assert( strcmp(board578024534, 
".54.4896.8..5\n"
"12.383..335..\n"
"5679.9.43253.\n"
"93.2.14.2.9..\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2.86.41.58942\n"
"..9.467789162\n"
"45..257..7.2.\n"
".17..33897...\n") == 0);
free(board578024534);
board578024534 = NULL;
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 12, 8) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );


char* board631626798 = gamma_board(board);
assert( board631626798 != NULL );
assert( strcmp(board631626798, 
".54.4896.8..5\n"
"12.383..335.5\n"
"5679.9.43253.\n"
"93.2214.2.9..\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2.86.41.58942\n"
"..9.467789162\n"
"45.1257..7.2.\n"
".17..33827...\n") == 0);
free(board631626798);
board631626798 = NULL;
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 11, 8) == 1 );
assert( gamma_golden_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );


char* board531071343 = gamma_board(board);
assert( board531071343 != NULL );
assert( strcmp(board531071343, 
".54.4896.8.75\n"
"12.383..33585\n"
"5679.9.43253.\n"
"93.2214.2291.\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2986.41.58942\n"
"..9.467789162\n"
"45.1257..7.2.\n"
"517..33827...\n") == 0);
free(board531071343);
board531071343 = NULL;
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_free_fields(board, 7) == 37 );


char* board939541790 = gamma_board(board);
assert( board939541790 != NULL );
assert( strcmp(board939541790, 
".54.4896.8.75\n"
"12.383..33585\n"
"5679.9.43253.\n"
"93.2214.2291.\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2986.41.58942\n"
"..9.467789162\n"
"4571257..7.2.\n"
"517..33827...\n") == 0);
free(board939541790);
board939541790 = NULL;
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );


char* board419182381 = gamma_board(board);
assert( board419182381 != NULL );
assert( strcmp(board419182381, 
".54.4896.8.75\n"
"12.3839.33585\n"
"5679.9.43253.\n"
"93.2214.2291.\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2986.41.58942\n"
"..9.467789162\n"
"4571257..7.2.\n"
"517..33827...\n") == 0);
free(board419182381);
board419182381 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );


char* board565965880 = gamma_board(board);
assert( board565965880 != NULL );
assert( strcmp(board565965880, 
".54.4896.8.75\n"
"12.3839.33585\n"
"5679.9743253.\n"
"93.2214.2291.\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2986.41.58942\n"
"7.9.467789162\n"
"4571257..7.2.\n"
"517..33827...\n") == 0);
free(board565965880);
board565965880 = NULL;
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );


char* board563305771 = gamma_board(board);
assert( board563305771 != NULL );
assert( strcmp(board563305771, 
".54.4896.8.75\n"
"12.3839.33585\n"
"5679.9743253.\n"
"93.2214.2291.\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2986.41.58942\n"
"7.9.467789162\n"
"4571257..7.2.\n"
"517..33827...\n") == 0);
free(board563305771);
board563305771 = NULL;
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );


char* board158448410 = gamma_board(board);
assert( board158448410 != NULL );
assert( strcmp(board158448410, 
".54.4896.8.75\n"
"12.3839933585\n"
"5679.9743253.\n"
"93.2214.22915\n"
"3.22..2.4548.\n"
"11.755.8.6.4.\n"
"2986741258942\n"
"7.9.467789162\n"
"4571257..7.2.\n"
"517..33827...\n") == 0);
free(board158448410);
board158448410 = NULL;
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );


char* board807708912 = gamma_board(board);
assert( board807708912 != NULL );
assert( strcmp(board807708912, 
".54.489698.75\n"
"12.3839933585\n"
"567919743253.\n"
"9322214.22915\n"
"3.21.42.4548.\n"
"11.755.8.6.4.\n"
"2986741258942\n"
"769.467789162\n"
"4571257987.2.\n"
"517.833827...\n") == 0);
free(board807708912);
board807708912 = NULL;
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_golden_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_free_fields(board, 9) == 21 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_golden_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );


char* board325846560 = gamma_board(board);
assert( board325846560 != NULL );
assert( strcmp(board325846560, 
"454.489698.75\n"
"12.3839933585\n"
"567919743253.\n"
"9322214.22915\n"
"3.2184274548.\n"
"11.75548.6.4.\n"
"2986741258942\n"
"769.467789162\n"
"4571257987.2.\n"
"517.833827...\n") == 0);
free(board325846560);
board325846560 = NULL;
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_free_fields(board, 6) == 16 );


char* board859822043 = gamma_board(board);
assert( board859822043 != NULL );
assert( strcmp(board859822043, 
"4546489698.75\n"
"12.3839933585\n"
"5679197432533\n"
"9322214.22915\n"
"3.2184274548.\n"
"11.75548.6.4.\n"
"2986741258942\n"
"769.467789162\n"
"4571257987.2.\n"
"517.833827...\n") == 0);
free(board859822043);
board859822043 = NULL;
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_golden_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );


char* board645642039 = gamma_board(board);
assert( board645642039 != NULL );
assert( strcmp(board645642039, 
"4546489698.75\n"
"12.3839933585\n"
"5679197432533\n"
"9322214.22915\n"
"3.21842745483\n"
"11.75548.6.4.\n"
"2986741259942\n"
"769.467789162\n"
"4571257987.2.\n"
"517.833827..2\n") == 0);
free(board645642039);
board645642039 = NULL;
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );


gamma_delete(board);

    return 0;
}
