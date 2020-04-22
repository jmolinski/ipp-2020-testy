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
uuid: 680120354
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 6, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_free_fields(board, 4) == 203 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 1, 14, 10) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_free_fields(board, 1) == 198 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 13, 12) == 1 );


char* board275801481 = gamma_board(board);
assert( board275801481 != NULL );
assert( strcmp(board275801481, 
"...............\n"
".............2.\n"
"...............\n"
"...5..........1\n"
".............4.\n"
"...............\n"
"...............\n"
"............3..\n"
"......2........\n"
"...1........2..\n"
"..2..6.........\n"
".1....3.....5..\n"
".............4.\n"
"...............\n") == 0);
free(board275801481);
board275801481 = NULL;
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 4, 13, 13) == 1 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_golden_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 6, 13, 7) == 1 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 187 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_free_fields(board, 6) == 185 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 0, 12) == 1 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_free_fields(board, 4) == 168 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 2, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 13) == 1 );
assert( gamma_free_fields(board, 4) == 153 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 12, 11) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 145 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );


char* board536666868 = gamma_board(board);
assert( board536666868 != NULL );
assert( strcmp(board536666868, 
"6.1..34......44\n"
"6.......2....2.\n"
"..3.4.2.11..4..\n"
"...55....113.31\n"
"...6...6.1...4.\n"
"...............\n"
".....3..6..5.6.\n"
"....1.......3..\n"
".....22.15..4..\n"
"55.15.......21.\n"
"..25.63..3..4..\n"
".1...13.14..53.\n"
"36.......35.64.\n"
"352............\n") == 0);
free(board536666868);
board536666868 = NULL;
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_free_fields(board, 2) == 141 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );


char* board671593410 = gamma_board(board);
assert( board671593410 != NULL );
assert( strcmp(board671593410, 
"6.1..34......44\n"
"6.......2....2.\n"
"..3.4.2.11..4..\n"
"...55....113.31\n"
"...6...621...4.\n"
"...............\n"
".....3..6..5.6.\n"
"....1.......3..\n"
".....22.15..4..\n"
"55.15......621.\n"
"..25.63..3..4..\n"
".16.113.14..53.\n"
"36.......35.64.\n"
"352............\n") == 0);
free(board671593410);
board671593410 = NULL;
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_free_fields(board, 6) == 140 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );


char* board513388336 = gamma_board(board);
assert( board513388336 != NULL );
assert( strcmp(board513388336, 
"6.1..34..1...44\n"
"6.......2....2.\n"
"..3.4.2.11..4..\n"
"...55...2113.31\n"
"...6...621...4.\n"
"...............\n"
".....3656..5.6.\n"
"....1.......3..\n"
".....22.15..4..\n"
"55.154.....621.\n"
".625.63..3..4..\n"
".16.113.14..53.\n"
"36.......35.64.\n"
"352............\n") == 0);
free(board513388336);
board513388336 = NULL;
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_golden_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 14, 4) == 1 );


char* board466657391 = gamma_board(board);
assert( board466657391 != NULL );
assert( strcmp(board466657391, 
"6.1..34..1...44\n"
"6.......2....2.\n"
"..3.4.2.11..4..\n"
"...55...2113231\n"
"...6...621...4.\n"
"...............\n"
".....3656..5.6.\n"
"....1.......3..\n"
".....22.15..4..\n"
"55.154.....6214\n"
".625.63..3..4..\n"
".16.113.14..53.\n"
"36.......35.64.\n"
"352...........2\n") == 0);
free(board466657391);
board466657391 = NULL;
assert( gamma_move(board, 6, 13, 8) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_free_fields(board, 6) == 126 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_free_fields(board, 1) == 124 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_free_fields(board, 2) == 123 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_free_fields(board, 3) == 115 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 5, 13, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );


char* board504089696 = gamma_board(board);
assert( board504089696 != NULL );
assert( strcmp(board504089696, 
"6.1..34..1...44\n"
"6...4...2.1.42.\n"
".53.4.2.11..45.\n"
"6..553.22113231\n"
".1.6...621...4.\n"
".2....3.1....6.\n"
"4..163656..5.6.\n"
"....1.......34.\n"
".....22.156.4..\n"
"5531543....6214\n"
".625.63243..4..\n"
"116.113.14..53.\n"
"36.....3.35.645\n"
"352.5224......2\n") == 0);
free(board504089696);
board504089696 = NULL;
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_golden_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );


char* board307451965 = gamma_board(board);
assert( board307451965 != NULL );
assert( strcmp(board307451965, 
"6.1..34..1...44\n"
"6..54...2.1.42.\n"
".53.4.2.11.245.\n"
"6..553.22113231\n"
"2166..3621..14.\n"
"423.4.3.1....6.\n"
"4.2163656..5.6.\n"
"....1.6.....34.\n"
"...5.22.156.4..\n"
"5531543....6214\n"
"5625.63243..43.\n"
"316.113.14..53.\n"
"36...163.35.645\n"
"322.5224......2\n") == 0);
free(board307451965);
board307451965 = NULL;
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );


