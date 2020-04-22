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
uuid: 348890380
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 11, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_free_fields(board, 6) == 91 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_golden_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_golden_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );


char* board540913494 = gamma_board(board);
assert( board540913494 != NULL );
assert( strcmp(board540913494, 
"...4.....\n"
"......6..\n"
"1.3..8...\n"
".......42\n"
".2.......\n"
"15...4..3\n"
".6.4.5...\n"
".....8...\n"
"....7...1\n"
".253.2...\n"
"3......8.\n") == 0);
free(board540913494);
board540913494 = NULL;
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );


char* board594525836 = gamma_board(board);
assert( board594525836 != NULL );
assert( strcmp(board594525836, 
".8.4.....\n"
"......6..\n"
"1.3..8...\n"
"...7...42\n"
".2...4...\n"
"15...4..3\n"
".6.415...\n"
".....8...\n"
"3..27...1\n"
".253.2...\n"
"3......8.\n") == 0);
free(board594525836);
board594525836 = NULL;
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 8, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );


char* board390122338 = gamma_board(board);
assert( board390122338 != NULL );
assert( strcmp(board390122338, 
".8.4....5\n"
"......6.8\n"
"1.3..8..6\n"
"..17..342\n"
".2.3.4..3\n"
"154..4.83\n"
".6.415.4.\n"
"6....8..1\n"
"3..27...1\n"
".253.2.8.\n"
"32.4...8.\n") == 0);
free(board390122338);
board390122338 = NULL;
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_golden_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );


char* board995789101 = gamma_board(board);
assert( board995789101 != NULL );
assert( strcmp(board995789101, 
"38.4...45\n"
"....816.8\n"
"1.3.58..6\n"
"8.17..342\n"
".2.3.4..3\n"
"154..4683\n"
".6.415.4.\n"
"6....8..1\n"
"3..27...1\n"
".253.2.8.\n"
"32.7...8.\n") == 0);
free(board995789101);
board995789101 = NULL;
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );


char* board847400356 = gamma_board(board);
assert( board847400356 != NULL );
assert( strcmp(board847400356, 
"38.48..45\n"
".7..81678\n"
"1.3.58..6\n"
"8.17..342\n"
".2.3.4483\n"
"154..4683\n"
".6241534.\n"
"6....8..1\n"
"3.527...1\n"
"3253.2.8.\n"
"32.7...8.\n") == 0);
free(board847400356);
board847400356 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 12 );


char* board372078367 = gamma_board(board);
assert( board372078367 != NULL );
assert( strcmp(board372078367, 
"38.48..45\n"
".7..81678\n"
"1.3.58..6\n"
"8817..342\n"
".2.3.4483\n"
"154.74683\n"
"76241534.\n"
"6....8.41\n"
"31527.2.1\n"
"3253.2.8.\n"
"32.7...84\n") == 0);
free(board372078367);
board372078367 = NULL;
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );


char* board902620568 = gamma_board(board);
assert( board902620568 != NULL );
assert( strcmp(board902620568, 
"38.48..45\n"
".7..81678\n"
"123758..6\n"
"8817..342\n"
"8233.4483\n"
"154.74683\n"
"76241534.\n"
"6..4.8.41\n"
"31527.261\n"
"3253.2.8.\n"
"32.7..784\n") == 0);
free(board902620568);
board902620568 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );


char* board633349766 = gamma_board(board);
assert( board633349766 != NULL );
assert( strcmp(board633349766, 
"38.48..45\n"
".7..81678\n"
"123758.56\n"
"8817..342\n"
"8233.4483\n"
"154.74683\n"
"76241534.\n"
"6..4.8.41\n"
"31527.261\n"
"3253.2.8.\n"
"32.7..784\n") == 0);
free(board633349766);
board633349766 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );


char* board235070658 = gamma_board(board);
assert( board235070658 != NULL );
assert( strcmp(board235070658, 
"38.48..45\n"
".7..81678\n"
"123758.56\n"
"8817..342\n"
"8233.4483\n"
"154.74683\n"
"76241534.\n"
"6..4.8.41\n"
"31527.261\n"
"3253.2.8.\n"
"32.7..784\n") == 0);
free(board235070658);
board235070658 = NULL;
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );


char* board406919943 = gamma_board(board);
assert( board406919943 != NULL );
assert( strcmp(board406919943, 
"38.48..45\n"
".7..81678\n"
"123758.56\n"
"8817..342\n"
"8233.4483\n"
"154.74683\n"
"76241534.\n"
"6..4.8641\n"
"31527.261\n"
"3253.2.8.\n"
"32.7..784\n") == 0);
free(board406919943);
board406919943 = NULL;
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );


char* board991350407 = gamma_board(board);
assert( board991350407 != NULL );
assert( strcmp(board991350407, 
"38.48..45\n"
".7..81678\n"
"123758.56\n"
"8817..342\n"
"8233.4383\n"
"154.74683\n"
"76241534.\n"
"6..4.8641\n"
"31527.261\n"
"3253.2.8.\n"
"32.7..784\n") == 0);
free(board991350407);
board991350407 = NULL;
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );


char* board963833030 = gamma_board(board);
assert( board963833030 != NULL );
assert( strcmp(board963833030, 
"38.48..45\n"
".7..81678\n"
"123758.56\n"
"8817..342\n"
"8233.4383\n"
"154.74683\n"
"76241534.\n"
"6..4.8641\n"
"315272261\n"
"3253.2.8.\n"
"32.7..784\n") == 0);
free(board963833030);
board963833030 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_golden_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_move(board, 6, 10, 8) == 0 );


gamma_delete(board);

    return 0;
}
