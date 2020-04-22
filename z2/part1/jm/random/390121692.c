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
uuid: 390121692
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(22, 22, 8, 40);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 21, 15) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 16) == 1 );
assert( gamma_move(board, 5, 2, 21) == 1 );
assert( gamma_move(board, 6, 10, 16) == 1 );
assert( gamma_free_fields(board, 6) == 478 );
assert( gamma_move(board, 7, 20, 18) == 1 );
assert( gamma_move(board, 7, 13, 6) == 1 );
assert( gamma_move(board, 8, 18, 11) == 1 );
assert( gamma_move(board, 1, 16, 4) == 1 );
assert( gamma_move(board, 2, 17, 13) == 1 );
assert( gamma_move(board, 3, 21, 16) == 1 );
assert( gamma_move(board, 3, 3, 21) == 1 );
assert( gamma_move(board, 4, 17, 4) == 1 );
assert( gamma_move(board, 4, 14, 14) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 17) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 15, 10) == 1 );
assert( gamma_move(board, 7, 13, 7) == 1 );


char* board795529374 = gamma_board(board);
assert( board795529374 != NULL );
assert( strcmp(board795529374, 
"..53..................\n"
"......................\n"
"......................\n"
"....................7.\n"
"...5..................\n"
"........4.6..........3\n"
".....................2\n"
"..............4.......\n"
".................2....\n"
"......................\n"
"..................8...\n"
"...............6......\n"
".........1............\n"
"......................\n"
".............7........\n"
".............7........\n"
"......................\n"
"................14....\n"
".......3..............\n"
"......................\n"
"......................\n"
"......................\n") == 0);
free(board795529374);
board795529374 = NULL;
assert( gamma_move(board, 3, 1, 18) == 1 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 7, 0, 20) == 1 );
assert( gamma_move(board, 8, 14, 9) == 1 );
assert( gamma_move(board, 1, 18, 10) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 4, 21) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 11, 17) == 1 );
assert( gamma_move(board, 3, 0, 15) == 1 );
assert( gamma_move(board, 4, 12, 16) == 1 );
assert( gamma_move(board, 4, 20, 18) == 0 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 18, 16) == 1 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 8, 19, 15) == 1 );
assert( gamma_move(board, 8, 18, 19) == 1 );
assert( gamma_move(board, 1, 19, 18) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 17, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 19) == 1 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_free_fields(board, 7) == 441 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 8, 19) == 1 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_move(board, 2, 1, 19) == 1 );
assert( gamma_move(board, 3, 5, 18) == 1 );
assert( gamma_move(board, 3, 12, 14) == 1 );
assert( gamma_golden_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 14, 21) == 1 );
assert( gamma_golden_move(board, 4, 21, 4) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 6, 19, 9) == 1 );
assert( gamma_move(board, 6, 15, 20) == 1 );
assert( gamma_move(board, 7, 13, 8) == 1 );
assert( gamma_move(board, 8, 20, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 19, 5) == 1 );
assert( gamma_free_fields(board, 1) == 427 );
assert( gamma_move(board, 2, 20, 12) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 3, 7, 17) == 1 );
assert( gamma_free_fields(board, 3) == 423 );
assert( gamma_move(board, 4, 7, 15) == 1 );
assert( gamma_move(board, 4, 20, 6) == 1 );
assert( gamma_move(board, 5, 6, 19) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 15, 2) == 1 );
assert( gamma_golden_move(board, 6, 21, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 16, 4) == 0 );
assert( gamma_free_fields(board, 8) == 419 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 11, 15) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 10, 21) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );


char* board429457467 = gamma_board(board);
assert( board429457467 != NULL );
assert( strcmp(board429457467, 
"..532.....4...4.......\n"
"7..............6......\n"
".2....5.1...6.....8...\n"
".3...3.............17.\n"
"...5...3...3..........\n"
"........4.6.4.....6..3\n"
"3......4...2.......8.2\n"
"....4......63.4.......\n"
".................2....\n"
"......53..2.........2.\n"
"......7...........8...\n"
"...5....1......6..1...\n"
".......3.1....8....6..\n"
".......7.....7........\n"
".........663.7......8.\n"
".............72.....4.\n"
"...................1..\n"
".......7.25.....14....\n"
".......3....5.........\n"
"...............6......\n"
"...2..................\n"
"......83....1.........\n") == 0);
free(board429457467);
board429457467 = NULL;
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 2, 12) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 3, 18, 6) == 1 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 5, 21, 16) == 0 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 19, 11) == 1 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_free_fields(board, 7) == 403 );
assert( gamma_move(board, 8, 19, 19) == 1 );
assert( gamma_move(board, 1, 15, 13) == 1 );
assert( gamma_move(board, 1, 21, 21) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 2, 10, 18) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 19, 21) == 1 );
assert( gamma_move(board, 4, 4, 19) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_golden_move(board, 6, 21, 21) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 5, 20) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_move(board, 2, 17, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 4, 16, 20) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 7, 20, 11) == 1 );
assert( gamma_move(board, 7, 21, 6) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 7, 21) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 4, 2, 15) == 1 );
assert( gamma_move(board, 5, 16, 8) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 3, 19) == 1 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_move(board, 7, 9, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 14, 19) == 1 );
assert( gamma_move(board, 8, 14, 13) == 1 );


char* board800933356 = gamma_board(board);
assert( board800933356 != NULL );
assert( strcmp(board800933356, 
"..532..2..4...4....4.6\n"
"7....8.........64.....\n"
".2.64.5.1...6.8...88..\n"
".3...3....2........17.\n"
"...5...3...3..........\n"
"........4.6.4.....6..3\n"
"3.4....4...2.......8.2\n"
"....4......63.4..2....\n"
".........7....81.2....\n"
"..8...535.2...6.....2.\n"
"......7...6.......877.\n"
"...5....11.....6..1...\n"
".......3.1....8....6..\n"
"7......7..3..7..5.....\n"
"..7...6..663.7......8.\n"
".............72...3.47\n"
".........1.........1..\n"
".......7.2524...14....\n"
".......3....5.........\n"
".1.....5.1...4.6......\n"
"...2.....5............\n"
"....3583....1.........\n") == 0);
free(board800933356);
board800933356 = NULL;
assert( gamma_move(board, 1, 16, 3) == 1 );
assert( gamma_move(board, 1, 5, 20) == 0 );
assert( gamma_golden_move(board, 1, 2, 15) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 5, 19, 17) == 1 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_move(board, 6, 17, 10) == 1 );
assert( gamma_move(board, 7, 18, 2) == 1 );
assert( gamma_move(board, 7, 6, 16) == 1 );
assert( gamma_move(board, 8, 2, 17) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 20, 21) == 1 );
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 12, 21) == 1 );
assert( gamma_move(board, 4, 2, 18) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 21, 5) == 1 );
assert( gamma_move(board, 7, 17, 6) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 15, 12) == 1 );
assert( gamma_move(board, 7, 11, 15) == 0 );
assert( gamma_free_fields(board, 7) == 355 );
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 4, 21) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 20, 15) == 1 );
assert( gamma_free_fields(board, 4) == 351 );
assert( gamma_move(board, 7, 16, 3) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );


char* board885942921 = gamma_board(board);
assert( board885942921 != NULL );
assert( strcmp(board885942921, 
"..532..2..4.4.4....426\n"
"7....8.........64.....\n"
".2.64.5.1...6.8...88..\n"
".34..3...12........17.\n"
"..85...3...3.......5..\n"
"......7.4.6.4.....6..3\n"
"3.1....4...2.......842\n"
".5..4......63.4..2....\n"
".........7...381.2....\n"
"..8..4535.2...66....2.\n"
"......7...6.......877.\n"
"...5....11.....6.61...\n"
".......3.1....8....6..\n"
"7.....87..3..73.5.....\n"
"..7..36..663.7......8.\n"
"..........1..72..73.47\n"
".........12........1.6\n"
".......7.2524...14....\n"
".......3....5...1.....\n"
".1.....5.1...4.6..7...\n"
"...2...1.5............\n"
"4...3583....1.........\n") == 0);
free(board885942921);
board885942921 = NULL;
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 18, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 20, 13) == 1 );
assert( gamma_move(board, 4, 16, 6) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 18, 6) == 0 );
assert( gamma_free_fields(board, 7) == 345 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_move(board, 8, 13, 0) == 1 );
assert( gamma_move(board, 1, 1, 20) == 1 );
assert( gamma_move(board, 1, 19, 14) == 1 );
assert( gamma_move(board, 2, 13, 19) == 1 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 3, 1, 15) == 1 );
assert( gamma_golden_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_free_fields(board, 4) == 337 );
assert( gamma_move(board, 5, 18, 10) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 17, 17) == 1 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 19, 19) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );


