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
uuid: 162294270
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 25, 8, 49);
assert( board != NULL );


assert( gamma_move(board, 1, 21, 3) == 0 );
assert( gamma_move(board, 1, 10, 19) == 1 );
assert( gamma_free_fields(board, 1) == 374 );
assert( gamma_move(board, 2, 21, 6) == 0 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 6, 12, 23) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 23) == 1 );
assert( gamma_move(board, 8, 6, 17) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 2, 10, 23) == 1 );


char* board126699511 = gamma_board(board);
assert( board126699511 != NULL );
assert( strcmp(board126699511, 
"...............\n"
"........7.2.6..\n"
"...............\n"
"...............\n"
"...............\n"
"..........1....\n"
"...............\n"
"......8........\n"
"...............\n"
"...............\n"
"...............\n"
"............3..\n"
"...............\n"
"...1...........\n"
"...............\n"
"..............2\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"........6......\n"
"...............\n"
".........3.....\n"
"...............\n"
"...............\n") == 0);
free(board126699511);
board126699511 = NULL;
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 7, 17) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 6, 21, 7) == 0 );
assert( gamma_move(board, 6, 8, 15) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 15, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 20) == 1 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_move(board, 2, 0, 19) == 1 );
assert( gamma_move(board, 2, 7, 19) == 1 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_move(board, 4, 4, 19) == 1 );
assert( gamma_move(board, 5, 10, 14) == 1 );
assert( gamma_free_fields(board, 5) == 352 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 17, 14) == 0 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_golden_move(board, 8, 19, 10) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 19, 9) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );


char* board739760986 = gamma_board(board);
assert( board739760986 != NULL );
assert( strcmp(board739760986, 
"...............\n"
"........7.2.6..\n"
"...............\n"
"...............\n"
".....8.........\n"
"2...4..2..1....\n"
"...............\n"
"......84.......\n"
"...............\n"
"........6......\n"
"..........5....\n"
"..........2.3..\n"
"...............\n"
"...17....2.....\n"
"...........1...\n"
"..............2\n"
".........1...3.\n"
"...............\n"
"...............\n"
"...............\n"
"...3....6......\n"
"...........4...\n"
"....3.8..3.....\n"
"....1..........\n"
"..........6.5..\n") == 0);
free(board739760986);
board739760986 = NULL;
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 2, 21) == 1 );
assert( gamma_golden_move(board, 4, 19, 7) == 0 );
assert( gamma_move(board, 5, 8, 19) == 1 );
assert( gamma_move(board, 8, 24, 12) == 0 );
assert( gamma_move(board, 8, 7, 15) == 1 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 2, 23, 0) == 0 );
assert( gamma_move(board, 2, 11, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_free_fields(board, 4) == 336 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 21, 3) == 0 );
assert( gamma_move(board, 8, 14, 15) == 1 );
assert( gamma_move(board, 1, 14, 1) == 1 );
assert( gamma_move(board, 2, 24, 8) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 24, 4) == 0 );
assert( gamma_move(board, 3, 9, 24) == 1 );
assert( gamma_move(board, 4, 2, 18) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 24, 6) == 0 );
assert( gamma_move(board, 5, 10, 24) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 2, 22) == 1 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_move(board, 8, 6, 13) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 22, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_golden_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 20, 13) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 22, 0) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 21, 3) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 7, 18, 4) == 0 );
assert( gamma_move(board, 7, 6, 22) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 3, 13, 16) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 12) == 1 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 21, 7) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 1, 12, 14) == 1 );
assert( gamma_move(board, 2, 12, 23) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 23) == 1 );
assert( gamma_move(board, 3, 14, 16) == 1 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 7, 14, 22) == 1 );
assert( gamma_move(board, 8, 22, 12) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 3, 22, 5) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 17, 10) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 23, 3) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 11, 11) == 1 );


char* board455113639 = gamma_board(board);
assert( board455113639 != NULL );
assert( strcmp(board455113639, 
".........35....\n"
"........7.236..\n"
"..6...7.......7\n"
"..4............\n"
".....8.........\n"
"2...4..25.1....\n"
"..4............\n"
"......84.......\n"
".............33\n"
".......86.....8\n"
"....4.....521..\n"
"....2.8...243..\n"
".......5..6....\n"
"...171...258...\n"
"...2.......1...\n"
"...2..........2\n"
"........71..333\n"
"5.5.4..........\n"
".8.............\n"
".......5.......\n"
"...3..4.63.....\n"
"...7.8.....4.7.\n"
"....328..3....1\n"
"....1....44.6.1\n"
".....8..4.6.5..\n") == 0);
free(board455113639);
board455113639 = NULL;
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 6, 18) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_golden_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 12, 13) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 17, 5) == 0 );
assert( gamma_free_fields(board, 8) == 292 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 4, 18) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 7, 22) == 1 );
assert( gamma_move(board, 4, 0, 17) == 1 );
assert( gamma_move(board, 5, 24, 7) == 0 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 1, 22) == 1 );
assert( gamma_move(board, 8, 14, 5) == 1 );
assert( gamma_move(board, 8, 0, 13) == 1 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 1, 14, 12) == 1 );
assert( gamma_move(board, 2, 24, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board644564685 = gamma_board(board);
assert( board644564685 != NULL );
assert( strcmp(board644564685, 
".........35....\n"
"........7.236..\n"
".76...73......7\n"
"..4............\n"
".....8.........\n"
"2...4..25.1....\n"
"..4.2.4........\n"
"4.....84.......\n"
".............33\n"
".......86.....8\n"
"....4.....521..\n"
"8...2.8...243..\n"
".......5.66...1\n"
"...171...258...\n"
"...2.......1...\n"
"...2..........2\n"
".......571..333\n"
"5.5.4..........\n"
".8.........5...\n"
"..3....51.....8\n"
"...3.74.63.....\n"
"..27.8.....4.7.\n"
"....328..3....1\n"
"....1....44.6.1\n"
"...7.8..466.51.\n") == 0);
free(board644564685);
board644564685 = NULL;
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 21, 8) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 12, 4) == 1 );
assert( gamma_move(board, 8, 12, 19) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 5, 18) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_free_fields(board, 3) == 275 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 6, 22) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 8, 14) == 1 );
assert( gamma_move(board, 1, 13, 14) == 1 );
assert( gamma_move(board, 1, 14, 10) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );


