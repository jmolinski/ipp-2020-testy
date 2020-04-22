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
uuid: 435349563
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 8, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_free_fields(board, 6) == 216 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_move(board, 1, 13, 9) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board387821979 = gamma_board(board);
assert( board387821979 != NULL );
assert( strcmp(board387821979, 
"...............\n"
"...............\n"
"..5............\n"
".......8.......\n"
"6..............\n"
"........21...1.\n"
"....1......6...\n"
"...............\n"
"...............\n"
"...............\n"
"..............5\n"
"............7..\n"
"1..............\n"
"......4........\n"
"..3............\n") == 0);
free(board387821979);
board387821979 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 10, 13) == 1 );


char* board685085158 = gamma_board(board);
assert( board685085158 != NULL );
assert( strcmp(board685085158, 
"...............\n"
"..........6....\n"
"..5............\n"
".5.....8.......\n"
"6.......3......\n"
"........21...1.\n"
"....1......6...\n"
"...............\n"
"...............\n"
"...............\n"
"..............5\n"
"...4........7..\n"
"1..............\n"
"......4........\n"
"..3............\n") == 0);
free(board685085158);
board685085158 = NULL;
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_free_fields(board, 8) == 207 );
assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 205 );
assert( gamma_move(board, 4, 8, 2) == 1 );


char* board288931687 = gamma_board(board);
assert( board288931687 != NULL );
assert( strcmp(board288931687, 
"...............\n"
"..........61...\n"
"..5............\n"
".5.....8.......\n"
"6.......3......\n"
".......821...1.\n"
"....1......6...\n"
"...............\n"
"...............\n"
"........2......\n"
"..............5\n"
"...4........7..\n"
"1.......4......\n"
"......4........\n"
"..3............\n") == 0);
free(board288931687);
board288931687 = NULL;
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 5, 12, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 14) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_free_fields(board, 4) == 197 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 9, 14) == 1 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 1, 11, 10) == 1 );


char* board598490459 = gamma_board(board);
assert( board598490459 != NULL );
assert( strcmp(board598490459, 
"6........6.....\n"
"..........615..\n"
"..5..5.........\n"
".5.....8.......\n"
"6.......3..1...\n"
".......821...1.\n"
"....1.8....6...\n"
"..8............\n"
"............7.2\n"
".6.4....2......\n"
".8............5\n"
"...4........7..\n"
"1.......4......\n"
"......4........\n"
"..3...........5\n") == 0);
free(board598490459);
board598490459 = NULL;
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 14, 11) == 1 );


char* board343841476 = gamma_board(board);
assert( board343841476 != NULL );
assert( strcmp(board343841476, 
"6........6.....\n"
"..........615..\n"
"..5..5.........\n"
".5.....8......3\n"
"6....2..3..1...\n"
".......821...1.\n"
"....1.8....6...\n"
"2.8............\n"
"............7.2\n"
".634....2......\n"
".8............5\n"
"...4........7..\n"
"1.......4......\n"
"......4........\n"
"..3...........5\n") == 0);
free(board343841476);
board343841476 = NULL;
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 8, 14) == 1 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 11, 12) == 1 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 13, 14) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_free_fields(board, 5) == 173 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_free_fields(board, 1) == 168 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_free_fields(board, 3) == 166 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 12, 10) == 1 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );


char* board956603528 = gamma_board(board);
assert( board956603528 != NULL );
assert( strcmp(board956603528, 
"6.......56...1.\n"
".....8....615..\n"
"..5..55..6.6...\n"
".5.....88.....3\n"
"6.7.22..3..17..\n"
"..2..5.8214..1.\n"
"7...1.8....6...\n"
"2.8.....3......\n"
"............7.2\n"
".634....2....4.\n"
".8...........65\n"
"...4.......17.3\n"
"1.....3.4..4...\n"
".2....45.......\n"
"..3...........5\n") == 0);
free(board956603528);
board956603528 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 7, 12, 13) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 8, 2, 13) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );


char* board967676227 = gamma_board(board);
assert( board967676227 != NULL );
assert( strcmp(board967676227, 
"6.......56...1.\n"
"..8..8....615..\n"
"..5..55..6.6...\n"
".5.....88.....3\n"
"6.7.22..3..17..\n"
"..2..578214..1.\n"
"7...1.8.8..6...\n"
"2.8.....3..6...\n"
"..........1.7.2\n"
".634....2....4.\n"
".8....5....2.65\n"
"...4.......17.3\n"
"1.....3.4..4...\n"
".2..3.45.......\n"
"..3...........5\n") == 0);
free(board967676227);
board967676227 = NULL;
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );


char* board881910440 = gamma_board(board);
assert( board881910440 != NULL );
assert( strcmp(board881910440, 
"6.......56...1.\n"
"..8..8....615..\n"
"..5..55..6.6...\n"
".5.....88.....3\n"
"6.7.22..3..17.3\n"
"..2..578214..1.\n"
"7...1.8.8..6...\n"
"2.8.....3..6...\n"
".........31.7.2\n"
".634....2....4.\n"
".8....54...2.65\n"
"...4.......17.3\n"
"1.....3.4..4...\n"
".2..3.45.......\n"
"..3...........5\n") == 0);
free(board881910440);
board881910440 = NULL;
assert( gamma_move(board, 7, 13, 8) == 1 );
assert( gamma_move(board, 7, 14, 14) == 1 );
assert( gamma_free_fields(board, 7) == 151 );


char* board798916315 = gamma_board(board);
assert( board798916315 != NULL );
assert( strcmp(board798916315, 
"6.......56...17\n"
"..8..8....615..\n"
"..5..55..6.6...\n"
".5.....88.....3\n"
"6.7.22..3..17.3\n"
"..2..578214..1.\n"
"7...1.8.8..6.7.\n"
"2.8.....3..6...\n"
".........31.7.2\n"
".634....2....4.\n"
".8....54...2.65\n"
"...4.......17.3\n"
"1.....3.4..4...\n"
".2..3.45.......\n"
"..3...........5\n") == 0);
free(board798916315);
board798916315 = NULL;
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 9, 13) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 6, 14) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_golden_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 6, 13) == 1 );
assert( gamma_move(board, 8, 10, 5) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 14 );


char* board983319243 = gamma_board(board);
assert( board983319243 != NULL );
assert( strcmp(board983319243, 
"6.....3.56...17\n"
".68..88..46151.\n"
"..5..55..6.6...\n"
".5..7..88...6.3\n"
"6.7322..3..17.3\n"
"..2..578214..1.\n"
"7...1.8.8..6.7.\n"
"2.84..1.3..6612\n"
".........31.7.2\n"
".634.5..2.8..4.\n"
".8.8..54.2.2465\n"
"...4.6...3.1713\n"
"1..2..334..4..5\n"
".2..3.45.7..5..\n"
"..3...........5\n") == 0);
free(board983319243);
board983319243 = NULL;
assert( gamma_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_free_fields(board, 7) == 124 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 14) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_free_fields(board, 4) == 121 );


char* board670259344 = gamma_board(board);
assert( board670259344 != NULL );
assert( strcmp(board670259344, 
"6.....3.56..817\n"
".68..88..46151.\n"
"..5..55..6.6...\n"
".5..7..88..76.3\n"
"6.7322..3..17.3\n"
"..2..578214..1.\n"
"7...1.8.8..6.74\n"
"2.84..1.3..6612\n"
".........31.7.2\n"
".634.5..2.8..4.\n"
".8.8..54.2.2465\n"
"...4.6...3.1713\n"
"1..2..334..4..5\n"
".2..3.45.7..5..\n"
"..3.........3.5\n") == 0);
free(board670259344);
board670259344 = NULL;
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_golden_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_free_fields(board, 1) == 117 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 5, 14) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 8, 13, 2) == 1 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_free_fields(board, 1) == 110 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 110 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 12, 8) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_free_fields(board, 7) == 105 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 10, 13) == 0 );
assert( gamma_golden_move(board, 8, 4, 14) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );


char* board170312483 = gamma_board(board);
assert( board170312483 != NULL );
assert( strcmp(board170312483, 
"6....33.56..817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6.7322..3.617.3\n"
"..271578214..1.\n"
"7...188.8.16574\n"
"2.84..1.3..6612\n"
".....66..31.7.2\n"
".634.5..2.8534.\n"
".8.8.454.2.2465\n"
"...4.6...3.1713\n"
"1..2.4334..4.85\n"
".2.83.45.7..5..\n"
"6.342......43.5\n") == 0);
free(board170312483);
board170312483 = NULL;
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_free_fields(board, 7) == 96 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 8, 3, 14) == 1 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 94 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 1) == 1 );
assert( gamma_free_fields(board, 7) == 91 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board697848003 = gamma_board(board);
assert( board697848003 != NULL );
assert( strcmp(board697848003, 
"6..8.33.56..817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6273226.3.617.3\n"
"..271578214..1.\n"
"7...188.8.16574\n"
"2.84..1.3..6612\n"
".....66..31.7.2\n"
".634.5..2.8534.\n"
".8.8.454.2.2465\n"
"...4.6..83.1713\n"
"1..2.4334..4.85\n"
".2383.45.7..5.7\n"
"6.342.3....43.5\n") == 0);
free(board697848003);
board697848003 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_free_fields(board, 7) == 89 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_move(board, 1, 2, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 6, 14, 14) == 0 );
assert( gamma_golden_move(board, 6, 1, 12) == 0 );


char* board635930274 = gamma_board(board);
assert( board635930274 != NULL );
assert( strcmp(board635930274, 
"6..8.33556..817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6273226.3.617.3\n"
"..271578214..1.\n"
"7...188.8.16574\n"
"2.14.61.3..6612\n"
".....66..31.7.2\n"
".634.5..2.8534.\n"
".8.8.454.2.2465\n"
"7..4.6..83.1713\n"
"1..284334..4.85\n"
".2383.45.7..5.7\n"
"6.342.3....43.5\n") == 0);
free(board635930274);
board635930274 = NULL;
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_golden_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 1, 11, 14) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_golden_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );


char* board445003041 = gamma_board(board);
assert( board445003041 != NULL );
assert( strcmp(board445003041, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.14.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".8.8.454.2.2465\n"
"7..4.6..83.1713\n"
"1..284334..4.85\n"
".2383.4587..517\n"
"6.34273....43.5\n") == 0);
free(board445003041);
board445003041 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );


char* board613915891 = gamma_board(board);
assert( board613915891 != NULL );
assert( strcmp(board613915891, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.14.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".8.8.454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4.85\n"
".2383.4587..517\n"
"6.34273....43.5\n") == 0);
free(board613915891);
board613915891 = NULL;
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board484443005 = gamma_board(board);
assert( board484443005 != NULL );
assert( strcmp(board484443005, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.14.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".8.8.454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4.85\n"
".2383.4587..517\n"
"6.34273....43.5\n") == 0);
free(board484443005);
board484443005 = NULL;
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_free_fields(board, 2) == 78 );


char* board501120654 = gamma_board(board);
assert( board501120654 != NULL );
assert( strcmp(board501120654, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.14.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".828.454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4.85\n"
".2383.4587..517\n"
"6.34273....43.5\n") == 0);
free(board501120654);
board501120654 = NULL;
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_move(board, 5, 1, 2) == 0 );


char* board249009040 = gamma_board(board);
assert( board249009040 != NULL );
assert( strcmp(board249009040, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588..76.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.14.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".828.454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4.85\n"
".2383.4587..517\n"
"6.34273....43.5\n") == 0);
free(board249009040);
board249009040 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 10, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 0, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 12, 14) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_golden_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 14, 14) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 9, 14) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 14) == 0 );


char* board507882489 = gamma_board(board);
assert( board507882489 != NULL );
assert( strcmp(board507882489, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588.676.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".828.454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4.85\n"
".2383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board507882489);
board507882489 = NULL;
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 14, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 2, 13) == 0 );