char* board926825517 = gamma_board(board);
assert( board926825517 != NULL );
assert( strcmp(board926825517, 
"..532..2..4.4.4....426\n"
"71...8.........64.....\n"
".2.64.5.1...628...88..\n"
".34..3...12........17.\n"
"..85...3...3.....6.5..\n"
"......7.4.6.4.....6..3\n"
"331....4...2......2842\n"
"85..4......63.4..2.1..\n"
".........7...381.2..3.\n"
"..8..4535.2...66....2.\n"
"....6.7.1.6..3....877.\n"
"...5....115....6.61...\n"
".......3.1....8....6..\n"
"7.....87..3..73.5.....\n"
"..7..36..663.7......8.\n"
".5........1..72.473.47\n"
".........12........1.6\n"
".......7.2524...14....\n"
".......3..4.5...1.....\n"
".1.....5.1...4.6..7...\n"
"...2...1.5............\n"
"4...3583....18........\n") == 0);
free(board926825517);
board926825517 = NULL;
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_move(board, 3, 11, 16) == 1 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_free_fields(board, 4) == 331 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 18, 14) == 1 );
assert( gamma_move(board, 7, 18, 4) == 1 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 16, 14) == 1 );
assert( gamma_move(board, 1, 13, 20) == 1 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_move(board, 3, 18, 17) == 1 );
assert( gamma_move(board, 4, 16, 7) == 1 );
assert( gamma_move(board, 4, 9, 21) == 1 );
assert( gamma_move(board, 5, 18, 1) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 10, 21) == 0 );
assert( gamma_move(board, 8, 11, 2) == 1 );
assert( gamma_move(board, 8, 12, 21) == 0 );
assert( gamma_golden_move(board, 8, 12, 14) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 319 );
assert( gamma_golden_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 3, 1, 19) == 0 );
assert( gamma_move(board, 3, 0, 17) == 1 );
assert( gamma_free_fields(board, 3) == 318 );
assert( gamma_move(board, 4, 15, 6) == 1 );
assert( gamma_move(board, 4, 17, 9) == 1 );
assert( gamma_move(board, 5, 11, 21) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 6, 15, 8) == 1 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_free_fields(board, 7) == 314 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 19) == 1 );
assert( gamma_move(board, 8, 4, 19) == 0 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 8, 20) == 1 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_move(board, 3, 9, 21) == 0 );
assert( gamma_move(board, 3, 17, 16) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 20, 16) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 21, 20) == 1 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_move(board, 7, 16, 9) == 1 );
assert( gamma_move(board, 8, 15, 20) == 0 );
assert( gamma_move(board, 1, 20, 19) == 1 );
assert( gamma_move(board, 1, 11, 20) == 1 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 20, 15) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 20, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board841553136 = gamma_board(board);
assert( board841553136 != NULL );
assert( strcmp(board841553136, 
"..532..2.4454.4....426\n"
"71...8..2..1.1.64....6\n"
"82.64.5.1...628...881.\n"
".34..3...12........17.\n"
"3.85...3...3.....635..\n"
"......7.4.634....36.43\n"
"331....4...2......2842\n"
"85474......68.4.8271..\n"
"3........7...381.2..3.\n"
"..8..4535.2...66....2.\n"
"....6.7.1.6..3....877.\n"
"...5....115....6.61...\n"
".......3.1....8.74.6..\n"
"7.....87..3..7365.....\n"
"..7..36..663.73.4...8.\n"
".5.5......1..724473.47\n"
".........12........1.6\n"
".......7.2524...147...\n"
".......3..4.5...1.....\n"
".1.8...5.1.8.4.6..7...\n"
"...2...1.5........5...\n"
"4.6.3583.3..18........\n") == 0);
free(board841553136);
board841553136 = NULL;
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 13, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_free_fields(board, 2) == 303 );
assert( gamma_move(board, 3, 11, 6) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_move(board, 7, 20, 2) == 1 );
assert( gamma_move(board, 7, 19, 16) == 1 );


char* board966375151 = gamma_board(board);
assert( board966375151 != NULL );
assert( strcmp(board966375151, 
"..532..2.4454.4....426\n"
"71...8..2..1.1.64....6\n"
"82.64.5.1...628...881.\n"
".34..3...12........17.\n"
"3.85...3...3.....635..\n"
"......7.4.634....36743\n"
"331....4...2......2842\n"
"85474..4...68.4.8271..\n"
"3........7...381.2..3.\n"
"..8..4535.2...66....2.\n"
"....6.7.1.66.3....877.\n"
"...5....115....6.61...\n"
".......3.1....8.74.6..\n"
"7.....87..3..7365.....\n"
"..7..36..663.73.4...8.\n"
".5.5......13.724473.47\n"
".........12........1.6\n"
".......7.2524...147...\n"
".......3..4.5...1.....\n"
".1.8...5.1.8.4.6..7.7.\n"
"...2...1.5........5...\n"
"4.6.3583.3..18........\n") == 0);
free(board966375151);
board966375151 = NULL;
assert( gamma_move(board, 8, 16, 1) == 1 );
assert( gamma_move(board, 1, 19, 21) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 20) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 21, 8) == 1 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 7, 19, 17) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 11, 11) == 0 );


char* board123784265 = gamma_board(board);
assert( board123784265 != NULL );
assert( strcmp(board123784265, 
"..532..2.4454.4....426\n"
"71...8..2..1.1.64....6\n"
"82.64.5.1...628...881.\n"
".34..3...12........17.\n"
"3.85...3...3.....635..\n"
"......7.4.634....36743\n"
"331....4...2......2842\n"
"85474..4...68.4.8271..\n"
"3........7...381.2..3.\n"
"..8..4535.2.4.66....2.\n"
"....6.7.1.66.3....877.\n"
"...51...115....6.61...\n"
".......3.1....8.74.6..\n"
"7.....876.3..7365....6\n"
"..7..36..663.73.4...8.\n"
".5.5......13.724473.47\n"
".........12........1.6\n"
".......7.2524.4.147...\n"
".......3..4.5...1.....\n"
".1.8...5.1.8.4.6..7.7.\n"
"...2...1.5......8.5...\n"
"4.6.3583.3..18........\n") == 0);
free(board123784265);
board123784265 = NULL;
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 10, 19) == 1 );
assert( gamma_golden_move(board, 2, 17, 18) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_free_fields(board, 8) == 285 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 2, 14, 21) == 0 );
assert( gamma_move(board, 2, 15, 18) == 1 );
assert( gamma_move(board, 3, 12, 19) == 0 );
assert( gamma_move(board, 4, 17, 8) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 15, 17) == 1 );
assert( gamma_move(board, 8, 19, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 12, 17) == 1 );
assert( gamma_move(board, 1, 21, 6) == 0 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_free_fields(board, 3) == 278 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 3, 19) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_free_fields(board, 6) == 278 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board563504105 = gamma_board(board);
assert( board563504105 != NULL );
assert( strcmp(board563504105, 
"..532..2.4454.4....426\n"
"71...8..2..1.1.64....6\n"
"82.64.5.1.2.628...881.\n"
".34..3...12....2...17.\n"
"3.85...3...31..7.635..\n"
"......764.634....36743\n"
"331....4...2......2842\n"
"85474..4...68.4.8271..\n"
"3........7...381.2..3.\n"
"..8..4535.2.4.66....2.\n"
"....6.7.1.66.3....877.\n"
"1..51...115....6.61...\n"
".......3.15...8.74.6..\n"
"7..6..876.3..73654...6\n"
"..7..36..663.73.4...8.\n"
"55.5.3....13.724473.47\n"
"....7....12........1.6\n"
".......7.2524.4.147...\n"
".......3..4.5...1.....\n"
".158...5.1.8.4.6..7.7.\n"
"...2...1.5.4....8.5...\n"
"4.6.3583.3..18........\n") == 0);
free(board563504105);
board563504105 = NULL;
assert( gamma_move(board, 8, 2, 21) == 0 );
assert( gamma_move(board, 8, 14, 8) == 0 );
assert( gamma_golden_move(board, 8, 19, 4) == 0 );
assert( gamma_move(board, 1, 21, 1) == 1 );
assert( gamma_move(board, 1, 9, 19) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_move(board, 3, 0, 21) == 1 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 4, 13, 18) == 1 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_free_fields(board, 4) == 273 );
assert( gamma_move(board, 5, 14, 11) == 1 );
assert( gamma_move(board, 6, 9, 21) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 19, 17) == 0 );


