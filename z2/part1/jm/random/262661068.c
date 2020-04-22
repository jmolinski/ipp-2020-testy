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
uuid: 262661068
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 12, 7, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board805001265 = gamma_board(board);
assert( board805001265 != NULL );
assert( strcmp(board805001265, 
"............\n"
"...1........\n"
"............\n"
"............\n"
"..6...4.....\n"
".....4......\n"
"........2...\n"
"...1.2......\n"
"...7.....3..\n"
"..3.........\n"
"............\n"
".....2......\n") == 0);
free(board805001265);
board805001265 = NULL;
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );


char* board981549748 = gamma_board(board);
assert( board981549748 != NULL );
assert( strcmp(board981549748, 
".1..1.......\n"
"...1........\n"
".4.....5....\n"
"............\n"
"..6...47....\n"
"..2..4......\n"
"...3....2...\n"
"...1.2......\n"
"...7.....3..\n"
"..36...6....\n"
".....6......\n"
".....2...5..\n") == 0);
free(board981549748);
board981549748 = NULL;
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 2) == 117 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_free_fields(board, 1) == 110 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 3) == 108 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_free_fields(board, 7) == 97 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 7, 11, 7) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_free_fields(board, 2) == 84 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );


char* board815195674 = gamma_board(board);
assert( board815195674 != NULL );
assert( strcmp(board815195674, 
".11.1.1431..\n"
".3.1.16.....\n"
"14...4353.76\n"
"11.7.164....\n"
"2.6.5747.217\n"
".624.4..4..2\n"
"5..342..2...\n"
"...1.27.4.1.\n"
".3.7...2.3.7\n"
"..7623.63.4.\n"
"5...56.5....\n"
"..7.424.75.5\n") == 0);
free(board815195674);
board815195674 = NULL;
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 60 );


char* board961384487 = gamma_board(board);
assert( board961384487 != NULL );
assert( strcmp(board961384487, 
".11.1.14316.\n"
".3.1.16...6.\n"
"144..4353.76\n"
"11.7.664....\n"
"2.6.5747.217\n"
".624.4..43.2\n"
"5..342..26..\n"
"7..1.27.4.1.\n"
".3.7...233.7\n"
".27623.63.41\n"
"5..156.5....\n"
"..72424.75.5\n") == 0);
free(board961384487);
board961384487 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );


char* board920578766 = gamma_board(board);
assert( board920578766 != NULL );
assert( strcmp(board920578766, 
".11.1.14316.\n"
"33.1.16.4.6.\n"
"144.14353.76\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.4..43.2\n"
"5..342..26..\n"
"7..1.2774.16\n"
".3.7...233.7\n"
".27623.63441\n"
"5..156.5.2..\n"
"..72424.75.5\n") == 0);
free(board920578766);
board920578766 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_golden_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );


char* board618796118 = gamma_board(board);
assert( board618796118 != NULL );
assert( strcmp(board618796118, 
".11.1.143167\n"
"33.1.1614.6.\n"
"144.14353.76\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.43.2\n"
"5.53424.26.7\n"
"7..1.2774.16\n"
".3.7..5233.7\n"
".27623.63441\n"
"5..156.5.2..\n"
"..72424.75.5\n") == 0);
free(board618796118);
board618796118 = NULL;
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );


char* board691579068 = gamma_board(board);
assert( board691579068 != NULL );
assert( strcmp(board691579068, 
".11.1.143167\n"
"33.1.1614.6.\n"
"134.14353.76\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.43.2\n"
"5.53424.26.7\n"
"7..132774.16\n"
".3.75.5233.7\n"
"227623.63441\n"
"5..156.5.26.\n"
"..72424.75.5\n") == 0);
free(board691579068);
board691579068 = NULL;
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );


char* board280380104 = gamma_board(board);
assert( board280380104 != NULL );
assert( strcmp(board280380104, 
".11.1.143167\n"
"33.1.1614.6.\n"
"134.14353.76\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.43.2\n"
"5.53424.26.7\n"
"7..132774.16\n"
".3.75.5233.7\n"
"227623.63441\n"
"5..156.5.26.\n"
"..72424.75.5\n") == 0);
free(board280380104);
board280380104 = NULL;
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 11, 4) == 0 );


