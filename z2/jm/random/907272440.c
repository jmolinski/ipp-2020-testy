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
uuid: 907272440
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 8, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 7) == 1 );


char* board506952450 = gamma_board(board);
assert( board506952450 != NULL );
assert( strcmp(board506952450, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
".............1.\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n") == 0);
free(board506952450);
board506952450 = NULL;
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 12) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 11, 13) == 1 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_golden_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 181 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 178 );
assert( gamma_move(board, 8, 12, 14) == 0 );


char* board835013204 = gamma_board(board);
assert( board835013204 != NULL );
assert( strcmp(board835013204, 
"....3......7...\n"
"..4.......6..4.\n"
".51............\n"
".6.......5.....\n"
"...3...........\n"
"86..2.......2.4\n"
".......7.....1.\n"
"........6..8..2\n"
".........1.....\n"
"...............\n"
"468...3.7......\n"
"..83....2......\n"
"6....5.........\n"
".....3.........\n") == 0);
free(board835013204);
board835013204 = NULL;
assert( gamma_move(board, 1, 13, 9) == 1 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );


char* board614278384 = gamma_board(board);
assert( board614278384 != NULL );
assert( strcmp(board614278384, 
"....3......7...\n"
"..4.......61.4.\n"
".51............\n"
".6.......5.3...\n"
"..33.........1.\n"
"86..2.......2.4\n"
".......7...5.1.\n"
"........6..8..2\n"
".........16....\n"
"..5............\n"
"468...3.7..2...\n"
"..83....2......\n"
"6....5...4.....\n"
".....3.........\n") == 0);
free(board614278384);
board614278384 = NULL;
assert( gamma_move(board, 7, 5, 5) == 1 );


char* board206974504 = gamma_board(board);
assert( board206974504 != NULL );
assert( strcmp(board206974504, 
"....3......7...\n"
"..4.......61.4.\n"
".51............\n"
".6.......5.3...\n"
"..33.........1.\n"
"86..2.......2.4\n"
".......7...5.1.\n"
"........6..8..2\n"
".....7...16....\n"
"..5............\n"
"468...3.7..2...\n"
"..83....2......\n"
"6....5...4.....\n"
".....3.........\n") == 0);
free(board206974504);
board206974504 = NULL;
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_move(board, 7, 10, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 7, 7, 12) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 146 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );


char* board753295719 = gamma_board(board);
assert( board753295719 != NULL );
assert( strcmp(board753295719, 
"7.3.3......7...\n"
"..4....7..61.45\n"
"251.......78...\n"
".6.48.8..5.3...\n"
"..33.....3...1.\n"
"86..2.......2.4\n"
".......7...5.1.\n"
"........6..8..2\n"
"..31.7..616....\n"
"..5.3..4..7...1\n"
"468...3.7..25..\n"
"..83....23..4..\n"
"6....5...4...1.\n"
".....3.4....6..\n") == 0);
free(board753295719);
board753295719 = NULL;
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_free_fields(board, 1) == 143 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 11, 5) == 1 );


char* board498821345 = gamma_board(board);
assert( board498821345 != NULL );
assert( strcmp(board498821345, 
"7.3.3......7...\n"
"..4....7..61.45\n"
"251.......78...\n"
".6.48.8..5.3...\n"
"..33.....3...1.\n"
"86..2.......2.4\n"
".......7...5.1.\n"
"........6..8..2\n"
"..31.7..61665..\n"
"..5.3..4..7...1\n"
"468.2.3.7..25..\n"
"..83..1.23.44.3\n"
"6....5...4...1.\n"
"...5.3.4....6..\n") == 0);
free(board498821345);
board498821345 = NULL;
assert( gamma_move(board, 7, 11, 8) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_free_fields(board, 2) == 134 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 14, 11) == 1 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 14, 5) == 1 );
assert( gamma_move(board, 8, 12, 12) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_free_fields(board, 5) == 124 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 4, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_free_fields(board, 1) == 121 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );


char* board616891935 = gamma_board(board);
assert( board616891935 != NULL );
assert( strcmp(board616891935, 
"713.38.....7...\n"
"..4.8..7..61845\n"
"251.......78..5\n"
".6.48.8..5.3...\n"
"1.33.....3...1.\n"
"86..2...5..72.4\n"
"...1..57...521.\n"
"........6..8..2\n"
"..31.7..61665.7\n"
"..5.3..4.57...1\n"
"468.2.3.7..25..\n"
"7.83..1.23.44.3\n"
"6....5...4..41.\n"
"..35.3.4....62.\n") == 0);
free(board616891935);
board616891935 = NULL;
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );


char* board823350731 = gamma_board(board);
assert( board823350731 != NULL );
assert( strcmp(board823350731, 
"713.38.....7...\n"
"..4.8..7..61845\n"
"254.......78..5\n"
".6.48.8..5.3...\n"
"1.33.....3...1.\n"
"86..2...5..72.4\n"
".5.1..57...521.\n"
"....6...6..8..2\n"
"..31.7..61665.7\n"
"..5.3..4.57...1\n"
"468.2.3.7..25..\n"
"7.83..1.23.44.3\n"
"6....5...4..41.\n"
"7.35.3.4....62.\n") == 0);
free(board823350731);
board823350731 = NULL;
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_golden_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_free_fields(board, 7) == 114 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_golden_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );


char* board633994927 = gamma_board(board);
assert( board633994927 != NULL );
assert( strcmp(board633994927, 
"713.38.....7...\n"
"..4.8..7..61845\n"
"254....3..78..5\n"
".6.48.8..5.3...\n"
"1.33.....33..1.\n"
"86..2.145..72.4\n"
".5.1.557...551.\n"
"....6..16..8..2\n"
"..31.7..61665.7\n"
"..533..4.57...1\n"
"468.2.3.7..25..\n"
"7.83.21.27.44.3\n"
"6....55..4..41.\n"
"7.35.3.46...62.\n") == 0);
free(board633994927);
board633994927 = NULL;
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_golden_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_free_fields(board, 4) == 105 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 14, 1) == 1 );
assert( gamma_move(board, 8, 12, 9) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 6) == 1 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_golden_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_free_fields(board, 7) == 85 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );


char* board319174148 = gamma_board(board);
assert( board319174148 != NULL );
assert( strcmp(board319174148, 
"713.38.....7...\n"
"..4.8..7..61845\n"
"254....37.78..5\n"
"76.48.8.3533.34\n"
"1.33...8.33581.\n"
"86.62.145.372.4\n"
".5.1.5571..551.\n"
"....6.7166.8122\n"
"..31.7..61665.7\n"
".65332.4.57...1\n"
"468.1.3.7..251.\n"
"7.83.21827.4423\n"
"665..55..4..418\n"
"7.35.3246...62.\n") == 0);
free(board319174148);
board319174148 = NULL;
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );


char* board191695234 = gamma_board(board);
assert( board191695234 != NULL );
assert( strcmp(board191695234, 
"713.38.....7...\n"
"..4.8..75.61845\n"
"254....37.78..5\n"
"76.48.8.3533.34\n"
"1.33...8.33581.\n"
"86.62.145.372.4\n"
".5.1.5571..551.\n"
"....6.7166.8122\n"
"..31.7..61665.7\n"
".65332.4.57...1\n"
"468.1.3.7..251.\n"
"7.83.21827.4423\n"
"665..55..4..418\n"
"7.35.3246...62.\n") == 0);
free(board191695234);
board191695234 = NULL;
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 13) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );


char* board386360082 = gamma_board(board);
assert( board386360082 != NULL );
assert( strcmp(board386360082, 
"713.38.....7..6\n"
"..4.8..75.61845\n"
"254....37.78..5\n"
"76.48.8.3533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
".5.1.5571..551.\n"
"....6.7166.8122\n"
"..31.7..61665.7\n"
".65332.4.57...1\n"
"468.1.3.7..251.\n"
"7.83.21827.4423\n"
"665..55..4..418\n"
"7.3533246.7.62.\n") == 0);
free(board386360082);
board386360082 = NULL;
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_golden_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );


char* board258354063 = gamma_board(board);
assert( board258354063 != NULL );
assert( strcmp(board258354063, 
"713.38.....7..6\n"
"..4.8..75.61845\n"
"254....37.78..5\n"
"76.48.823533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
".5.1.5571.3551.\n"
"....6.7166.8122\n"
"..31.7..61665.7\n"
".65332.4.57...1\n"
"468.1.3.7..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.3533246.7.62.\n") == 0);
free(board258354063);
board258354063 = NULL;
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );


char* board903397381 = gamma_board(board);
assert( board903397381 != NULL );
assert( strcmp(board903397381, 
"713.38.....7..6\n"
"..4.8..75.61845\n"
"254....37.78..5\n"
"76.48.823533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
".5.1.5571.3551.\n"
"....6.7166.8122\n"
"..31.7..61665.7\n"
".65332.4.57...1\n"
"468.1.3.7..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.3533246.7.62.\n") == 0);
free(board903397381);
board903397381 = NULL;
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 74 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 7, 13, 9) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_free_fields(board, 8) == 72 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );


char* board225158442 = gamma_board(board);
assert( board225158442 != NULL );
assert( strcmp(board225158442, 
"713.38.....7..6\n"
"..4.8.475.61845\n"
"254....37.78..5\n"
"76.48.823533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
".5.1.5571.3551.\n"
"8...6.7166.8122\n"
"..31.7..61665.7\n"
".65332.4.57...1\n"
"468.1.357..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.3533246.7.62.\n") == 0);
free(board225158442);
board225158442 = NULL;
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 14, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 13, 5) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 3, 13) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 9, 13) == 1 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 61 );