char* board231240459 = gamma_board(board);
assert( board231240459 != NULL );
assert( strcmp(board231240459, 
".........35....\n"
"........7.236..\n"
".76...73......7\n"
"..4............\n"
".....8.........\n"
"2...4..25.1.8..\n"
"..4.224........\n"
"4.....84.......\n"
".............33\n"
".......86.....8\n"
"....4...8.5211.\n"
"8...2.8...243..\n"
".......5.66...1\n"
"...171...258...\n"
"...2.1.....1..1\n"
"...2......7...2\n"
".......571..333\n"
"5.5.4.56.......\n"
".8.........5...\n"
"..3....51.....8\n"
"...3.74.63..8..\n"
"..27.8.....4.7.\n"
"....328..3....1\n"
"....1....4436.1\n"
"...7.8..466.51.\n") == 0);
free(board231240459);
board231240459 = NULL;
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 14, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 21, 14) == 0 );
assert( gamma_move(board, 6, 11, 24) == 1 );
assert( gamma_move(board, 7, 15, 3) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 22) == 1 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_free_fields(board, 2) == 263 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_move(board, 3, 14, 13) == 1 );
assert( gamma_move(board, 4, 16, 11) == 0 );
assert( gamma_move(board, 4, 14, 11) == 1 );
assert( gamma_move(board, 5, 5, 18) == 0 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 21, 13) == 0 );
assert( gamma_golden_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 13, 21) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 1, 17, 14) == 0 );
assert( gamma_move(board, 2, 24, 8) == 0 );
assert( gamma_move(board, 2, 1, 23) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 7, 7, 18) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_golden_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_move(board, 1, 6, 19) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 23, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 8, 20) == 1 );
assert( gamma_move(board, 6, 6, 23) == 1 );
assert( gamma_move(board, 7, 9, 14) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 12, 2) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 3, 3, 18) == 1 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 4, 5, 16) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 5, 1, 22) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 6, 9, 20) == 1 );
assert( gamma_move(board, 7, 15, 12) == 0 );
assert( gamma_move(board, 7, 3, 12) == 1 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 4, 23) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 14, 21) == 1 );
assert( gamma_golden_move(board, 5, 15, 14) == 0 );
assert( gamma_move(board, 6, 11, 12) == 1 );
assert( gamma_move(board, 6, 5, 17) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_free_fields(board, 7) == 226 );
assert( gamma_move(board, 1, 13, 23) == 1 );
assert( gamma_move(board, 1, 0, 14) == 1 );
assert( gamma_move(board, 2, 23, 7) == 0 );
assert( gamma_move(board, 2, 12, 18) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 7, 15, 13) == 0 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 8, 15, 12) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 13, 23) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 6, 14, 18) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 8, 16, 12) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_move(board, 2, 13, 15) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 24, 7) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 0, 15) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 11, 15) == 1 );
assert( gamma_golden_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_golden_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 9, 17) == 0 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_move(board, 5, 1, 15) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 19, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 21 );
assert( gamma_move(board, 1, 2, 19) == 1 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 13, 20) == 1 );
assert( gamma_move(board, 6, 12, 18) == 0 );
assert( gamma_move(board, 6, 12, 22) == 1 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 9, 13) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 9, 15) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 6, 21, 3) == 0 );
assert( gamma_move(board, 7, 16, 1) == 0 );
assert( gamma_free_fields(board, 7) == 200 );
assert( gamma_golden_move(board, 7, 11, 3) == 1 );
assert( gamma_move(board, 8, 21, 0) == 0 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_golden_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 3, 21) == 1 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 12, 23) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );


char* board845812478 = gamma_board(board);
assert( board845812478 != NULL );
assert( strcmp(board845812478, 
".........356...\n"
".2..4.6.7.2361.\n"
"176...73....6.7\n"
"..44.........85\n"
".....8..66...5.\n"
"2.1.4.125.1.8..\n"
"..432247....2.6\n"
"4....684.4.....\n"
".....4.......33\n"
"85.....862.1.28\n"
"1.4.4..5875211.\n"
"8.5.2.8..8243.3\n"
"...7...1.666..1\n"
"7..171.13258.24\n"
"..12.15.6.21..1\n"
"...284....7.2.2\n"
"1.....4571..333\n"
"5.5.4.56....63.\n"
"48..22.55..5...\n"
"..383..51....48\n"
"..43.747635.8..\n"
"..27.871...7.7.\n"
"64..328..3.78.1\n"
"...71...5443621\n"
"87.778..466.51.\n") == 0);
free(board845812478);
board845812478 = NULL;
assert( gamma_move(board, 8, 14, 0) == 1 );
assert( gamma_move(board, 8, 1, 18) == 1 );


