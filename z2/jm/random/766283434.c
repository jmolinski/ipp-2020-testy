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
uuid: 766283434
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 17, 9, 36);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 16) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_free_fields(board, 3) == 183 );


char* board916095306 = gamma_board(board);
assert( board916095306 != NULL );
assert( strcmp(board916095306, 
"3..........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"....2......\n"
"...........\n"
"..........3\n"
"...........\n"
"...........\n"
"...........\n"
"2..........\n"
"...........\n"
"...........\n") == 0);
free(board916095306);
board916095306 = NULL;
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 7, 4, 15) == 1 );


char* board227043233 = gamma_board(board);
assert( board227043233 != NULL );
assert( strcmp(board227043233, 
"3..........\n"
"....7......\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"...........\n"
"....2......\n"
"6..........\n"
"..........3\n"
"...........\n"
"...........\n"
"...........\n"
"2.6........\n"
".....5.....\n"
"...........\n") == 0);
free(board227043233);
board227043233 = NULL;
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );


char* board908789838 = gamma_board(board);
assert( board908789838 != NULL );
assert( strcmp(board908789838, 
"3..........\n"
"....7......\n"
"...........\n"
"...........\n"
"...........\n"
".1.........\n"
"...........\n"
"...9.......\n"
"....2......\n"
"6..........\n"
"..........3\n"
"...........\n"
"...........\n"
"...........\n"
"2.6.89.....\n"
".....5.....\n"
"1..........\n") == 0);
free(board908789838);
board908789838 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 172 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 2, 15) == 1 );
assert( gamma_golden_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_free_fields(board, 6) == 166 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 15) == 1 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 15, 0) == 0 );
assert( gamma_move(board, 8, 10, 11) == 1 );
assert( gamma_move(board, 9, 3, 12) == 1 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 8, 14) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 0, 12) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_golden_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_free_fields(board, 5) == 141 );
assert( gamma_move(board, 7, 1, 13) == 1 );


char* board897118774 = gamma_board(board);
assert( board897118774 != NULL );
assert( strcmp(board897118774, 
"3..........\n"
"..5.74.....\n"
"........5..\n"
".7.........\n"
"9..9.......\n"
".14.63....8\n"
".......2...\n"
"1..9...2...\n"
"....2......\n"
"67.9...3...\n"
"..........3\n"
"1...45.7...\n"
".2..3..6..9\n"
".8....6.2..\n"
"2.6.89...51\n"
".2...5..44.\n"
"1...7...3..\n") == 0);
free(board897118774);
board897118774 = NULL;
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_free_fields(board, 7) == 135 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_free_fields(board, 4) == 134 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 3, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_free_fields(board, 6) == 132 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_move(board, 9, 16, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_golden_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 6, 15) == 1 );
assert( gamma_move(board, 7, 15, 3) == 0 );
assert( gamma_move(board, 7, 9, 12) == 1 );
assert( gamma_move(board, 8, 12, 4) == 0 );
assert( gamma_move(board, 8, 10, 12) == 1 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );


char* board195369050 = gamma_board(board);
assert( board195369050 != NULL );
assert( strcmp(board195369050, 
"3..........\n"
"..5.746....\n"
"...5....5..\n"
".7..1......\n"
"9..9.....78\n"
"414.63..4.8\n"
".......2...\n"
"19.9..529..\n"
"....2......\n"
"67.94.43...\n"
"..1......13\n"
"1.3545.73..\n"
".2..3..6..9\n"
".8..656.2.8\n"
"226.89..751\n"
".2...5..44.\n"
"1...7...3..\n") == 0);
free(board195369050);
board195369050 = NULL;
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 7, 8, 12) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 10, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_free_fields(board, 2) == 108 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 10, 16) == 1 );
assert( gamma_move(board, 4, 16, 6) == 0 );
assert( gamma_move(board, 4, 6, 13) == 1 );
assert( gamma_free_fields(board, 4) == 106 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_free_fields(board, 6) == 105 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );


char* board780498831 = gamma_board(board);
assert( board780498831 != NULL );
assert( strcmp(board780498831, 
"3.........3\n"
"..5.746....\n"
"...5....5..\n"
".7721.4....\n"
"9..9....778\n"
"414.63..4.8\n"
".....9.2158\n"
"19.9..529..\n"
"....2.6.4..\n"
"67.94.43...\n"
"..1......13\n"
"1.3545.73..\n"
".2..36.6..9\n"
".8.1656.2.8\n"
"226.89..751\n"
".2...5..44.\n"
"1...7..23..\n") == 0);
free(board780498831);
board780498831 = NULL;
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 3, 5, 14) == 1 );
assert( gamma_golden_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 102 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 14, 0) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_free_fields(board, 9) == 101 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 15, 7) == 0 );
assert( gamma_free_fields(board, 6) == 100 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 0, 16) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 15, 3) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 16, 1) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_golden_move(board, 9, 13, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_golden_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_free_fields(board, 5) == 95 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_free_fields(board, 6) == 95 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 9, 14) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 7, 0, 14) == 1 );
assert( gamma_free_fields(board, 8) == 90 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 15, 2) == 0 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 6, 16) == 1 );
assert( gamma_free_fields(board, 5) == 83 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_free_fields(board, 8) == 82 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_free_fields(board, 9) == 81 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board710783961 = gamma_board(board);
assert( board710783961 != NULL );
assert( strcmp(board710783961, 
"3.....5...3\n"
"..5.746....\n"
"7.15.3..51.\n"
"37721.4....\n"
"9..9....778\n"
"414263..4.8\n"
"....1952154\n"
"19.95.5291.\n"
"33.92.6.4..\n"
"67.94.43...\n"
"..15.32.613\n"
"1.3545.73..\n"
".2..36.6.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1...7..23..\n") == 0);
free(board710783961);
board710783961 = NULL;
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 10, 15) == 1 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );


char* board737040513 = gamma_board(board);
assert( board737040513 != NULL );
assert( strcmp(board737040513, 
"3.....5...3\n"
"..5.746...1\n"
"7.15.3..51.\n"
"37721.4....\n"
"9..9....778\n"
"414263..4.8\n"
"....1952154\n"
"19.95.52917\n"
"33.92.6.4..\n"
"67.94.433..\n"
"..15.32.613\n"
"1.3545.73..\n"
".2..36.6.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1..87..23..\n") == 0);
free(board737040513);
board737040513 = NULL;
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 16) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );


char* board620555570 = gamma_board(board);
assert( board620555570 != NULL );
assert( strcmp(board620555570, 
"3..3..5...3\n"
"..5.746...1\n"
"7.15.3..51.\n"
"37721.4....\n"
"9..9....778\n"
"414263..4.8\n"
"....1952154\n"
"19.95.52917\n"
"33.92.6.4..\n"
"67.94.433..\n"
"..15.32.613\n"
"1.3545173..\n"
".2..36.6.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1..87..23..\n") == 0);
free(board620555570);
board620555570 = NULL;
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 6, 16) == 0 );
assert( gamma_free_fields(board, 7) == 72 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 8, 6, 12) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 7, 8) == 1 );


char* board269668317 = gamma_board(board);
assert( board269668317 != NULL );
assert( strcmp(board269668317, 
"3..3..5...3\n"
"..5.746...1\n"
"7.15.3..51.\n"
"37721.4....\n"
"9..9..86778\n"
"414263..4.8\n"
"....1952154\n"
"19.95.52917\n"
"33.92.694..\n"
"67.94.433..\n"
"8.15.32.613\n"
"1.3545173..\n"
".2..36.6.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1..87..23..\n") == 0);
free(board269668317);
board269668317 = NULL;
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 4, 16) == 1 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board335942699 = gamma_board(board);
assert( board335942699 != NULL );
assert( strcmp(board335942699, 
"3..34.5...3\n"
"..5.746...1\n"
"7.15.3..51.\n"
"37721.4....\n"
"9..9..86778\n"
"414263..4.8\n"
"9...1952154\n"
"19.95.52917\n"
"33.92.694..\n"
"67.94.433..\n"
"8.15.32.613\n"
"1.3545173.3\n"
".2..36.6.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1..87..23..\n") == 0);
free(board335942699);
board335942699 = NULL;
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 8, 15) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 7, 13, 9) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 5, 16) == 1 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 4, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_golden_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 3, 15) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 10, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_free_fields(board, 4) == 56 );


char* board620656959 = gamma_board(board);
assert( board620656959 != NULL );
assert( strcmp(board620656959, 
"3..3495...3\n"
"..57746.3.1\n"
"7.15.3.451.\n"
"37721.4....\n"
"9..93.86778\n"
"414263..4.8\n"
"9...1952154\n"
"19.95.52997\n"
"33.926694..\n"
"67394.433..\n"
"8.15.32.613\n"
"1.3545173.3\n"
".25.3666.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1..87..23.9\n") == 0);
free(board620656959);
board620656959 = NULL;
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );


char* board306335914 = gamma_board(board);
assert( board306335914 != NULL );
assert( strcmp(board306335914, 
"3..3495...3\n"
"..57746.3.1\n"
"7.15.3.451.\n"
"37721.4....\n"
"9..93.86778\n"
"414263..4.8\n"
"9...1952154\n"
"19.95.52997\n"
"33.926694..\n"
"67394.433..\n"
"8.15.32.613\n"
"1.3545173.3\n"
".25.3666.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1..87..23.9\n") == 0);
free(board306335914);
board306335914 = NULL;
assert( gamma_move(board, 9, 16, 2) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 0, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );


char* board264761243 = gamma_board(board);
assert( board264761243 != NULL );
assert( strcmp(board264761243, 
"3..3495...3\n"
"3.57746.3.1\n"
"7.15.3.451.\n"
"37721.4....\n"
"9..93.86778\n"
"414263..4.8\n"
"9...1952154\n"
"19.95.52997\n"
"33.926694..\n"
"67394.433..\n"
"8.15.32.613\n"
"1.3545173.3\n"
".25.3666.39\n"
".86165612.8\n"
"226.89..751\n"
"12...516445\n"
"1.687..23.9\n") == 0);
free(board264761243);
board264761243 = NULL;
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 53 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_golden_move(board, 8, 15, 6) == 0 );
assert( gamma_move(board, 9, 4, 14) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 6, 0, 16) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 6, 15) == 0 );
assert( gamma_move(board, 7, 1, 14) == 1 );
assert( gamma_move(board, 7, 9, 16) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );


char* board295024582 = gamma_board(board);
assert( board295024582 != NULL );
assert( strcmp(board295024582, 
"3..34956.73\n"
"3.57746.3.1\n"
"771593.451.\n"
"37721.43...\n"
"9..93.86778\n"
"414263..4.8\n"
"9.9.1952154\n"
"19.95652997\n"
"33.926694..\n"
"67394.433..\n"
"8.15.32.613\n"
"1.354517313\n"
".25.3666.39\n"
".86165612.8\n"
"226.89.4751\n"
"12...516445\n"
"1.6877.23.9\n") == 0);
free(board295024582);
board295024582 = NULL;
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_free_fields(board, 8) == 44 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 17 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_free_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 5, 16) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 15, 7) == 0 );


char* board154209708 = gamma_board(board);
assert( board154209708 != NULL );
assert( strcmp(board154209708, 
"3..34956.73\n"
"3.57746.3.1\n"
"771593.451.\n"
"37721.43...\n"
"9..93.86778\n"
"414263..4.8\n"
"9.9.1952154\n"
"19.95652997\n"
"33.926694..\n"
"67394.433..\n"
"8.15.32.613\n"
"1.354517313\n"
".25.3666.39\n"
".8616561228\n"
"226.89.4751\n"
"12...516445\n"
"1.6877.23.9\n") == 0);
free(board154209708);
board154209708 = NULL;
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_golden_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 10, 16) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_golden_move(board, 4, 15, 10) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 7, 11) == 1 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_free_fields(board, 6) == 39 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );


char* board211873499 = gamma_board(board);
assert( board211873499 != NULL );
assert( strcmp(board211873499, 
"3..34956.73\n"
"3.57746.3.1\n"
"771593.451.\n"
"37721.43...\n"
"9..93.86778\n"
"414263.94.8\n"
"9.9.1952154\n"
"19.95652997\n"
"33.926694..\n"
"67394.4377.\n"
"8.15.32.613\n"
"1.354517313\n"
".25.3666.39\n"
".8616561228\n"
"226.89.4751\n"
"12...516445\n"
"136877.2329\n") == 0);
free(board211873499);
board211873499 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );


char* board276302225 = gamma_board(board);
assert( board276302225 != NULL );
assert( strcmp(board276302225, 
"3..34956.73\n"
"3.57746.3.1\n"
"771593.451.\n"
"37721.43...\n"
"9..93.86778\n"
"414263.94.8\n"
"9.9.1952154\n"
"19.95652997\n"
"33.926694..\n"
"67394.4377.\n"
"8.15.32.613\n"
"1.354517313\n"
".25.3666.39\n"
".8616561228\n"
"226.89.4751\n"
"12...516445\n"
"136877.2329\n") == 0);
free(board276302225);
board276302225 = NULL;
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );


char* board401255131 = gamma_board(board);
assert( board401255131 != NULL );
assert( strcmp(board401255131, 
"3..34956.73\n"
"3.57746.3.1\n"
"771593.451.\n"
"37721.43...\n"
"9..93.86778\n"
"414263.94.8\n"
"9.921952154\n"
"19.95652997\n"
"33.926694..\n"
"67394.4377.\n"
"8.15.32.613\n"
"1.354517313\n"
".25.3666.39\n"
".8616561228\n"
"226.89.4751\n"
"129..516445\n"
"136877.2329\n") == 0);
free(board401255131);
board401255131 = NULL;
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 0, 16) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_golden_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 10, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 9, 11) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 16, 8) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 8, 16) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_golden_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 8, 16) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 2, 16) == 1 );
assert( gamma_free_fields(board, 9) == 30 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_free_fields(board, 5) == 30 );


gamma_delete(board);

    return 0;
}