char* board383084472 = gamma_board(board);
assert( board383084472 != NULL );
assert( strcmp(board383084472, 
"3.532..2.4454.4....426\n"
"71...8..2..1.1.64....6\n"
"82.64.5.112.628...881.\n"
".34..3...12..4.2...17.\n"
"3.85...3...31..7.635..\n"
"......764.634....36743\n"
"331....4...2......2842\n"
"85474..4...68.4.8271..\n"
"3........7...381.2..3.\n"
"..8..4535.2.4.66....2.\n"
"....6.7.1.66.35...877.\n"
"1..51...115....6.61...\n"
".......3.15...8.74.6..\n"
"7..6..876.3..73654...6\n"
"..7..36..663.73.4...8.\n"
"55.5.3....133724473.47\n"
"....7....12........1.6\n"
".......7.2524.4.147...\n"
".......3..4.5...1.....\n"
".158...5.1.8.4.6..7.7.\n"
"...2...1.5.4....8.5..1\n"
"4.663583.3..18........\n") == 0);
free(board383084472);
board383084472 = NULL;
assert( gamma_move(board, 1, 20, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_free_fields(board, 2) == 270 );
assert( gamma_move(board, 3, 16, 0) == 1 );
assert( gamma_move(board, 3, 7, 19) == 1 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 4, 0, 21) == 0 );
assert( gamma_move(board, 5, 19, 7) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 21, 15) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_move(board, 1, 5, 13) == 1 );


char* board459068341 = gamma_board(board);
assert( board459068341 != NULL );
assert( strcmp(board459068341, 
"3.532..2.4454.4....426\n"
"71...8..2..1.1.64....6\n"
"82.64.53112.628...881.\n"
".34..3...12..4.2...17.\n"
"3.85...3...31..7.635..\n"
"......764.634....36743\n"
"331....4...2......2842\n"
"85474..4...68.4.8271..\n"
"3....1...7...381.2..3.\n"
"7.8..4535.2.4.66....2.\n"
"....6.7.1.66.35...877.\n"
"1..51...115....6.61...\n"
".......3.15...8.74.6..\n"
"7..6..876.3..73654...6\n"
"..7..36..663.73.4..58.\n"
"55.5.3....133724473.47\n"
"....7...712........1.6\n"
".......7.2524.4.147...\n"
".......3..4.5...1.....\n"
".158...5.1.8.4.6..7.7.\n"
"...2...1.5.4....8.5.11\n"
"4.663583.3..18..3.....\n") == 0);
free(board459068341);
board459068341 = NULL;
assert( gamma_move(board, 2, 20, 20) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 18, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 18, 16) == 0 );
assert( gamma_move(board, 6, 18, 7) == 1 );
assert( gamma_move(board, 7, 0, 21) == 0 );
assert( gamma_move(board, 7, 8, 15) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 12, 19) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 35 );
assert( gamma_free_fields(board, 3) == 259 );
assert( gamma_golden_move(board, 3, 7, 16) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_free_fields(board, 5) == 258 );
assert( gamma_move(board, 7, 17, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_golden_move(board, 8, 6, 16) == 0 );
assert( gamma_move(board, 1, 17, 3) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 20, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 7, 6, 19) == 0 );


char* board267178364 = gamma_board(board);
assert( board267178364 != NULL );
assert( strcmp(board267178364, 
"3.532..2.4454.4....426\n"
"71...8..2..1.1.64...26\n"
"82.64.53112.628...881.\n"
".34..3...12..4.2...17.\n"
"3.85...3...31..7.635..\n"
"......734.634....36743\n"
"331....47..2......2842\n"
"85474..4...68.4.8271..\n"
"3....1..37...381.2..3.\n"
"7.8..4535.2.4.66....2.\n"
"....6.7.1.66.35...877.\n"
"1..51...115....6.61...\n"
".......3.15...8.74.6..\n"
"7..6..876.3..73654...6\n"
".87..36..663.73.4.658.\n"
"55.5.3....133724473.47\n"
"5..37...7124.......1.6\n"
".......7.2524.4.147...\n"
"..1....3..485...11....\n"
".158...5.1.8.4.6..7.7.\n"
"...2...1.5.4....8.5.11\n"
"4.663583.3..18..3.....\n") == 0);
free(board267178364);
board267178364 = NULL;
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 1, 14, 15) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 12, 18) == 1 );
assert( gamma_move(board, 4, 0, 18) == 1 );
assert( gamma_move(board, 4, 14, 2) == 1 );
assert( gamma_golden_move(board, 4, 19, 12) == 0 );