char* board102876383 = gamma_board(board);
assert( board102876383 != NULL );
assert( strcmp(board102876383, 
".........356...\n"
".2..4.6.7.2361.\n"
"176...73....6.7\n"
"..44.........85\n"
".....8..66...5.\n"
"2.1.4.125.1.8..\n"
".8432247....2.6\n"
"4....684.4.....\n"
".....4.......33\n"
"85.....862.1.28\n"
"1.4.4..5875211.\n"
"8.5.2.8..8243.3\n"
"...7...1.666..1\n"
"7..171.13258.24\n"
"..12.15.6.21..1\n"
"...284....7.2.2\n"
"1.....4571..333\n"
"5.5.4.56....63.\n"
"48..22.55..5...\n"
"..383..51....48\n"
"..43.747635.8..\n"
"..27.871...7.7.\n"
"64..328..3.78.1\n"
"...71...5443621\n"
"87.778..466.518\n") == 0);
free(board102876383);
board102876383 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 12, 23) == 0 );
assert( gamma_move(board, 2, 0, 23) == 1 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 23, 3) == 0 );
assert( gamma_move(board, 4, 10, 21) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 20, 2) == 0 );
assert( gamma_move(board, 5, 2, 18) == 0 );
assert( gamma_move(board, 6, 19, 3) == 0 );
assert( gamma_golden_move(board, 6, 19, 2) == 0 );
assert( gamma_move(board, 7, 12, 16) == 1 );
assert( gamma_busy_fields(board, 7) == 23 );
assert( gamma_free_fields(board, 7) == 189 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board342144331 = gamma_board(board);
assert( board342144331 != NULL );
assert( strcmp(board342144331, 
".........356...\n"
"22..4.6.7.2361.\n"
"176...73....6.7\n"
"..44......4..85\n"
".....8..66...5.\n"
"2.1.4.125.1.8..\n"
".8432247....2.6\n"
"4....684.4.....\n"
".....4......733\n"
"85.....862.1.28\n"
"1.4.4..5875211.\n"
"8.5.2.8..8243.3\n"
"...7...1.666..1\n"
"7..171.13258.24\n"
"..12.15.6.21..1\n"
"...284....7.2.2\n"
"1.....4571..333\n"
"5.5.4.56....63.\n"
"48..22.55..5...\n"
"..383..51....48\n"
"..43.747635.8..\n"
"..27.871...7.7.\n"
"64..328..3.78.1\n"
"...71...5443621\n"
"87.778..466.518\n") == 0);
free(board342144331);
board342144331 = NULL;
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 9, 16) == 1 );
assert( gamma_free_fields(board, 1) == 187 );
assert( gamma_move(board, 2, 10, 17) == 1 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 6, 18) == 0 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 13, 17) == 1 );
assert( gamma_move(board, 8, 8, 22) == 1 );
assert( gamma_move(board, 8, 12, 14) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_free_fields(board, 5) == 179 );
assert( gamma_move(board, 6, 22, 4) == 0 );
assert( gamma_free_fields(board, 6) == 179 );
assert( gamma_move(board, 7, 4, 22) == 1 );
assert( gamma_free_fields(board, 7) == 178 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 12, 14) == 0 );
assert( gamma_free_fields(board, 8) == 178 );
assert( gamma_busy_fields(board, 1) == 29 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 178 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_free_fields(board, 4) == 177 );
assert( gamma_move(board, 5, 15, 3) == 0 );
assert( gamma_move(board, 6, 0, 22) == 0 );
assert( gamma_move(board, 6, 13, 9) == 1 );
assert( gamma_free_fields(board, 6) == 176 );


char* board450670253 = gamma_board(board);
assert( board450670253 != NULL );
assert( strcmp(board450670253, 
".........356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"..44......4..85\n"
".....8..66...5.\n"
"2.1.4.125.1.8..\n"
".8432247....2.6\n"
"4....684.42..6.\n"
".....4...1..733\n"
"85.....862.1.28\n"
"1.4.4..5875211.\n"
"825.2.8..8243.3\n"
"...7...1.6664.1\n"
"7..171.13258.24\n"
"..12.15.6.21..1\n"
"...284....7.262\n"
"1.5...4571..333\n"
"5.5.4.56....634\n"
"48..22.55..5...\n"
"..383..51....48\n"
"..43.747635.8..\n"
"..27.871...757.\n"
"64.1328..3.78.1\n"
"...71..15443621\n"
"87.778..466.518\n") == 0);
free(board450670253);
board450670253 = NULL;
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_move(board, 8, 9, 21) == 1 );
assert( gamma_move(board, 1, 6, 24) == 1 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_free_fields(board, 3) == 174 );
assert( gamma_golden_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 17, 14) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 5, 3, 14) == 1 );
assert( gamma_golden_move(board, 6, 15, 7) == 0 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 7, 9, 21) == 0 );
assert( gamma_move(board, 8, 22, 10) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_golden_move(board, 2, 15, 11) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 13, 17) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 24, 1) == 0 );
assert( gamma_move(board, 7, 2, 18) == 0 );
assert( gamma_busy_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 8, 21) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 2) == 0 );


char* board730467762 = gamma_board(board);
assert( board730467762 != NULL );
assert( strcmp(board730467762, 
"......1..356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"..44....884..85\n"
".....8..66...5.\n"
"2.1.4.125.1.8..\n"
".8432247....2.6\n"
"4....684.42..6.\n"
".....4...1..733\n"
"85.....862.1.28\n"
"1.454..5875211.\n"
"825.2.8..8243.3\n"
"...7...1.6664.1\n"
"76.171.13258.24\n"
"..12.15.6.21..1\n"
"...284....7.262\n"
"1.5...4571..333\n"
"5.5.4.56....634\n"
"48..22.55..51..\n"
"..383..51....48\n"
"..43.747635.8..\n"
"..27.8717..757.\n"
"64.1328..3.78.1\n"
".8.71..15443621\n"
"87.778..466.518\n") == 0);
free(board730467762);
board730467762 = NULL;
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_move(board, 5, 3, 20) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 14, 14) == 1 );
assert( gamma_free_fields(board, 2) == 165 );
assert( gamma_move(board, 3, 2, 21) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );


char* board139921844 = gamma_board(board);
assert( board139921844 != NULL );
assert( strcmp(board139921844, 
"......1..356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"..44....884..85\n"
"...5.8..66...5.\n"
"2.1.4.125.1.8..\n"
".8432247....2.6\n"
"4....684.42..6.\n"
".....4...1..733\n"
"85.....862.1.28\n"
"1.454..58752112\n"
"82572.8..8243.3\n"
"...7.5.1.6664.1\n"
"76.171.13258.24\n"
"..12.15.6.21..1\n"
"...284.6..7.262\n"
"1.5...4571..333\n"
"5.5.4.56....634\n"
"48..22.55..51..\n"
"..383..51....48\n"
"..43.747635.8..\n"
"..27.8717..757.\n"
"6481328..3.78.1\n"
".8.71.815443621\n"
"87.778..466.518\n") == 0);
free(board139921844);
board139921844 = NULL;
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_move(board, 6, 9, 18) == 1 );
assert( gamma_move(board, 8, 24, 2) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 13, 19) == 1 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 12, 20) == 1 );
assert( gamma_free_fields(board, 6) == 158 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_golden_move(board, 7, 0, 14) == 0 );


char* board806618788 = gamma_board(board);
assert( board806618788 != NULL );
assert( strcmp(board806618788, 
"......1..356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"..44....884..85\n"
"...5.8..66..65.\n"
"2.1.4.125.1.84.\n"
".8432247.6..2.6\n"
"4....684.42..6.\n"
".....4...1..733\n"
"85.....862.1.28\n"
"1.454..58752112\n"
"82572.8..8243.3\n"
"...7.5.1.6664.1\n"
"76.171.13258.24\n"
"..12.15.6.21..1\n"
"...284.6..7.262\n"
"1.5...4571..333\n"
"5.5.4.56....634\n"
"48..22.55..51..\n"
"..383..51....48\n"
"..43.747635.8..\n"
"..27.8717..757.\n"
"6481328..3.78.1\n"
".8.71.815443621\n"
"87.778..466.518\n") == 0);
free(board806618788);
board806618788 = NULL;
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 3, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_move(board, 5, 14, 13) == 0 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_golden_move(board, 6, 13, 3) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 3, 17) == 1 );
assert( gamma_golden_move(board, 7, 24, 10) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 2, 20, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_free_fields(board, 3) == 154 );
assert( gamma_move(board, 4, 22, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 1, 24) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 18, 13) == 0 );
assert( gamma_move(board, 8, 22, 13) == 0 );
assert( gamma_move(board, 1, 23, 7) == 0 );
assert( gamma_move(board, 2, 18, 0) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 23, 9) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 6, 5, 15) == 1 );
assert( gamma_busy_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_free_fields(board, 8) == 152 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 6, 20) == 1 );
assert( gamma_move(board, 3, 22, 9) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 10, 24) == 0 );
assert( gamma_move(board, 4, 6, 23) == 0 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 15, 6) == 0 );


char* board158208567 = gamma_board(board);
assert( board158208567 != NULL );
assert( strcmp(board158208567, 
".5....1..356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"..44....884..85\n"
"...5.82.66..65.\n"
"2.1.4.125.1.84.\n"
".8432247.6..2.6\n"
"4..7.684.42..6.\n"
".....4...1..733\n"
"85.3.6.862.1.28\n"
"1.454..58752112\n"
"82572.8..8243.3\n"
"...7.5.1.6664.1\n"
"76.171.13258.24\n"
"..12.15.6.21..1\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56....634\n"
"48..22.55..51..\n"
"..383..51....48\n"
".243.747635.8..\n"
"..27.8717..756.\n"
"6481328..3.78.1\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board158208567);
board158208567 = NULL;
assert( gamma_move(board, 8, 14, 20) == 1 );
assert( gamma_move(board, 8, 10, 13) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_free_fields(board, 1) == 149 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 23, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 8, 13, 18) == 1 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 1, 15, 12) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 5, 7, 22) == 0 );
assert( gamma_free_fields(board, 5) == 147 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 6, 2, 17) == 1 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 8, 19, 14) == 0 );
assert( gamma_move(board, 8, 2, 19) == 0 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 22) == 0 );
assert( gamma_move(board, 3, 12, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 144 );


char* board124987107 = gamma_board(board);
assert( board124987107 != NULL );
assert( strcmp(board124987107, 
".5....1..356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"..44....884..85\n"
"...5.82.66..658\n"
"2.1.4.125.1.84.\n"
".8432247.6..286\n"
"4.67.684.42..6.\n"
".....4...1..733\n"
"85.3.6.862.1328\n"
"1.454..58752112\n"
"82572.8..8243.3\n"
"...7.5.126664.1\n"
"76.171.13258.24\n"
"..12.15.6.21..1\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56.6..634\n"
"48..22.55..51..\n"
"..383..51....48\n"
".243.747635.8..\n"
"..27.8717..756.\n"
"6481328..3.78.1\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board124987107);
board124987107 = NULL;
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 22, 5) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 8, 12, 18) == 0 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_free_fields(board, 2) == 143 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 143 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 12, 18) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 21, 6) == 0 );
assert( gamma_move(board, 8, 7, 22) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board230526893 = gamma_board(board);
assert( board230526893 != NULL );
assert( strcmp(board230526893, 
".5....1..356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"..44....884..85\n"
"...5.82.66..658\n"
"2.1.4.125.1.84.\n"
".8432247.6..286\n"
"4.67.684.42..6.\n"
".....4...1..733\n"
"85.3.6.862.1328\n"
"1.454..58752112\n"
"82572.8..8243.3\n"
"...7.5.126664.1\n"
"76.171.13258.24\n"
"..12.15.6.21..1\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56.6..634\n"
"48..22.55..51..\n"
"..3834.51....48\n"
".243.747635.8..\n"
"..27.8717..7562\n"
"6481328..3.78.1\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board230526893);
board230526893 = NULL;
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_golden_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 2, 20) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 5, 24, 0) == 0 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 6, 15) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 24, 4) == 0 );
assert( gamma_move(board, 2, 12, 23) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 15) == 1 );
assert( gamma_move(board, 7, 13, 18) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 8, 10, 18) == 1 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 10, 16) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_golden_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 7, 0, 21) == 1 );
assert( gamma_move(board, 7, 5, 19) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 15) == 0 );