char* board816217048 = gamma_board(board);
assert( board816217048 != NULL );
assert( strcmp(board816217048, 
"6.1..34..1...44\n"
"6.554...2.1.42.\n"
".5334.2.11.245.\n"
"6..553222113231\n"
"2166..3621..14.\n"
"423.4.3.1....6.\n"
"4.2163656..5.6.\n"
"....1.6.....34.\n"
"...5.22.156.4..\n"
"5531543....6214\n"
"5625.63243..43.\n"
"316.113.14..53.\n"
"36...163.35.645\n"
"322.52244.....2\n") == 0);
free(board816217048);
board816217048 = NULL;
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );


char* board693485197 = gamma_board(board);
assert( board693485197 != NULL );
assert( strcmp(board693485197, 
"6.1..34..1...44\n"
"6.554...2.1.42.\n"
".5334.2.11.245.\n"
"6..553222113231\n"
"2166..3621..14.\n"
"423.423.1....6.\n"
"4.2163656..5.6.\n"
"....1.6.....34.\n"
"...5.22.156.4..\n"
"5531543....6214\n"
"5625.63243..43.\n"
"316.113.14..53.\n"
"36...163.35.645\n"
"322.52244.....2\n") == 0);
free(board693485197);
board693485197 = NULL;
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_golden_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );


char* board646220097 = gamma_board(board);
assert( board646220097 != NULL );
assert( strcmp(board646220097, 
"6.1..34..1...44\n"
"6.554...221.42.\n"
".5334.2.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6.....34.\n"
"...5.22.156.4..\n"
"5531543....6214\n"
"5621.63243..43.\n"
"3166113.145.53.\n"
"36...163.35.645\n"
"322.52244.....2\n") == 0);
free(board646220097);
board646220097 = NULL;
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );


char* board448000138 = gamma_board(board);
assert( board448000138 != NULL );
assert( strcmp(board448000138, 
"6.1..34..1...44\n"
"6.554...221.42.\n"
".5334.2.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"5531543....6214\n"
"5621.63243..43.\n"
"3166113.145.53.\n"
"36...163.35.645\n"
"322.52244.....2\n") == 0);
free(board448000138);
board448000138 = NULL;
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );


char* board283902413 = gamma_board(board);
assert( board283902413 != NULL );
assert( strcmp(board283902413, 
"6.1..34.21...44\n"
"6.554...221.42.\n"
".5334.2.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board283902413);
board283902413 = NULL;
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );


char* board257135850 = gamma_board(board);
assert( board257135850 != NULL );
assert( strcmp(board257135850, 
"6.1..34.21...44\n"
"6.554...221.42.\n"
".533422.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board257135850);
board257135850 = NULL;
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );


char* board231534822 = gamma_board(board);
assert( board231534822 != NULL );
assert( strcmp(board231534822, 
"6.1..34.21...44\n"
"6.554...221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board231534822);
board231534822 = NULL;
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );


char* board439414649 = gamma_board(board);
assert( board439414649 != NULL );
assert( strcmp(board439414649, 
"6.1..34.21...44\n"
"6.554...221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board439414649);
board439414649 = NULL;
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 13, 13) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_golden_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board266633628 = gamma_board(board);
assert( board266633628 != NULL );
assert( strcmp(board266633628, 
"6.1..34.21...44\n"
"6.5543..221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board266633628);
board266633628 = NULL;
assert( gamma_move(board, 3, 10, 1) == 0 );


char* board993628692 = gamma_board(board);
assert( board993628692 != NULL );
assert( strcmp(board993628692, 
"6.1..34.21...44\n"
"6.5543..221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board993628692);
board993628692 = NULL;
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 14, 1) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );


char* board645670923 = gamma_board(board);
assert( board645670923 != NULL );
assert( strcmp(board645670923, 
"6.1..34.21...44\n"
"6.5543..221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board645670923);
board645670923 = NULL;
assert( gamma_move(board, 4, 12, 11) == 0 );


char* board437548067 = gamma_board(board);
assert( board437548067 != NULL );
assert( strcmp(board437548067, 
"6.1..34.21...44\n"
"6.5543..221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.3621..14.\n"
"423.423.1....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"55315432...6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board437548067);
board437548067 = NULL;
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );


char* board490130463 = gamma_board(board);
assert( board490130463 != NULL );
assert( strcmp(board490130463, 
"6.1..34.21...44\n"
"6.5543..221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.36211.14.\n"
"423.42311....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"553154325..6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board490130463);
board490130463 = NULL;
assert( gamma_move(board, 2, 3, 11) == 0 );


char* board228631289 = gamma_board(board);
assert( board228631289 != NULL );
assert( strcmp(board228631289, 
"6.1..34.21...44\n"
"6.5543..221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.36211.14.\n"
"423.42311....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"553154325..6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board228631289);
board228631289 = NULL;
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );


char* board645706606 = gamma_board(board);
assert( board645706606 != NULL );
assert( strcmp(board645706606, 
"6.1..34.21...44\n"
"6.5543..221.42.\n"
"5533422.11.245.\n"
"6..553222113231\n"
"21665.36211.14.\n"
"423.42311....6.\n"
"422163656..556.\n"
"....1.6....234.\n"
"...5.22.156.4..\n"
"553154325..6214\n"
"5621.63243..43.\n"
"3166113.145.533\n"
"36...163.355645\n"
"322.52244.....2\n") == 0);
free(board645706606);
board645706606 = NULL;
assert( gamma_move(board, 6, 6, 7) == 0 );


gamma_delete(board);

    return 0;
}
