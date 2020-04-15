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
uuid: 688759928
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 9, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_free_fields(board, 8) == 88 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_move(board, 9, 6, 5) == 1 );


char* board587032948 = gamma_board(board);
assert( board587032948 != NULL );
assert( strcmp(board587032948, 
"...........\n"
"...9.6.....\n"
"..4........\n"
"......9.7..\n"
".....2.6...\n"
".8.1.......\n"
"....3......\n"
"2..........\n"
"7......5...\n") == 0);
free(board587032948);
board587032948 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_golden_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 9, 0) == 1 );


char* board258352461 = gamma_board(board);
assert( board258352461 != NULL );
assert( strcmp(board258352461, 
"........5..\n"
".8.4.63....\n"
"..4.3....6.\n"
"......9.7..\n"
"4....2.6...\n"
".8.1.2.1...\n"
".86.3..8..4\n"
"2.5........\n"
"7..9...589.\n") == 0);
free(board258352461);
board258352461 = NULL;
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 9, 6, 4) == 1 );


char* board342893682 = gamma_board(board);
assert( board342893682 != NULL );
assert( strcmp(board342893682, 
"..3.8...5..\n"
".8.4.63....\n"
"..493....6.\n"
".....59.7..\n"
"4....296...\n"
".8.1.2.1...\n"
".86.3..8..4\n"
"2.5..5.....\n"
"7..9...5891\n") == 0);
free(board342893682);
board342893682 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_free_fields(board, 9) == 61 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );


char* board690864202 = gamma_board(board);
assert( board690864202 != NULL );
assert( strcmp(board690864202, 
".13484..5..\n"
".8.4.63....\n"
"..493.1..6.\n"
".....59.7..\n"
"4....296...\n"
".8.1.221...\n"
".86.3..8..4\n"
"2.5..5.....\n"
"73.9.2.5891\n") == 0);
free(board690864202);
board690864202 = NULL;
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_golden_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_golden_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_free_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_free_fields(board, 7) == 46 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );


char* board715908264 = gamma_board(board);
assert( board715908264 != NULL );
assert( strcmp(board715908264, 
".13484425..\n"
".8.4.63....\n"
"..493.1..6.\n"
"..2.559.76.\n"
"4....296...\n"
".881.221...\n"
".86.3..8..4\n"
"2355.597...\n"
"73.9.265891\n") == 0);
free(board715908264);
board715908264 = NULL;
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );


char* board123947045 = gamma_board(board);
assert( board123947045 != NULL );
assert( strcmp(board123947045, 
".13484425..\n"
".8.4.63....\n"
"..493.1..6.\n"
"..2.559.76.\n"
"4....296...\n"
".881.221...\n"
".86.3..8..4\n"
"2355.597...\n"
"73.9.265891\n") == 0);
free(board123947045);
board123947045 = NULL;
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_golden_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );


char* board363574882 = gamma_board(board);
assert( board363574882 != NULL );
assert( strcmp(board363574882, 
".13484425..\n"
".8.4.63....\n"
"..493.1..6.\n"
"..2.559.76.\n"
"4....296...\n"
".881.221...\n"
".86.3..8..4\n"
"2357.597.7.\n"
"7359.265891\n") == 0);
free(board363574882);
board363574882 = NULL;
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_free_fields(board, 8) == 11 );
assert( gamma_golden_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_free_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board244949191 = gamma_board(board);
assert( board244949191 != NULL );
assert( strcmp(board244949191, 
".13484425..\n"
".8.4.63....\n"
"..493.1..6.\n"
"..29559.76.\n"
"4...5296...\n"
".881.221...\n"
".86.3..8..4\n"
"2357.597.74\n"
"7359.265891\n") == 0);
free(board244949191);
board244949191 = NULL;
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );


char* board896397704 = gamma_board(board);
assert( board896397704 != NULL );
assert( strcmp(board896397704, 
".13484425..\n"
".8.4.63....\n"
"..493.1..6.\n"
"..29559.76.\n"
"4...5296...\n"
".881.221...\n"
".86.3..8..4\n"
"2357.597.74\n"
"7359.265891\n") == 0);
free(board896397704);
board896397704 = NULL;
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );


char* board185612831 = gamma_board(board);
assert( board185612831 != NULL );
assert( strcmp(board185612831, 
".13484425..\n"
".8.4.63....\n"
"..493.1..6.\n"
"..29559776.\n"
"4..55296...\n"
".881.221...\n"
".86.3..8..4\n"
"2357.597.74\n"
"7359.265891\n") == 0);
free(board185612831);
board185612831 = NULL;
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );


gamma_delete(board);

    return 0;
}