char* board400638874 = gamma_board(board);
assert( board400638874 != NULL );
assert( strcmp(board400638874, 
".5....1..356...\n"
"22..4.6.7.2361.\n"
"176.7.738...6.7\n"
"7.44....884..85\n"
"..35.82.66..658\n"
"2.1.47125.1.84.\n"
".8432247.68.286\n"
"4.67.684.42..6.\n"
".....4...12.733\n"
"8563.66862.1328\n"
"3.454..58752112\n"
"82572.8..8243.3\n"
"..57.53126664.1\n"
"76.171.13258.24\n"
"..12.15.6.21.31\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56.6..634\n"
"48..22.551451..\n"
"..3834.51....48\n"
".2438747635.8..\n"
"..27.8717..7562\n"
"6481328..3.78.1\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board400638874);
board400638874 = NULL;
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 24, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 4, 1, 21) == 1 );
assert( gamma_free_fields(board, 4) == 128 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 6, 16, 11) == 0 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_free_fields(board, 7) == 128 );
assert( gamma_move(board, 8, 23, 5) == 0 );
assert( gamma_move(board, 8, 12, 18) == 0 );
assert( gamma_busy_fields(board, 8) == 34 );
assert( gamma_move(board, 1, 7, 24) == 1 );
assert( gamma_move(board, 1, 4, 15) == 1 );
assert( gamma_move(board, 2, 24, 2) == 0 );
assert( gamma_move(board, 3, 6, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_free_fields(board, 4) == 125 );
assert( gamma_move(board, 5, 22, 13) == 0 );
assert( gamma_move(board, 5, 14, 23) == 1 );
assert( gamma_move(board, 6, 14, 14) == 0 );
assert( gamma_move(board, 6, 1, 20) == 1 );
assert( gamma_busy_fields(board, 7) == 29 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 4, 16, 8) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 21, 5) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 22, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 29 );
assert( gamma_golden_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 9, 24) == 0 );
assert( gamma_busy_fields(board, 8) == 34 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_free_fields(board, 2) == 122 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 4, 15) == 0 );
assert( gamma_move(board, 5, 6, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 22, 11) == 0 );
assert( gamma_move(board, 7, 10, 19) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 16, 8) == 0 );
assert( gamma_move(board, 8, 0, 15) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_move(board, 1, 15, 14) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 11, 16) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 13) == 1 );
assert( gamma_move(board, 6, 4, 19) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_free_fields(board, 7) == 119 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_free_fields(board, 1) == 119 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 24, 8) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 6, 24, 12) == 0 );
assert( gamma_move(board, 6, 6, 15) == 0 );
assert( gamma_move(board, 7, 19, 1) == 0 );
assert( gamma_move(board, 8, 20, 4) == 0 );
assert( gamma_move(board, 8, 13, 21) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 24, 8) == 0 );
assert( gamma_move(board, 3, 7, 16) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 6, 7, 23) == 1 );
assert( gamma_busy_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 1, 21, 9) == 0 );
assert( gamma_move(board, 2, 22, 9) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 19, 3) == 0 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 6, 20, 10) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 20, 11) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );


char* board999782389 = gamma_board(board);
assert( board999782389 != NULL );
assert( strcmp(board999782389, 
".5....11.356...\n"
"22..4.667.23615\n"
"176.7.738...6.7\n"
"7444....884..85\n"
".635.82.66..658\n"
"2.1.47125.1.84.\n"
".8432247.68.286\n"
"4.67.684.42..6.\n"
".....4.3.125733\n"
"8563166862.1328\n"
"3.454.358752112\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171.13258.24\n"
"..12.15.6.21.31\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"48..22.551451..\n"
"..3834.51....48\n"
".243874763548..\n"
"..27.8717..7562\n"
"64813288.3.78.1\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board999782389);
board999782389 = NULL;
assert( gamma_move(board, 2, 19, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 3, 22) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );


char* board764678736 = gamma_board(board);
assert( board764678736 != NULL );
assert( strcmp(board764678736, 
".5....11.356...\n"
"22..4.667.23615\n"
"17647.738...6.7\n"
"7444....884..85\n"
".635.82.66..658\n"
"2.1.47125.1.84.\n"
".8432247.68.286\n"
"4.67.684.42..6.\n"
".....4.3.125733\n"
"8563166862.1328\n"
"3.454.358752112\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171.13258.24\n"
"..12.15.6.21.31\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"48..22.551451..\n"
"..3834.51....48\n"
".243874763548..\n"
"..27.8717..7562\n"
"6481328833.78.1\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board764678736);
board764678736 = NULL;
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 9, 17) == 0 );
assert( gamma_move(board, 7, 6, 20) == 0 );
assert( gamma_move(board, 8, 9, 17) == 0 );
assert( gamma_move(board, 1, 23, 2) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 22, 10) == 0 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 23, 3) == 0 );
assert( gamma_move(board, 4, 8, 23) == 0 );
assert( gamma_golden_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_free_fields(board, 5) == 112 );
assert( gamma_move(board, 6, 23, 2) == 0 );
assert( gamma_move(board, 7, 14, 1) == 0 );