char* board476326873 = gamma_board(board);
assert( board476326873 != NULL );
assert( strcmp(board476326873, 
"3.532..2.4454.4....426\n"
"71...8..2..1.1.64...26\n"
"82.64.53112.628...881.\n"
"434..3...12.34.2...17.\n"
"3.85...3...31..7.635..\n"
"......734.634....36743\n"
"331....47..2..1...2842\n"
"85474..4...68.4.8271..\n"
"3....1..37...381.2..3.\n"
"7.8..4535.2.4.66....2.\n"
"....6.7.1.66.35...877.\n"
"1..51...115....6.61...\n"
".......3.15...8.74.6..\n"
"78.6..876.3..73654...6\n"
"187..36..663.73.4.658.\n"
"55.5.3....133724473.47\n"
"5..378..7124.......1.6\n"
".......7.2524.4.147...\n"
"..1....3..485...11....\n"
".158...5.1.8.446..7.7.\n"
"...2...1.5.4....8.5.11\n"
"4.663583.3..18..3.....\n") == 0);
free(board476326873);
board476326873 = NULL;
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 20, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 19, 6) == 1 );
assert( gamma_move(board, 7, 11, 13) == 1 );
assert( gamma_move(board, 7, 0, 19) == 0 );
assert( gamma_move(board, 8, 15, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 25 );


char* board566929000 = gamma_board(board);
assert( board566929000 != NULL );
assert( strcmp(board566929000, 
"3.532..2.4454.4....426\n"
"71...8..2..1.1.64...26\n"
"82.64.53112.628...881.\n"
"434..3...12.34.2...17.\n"
"3.85...3...31..7.635..\n"
"......734.634....36743\n"
"331....47..2..1...2842\n"
"85474..4...68.4.8271..\n"
"3....1..37.7.381.2..3.\n"
"7.8..4535.2.4.66....2.\n"
"....6.7.1.66.35...877.\n"
"1..51...115....6.61...\n"
".......3.15...8.74.6..\n"
"78.6..876.3..73654...6\n"
"187..36..663.73.4.658.\n"
"55.5.3....133724473647\n"
"5..378..7124.......1.6\n"
".......7.2524.4.147...\n"
"..1....3..485...11....\n"
".158...5.1.8.446..7.7.\n"
"...26..1.5.4....8.5.11\n"
"4.663583.3..18..3.....\n") == 0);
free(board566929000);
board566929000 = NULL;
assert( gamma_move(board, 2, 19, 5) == 0 );
assert( gamma_move(board, 3, 17, 2) == 1 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 4, 15, 16) == 1 );
assert( gamma_move(board, 4, 15, 4) == 1 );
assert( gamma_move(board, 5, 0, 19) == 0 );
assert( gamma_move(board, 7, 13, 21) == 1 );
assert( gamma_move(board, 7, 1, 17) == 1 );
assert( gamma_move(board, 8, 0, 14) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 1, 9, 19) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_move(board, 3, 11, 20) == 0 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_free_fields(board, 4) == 235 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 18, 20) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 0) == 0 );
assert( gamma_move(board, 6, 18, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 32 );
assert( gamma_free_fields(board, 6) == 233 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 13, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 21, 5) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 18, 0) == 1 );
assert( gamma_free_fields(board, 1) == 231 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_free_fields(board, 2) == 230 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 19, 0) == 1 );
assert( gamma_move(board, 7, 16, 9) == 0 );
assert( gamma_move(board, 8, 8, 18) == 1 );
assert( gamma_move(board, 1, 20, 21) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_free_fields(board, 2) == 226 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_free_fields(board, 3) == 226 );
assert( gamma_move(board, 4, 9, 18) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 12, 20) == 1 );
assert( gamma_move(board, 6, 3, 20) == 1 );
assert( gamma_move(board, 6, 21, 6) == 0 );
assert( gamma_move(board, 7, 16, 5) == 1 );
assert( gamma_move(board, 8, 18, 19) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 2, 8, 21) == 1 );
assert( gamma_free_fields(board, 2) == 221 );
assert( gamma_golden_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 3, 16, 13) == 1 );
assert( gamma_move(board, 6, 11, 12) == 1 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 1, 15, 9) == 1 );
assert( gamma_move(board, 1, 18, 18) == 1 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 4, 15) == 1 );
assert( gamma_move(board, 4, 17, 5) == 1 );
assert( gamma_move(board, 5, 20, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_free_fields(board, 5) == 211 );
assert( gamma_move(board, 6, 0, 15) == 0 );
assert( gamma_move(board, 7, 19, 7) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 1, 19, 18) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 11, 21) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_free_fields(board, 5) == 209 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 35 );
assert( gamma_golden_move(board, 7, 19, 6) == 1 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 1, 18, 21) == 1 );
assert( gamma_move(board, 2, 19, 11) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 17, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 7, 18, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 36 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_golden_move(board, 8, 12, 12) == 0 );
assert( gamma_move(board, 1, 13, 21) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 12, 21) == 0 );
assert( gamma_free_fields(board, 4) == 203 );
assert( gamma_move(board, 5, 21, 6) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 16, 4) == 0 );
assert( gamma_free_fields(board, 7) == 202 );
assert( gamma_move(board, 8, 14, 21) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 21, 4) == 1 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 20, 4) == 1 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_move(board, 4, 20, 20) == 0 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_move(board, 7, 13, 17) == 1 );
assert( gamma_move(board, 7, 4, 20) == 1 );
assert( gamma_move(board, 8, 17, 6) == 0 );
assert( gamma_move(board, 8, 6, 21) == 1 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 21) == 0 );
assert( gamma_move(board, 2, 12, 21) == 0 );
assert( gamma_move(board, 3, 16, 16) == 1 );
assert( gamma_move(board, 3, 5, 14) == 1 );
assert( gamma_move(board, 5, 7, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 7, 19, 5) == 0 );
assert( gamma_move(board, 7, 17, 3) == 0 );
assert( gamma_move(board, 8, 13, 3) == 1 );
assert( gamma_move(board, 8, 16, 8) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_free_fields(board, 2) == 192 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );


char* board453133399 = gamma_board(board);
assert( board453133399 != NULL );
assert( strcmp(board453133399, 
"3.532.822445474...1426\n"
"71.678..2..151.64.5.26\n"
"82.64.53112.628...881.\n"
"434..3..812.34.2..117.\n"
"3785...3...317.7.635..\n"
"......734.634..4336743\n"
"331.3..47..2..1...2842\n"
"854743.4...68.4.82715.\n"
"3..6.1.437.7.38132..3.\n"
"7.8..4535.264.66..6.2.\n"
"..3.6.7.1.66.35...877.\n"
"1..51...115....6.61...\n"
"...7...3.15.2.8174.6..\n"
"78.6..87663..73654...6\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..378..7124..3.74.1.6\n"
".......7.2524744147.31\n"
"..17..13..4858..11....\n"
".15848.531.8.446.37.7.\n"
"...26..1.5.4..5.8.5.11\n"
"4166358323.818..3.16..\n") == 0);
free(board453133399);
board453133399 = NULL;
assert( gamma_move(board, 5, 21, 16) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 7, 18, 13) == 1 );
assert( gamma_move(board, 8, 6, 21) == 0 );
assert( gamma_move(board, 1, 8, 18) == 0 );
assert( gamma_move(board, 2, 3, 21) == 0 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_move(board, 6, 5, 20) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 1, 15, 5) == 1 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 3, 7, 20) == 1 );
assert( gamma_golden_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_free_fields(board, 4) == 186 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 6, 13, 12) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 18, 3) == 1 );
assert( gamma_move(board, 8, 15, 12) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 16, 5) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 9, 15) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 20, 5) == 1 );
assert( gamma_move(board, 3, 17, 15) == 1 );
assert( gamma_move(board, 4, 15, 5) == 0 );


char* board670199170 = gamma_board(board);
assert( board670199170 != NULL );
assert( strcmp(board670199170, 
"3.532.822445474...1426\n"
"71.678.32..151.64.5.26\n"
"82.64.53112.628...881.\n"
"434..3..812.34.2..117.\n"
"3785...3...317.7.635..\n"
"......734.634..4336743\n"
"331.3..472.2..1..32842\n"
"854743.4...68.4.82715.\n"
"3..6.1.437.7.381327.3.\n"
"7.8..4535.264666..6.2.\n"
"..3.6.7.1.66.35...877.\n"
"1..51...1154..56.61...\n"
"..87...3.15.2.8174.6..\n"
"78.6..87663..73654...6\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..378..7124..3174.136\n"
".......7.2524744147.31\n"
"..17..13..4858..117...\n"
".15848.531.8.446.37.7.\n"
"...26..1.564.55.8.5.11\n"
"4166358323.818..3.16..\n") == 0);
free(board670199170);
board670199170 = NULL;
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board372645807 = gamma_board(board);
assert( board372645807 != NULL );
assert( strcmp(board372645807, 
"3.532.822445474...1426\n"
"71.678.32..151.64.5.26\n"
"82.64.53112.628...881.\n"
"434..3..812.34.2..117.\n"
"3785...3...317.7.635..\n"
"......734.634..4336743\n"
"331.3..472.2..1..32842\n"
"854743.4...68.4.82715.\n"
"3..6.1.437.7.381327.3.\n"
"7.8..4535.264666..6.2.\n"
"..3.6.7.1.66.35...877.\n"
"1..51...1154..56.61...\n"
"..87...3.15.2.8174.6..\n"
"78.6..87663..73654...6\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..378..7124..3174.136\n"
".......7.2524744147.31\n"
"..17..13..4858..117...\n"
".15848.531.8.446.37.7.\n"
"...26..1.564.55.8.5.11\n"
"4166358323.818..3.16..\n") == 0);
free(board372645807);
board372645807 = NULL;
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 6, 21, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 15, 5) == 0 );


char* board975049667 = gamma_board(board);
assert( board975049667 != NULL );
assert( strcmp(board975049667, 
"3.532.822445474...1426\n"
"71.678.32..151.64.5.26\n"
"82.64.53112.628...881.\n"
"434..3..812.34.2..117.\n"
"3785...3...317.7.635..\n"
"......734.634..4336743\n"
"331.3..472.2..1..32842\n"
"854743.4...68.4.82715.\n"
"3..6.1.437.7.381327.3.\n"
"7.8..4535.264666..6.2.\n"
"..3.6.7.1.66.35...877.\n"
"1..51...1154..56.61...\n"
"..87...3.15.2.8174.6..\n"
"78.6..87663..73654...6\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..378..7124..3174.136\n"
".6.....7.2524744147.31\n"
"..17..13..4858..117...\n"
".15848.531.8.446.37.7.\n"
"...26..1.564.55.8.5.11\n"
"4166358323.818..3.16..\n") == 0);
free(board975049667);
board975049667 = NULL;
assert( gamma_move(board, 8, 16, 5) == 0 );
assert( gamma_move(board, 8, 16, 7) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 20, 8) == 1 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_free_fields(board, 4) == 176 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_move(board, 6, 7, 16) == 0 );
assert( gamma_free_fields(board, 6) == 176 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_move(board, 8, 19, 16) == 0 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 21, 15) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );


char* board742226931 = gamma_board(board);
assert( board742226931 != NULL );
assert( strcmp(board742226931, 
"3.532.822445474...1426\n"
"71.678.32..151.64.5.26\n"
"82.64.53112.628...881.\n"
"434..3..812.34.2..117.\n"
"3785...3...317.7.635..\n"
"......734.634..4336743\n"
"331.3..472.2..1..32842\n"
"854743.4..268.4.82715.\n"
"3..6.1.437.7.381327.3.\n"
"7.8..4535.264666..6.2.\n"
"..346.7.1.66.35...877.\n"
"1..51...1154..56.61...\n"
"..87...3.15.2.8174.6..\n"
"78.6..87663.773654..16\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..378..7124..3174.136\n"
".6..4..772524744147.31\n"
"..17..13..4858..117...\n"
".15848.531.8.446.37.7.\n"
"...26..1.564.55.8.5.11\n"
"41663583238818..3.16..\n") == 0);
free(board742226931);
board742226931 = NULL;
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_move(board, 6, 4, 16) == 1 );
assert( gamma_busy_fields(board, 6) == 40 );
assert( gamma_free_fields(board, 6) == 170 );
assert( gamma_move(board, 7, 9, 21) == 0 );


char* board449659015 = gamma_board(board);
assert( board449659015 != NULL );
assert( strcmp(board449659015, 
"3.532.822445474...1426\n"
"71.678.32..151.64.5.26\n"
"82.64.53112.628...881.\n"
"434..3..812.34.2..117.\n"
"3785...3...317.7.635..\n"
"....6.734.634..4336743\n"
"331.3..472.2..1..32842\n"
"854743.4..268.4.82715.\n"
"3..6.1.437.7.381327.3.\n"
"7.8..4535.264666..6.2.\n"
"..346.7.1.66.35...877.\n"
"1..51...1154..56.61...\n"
"..87...3.15.2.8174.6..\n"
"78.6..87663.773654..16\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..378..7124..3174.136\n"
".6..4..772524744147.31\n"
"..17..13..4858..117...\n"
".15848.531.8.446.37.7.\n"
"...26..1.564.55.8.5.11\n"
"41663583238818..3.16..\n") == 0);
free(board449659015);
board449659015 = NULL;
assert( gamma_move(board, 8, 13, 17) == 0 );
assert( gamma_move(board, 8, 9, 17) == 1 );
assert( gamma_busy_fields(board, 8) == 33 );
assert( gamma_move(board, 1, 21, 5) == 0 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 9, 18) == 0 );
assert( gamma_move(board, 4, 19, 9) == 0 );
assert( gamma_free_fields(board, 4) == 168 );
assert( gamma_move(board, 5, 10, 20) == 1 );
assert( gamma_move(board, 5, 18, 21) == 0 );
assert( gamma_move(board, 6, 2, 16) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 13, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 3, 21) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_golden_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 3, 15) == 1 );
assert( gamma_move(board, 5, 20, 14) == 0 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 34 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 1, 19) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_golden_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 17, 16) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 21, 20) == 0 );


char* board623223633 = gamma_board(board);
assert( board623223633 != NULL );
assert( strcmp(board623223633, 
"3.532.822445474...1426\n"
"71.678.32.5151.64.5.26\n"
"82.64.53112.628...881.\n"
"434..3..812.34.2..117.\n"
"3785...3.8.317.7.635..\n"
"..6.6.734.634..4336743\n"
"33133..472.2..1..32842\n"
"854743.4..268.4.82715.\n"
"3..6.1.437.7.381327.3.\n"
"7.8..4535.264666..6.2.\n"
"..346.7.1.66.35...877.\n"
"1..512..1154..56.61...\n"
"..87...3.15.2.8174.6..\n"
"78.6..87663.773654..16\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..378..7124.53174.136\n"
".6..4..772524744147.31\n"
"..17..23..4858..117...\n"
".15848.531.8.446.37.7.\n"
"..826..1.564.55.8.5.11\n"
"41663583238818..3.16..\n") == 0);
free(board623223633);
board623223633 = NULL;
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 1) == 0 );
assert( gamma_move(board, 7, 21, 17) == 1 );
assert( gamma_move(board, 8, 12, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 5, 6, 18) == 1 );
assert( gamma_move(board, 6, 4, 13) == 1 );
assert( gamma_move(board, 7, 19, 11) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 8, 12, 17) == 0 );
assert( gamma_move(board, 8, 3, 18) == 1 );
assert( gamma_free_fields(board, 8) == 158 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_golden_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 30 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 20, 17) == 1 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 5, 14, 13) == 0 );
assert( gamma_move(board, 5, 15, 18) == 0 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_move(board, 6, 20, 20) == 0 );
assert( gamma_move(board, 7, 14, 12) == 0 );
assert( gamma_move(board, 8, 18, 4) == 0 );
assert( gamma_move(board, 1, 16, 14) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_move(board, 3, 1, 21) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_free_fields(board, 4) == 153 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 19, 17) == 0 );
assert( gamma_move(board, 7, 10, 15) == 1 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 1, 8, 20) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 19, 18) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 47 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 6, 5, 21) == 1 );
assert( gamma_move(board, 7, 11, 17) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_golden_move(board, 8, 14, 20) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 2, 15, 0) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_move(board, 6, 20, 6) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 19, 5) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_move(board, 7, 18, 16) == 0 );
assert( gamma_move(board, 7, 17, 19) == 1 );
assert( gamma_move(board, 8, 19, 21) == 0 );
assert( gamma_free_fields(board, 8) == 145 );
assert( gamma_golden_move(board, 8, 18, 15) == 0 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_golden_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 19, 2) == 1 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 5, 13, 20) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 16, 12) == 1 );
assert( gamma_move(board, 8, 21, 5) == 0 );
assert( gamma_move(board, 8, 18, 15) == 0 );
assert( gamma_move(board, 1, 18, 14) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 10, 13) == 1 );


char* board760356441 = gamma_board(board);
assert( board760356441 != NULL );
assert( strcmp(board760356441, 
"335326822445474...1426\n"
"71.678.32.5151.64.5.26\n"
"82.64.53112.628..7881.\n"
"4348.35.812.34.2..117.\n"
"3785...3.8.317.7.63547\n"
"..6.6.734.634..4336743\n"
"33133..47272..1..32842\n"
"854743.4..268.4.82715.\n"
"3..661.43727.381327.3.\n"
"7.8..4535.2646667.6.2.\n"
"..346.7.1666.35...877.\n"
"1..5125.1154..56.61...\n"
"..871.23.15.2.8174.6..\n"
"78.6..87663.773654..16\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6..4..772524744147.31\n"
"..17.6232.4858..117...\n"
".15848.531.8.446.3727.\n"
".28266.1.564.55.8.5.11\n"
"41663583238818123.16..\n") == 0);
free(board760356441);
board760356441 = NULL;
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 3, 13, 20) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 19, 1) == 1 );
assert( gamma_move(board, 6, 3, 20) == 0 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 4, 21) == 0 );
assert( gamma_move(board, 1, 11, 16) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_free_fields(board, 1) == 138 );
assert( gamma_move(board, 2, 17, 12) == 1 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 0, 21) == 0 );
assert( gamma_move(board, 6, 15, 15) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 8, 16, 18) == 1 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 21, 2) == 0 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 15, 16) == 0 );
assert( gamma_free_fields(board, 6) == 135 );
assert( gamma_move(board, 7, 11, 15) == 0 );
assert( gamma_free_fields(board, 7) == 135 );
assert( gamma_move(board, 8, 5, 21) == 0 );
assert( gamma_move(board, 8, 18, 14) == 0 );
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 17, 16) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_move(board, 4, 16, 18) == 1 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 6, 19, 2) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 47 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 21, 17) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_free_fields(board, 8) == 134 );
assert( gamma_move(board, 1, 20, 2) == 0 );
assert( gamma_move(board, 2, 0, 19) == 0 );


