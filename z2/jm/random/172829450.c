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
uuid: 172829450
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 15, 6, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 6, 14) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_free_fields(board, 5) == 158 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 1) == 1 );


char* board324155100 = gamma_board(board);
assert( board324155100 != NULL );
assert( strcmp(board324155100, 
"....3.2.3..6\n"
"............\n"
".....6....1.\n"
"..6..4...32.\n"
"............\n"
"2.......62..\n"
"...4......1.\n"
"...4..6.....\n"
"...........4\n"
"...2....5...\n"
"1........1.4\n"
"5.4.........\n"
"531.......1.\n"
"...31....6..\n"
".1....5.....\n") == 0);
free(board324155100);
board324155100 = NULL;
assert( gamma_move(board, 4, 10, 14) == 1 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_free_fields(board, 2) == 131 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_free_fields(board, 2) == 127 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );


char* board976919635 = gamma_board(board);
assert( board976919635 != NULL );
assert( strcmp(board976919635, 
"46..3.2.3.46\n"
"1...........\n"
".....6....1.\n"
"..62.4.6.322\n"
"..4....65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..6654..\n"
"5..3......34\n"
".2.2..2.5.3.\n"
"1..2...5.1.4\n"
"5.4.........\n"
"531...5...1.\n"
"...31....6..\n"
".1....5...6.\n") == 0);
free(board976919635);
board976919635 = NULL;
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );


char* board658335440 = gamma_board(board);
assert( board658335440 != NULL );
assert( strcmp(board658335440, 
"46..3.2.3.46\n"
"1...........\n"
".....6....1.\n"
"..62.4.6.322\n"
"..4....65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..6654..\n"
"5..3......34\n"
".2.2..2.5.3.\n"
"1..2...5.1.4\n"
"5.4.........\n"
"531...5...1.\n"
"...31....6..\n"
".1....5...6.\n") == 0);
free(board658335440);
board658335440 = NULL;
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_golden_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_golden_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 9, 14) == 1 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );


char* board207015531 = gamma_board(board);
assert( board207015531 != NULL );
assert( strcmp(board207015531, 
"46..322.3346\n"
"1...........\n"
".....6....1.\n"
"..62.4.66322\n"
"..4..4.65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..6654..\n"
"5..3......34\n"
".2.2..2.5.3.\n"
"1..2...511.4\n"
"544.........\n"
"531...5...1.\n"
".1.31....6..\n"
".1....5...6.\n") == 0);
free(board207015531);
board207015531 = NULL;
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_free_fields(board, 2) == 29 );


char* board644665643 = gamma_board(board);
assert( board644665643 != NULL );
assert( strcmp(board644665643, 
"46..322.3346\n"
"1...........\n"
".....6....1.\n"
"..62.4.66322\n"
"..4..4.65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..6654..\n"
"5..3......34\n"
".2.2..2.5.3.\n"
"14.2...511.4\n"
"544.........\n"
"531...5...1.\n"
".1.31....6..\n"
".1....5...6.\n") == 0);
free(board644665643);
board644665643 = NULL;
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );


char* board275516218 = gamma_board(board);
assert( board275516218 != NULL );
assert( strcmp(board275516218, 
"46..322.3346\n"
"1...........\n"
".....6....1.\n"
"..62.4.66322\n"
"..4..4.65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..6654..\n"
"5..33.....34\n"
".2.2..2.5.3.\n"
"14.2...511.4\n"
"544.........\n"
"531...5...1.\n"
".1.31....6..\n"
".1....5...6.\n") == 0);
free(board275516218);
board275516218 = NULL;
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );


char* board995957456 = gamma_board(board);
assert( board995957456 != NULL );
assert( strcmp(board995957456, 
"46..322.3346\n"
"1...........\n"
".....6....1.\n"
"..62.4.66322\n"
"..4..4.65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..6654..\n"
"5..33.....34\n"
".2.2..2.5.3.\n"
"14.2...511.4\n"
"544.........\n"
"531...5...1.\n"
".1.31....6..\n"
".1....5...6.\n") == 0);
free(board995957456);
board995957456 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_golden_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );


char* board514983678 = gamma_board(board);
assert( board514983678 != NULL );
assert( strcmp(board514983678, 
"46..322.3346\n"
"1...........\n"
".....6....1.\n"
"..62.4.66322\n"
"..4..4.65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..6654..\n"
"55.33.....34\n"
".2.2..2.5.3.\n"
"14.22..51144\n"
"544.........\n"
"531...5...1.\n"
".1.31....6..\n"
".1....5...6.\n") == 0);
free(board514983678);
board514983678 = NULL;
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 13) == 0 );