char* board318060700 = gamma_board(board);
assert( board318060700 != NULL );
assert( strcmp(board318060700, 
".5....11.356...\n"
"22..4.667.23615\n"
"17647.738...6.7\n"
"7444....884..85\n"
".635.82.66..658\n"
"2.1.47125.1.84.\n"
".8432247.68.286\n"
"4.67.684.42..6.\n"
".....4.3.125733\n"
"8563166862.1328\n"
"3.454.358752112\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171.13258.24\n"
"..12.15.6521.31\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"48..22.551451..\n"
"..3834.51....48\n"
".243874763548..\n"
"..27.8717..7562\n"
"6481328833.78.1\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board318060700);
board318060700 = NULL;
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 35 );
assert( gamma_golden_move(board, 8, 14, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 4, 4, 16) == 1 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 6, 22, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 24, 12) == 0 );
assert( gamma_golden_move(board, 8, 21, 0) == 0 );


char* board840856604 = gamma_board(board);
assert( board840856604 != NULL );
assert( strcmp(board840856604, 
".5....11.356...\n"
"22..4.667.23615\n"
"17647.738...6.7\n"
"7444....884..85\n"
".635.82.66..658\n"
"2.1.47125.1.84.\n"
".8432247.68.286\n"
"4.67.684.42..6.\n"
"....44.3.125733\n"
"8563166862.1328\n"
"3.454.358752112\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171513258.24\n"
"..12.15.6521.31\n"
"...284.6..7.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"48..22.551451..\n"
"..3834.51....48\n"
".243874763548..\n"
"..27.8717..7562\n"
"6481328833.78.8\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board840856604);
board840856604 = NULL;
assert( gamma_move(board, 2, 24, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 4, 5, 22) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_free_fields(board, 5) == 108 );
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_golden_move(board, 6, 22, 4) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_golden_move(board, 4, 13, 14) == 1 );
assert( gamma_move(board, 5, 20, 7) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 17, 14) == 0 );
assert( gamma_move(board, 7, 3, 16) == 1 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_free_fields(board, 2) == 107 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_free_fields(board, 4) == 107 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board423677449 = gamma_board(board);
assert( board423677449 != NULL );
assert( strcmp(board423677449, 
".5....11.356...\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444....884..85\n"
".635.82.66..658\n"
"2.1.47125.1.84.\n"
".8432247.68.286\n"
"4.67.684.42..6.\n"
"...744.3.125733\n"
"8563166862.1328\n"
"3.454.358752142\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171513258.24\n"
"..12.15.6521.31\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"48..22.551451..\n"
"..3834.51....48\n"
".243874763548..\n"
"..27.8717..7562\n"
"6481328833.78.8\n"
".8.717815443621\n"
"87.778..466.518\n") == 0);
free(board423677449);
board423677449 = NULL;
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 6, 14, 22) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 17, 8) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_free_fields(board, 1) == 104 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 11, 18) == 1 );
assert( gamma_busy_fields(board, 5) == 36 );
assert( gamma_move(board, 7, 24, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 36 );
assert( gamma_move(board, 1, 20, 7) == 0 );
assert( gamma_free_fields(board, 1) == 103 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_free_fields(board, 4) == 103 );
assert( gamma_move(board, 5, 21, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 36 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 7, 20, 7) == 0 );
assert( gamma_move(board, 1, 24, 12) == 0 );
assert( gamma_move(board, 1, 4, 20) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );


char* board662617424 = gamma_board(board);
assert( board662617424 != NULL );
assert( strcmp(board662617424, 
".5....11.356...\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444....884..85\n"
".635182.66..658\n"
"2.1.47125.1.84.\n"
".8432247.685286\n"
"4.67.684.42..6.\n"
"...744.3.125733\n"
"8563166862.1328\n"
"3.454.358752142\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171513258.24\n"
"..12.15.6521.31\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"48..22.551451..\n"
"..3834.51...548\n"
"6243874763548..\n"
"..27.8717..7562\n"
"6481328833.78.8\n"
".8.717815443621\n"
"87.778.1466.518\n") == 0);
free(board662617424);
board662617424 = NULL;
assert( gamma_move(board, 3, 23, 3) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 5, 18) == 0 );
assert( gamma_move(board, 6, 11, 15) == 0 );
assert( gamma_move(board, 6, 8, 17) == 1 );
assert( gamma_busy_fields(board, 6) == 38 );
assert( gamma_free_fields(board, 6) == 101 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_free_fields(board, 7) == 99 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 19) == 0 );
assert( gamma_move(board, 2, 1, 14) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_free_fields(board, 5) == 98 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 13, 20) == 0 );
assert( gamma_move(board, 8, 12, 10) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_golden_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 20, 11) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_free_fields(board, 5) == 95 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 7, 9, 21) == 0 );
assert( gamma_move(board, 8, 16, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 38 );
assert( gamma_free_fields(board, 8) == 95 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 16, 2) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 23, 9) == 0 );
assert( gamma_move(board, 8, 22, 9) == 0 );
assert( gamma_move(board, 8, 4, 19) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, 22) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 23, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_free_fields(board, 1) == 94 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_golden_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_free_fields(board, 3) == 94 );
assert( gamma_move(board, 4, 23, 5) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 16, 8) == 0 );
assert( gamma_move(board, 6, 12, 24) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 14, 15) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 24, 4) == 0 );
assert( gamma_move(board, 7, 3, 22) == 0 );
assert( gamma_busy_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 4, 20) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 21, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 16, 12) == 0 );
assert( gamma_move(board, 6, 1, 18) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_free_fields(board, 8) == 92 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 3, 10, 24) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 20, 11) == 0 );
assert( gamma_free_fields(board, 4) == 92 );