char* board145347474 = gamma_board(board);
assert( board145347474 != NULL );
assert( strcmp(board145347474, 
"335326822445474...1426\n"
"71.678.32.5151.64.5.26\n"
"82.64.53112.628..7881.\n"
"4348.35.812.34.24.117.\n"
"3785...3.8.317.7.63547\n"
"..6.6.734.634..4336743\n"
"33133..47272..16.32842\n"
"854743.4..268.4.82715.\n"
"3..661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..346.7.1666.35...877.\n"
"1..5125.1154..56.61...\n"
"..871.23.15.2.8174.6..\n"
"78.6..87663.773654..16\n"
"187..36..663.73.43658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6..4..772524744147.31\n"
"..17.6232.48587.117...\n"
".15848.531.8.446.3727.\n"
".28266.1.564.55.8.5511\n"
"41663583238818123.16..\n") == 0);
free(board145347474);
board145347474 = NULL;
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 6, 1, 15) == 0 );
assert( gamma_move(board, 7, 13, 21) == 0 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );


char* board144429866 = gamma_board(board);
assert( board144429866 != NULL );
assert( strcmp(board144429866, 
"335326822445474...1426\n"
"71.678.32.5151.64.5.26\n"
"82.64.53112.628..7881.\n"
"4348.35.812.34.24.117.\n"
"3785...3.8.317.7.63547\n"
"..6.6.734.634..4336743\n"
"33133..47272..16.32842\n"
"854743.43.268.4.82715.\n"
"3..661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..346.7.1666.35...877.\n"
"1..5125.1154..56.61...\n"
"..871.23.15.2.8174.6..\n"
"78.6..876635773654..16\n"
"187.836..663.73.43658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6..4..772524744147.31\n"
"..17.6232.48587.117...\n"
".15848.531.8.446.3727.\n"
".28266.1.564.55.8.5511\n"
"41663583238818123.16..\n") == 0);
free(board144429866);
board144429866 = NULL;
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 18, 17) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 17, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 19, 19) == 0 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_move(board, 7, 11, 17) == 0 );
assert( gamma_free_fields(board, 7) == 131 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 20) == 0 );
assert( gamma_busy_fields(board, 8) == 36 );
assert( gamma_free_fields(board, 8) == 131 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 15, 14) == 1 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 10, 17) == 1 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_free_fields(board, 7) == 128 );
assert( gamma_move(board, 8, 11, 21) == 0 );
assert( gamma_move(board, 1, 19, 15) == 0 );
assert( gamma_move(board, 2, 10, 20) == 0 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 3, 3, 20) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 18, 8) == 1 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );


char* board471712600 = gamma_board(board);
assert( board471712600 != NULL );
assert( strcmp(board471712600, 
"335326822445474...1426\n"
"71.678.32.5151.64.5.26\n"
"82.64.53112.628..7881.\n"
"4348.35.812.34.24.117.\n"
"3785...3.84317.7.63547\n"
"..6.6.734.634..4336743\n"
"33133..47272..16.32842\n"
"854743.43.268.4282715.\n"
"3..661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..346.721666.35...877.\n"
"1..5125.1154..56.61...\n"
"..871.23115.2.8174.6..\n"
"78.6..8766357736544.16\n"
"187.836..663.73.43658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6..4..772524744147.31\n"
"..17.6232.48587.117...\n"
".15848.531.8.446.3727.\n"
".28266.1.564.55.8.5511\n"
"41663583238818123.16..\n") == 0);
free(board471712600);
board471712600 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_golden_move(board, 7, 20, 10) == 0 );
assert( gamma_move(board, 8, 15, 13) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 19) == 1 );


char* board943164049 = gamma_board(board);
assert( board943164049 != NULL );
assert( strcmp(board943164049, 
"335326822445474...1426\n"
"71.678.32.5151.64.5.26\n"
"82264.53112.628..7881.\n"
"4348.35.812.34.24.117.\n"
"3785...3.84317.7.63547\n"
"..6.6.734.634..4336743\n"
"33133..47272..16.32842\n"
"854743.43.268.4282715.\n"
"3..661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..346.721666.35...877.\n"
"1..5125.1154..56.61...\n"
"..871.23115.2.8174.6..\n"
"78.6..8766357736544.16\n"
"187.836..663.73.43658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6..4..772524744147.31\n"
"..17.6232.48587.117...\n"
".15848.531.8.446.3727.\n"
".28266.1.564.55.8.5511\n"
"41663583238818123.16..\n") == 0);
free(board943164049);
board943164049 = NULL;
assert( gamma_move(board, 3, 17, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 7, 17, 8) == 0 );
assert( gamma_move(board, 8, 17, 16) == 0 );
assert( gamma_move(board, 1, 11, 21) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 5, 21) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 11, 17) == 0 );
assert( gamma_move(board, 1, 20, 17) == 0 );
assert( gamma_move(board, 2, 17, 20) == 1 );


char* board297711873 = gamma_board(board);
assert( board297711873 != NULL );
assert( strcmp(board297711873, 
"335326822445474...1426\n"
"71.678.32.5151.6425.26\n"
"82264.53112.628..7881.\n"
"4348.35.812.34.24.117.\n"
"3785...3.84317.7.63547\n"
"..6.6.734.634..4336743\n"
"33133..47272..16.32842\n"
"854743.43.268.4282715.\n"
"3..661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..356.721666.35...877.\n"
"1..5125.1154..56.61...\n"
"..871.23115.2.8174.6..\n"
"78.6..8766357736544.16\n"
"187.836..663.73.43658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6..4..772524744147.31\n"
"..17.6232.48587.117...\n"
".15848.531.8.446.3727.\n"
".28266.1.564.55.8.5511\n"
"41663583238818123.16..\n") == 0);
free(board297711873);
board297711873 = NULL;
assert( gamma_move(board, 3, 18, 21) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_move(board, 5, 5, 21) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 12, 21) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 21, 3) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 122 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 3, 16) == 1 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 7, 3, 18) == 0 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 8, 7, 15) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 11, 16) == 0 );
assert( gamma_move(board, 2, 1, 20) == 0 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 3, 20, 20) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 21) == 0 );
assert( gamma_move(board, 7, 12, 19) == 0 );
assert( gamma_move(board, 7, 16, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 9, 18) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_free_fields(board, 8) == 118 );
assert( gamma_golden_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 1, 15, 12) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 118 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 13, 15) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 7) == 116 );
assert( gamma_move(board, 8, 17, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 7, 21) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 21, 12) == 0 );
assert( gamma_move(board, 4, 9, 21) == 0 );
assert( gamma_move(board, 4, 12, 20) == 0 );
assert( gamma_free_fields(board, 5) == 116 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 17, 11) == 1 );
assert( gamma_free_fields(board, 6) == 115 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 20) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 38 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 2, 20, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 4, 19, 9) == 0 );
assert( gamma_move(board, 5, 19, 21) == 0 );
assert( gamma_move(board, 6, 7, 18) == 1 );
assert( gamma_move(board, 6, 21, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 15, 12) == 0 );
assert( gamma_move(board, 8, 11, 16) == 0 );
assert( gamma_move(board, 8, 20, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_golden_move(board, 8, 13, 17) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 19, 1) == 0 );
assert( gamma_move(board, 3, 5, 17) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 10, 19) == 0 );
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_busy_fields(board, 6) == 51 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 21) == 0 );
assert( gamma_move(board, 3, 15, 7) == 1 );
assert( gamma_move(board, 3, 9, 21) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 5, 15, 16) == 0 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_move(board, 6, 18, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 17, 16) == 0 );
assert( gamma_move(board, 8, 10, 18) == 0 );
assert( gamma_golden_move(board, 8, 1, 19) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 13, 19) == 0 );


