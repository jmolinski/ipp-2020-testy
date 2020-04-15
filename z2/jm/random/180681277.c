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
uuid: 180681277
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 14, 8, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board805433699 = gamma_board(board);
assert( board805433699 != NULL );
assert( strcmp(board805433699, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board805433699);
board805433699 = NULL;
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_free_fields(board, 8) == 132 );
assert( gamma_move(board, 1, 12, 4) == 0 );


char* board321030075 = gamma_board(board);
assert( board321030075 != NULL );
assert( strcmp(board321030075, 
"..........\n"
"..........\n"
".7........\n"
"..........\n"
"..........\n"
"...3......\n"
".....8....\n"
"..27..3...\n"
"..........\n"
"..........\n"
".4.......8\n"
"..........\n"
"..........\n"
"..........\n") == 0);
free(board321030075);
board321030075 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 125 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 13, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board712564347 = gamma_board(board);
assert( board712564347 != NULL );
assert( strcmp(board712564347, 
"..........\n"
"........2.\n"
".7..7.....\n"
".....22...\n"
"........31\n"
"3..32..1..\n"
".1.8.8....\n"
".627.43...\n"
"........6.\n"
"3......7.5\n"
".447.....8\n"
"..63.7....\n"
"22...5....\n"
"..........\n") == 0);
free(board712564347);
board712564347 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_free_fields(board, 5) == 105 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 100 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );


char* board192872927 = gamma_board(board);
assert( board192872927 != NULL );
assert( strcmp(board192872927, 
"..5..2....\n"
"......6.2.\n"
"27417...16\n"
"....822..5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85.7.\n"
"7627643...\n"
".3.5.61.67\n"
"34345.47.5\n"
"1447.....8\n"
"2.63.7.7..\n"
"22.8.5..6.\n"
"76...8.16.\n") == 0);
free(board192872927);
board192872927 = NULL;
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );


char* board877284382 = gamma_board(board);
assert( board877284382 != NULL );
assert( strcmp(board877284382, 
"..5..2....\n"
".....86.2.\n"
"27417.3.16\n"
"3...822..5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85.73\n"
"7627643...\n"
".3.5.61.67\n"
"34345.47.5\n"
"1447.....8\n"
"2.63.7.7..\n"
"22.8.5..6.\n"
"76...8.16.\n") == 0);
free(board877284382);
board877284382 = NULL;
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 7) == 0 );


char* board232152484 = gamma_board(board);
assert( board232152484 != NULL );
assert( strcmp(board232152484, 
"..5..2....\n"
".....86.2.\n"
"27417.3.16\n"
"3...822..5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85.73\n"
"7627643...\n"
".3.5.61.67\n"
"34345.47.5\n"
"1447.....8\n"
"2.63.7.7..\n"
"22.855..6.\n"
"76...8.16.\n") == 0);
free(board232152484);
board232152484 = NULL;
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 6, 13) == 1 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );


char* board547256471 = gamma_board(board);
assert( board547256471 != NULL );
assert( strcmp(board547256471, 
"..5..24...\n"
".....86.2.\n"
"27417.3.16\n"
"3...8227.5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85.73\n"
"7627643...\n"
".3.5361.67\n"
"34345.47.5\n"
"1447.....8\n"
"2.63.7.7..\n"
"22.855..6.\n"
"768..8.16.\n") == 0);
free(board547256471);
board547256471 = NULL;
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_golden_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );


char* board344449698 = gamma_board(board);
assert( board344449698 != NULL );
assert( strcmp(board344449698, 
"..5..24...\n"
".....86.2.\n"
"27417.3.16\n"
"3...8227.5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85.73\n"
"7627643...\n"
".3.5361567\n"
"34345.47.5\n"
"1447.7...8\n"
"2663.7.7..\n"
"22.855..6.\n"
"768..8.165\n") == 0);
free(board344449698);
board344449698 = NULL;
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );


char* board667699848 = gamma_board(board);
assert( board667699848 != NULL );
assert( strcmp(board667699848, 
"..5..24...\n"
".....86.2.\n"
"27417.3.16\n"
"3...8227.5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85.73\n"
"7627643...\n"
".3.5361567\n"
"34345847.5\n"
"1447.7...8\n"
"2663.7.7.1\n"
"22.855..6.\n"
"768..8.165\n") == 0);
free(board667699848);
board667699848 = NULL;
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board458083673 = gamma_board(board);
assert( board458083673 != NULL );
assert( strcmp(board458083673, 
"..5..24...\n"
".....86.2.\n"
"27417.3.16\n"
"3...8227.5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85673\n"
"7627643...\n"
".3.5361567\n"
"34345847.5\n"
"1447.7...8\n"
"2663.727.1\n"
"22.855..6.\n"
"7688.8.165\n") == 0);
free(board458083673);
board458083673 = NULL;
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );


char* board434404503 = gamma_board(board);
assert( board434404503 != NULL );
assert( strcmp(board434404503, 
"..5..24...\n"
".....86.2.\n"
"27417.3816\n"
"3...8227.5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85673\n"
"76276438..\n"
".3.5361567\n"
"34345847.5\n"
"1447.7...8\n"
"26636727.1\n"
"22.855..6.\n"
"768878.165\n") == 0);
free(board434404503);
board434404503 = NULL;
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board371845720 = gamma_board(board);
assert( board371845720 != NULL );
assert( strcmp(board371845720, 
"..5..24...\n"
"....486.2.\n"
"27417.3816\n"
"3..58227.5\n"
".65...3131\n"
"3.532.4171\n"
".1.8.85673\n"
"7627643853\n"
".3.5361567\n"
"3434584775\n"
"1447.71..8\n"
"2663672761\n"
"22.855.76.\n"
"768878.165\n") == 0);
free(board371845720);
board371845720 = NULL;
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );


char* board900281856 = gamma_board(board);
assert( board900281856 != NULL );
assert( strcmp(board900281856, 
"..5..24...\n"
".6..486.2.\n"
"27417.3816\n"
"3..58227.5\n"
"565...3131\n"
"3.532.4171\n"
".1.8.85673\n"
"7627643853\n"
".3.5361567\n"
"3434584775\n"
"1447.71..8\n"
"2663672761\n"
"22.855.76.\n"
"768878.165\n") == 0);
free(board900281856);
board900281856 = NULL;
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board357084285 = gamma_board(board);
assert( board357084285 != NULL );
assert( strcmp(board357084285, 
"..5..24...\n"
".6..486.2.\n"
"2741723816\n"
"3..58227.5\n"
"565...3131\n"
"3.532.4171\n"
".1.8.85673\n"
"7627643853\n"
".3.5361567\n"
"3434584775\n"
"1447.71..8\n"
"2663672761\n"
"22.855.76.\n"
"768878.165\n") == 0);
free(board357084285);
board357084285 = NULL;
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 9, 13) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );


char* board378234729 = gamma_board(board);
assert( board378234729 != NULL );
assert( strcmp(board378234729, 
"..5..24..8\n"
".6..486.2.\n"
"2741723816\n"
"3..58227.5\n"
"565...3131\n"
"3.532.4171\n"
".1.8.85673\n"
"7627643853\n"
".3.5361567\n"
"3434584775\n"
"1447.71..8\n"
"2663672761\n"
"22.855.76.\n"
"768878.165\n") == 0);
free(board378234729);
board378234729 = NULL;
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_free_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