char* board837061417 = gamma_board(board);
assert( board837061417 != NULL );
assert( strcmp(board837061417, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444....884..85\n"
".635182.66..658\n"
"2.1.47125.1.84.\n"
".8432247.685286\n"
"4.67.684642..6.\n"
"...744.3.125733\n"
"8563166862.1328\n"
"32454.358752142\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171513258.24\n"
".412.15.6521831\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"..3834.51...548\n"
"6243874763548..\n"
".727.8717..7562\n"
"6481328833.78.8\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board837061417);
board837061417 = NULL;
assert( gamma_move(board, 5, 14, 21) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 4, 19) == 0 );
assert( gamma_move(board, 7, 5, 14) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_move(board, 3, 22, 11) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 11, 17) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 21, 6) == 0 );
assert( gamma_move(board, 8, 19, 11) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 7, 21) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board182945037 = gamma_board(board);
assert( board182945037 != NULL );
assert( strcmp(board182945037, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.66..658\n"
"2.1.47125.1.84.\n"
".8432247.685286\n"
"4.67.6846426.6.\n"
"...744.3.125733\n"
"8563166862.1328\n"
"324547358752142\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171513258.24\n"
".412.15.6521831\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"..3834.51...548\n"
"62438747635485.\n"
".727.8717..7562\n"
"6481328833.78.8\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board182945037);
board182945037 = NULL;
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 20, 11) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 13, 19) == 0 );
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 22, 10) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 8, 2, 18) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 12, 13) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 23, 2) == 0 );
assert( gamma_move(board, 5, 23, 9) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 7, 18) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 19, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_golden_move(board, 8, 11, 13) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 14, 17) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_free_fields(board, 2) == 86 );
assert( gamma_move(board, 3, 10, 4) == 0 );


char* board193259915 = gamma_board(board);
assert( board193259915 != NULL );
assert( strcmp(board193259915, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.66..658\n"
"2.1.47125.1.84.\n"
".8432247.685286\n"
"4.67.6846426.61\n"
"...744.3.125733\n"
"8563166862.1328\n"
"324547358752142\n"
"82572.8..824363\n"
"..57453126664.1\n"
"76.171513258.24\n"
".412.15.6521831\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"..3834.51...548\n"
"62438747635485.\n"
".727.87178.7562\n"
"6481328833.78.8\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board193259915);
board193259915 = NULL;
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 13, 12) == 1 );
assert( gamma_move(board, 7, 20, 11) == 0 );
assert( gamma_move(board, 8, 7, 15) == 0 );


char* board398832264 = gamma_board(board);
assert( board398832264 != NULL );
assert( strcmp(board398832264, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.66..658\n"
"2.1.47125.1.84.\n"
".8432247.685286\n"
"4.67.6846426.61\n"
"...744.3.125733\n"
"8563166862.1328\n"
"324547358752142\n"
"82572.8..824363\n"
"..5745312666461\n"
"76.171513258.24\n"
".412.15.6521831\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"..3834.51...548\n"
"62438747635485.\n"
".727.87178.7562\n"
"6481328833.78.8\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board398832264);
board398832264 = NULL;
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 4, 24, 14) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );


char* board402169676 = gamma_board(board);
assert( board402169676 != NULL );
assert( strcmp(board402169676, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.66..658\n"
"2.1.47125.1.84.\n"
".8432247.685286\n"
"4.67.6846426.61\n"
"...744.3.125733\n"
"8563166862.1328\n"
"324547358752142\n"
"82572.8..824363\n"
"..5745312666461\n"
"76.171513258.24\n"
".412.1526521831\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"..3834.51...548\n"
"62438747635485.\n"
".727.87178.7562\n"
"6481328833.78.8\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board402169676);
board402169676 = NULL;
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 4, 20) == 0 );
assert( gamma_move(board, 4, 2, 22) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 5, 7, 19) == 0 );
assert( gamma_move(board, 6, 18, 8) == 0 );
assert( gamma_move(board, 7, 13, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 22, 10) == 0 );
assert( gamma_move(board, 1, 21, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 4, 24, 8) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 14, 14) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_golden_move(board, 8, 16, 13) == 0 );
assert( gamma_move(board, 1, 9, 19) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 19, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 10, 20) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 19, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 22, 13) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 82 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 19, 14) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_free_fields(board, 8) == 82 );
assert( gamma_move(board, 1, 20, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 24, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 5, 6, 15) == 0 );
assert( gamma_move(board, 6, 24, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 24, 2) == 0 );
assert( gamma_move(board, 7, 1, 19) == 1 );
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_move(board, 8, 24, 14) == 0 );
assert( gamma_move(board, 8, 2, 18) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 22) == 0 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 4, 10, 13) == 0 );