char* board707695731 = gamma_board(board);
assert( board707695731 != NULL );
assert( strcmp(board707695731, 
"335326822445474...1426\n"
"71.678.32.5151.6425.26\n"
"82264.53112.628..7881.\n"
"4348.356812.34.24.117.\n"
"3785.3.3.84317.7.63547\n"
"..646.734.634..4336743\n"
"33133..47272.516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..356.721666.35..6877.\n"
"1..512561154..56.61...\n"
"..871.23115.2.8174.6..\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
"..17.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.1.564555.8.5511\n"
"41663583238818123.16..\n") == 0);
free(board707695731);
board707695731 = NULL;
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 21, 16) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );


char* board800432034 = gamma_board(board);
assert( board800432034 != NULL );
assert( strcmp(board800432034, 
"335326822445474...1426\n"
"71.678.32.5151.6425.26\n"
"82264.53112.628..7881.\n"
"4348.356812.34.24.117.\n"
"3785.3.3.84317.7.63547\n"
"..646.734.634..4336743\n"
"33133..47272.516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..356.721666.35..6877.\n"
"1..512561154..56.61...\n"
"..871.23115.2.8174.6..\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
"..17.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.1.564555.8.5511\n"
"41663583238818123.16..\n") == 0);
free(board800432034);
board800432034 = NULL;
assert( gamma_move(board, 5, 3, 20) == 0 );
assert( gamma_free_fields(board, 5) == 109 );
assert( gamma_move(board, 6, 17, 21) == 1 );
assert( gamma_move(board, 7, 21, 0) == 1 );
assert( gamma_move(board, 8, 3, 16) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 4, 18, 17) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 52 );
assert( gamma_move(board, 7, 20, 9) == 1 );
assert( gamma_move(board, 7, 17, 6) == 0 );
assert( gamma_golden_move(board, 7, 20, 15) == 0 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 1, 19, 20) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 9, 19) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );


char* board853383854 = gamma_board(board);
assert( board853383854 != NULL );
assert( strcmp(board853383854, 
"335326822445474..61426\n"
"71.678.32.5151.6425126\n"
"82264.53112.628..7881.\n"
"4348.356812.34.24.117.\n"
"3785.3.3.84317.7.63547\n"
"..646.734.634..4336743\n"
"33133..47272.516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..356.721666.35..6877.\n"
"1.2512561154..56.61...\n"
"..871.23115.2.8174.67.\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
"..17.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.16.7\n") == 0);
free(board853383854);
board853383854 = NULL;
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 6, 20, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 17, 6) == 0 );
assert( gamma_move(board, 7, 9, 17) == 0 );
assert( gamma_move(board, 8, 6, 17) == 1 );
assert( gamma_move(board, 2, 9, 21) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 56 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 20, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 2, 19) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 14, 20) == 0 );
assert( gamma_move(board, 8, 6, 19) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 20, 0) == 1 );
assert( gamma_free_fields(board, 2) == 101 );
assert( gamma_golden_move(board, 2, 9, 20) == 0 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 19, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 19, 21) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 19, 17) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 8, 13, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board300869318 = gamma_board(board);
assert( board300869318 != NULL );
assert( strcmp(board300869318, 
"335326822445474..61426\n"
"71.678.32.5151.6425126\n"
"82264.53112.628..7881.\n"
"4348.356812.34.24.117.\n"
"3785.383.84317.7.63547\n"
"..646.734.634..4336743\n"
"33133..47272.516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..356.721666.35..6877.\n"
"1.2512561154..56.61...\n"
"..871.23115.2.8174.67.\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
"..17.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board300869318);
board300869318 = NULL;
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 12, 11) == 1 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 12, 21) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 17, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 10, 20) == 0 );
assert( gamma_free_fields(board, 8) == 100 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 17, 19) == 0 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 21, 11) == 1 );
assert( gamma_move(board, 6, 13, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 11, 15) == 0 );
assert( gamma_free_fields(board, 8) == 98 );


char* board118679469 = gamma_board(board);
assert( board118679469 != NULL );
assert( strcmp(board118679469, 
"335326822445474..61426\n"
"71.678.32.5151.6425126\n"
"82264.53112.628..7881.\n"
"4348.356812.34.24.117.\n"
"3785.383.84317.7.63547\n"
"..646.734.634..4336743\n"
"33133..47272.516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.43727.381327.3.\n"
"7.8..45355264666726.2.\n"
"..356.721666235..68774\n"
"1.2512561154.656.61...\n"
"..871.23115.2.8174.67.\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
"..17.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board118679469);
board118679469 = NULL;
assert( gamma_move(board, 1, 21, 15) == 0 );
assert( gamma_move(board, 2, 10, 20) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 18, 1) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 6, 20) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 4, 17, 4) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 21, 16) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 16, 1) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 9, 20) == 1 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_free_fields(board, 4) == 95 );


char* board590653989 = gamma_board(board);
assert( board590653989 != NULL );
assert( strcmp(board590653989, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.53112.628..7881.\n"
"4348.356812.34.24.117.\n"
"3785.383.84317.7.63547\n"
"..646.734.634..4336743\n"
"33133..47272.516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.437272381327.3.\n"
"7.8..45355264666726.2.\n"
"..356.721666235..68774\n"
"1.2512561154.656.61...\n"
"..871.23115.2.8174.67.\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
"..17.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board590653989);
board590653989 = NULL;
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 5, 4, 17) == 1 );
assert( gamma_move(board, 6, 10, 20) == 0 );
assert( gamma_move(board, 6, 21, 10) == 1 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 5, 18) == 0 );
assert( gamma_move(board, 8, 14, 18) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 2, 14, 15) == 0 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 18, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 17, 20) == 0 );
assert( gamma_move(board, 6, 14, 13) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 16, 14) == 0 );
assert( gamma_move(board, 7, 11, 17) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 8, 18, 8) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 9, 16) == 1 );
assert( gamma_move(board, 2, 11, 16) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 5, 10, 16) == 0 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_move(board, 6, 18, 7) == 0 );
assert( gamma_move(board, 7, 12, 19) == 0 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 12, 21) == 0 );
assert( gamma_move(board, 2, 16, 16) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 19, 21) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 7, 4, 16) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 15, 6) == 0 );
assert( gamma_move(board, 8, 12, 16) == 0 );
assert( gamma_move(board, 1, 12, 21) == 0 );
assert( gamma_move(board, 1, 14, 19) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 4, 19, 11) == 0 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_golden_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 15, 11) == 1 );
assert( gamma_move(board, 8, 10, 16) == 0 );
assert( gamma_move(board, 8, 9, 15) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 8, 18) == 0 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 3, 15, 19) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 16, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 54 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 7, 15, 16) == 0 );
assert( gamma_move(board, 7, 17, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 8, 12, 19) == 0 );
assert( gamma_move(board, 8, 17, 17) == 0 );


char* board374567299 = gamma_board(board);
assert( board374567299 != NULL );
assert( strcmp(board374567299, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.53112.628..7881.\n"
"4348.356812.34824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..47272.516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.437272381327.3.\n"
"7.8..45355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
"..17.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board374567299);
board374567299 = NULL;
assert( gamma_move(board, 1, 20, 16) == 0 );
assert( gamma_move(board, 2, 12, 15) == 1 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 19, 5) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 12, 19) == 0 );
assert( gamma_move(board, 7, 20, 6) == 0 );


char* board813457131 = gamma_board(board);
assert( board813457131 != NULL );
assert( strcmp(board813457131, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.53112.628..7881.\n"
"4348.356812.34824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516.32842\n"
"854743.43.268.4282715.\n"
"3.4661.437272381327.3.\n"
"7.8..45355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6..8766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".6.8468772524744147.31\n"
".617.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board813457131);
board813457131 = NULL;
assert( gamma_move(board, 8, 19, 18) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 3, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 5, 13, 14) == 1 );
assert( gamma_move(board, 6, 2, 18) == 0 );
assert( gamma_move(board, 6, 0, 18) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 21) == 0 );
assert( gamma_move(board, 7, 12, 18) == 0 );
assert( gamma_move(board, 8, 3, 15) == 0 );
assert( gamma_move(board, 2, 21, 16) == 0 );
assert( gamma_move(board, 3, 3, 19) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 18) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_golden_move(board, 6, 19, 6) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 8, 2, 21) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 1, 21, 16) == 0 );
assert( gamma_move(board, 1, 21, 6) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 19) == 0 );
assert( gamma_move(board, 5, 17, 16) == 0 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 19) == 0 );
assert( gamma_move(board, 7, 15, 5) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 18, 21) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 45 );