char* board638885570 = gamma_board(board);
assert( board638885570 != NULL );
assert( strcmp(board638885570, 
".11.1.143167\n"
"33.1.1614.6.\n"
"134.14353.76\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.4362\n"
"5.53424.26.7\n"
"7..132774.16\n"
".3.75.5233.7\n"
"227623.63441\n"
"55.156.5.26.\n"
"..72424.75.5\n") == 0);
free(board638885570);
board638885570 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board197109365 = gamma_board(board);
assert( board197109365 != NULL );
assert( strcmp(board197109365, 
".11.1.143167\n"
"33.1.1614.6.\n"
"134.14353.76\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.4362\n"
"5.53424.26.7\n"
"72.132774.16\n"
".3.75.5233.7\n"
"227623.63441\n"
"55.156.5.26.\n"
"..72424.75.5\n") == 0);
free(board197109365);
board197109365 = NULL;
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );


char* board456590119 = gamma_board(board);
assert( board456590119 != NULL );
assert( strcmp(board456590119, 
".1151.143167\n"
"33.1.1614.6.\n"
"134.14353676\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.4362\n"
"5.53424.26.7\n"
"72.132774.16\n"
".3.75.5233.7\n"
"227623.63441\n"
"55.15675.263\n"
"..72424.75.5\n") == 0);
free(board456590119);
board456590119 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_golden_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_golden_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_free_fields(board, 3) == 33 );


char* board863886908 = gamma_board(board);
assert( board863886908 != NULL );
assert( strcmp(board863886908, 
".1151.143167\n"
"33.1.1614.6.\n"
"134414353676\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.4362\n"
"5.53424.26.7\n"
"72.132774.16\n"
".3.75.2233.7\n"
"227623.63441\n"
"55.15675.263\n"
"..72424.75.5\n") == 0);
free(board863886908);
board863886908 = NULL;
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 10, 5) == 0 );


char* board152531975 = gamma_board(board);
assert( board152531975 != NULL );
assert( strcmp(board152531975, 
".1151.143167\n"
"33.1.1614.6.\n"
"134414353676\n"
"11.7.6641...\n"
"2.6.5747.217\n"
".624.43.4362\n"
"5.53424.26.7\n"
"72.132774.16\n"
".3.75.2233.7\n"
"227623.63441\n"
"55.15675.263\n"
"..72424.75.5\n") == 0);
free(board152531975);
board152531975 = NULL;
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_golden_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_move(board, 1, 2, 11) == 0 );


char* board151636363 = gamma_board(board);
assert( board151636363 != NULL );
assert( strcmp(board151636363, 
".1151.143167\n"
"33.161614.6.\n"
"134414353676\n"
"11.7.6641..6\n"
"2.6.5747.217\n"
".624.43.4362\n"
"5.53424.2657\n"
"72.132774.16\n"
".3.75.2233.7\n"
"227623.63444\n"
"55.15675.263\n"
"..72424.75.5\n") == 0);
free(board151636363);
board151636363 = NULL;
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 1, 8) == 0 );


char* board892720284 = gamma_board(board);
assert( board892720284 != NULL );
assert( strcmp(board892720284, 
".1151.143167\n"
"33.161614.6.\n"
"134414353676\n"
"11.7.6641..6\n"
"2.6.5747.217\n"
".624.43.4362\n"
"5.53424.2657\n"
"72.132774.16\n"
".3.75.2233.7\n"
"227623.63444\n"
"55.15675.263\n"
".572424.75.5\n") == 0);
free(board892720284);
board892720284 = NULL;
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 0, 7) == 0 );


char* board951914162 = gamma_board(board);
assert( board951914162 != NULL );
assert( strcmp(board951914162, 
".11513143167\n"
"33.161614.6.\n"
"134414353676\n"
"11.7.6641.66\n"
"2.6.5747.217\n"
"3624.43.4362\n"
"5.53424.2657\n"
"72.132774.16\n"
".3.75.2233.7\n"
"227623.63444\n"
"55.15675.263\n"
".572424.7555\n") == 0);
free(board951914162);
board951914162 = NULL;
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_golden_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );


gamma_delete(board);

    return 0;
}