char* board410017215 = gamma_board(board);
assert( board410017215 != NULL );
assert( strcmp(board410017215, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.664.658\n"
"271.4712511.84.\n"
".8432247.685286\n"
"4.67.6846426.61\n"
"...744.3.125733\n"
"8563166862.1328\n"
"324547358752142\n"
"82572.8..824363\n"
"..5745312666461\n"
"76.171513258.24\n"
".412.1526521831\n"
"...284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"..3834.51...548\n"
"62438747635485.\n"
".727.87178.7562\n"
"6481328833.78.8\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board410017215);
board410017215 = NULL;
assert( gamma_move(board, 5, 12, 20) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );
assert( gamma_move(board, 7, 17, 1) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 18) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 24, 0) == 0 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_golden_move(board, 7, 20, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 13, 17) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 24, 13) == 0 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 23) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 13, 20) == 0 );
assert( gamma_move(board, 8, 23, 5) == 0 );
assert( gamma_move(board, 8, 0, 18) == 0 );
assert( gamma_move(board, 1, 24, 3) == 0 );
assert( gamma_move(board, 2, 4, 17) == 1 );
assert( gamma_move(board, 3, 24, 4) == 0 );
assert( gamma_move(board, 3, 6, 24) == 0 );
assert( gamma_move(board, 4, 21, 6) == 0 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 19) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_free_fields(board, 7) == 75 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 10, 15) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 24, 13) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 24, 13) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 8, 21) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 22, 13) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 6, 2, 15) == 0 );
assert( gamma_free_fields(board, 6) == 71 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 7, 6, 22) == 0 );
assert( gamma_move(board, 8, 16, 2) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 1, 21, 4) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_golden_move(board, 1, 23, 8) == 0 );
assert( gamma_move(board, 2, 22, 10) == 0 );
assert( gamma_move(board, 3, 24, 14) == 0 );


char* board769672893 = gamma_board(board);
assert( board769672893 != NULL );
assert( strcmp(board769672893, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.664.658\n"
"271.4712511684.\n"
"28432247.685286\n"
"4.6726846426.61\n"
".4.744.3.125733\n"
"856316686241328\n"
"324547358752142\n"
"82572.8..824363\n"
"..5745312666461\n"
"76.171513258.24\n"
".412.1526521831\n"
"6.8284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"2.3834.51...548\n"
"62438747635485.\n"
".727.87178.7562\n"
"648132883367818\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board769672893);
board769672893 = NULL;
assert( gamma_move(board, 4, 22, 13) == 0 );
assert( gamma_move(board, 4, 7, 19) == 0 );


char* board181533350 = gamma_board(board);
assert( board181533350 != NULL );
assert( strcmp(board181533350, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.664.658\n"
"271.4712511684.\n"
"28432247.685286\n"
"4.6726846426.61\n"
".4.744.3.125733\n"
"856316686241328\n"
"324547358752142\n"
"82572.8..824363\n"
"..5745312666461\n"
"76.171513258.24\n"
".412.1526521831\n"
"6.8284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.62.634\n"
"485.227551451..\n"
"2.3834.51...548\n"
"62438747635485.\n"
".727.87178.7562\n"
"648132883367818\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board181533350);
board181533350 = NULL;
assert( gamma_move(board, 5, 22, 10) == 0 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 20, 0) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 1, 23, 9) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 23, 9) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_golden_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 34 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 18, 8) == 0 );
assert( gamma_move(board, 8, 14, 21) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 23, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 39 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 40 );
assert( gamma_free_fields(board, 8) == 70 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );


char* board851048388 = gamma_board(board);
assert( board851048388 != NULL );
assert( strcmp(board851048388, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738...6.7\n"
"7444...1884..85\n"
".635182.664.658\n"
"271.4712511684.\n"
"28432247.685286\n"
"4.6726846426.61\n"
".4.744.3.125733\n"
"856316686241328\n"
"324547358752142\n"
"82572.8..824363\n"
"..5745312666461\n"
"76.171513258.24\n"
".412.1526521831\n"
"6.8284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.52.634\n"
"485.227551451..\n"
"2.3834.51...548\n"
"62438747635485.\n"
".727687178.7562\n"
"648132883367818\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board851048388);
board851048388 = NULL;
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 22, 13) == 0 );
assert( gamma_move(board, 4, 10, 22) == 1 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 21, 11) == 0 );
assert( gamma_move(board, 6, 6, 23) == 0 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_move(board, 8, 22, 11) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 1, 19, 14) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 2, 21, 11) == 0 );
assert( gamma_move(board, 2, 11, 22) == 1 );
assert( gamma_move(board, 3, 24, 3) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 6, 23) == 0 );
assert( gamma_move(board, 6, 20, 11) == 0 );
assert( gamma_move(board, 6, 14, 16) == 0 );


char* board549703105 = gamma_board(board);
assert( board549703105 != NULL );
assert( strcmp(board549703105, 
".5....11.3566..\n"
"22..4.667.23615\n"
"176474738.426.7\n"
"7444...1884..85\n"
".635182.664.658\n"
"271.4712511684.\n"
"28432247.685286\n"
"4.6726846426.61\n"
".4.744.3.125733\n"
"856316686241328\n"
"324547358752142\n"
"82572.8..824363\n"
"..5745312666461\n"
"76.171513258.24\n"
".412.1526521831\n"
"6.8284.6.57.262\n"
"1.55..4571..333\n"
"5.5.4.56.52.634\n"
"485.227551451..\n"
"2.3834.51...548\n"
"62438747635485.\n"
".727687178.7562\n"
"648132883367818\n"
"88.717815443621\n"
"874778.1466.518\n") == 0);
free(board549703105);
board549703105 = NULL;


gamma_delete(board);

    return 0;
}