char* board548510431 = gamma_board(board);
assert( board548510431 != NULL );
assert( strcmp(board548510431, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588.676.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".828.454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4485\n"
".2383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board548510431);
board548510431 = NULL;
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board891660024 = gamma_board(board);
assert( board891660024 != NULL );
assert( strcmp(board891660024, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55.2636...\n"
".5..7.588.676.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7...188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".828.454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4485\n"
".2383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board891660024);
board891660024 = NULL;
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 73 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 8, 13, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 7, 14) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 14, 10) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_free_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );


char* board861729117 = gamma_board(board);
assert( board861729117 != NULL );
assert( strcmp(board861729117, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..5512636...\n"
".5..7.588.676.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board861729117);
board861729117 = NULL;
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );


char* board116840673 = gamma_board(board);
assert( board116840673 != NULL );
assert( strcmp(board116840673, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..5512636...\n"
".5..7.588.676.3\n"
"6273226.3.617.3\n"
"..2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1..284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board116840673);
board116840673 = NULL;
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );


char* board327805933 = gamma_board(board);
assert( board327805933 != NULL );
assert( strcmp(board327805933, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..5512636...\n"
".5..71588.676.3\n"
"627322663.617.3\n"
"..2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.8534.\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board327805933);
board327805933 = NULL;
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board220873238 = gamma_board(board);
assert( board220873238 != NULL );
assert( strcmp(board220873238, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..5512636...\n"
".5..71588.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board220873238);
board220873238 = NULL;
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 12) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board125753335 = gamma_board(board);
assert( board125753335 != NULL );
assert( strcmp(board125753335, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71588.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board125753335);
board125753335 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_golden_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_golden_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );


char* board175520206 = gamma_board(board);
assert( board175520206 != NULL );
assert( strcmp(board175520206, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board175520206);
board175520206 = NULL;
assert( gamma_golden_move(board, 3, 14, 3) == 0 );


char* board360265604 = gamma_board(board);
assert( board360265604 != NULL );
assert( strcmp(board360265604, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board360265604);
board360265604 = NULL;
assert( gamma_move(board, 4, 6, 4) == 0 );


char* board837848579 = gamma_board(board);
assert( board837848579 != NULL );
assert( strcmp(board837848579, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.61.3..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board837848579);
board837848579 = NULL;
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 14, 11) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 19 );


char* board524419349 = gamma_board(board);
assert( board524419349 != NULL );
assert( strcmp(board524419349, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.6113..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board524419349);
board524419349 = NULL;
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );


char* board623653992 = gamma_board(board);
assert( board623653992 != NULL );
assert( strcmp(board623653992, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..7188.8.16574\n"
"2.44.6113..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board623653992);
board623653992 = NULL;
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_golden_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 9, 14) == 0 );


char* board569882232 = gamma_board(board);
assert( board569882232 != NULL );
assert( strcmp(board569882232, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..718818.16574\n"
"2.44.6113..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board569882232);
board569882232 = NULL;
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );


char* board499973601 = gamma_board(board);
assert( board499973601 != NULL );
assert( strcmp(board499973601, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..718818.16574\n"
"2.44.6113..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board499973601);
board499973601 = NULL;
assert( gamma_move(board, 2, 0, 10) == 0 );


char* board582009377 = gamma_board(board);
assert( board582009377 != NULL );
assert( strcmp(board582009377, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..718818.16574\n"
"2.44.6113..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board582009377);
board582009377 = NULL;
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );


char* board618233334 = gamma_board(board);
assert( board618233334 != NULL );
assert( strcmp(board618233334, 
"6..8.33556.1817\n"
"5687.88..46151.\n"
"..5..55126365..\n"
".5..71583.676.3\n"
"627322663.617.3\n"
"7.2715782141.1.\n"
"7..718818116574\n"
"2.44.6113..6612\n"
".2...66..31.7.2\n"
".634.5..2.85342\n"
".8284454.2.2465\n"
"7.44.6..83.1713\n"
"1.2284334..4485\n"
"62383.4587..517\n"
"6.34273..2.43.5\n") == 0);
free(board618233334);
board618233334 = NULL;
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 16 );


gamma_delete(board);

    return 0;
}