char* board760882049 = gamma_board(board);
assert( board760882049 != NULL );
assert( strcmp(board760882049, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.53112.628..7881.\n"
"4348.356812.34824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516.32842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8..45355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board760882049);
board760882049 = NULL;
assert( gamma_move(board, 3, 21, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_move(board, 6, 12, 21) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 13, 21) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 18, 10) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 20, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 15) == 0 );
assert( gamma_move(board, 6, 11, 19) == 1 );
assert( gamma_busy_fields(board, 6) == 57 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 1, 17) == 0 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );


char* board955072487 = gamma_board(board);
assert( board955072487 != NULL );
assert( strcmp(board955072487, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812.34824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516.32842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8..45355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117..8\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board955072487);
board955072487 = NULL;
assert( gamma_move(board, 4, 21, 7) == 0 );
assert( gamma_move(board, 4, 12, 19) == 0 );
assert( gamma_move(board, 5, 15, 16) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 18, 17) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 17, 20) == 0 );
assert( gamma_move(board, 2, 20, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 18, 16) == 0 );


char* board780777656 = gamma_board(board);
assert( board780777656 != NULL );
assert( strcmp(board780777656, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812.34824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516.32842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8..45355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board780777656);
board780777656 = NULL;
assert( gamma_move(board, 6, 19, 16) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 8, 17, 10) == 0 );
assert( gamma_move(board, 8, 20, 6) == 0 );
assert( gamma_move(board, 1, 9, 21) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 20, 2) == 0 );
assert( gamma_move(board, 3, 9, 21) == 0 );
assert( gamma_move(board, 3, 11, 18) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_move(board, 7, 21, 15) == 0 );
assert( gamma_move(board, 7, 9, 18) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 8, 4, 12) == 1 );


char* board448355475 = gamma_board(board);
assert( board448355475 != NULL );
assert( strcmp(board448355475, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812334824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516.32842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8.845355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board448355475);
board448355475 = NULL;
assert( gamma_move(board, 1, 17, 19) == 0 );
assert( gamma_golden_move(board, 1, 0, 11) == 0 );


char* board332233623 = gamma_board(board);
assert( board332233623 != NULL );
assert( strcmp(board332233623, 
"335326822445474..61426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812334824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516.32842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8.845355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.8364.663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board332233623);
board332233623 = NULL;
assert( gamma_move(board, 3, 21, 16) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 16, 21) == 1 );
assert( gamma_move(board, 5, 18, 17) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 0, 18) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 7, 1, 18) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 19, 15) == 0 );
assert( gamma_move(board, 2, 16, 15) == 1 );
assert( gamma_move(board, 3, 15, 17) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 18, 6) == 0 );
assert( gamma_golden_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 8, 10, 20) == 0 );
assert( gamma_move(board, 8, 3, 19) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );


char* board107372408 = gamma_board(board);
assert( board107372408 != NULL );
assert( strcmp(board107372408, 
"335326822445474.461426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812334824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516232842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8.845355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.83644663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board107372408);
board107372408 = NULL;
assert( gamma_move(board, 7, 10, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 19, 16) == 0 );
assert( gamma_move(board, 5, 9, 21) == 0 );
assert( gamma_move(board, 5, 16, 20) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 21, 21) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 3, 18) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_golden_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 15, 20) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 7, 19, 16) == 0 );
assert( gamma_move(board, 8, 20, 11) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );


char* board406760926 = gamma_board(board);
assert( board406760926 != NULL );
assert( strcmp(board406760926, 
"335326822445474.461426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812334824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516232842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8.845355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.83644663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board406760926);
board406760926 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board383341837 = gamma_board(board);
assert( board383341837 != NULL );
assert( strcmp(board383341837, 
"335326822445474.461426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812334824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516232842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8.845355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.83644663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board383341837);
board383341837 = NULL;
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 7, 20, 17) == 0 );
assert( gamma_move(board, 8, 19, 7) == 0 );
assert( gamma_move(board, 8, 21, 10) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 3, 6, 20) == 0 );
assert( gamma_move(board, 4, 21, 6) == 0 );
assert( gamma_move(board, 4, 7, 18) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 21, 15) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 13, 20) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 1, 12, 19) == 0 );
assert( gamma_move(board, 1, 14, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 57 );
assert( gamma_move(board, 5, 17, 16) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 21, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 20) == 0 );
assert( gamma_move(board, 3, 3, 19) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 2, 21) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 13, 21) == 0 );
assert( gamma_move(board, 7, 19, 8) == 0 );
assert( gamma_move(board, 8, 16, 13) == 0 );
assert( gamma_move(board, 8, 20, 15) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 18, 8) == 0 );
assert( gamma_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 3, 21, 16) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 16, 14) == 0 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_golden_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 18, 13) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );


char* board352857327 = gamma_board(board);
assert( board352857327 != NULL );
assert( strcmp(board352857327, 
"335326822445474.461426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812334824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516232842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8.845355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.83644663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board352857327);
board352857327 = NULL;
assert( gamma_move(board, 2, 12, 19) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_golden_move(board, 3, 19, 3) == 0 );
assert( gamma_move(board, 4, 17, 16) == 0 );
assert( gamma_move(board, 4, 20, 9) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_free_fields(board, 5) == 76 );
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_move(board, 7, 10, 19) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 20, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 18, 20) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );


char* board571476331 = gamma_board(board);
assert( board571476331 != NULL );
assert( strcmp(board571476331, 
"335326822445474.461426\n"
"71.67883215151.6425126\n"
"82264.531126628..7881.\n"
"4348.356812334824.117.\n"
"37855383.84317.7.63547\n"
"..646.7341634..4336743\n"
"33133..472722516232842\n"
"854743.43.26854282715.\n"
"3.4661.437272381327.3.\n"
"7.8.845355264666726.2.\n"
".1356.7216662355.68774\n"
"1.2512561154.656.61..6\n"
"..871.23115.248174.67.\n"
"78.6.68766357736544.16\n"
"187.83644663.73343658.\n"
"5515534...133724473747\n"
"5..3784.7124.53174.136\n"
".688468772524744147.31\n"
".617.6232548587.117.28\n"
".15848.531.8.446.3727.\n"
".28266.11564555.8.5511\n"
"41663583238818123.1627\n") == 0);
free(board571476331);
board571476331 = NULL;
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 20, 8) == 0 );
assert( gamma_move(board, 5, 20, 15) == 0 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 10, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 8, 3, 19) == 0 );
assert( gamma_move(board, 1, 7, 21) == 0 );
assert( gamma_move(board, 2, 18, 20) == 0 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_move(board, 7, 0, 17) == 0 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 15, 20) == 0 );
assert( gamma_move(board, 8, 3, 19) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 13, 17) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 5, 18, 11) == 0 );
assert( gamma_move(board, 5, 18, 17) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 3, 17) == 0 );
assert( gamma_move(board, 8, 4, 19) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 18, 15) == 0 );
assert( gamma_move(board, 3, 3, 19) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 12, 17) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 11, 16) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 13, 19) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_move(board, 3, 10, 20) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 21) == 0 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 19, 18) == 0 );
assert( gamma_move(board, 7, 5, 15) == 0 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 10, 19) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 1, 17, 5) == 0 );
assert( gamma_golden_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 17, 19) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 8, 11, 15) == 0 );
assert( gamma_move(board, 1, 10, 20) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_golden_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 12, 19) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_move(board, 4, 8, 17) == 0 );
assert( gamma_move(board, 5, 18, 17) == 0 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_free_fields(board, 5) == 74 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 2, 21) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_free_fields(board, 7) == 33 );


gamma_delete(board);

    return 0;
}