char* board818263775 = gamma_board(board);
assert( board818263775 != NULL );
assert( strcmp(board818263775, 
"713838..55.7..6\n"
"..4.8.475.61845\n"
"254.2..37.78..5\n"
"76.48.823533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
"2551.5571.3551.\n"
"3..36.7166.8122\n"
"..31.7..6166587\n"
".65332.4.57..61\n"
"468.1.357..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board818263775);
board818263775 = NULL;
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 7, 7, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );


char* board246122474 = gamma_board(board);
assert( board246122474 != NULL );
assert( strcmp(board246122474, 
"713838..55.7..6\n"
"..4.8.475.61845\n"
"254.2..37.78..5\n"
"76348.823533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
"2551.5571.3551.\n"
"3..3667166.8122\n"
"..31.7..6166587\n"
".65332.4.57..61\n"
"468.1.357..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board246122474);
board246122474 = NULL;
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board313394059 = gamma_board(board);
assert( board313394059 != NULL );
assert( strcmp(board313394059, 
"713838..55.7..6\n"
"..4.8.475.61845\n"
"254.2..37.78..5\n"
"76348.823533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
"2551.5571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.357..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board313394059);
board313394059 = NULL;
assert( gamma_move(board, 2, 11, 6) == 0 );


char* board853137727 = gamma_board(board);
assert( board853137727 != NULL );
assert( strcmp(board853137727, 
"713838..55.7..6\n"
"..4.8.475.61845\n"
"254.2..37.78..5\n"
"76348.823533.34\n"
"1.33..48.33581.\n"
"86.62.1455372.4\n"
"2551.5571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.357..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board853137727);
board853137727 = NULL;
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );


char* board965183459 = gamma_board(board);
assert( board965183459 != NULL );
assert( strcmp(board965183459, 
"713838..55.7..6\n"
"..4.8.475.61845\n"
"254.2..37.78..5\n"
"76348.823533.34\n"
"1.33..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.357..251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board965183459);
board965183459 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );


char* board703061643 = gamma_board(board);
assert( board703061643 != NULL );
assert( strcmp(board703061643, 
"713838..55.7..6\n"
"..4.8.475.61845\n"
"254.2..37.78..5\n"
"76348.823533.34\n"
"1.33..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.357.2251.\n"
"7.82.21827.4423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board703061643);
board703061643 = NULL;
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 7, 13, 13) == 0 );
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_free_fields(board, 8) == 53 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 13, 13) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 9, 14) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_golden_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 4, 13) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 1, 6, 10) == 0 );


char* board941385149 = gamma_board(board);
assert( board941385149 != NULL );
assert( strcmp(board941385149, 
"713838..55.7.46\n"
"..4.8.475.61845\n"
"254.2..37.78.25\n"
"76348.823533.34\n"
"1.33..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.35732251.\n"
"7.82.2182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board941385149);
board941385149 = NULL;
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );


char* board945069315 = gamma_board(board);
assert( board945069315 != NULL );
assert( strcmp(board945069315, 
"713838..55.7.46\n"
"..468.475.61845\n"
"254.2..37.78.25\n"
"76348.823533.34\n"
"1.33..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.35732251.\n"
"7.82.2182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board945069315);
board945069315 = NULL;
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 13, 12) == 0 );


char* board737249046 = gamma_board(board);
assert( board737249046 != NULL );
assert( strcmp(board737249046, 
"713838..55.7.46\n"
"..468.475.61845\n"
"254.2..37.78.25\n"
"76348.823533.34\n"
"1.33..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.35732251.\n"
"7.82.2182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board737249046);
board737249046 = NULL;
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_golden_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_golden_move(board, 3, 12, 14) == 0 );


char* board939389229 = gamma_board(board);
assert( board939389229 != NULL );
assert( strcmp(board939389229, 
"713838..55.7.46\n"
"..468.475.61845\n"
"254.2..37.78.25\n"
"76348.823533234\n"
"1.33..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.57.461\n"
"468.1.35732251.\n"
"7.82.2182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board939389229);
board939389229 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_golden_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 12, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_golden_move(board, 7, 13, 9) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_free_fields(board, 8) == 11 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_golden_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );


char* board547642245 = gamma_board(board);
assert( board547642245 != NULL );
assert( strcmp(board547642245, 
"713838..55.7746\n"
"..468.475.61845\n"
"254.2.737.78.25\n"
"76348.823533234\n"
"1133..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.56.461\n"
"46831.35732251.\n"
"7.82.2182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board547642245);
board547642245 = NULL;
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 6, 10, 13) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );


char* board785354019 = gamma_board(board);
assert( board785354019 != NULL );
assert( strcmp(board785354019, 
"713838..5567746\n"
"..468.475.61845\n"
"254.2.737.78.25\n"
"76348.823533234\n"
"1133..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.56.461\n"
"46831.35732251.\n"
"7.82.2182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board785354019);
board785354019 = NULL;
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );


char* board586491870 = gamma_board(board);
assert( board586491870 != NULL );
assert( strcmp(board586491870, 
"713838..5567746\n"
"..468.475.61845\n"
"254.2.737.78.25\n"
"76348.823533234\n"
"1133..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.56.461\n"
"46831.35732251.\n"
"7.82.2182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board586491870);
board586491870 = NULL;
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );


char* board643804975 = gamma_board(board);
assert( board643804975 != NULL );
assert( strcmp(board643804975, 
"713838..5567746\n"
"..468.475.61845\n"
"254.2.737.78.25\n"
"76348.823533234\n"
"1133..48533581.\n"
"86.62.1455372.4\n"
"255135571.3551.\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".65332.4.56.461\n"
"46831.35732251.\n"
"7.8212182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board643804975);
board643804975 = NULL;
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 7, 13) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );


char* board181097833 = gamma_board(board);
assert( board181097833 != NULL );
assert( strcmp(board181097833, 
"713838.55567746\n"
"..468.475.61845\n"
"254.2.737.78.25\n"
"76348.823533234\n"
"1133..48533581.\n"
"86.62.1455372.4\n"
"255135571.35514\n"
"3..3667166.8122\n"
"..31.7.66166587\n"
".6533234.56.461\n"
"46831.35732251.\n"
"7.8212182784423\n"
"665..55..4..418\n"
"7.353324687.62.\n") == 0);
free(board181097833);
board181097833 = NULL;


gamma_delete(board);

    return 0;
}
