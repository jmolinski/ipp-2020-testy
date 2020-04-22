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
uuid: 157200511
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 8, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_golden_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );


char* board574169695 = gamma_board(board);
assert( board574169695 != NULL );
assert( strcmp(board574169695, 
"75784..8.5\n"
"..643.....\n"
"8.7.71....\n"
".4.......5\n"
"55..1..5.6\n"
"7...2..4..\n") == 0);
free(board574169695);
board574169695 = NULL;
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );


char* board799760773 = gamma_board(board);
assert( board799760773 != NULL );
assert( strcmp(board799760773, 
"75784..8.5\n"
".8643.816.\n"
"847.71..8.\n"
"745.11.8.5\n"
"55.51..5.6\n"
"7.2.2..4.7\n") == 0);
free(board799760773);
board799760773 = NULL;
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 1, 4, 9) == 0 );


char* board315493852 = gamma_board(board);
assert( board315493852 != NULL );
assert( strcmp(board315493852, 
"757843.8.5\n"
".8643.816.\n"
"847171..8.\n"
"745.11.8.5\n"
"55.51..5.6\n"
"7.2.28.4.7\n") == 0);
free(board315493852);
board315493852 = NULL;
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_free_fields(board, 8) == 16 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board624371206 = gamma_board(board);
assert( board624371206 != NULL );
assert( strcmp(board624371206, 
"757843.825\n"
"38643.816.\n"
"847171.88.\n"
"745711.8.5\n"
"55.51.25.6\n"
"7.2.28.4.7\n") == 0);
free(board624371206);
board624371206 = NULL;
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );


char* board758471840 = gamma_board(board);
assert( board758471840 != NULL );
assert( strcmp(board758471840, 
"757843.825\n"
"38643.816.\n"
"847171.88.\n"
"745711.8.5\n"
"55.51.25.6\n"
"7.2.2854.7\n") == 0);
free(board758471840);
board758471840 = NULL;


gamma_delete(board);

    return 0;
}