char* board314433218 = gamma_board(board);
assert( board314433218 != NULL );
assert( strcmp(board314433218, 
"46..322.3346\n"
"1...........\n"
".....6..5.1.\n"
"..62.4.66322\n"
".44..4.65...\n"
"2.....2.62..\n"
"3.443.....1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2.2..2.5.3.\n"
"14.22..51144\n"
"544.........\n"
"531...5...1.\n"
".1.31....6..\n"
"11....5...6.\n") == 0);
free(board314433218);
board314433218 = NULL;
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_free_fields(board, 1) == 23 );


char* board551249430 = gamma_board(board);
assert( board551249430 != NULL );
assert( strcmp(board551249430, 
"46..322.3346\n"
"1...........\n"
".....6..5.1.\n"
"..62.4.66322\n"
".44..4.65...\n"
"2...3.2.62..\n"
"3.443.....1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2.2..2.5.3.\n"
"14.22..51144\n"
"544.........\n"
"531...5...1.\n"
".1.31....6..\n"
"11....5...6.\n") == 0);
free(board551249430);
board551249430 = NULL;
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_golden_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 2, 5) == 1 );


char* board571674876 = gamma_board(board);
assert( board571674876 != NULL );
assert( strcmp(board571674876, 
"46..322.3346\n"
"1.......3...\n"
".....6..5.1.\n"
"..62.4.66322\n"
".442.4.65...\n"
"2...3.2.62..\n"
"3.443.....1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".262..2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531...5...1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board571674876);
board571674876 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 12) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board311127520 = gamma_board(board);
assert( board311127520 != NULL );
assert( strcmp(board311127520, 
"46..322.3346\n"
"1.......3...\n"
".....6..5.14\n"
"..62.4.66322\n"
".442.4.65...\n"
"2...3.2.62..\n"
"3.443.....1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2623.2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531.1.55..1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board311127520);
board311127520 = NULL;
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );


char* board955825529 = gamma_board(board);
assert( board955825529 != NULL );
assert( strcmp(board955825529, 
"46..322.3346\n"
"1.......3...\n"
".....6..5.14\n"
"..62.4.66322\n"
".442.4.65...\n"
"2...3.2.62..\n"
"3.443.....1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2623.2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531.1.55..1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board955825529);
board955825529 = NULL;
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 9, 14) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_golden_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 1, 12) == 0 );


char* board381509534 = gamma_board(board);
assert( board381509534 != NULL );
assert( strcmp(board381509534, 
"46..322.3346\n"
"1.......3...\n"
".....6..5.14\n"
"..62.4.66322\n"
".442.4.65...\n"
"2..23.2.62..\n"
"33443...5.1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2623.2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531.1.55..1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board381509534);
board381509534 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_golden_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 2, 8) == 0 );


char* board865622495 = gamma_board(board);
assert( board865622495 != NULL );
assert( strcmp(board865622495, 
"46..322.3346\n"
"1.......3...\n"
".....6..5314\n"
"..62.4.66322\n"
".442.4.65...\n"
"2..23.2.62..\n"
"33443.6.5.1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2623.2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531.1.55..1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board865622495);
board865622495 = NULL;
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 19 );


char* board195925897 = gamma_board(board);
assert( board195925897 != NULL );
assert( strcmp(board195925897, 
"46..322.3346\n"
"1.......3...\n"
".....6..5314\n"
".662.4.66322\n"
".442.4.655..\n"
"2..23.2.62..\n"
"33443.6.5.1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2623.2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531.1.55..1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board195925897);
board195925897 = NULL;
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board184698485 = gamma_board(board);
assert( board184698485 != NULL );
assert( strcmp(board184698485, 
"46..322.3346\n"
"1.......3...\n"
".....6..5314\n"
".662.4.66322\n"
".442.4.655..\n"
"2.423.2.62..\n"
"33443.6.5.1.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2623.2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531.1.55..1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board184698485);
board184698485 = NULL;
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 11, 13) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 20 );


char* board498687480 = gamma_board(board);
assert( board498687480 != NULL );
assert( strcmp(board498687480, 
"46..322.3346\n"
"1...3...3..6\n"
".....64.5314\n"
".662.4.66322\n"
".442.4.6555.\n"
"2.423.2.62..\n"
"33443.6.551.\n"
".5.4..66544.\n"
"55.33.....34\n"
".2623.2.5.34\n"
"14.22..51144\n"
"544.........\n"
"531.1.55..1.\n"
".1.31....66.\n"
"11....5...6.\n") == 0);
free(board498687480);
board498687480 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );


gamma_delete(board);

    return 0;
}
