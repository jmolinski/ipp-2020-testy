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
uuid: 738765718
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(22, 23, 7, 44);
assert( board != NULL );


assert( gamma_move(board, 1, 22, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 15, 14) == 1 );
assert( gamma_move(board, 3, 16, 3) == 1 );
assert( gamma_move(board, 3, 20, 0) == 1 );
assert( gamma_move(board, 4, 10, 17) == 1 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_golden_move(board, 7, 14, 15) == 0 );
assert( gamma_move(board, 1, 8, 17) == 1 );
assert( gamma_free_fields(board, 1) == 499 );
assert( gamma_move(board, 2, 21, 2) == 1 );
assert( gamma_move(board, 2, 3, 22) == 1 );
assert( gamma_golden_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 3, 3, 21) == 1 );
assert( gamma_move(board, 3, 15, 19) == 1 );
assert( gamma_move(board, 4, 22, 21) == 0 );
assert( gamma_move(board, 5, 0, 15) == 1 );
assert( gamma_move(board, 7, 21, 17) == 1 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 16, 4) == 1 );
assert( gamma_move(board, 4, 21, 9) == 1 );
assert( gamma_move(board, 5, 14, 19) == 1 );
assert( gamma_golden_move(board, 5, 0, 20) == 0 );
assert( gamma_move(board, 7, 14, 11) == 1 );
assert( gamma_move(board, 1, 13, 20) == 1 );
assert( gamma_free_fields(board, 1) == 487 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_golden_move(board, 3, 17, 21) == 0 );
assert( gamma_move(board, 4, 11, 17) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 5, 14, 18) == 1 );
assert( gamma_move(board, 6, 18, 18) == 1 );
assert( gamma_move(board, 6, 16, 20) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 1, 18, 11) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 15, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 19, 3) == 1 );
assert( gamma_move(board, 5, 20, 15) == 1 );
assert( gamma_move(board, 6, 17, 7) == 1 );
assert( gamma_move(board, 6, 18, 2) == 1 );
assert( gamma_golden_move(board, 6, 0, 20) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 7, 11, 10) == 1 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 4, 19, 11) == 1 );
assert( gamma_move(board, 4, 19, 12) == 1 );
assert( gamma_free_fields(board, 4) == 464 );
assert( gamma_move(board, 5, 13, 18) == 1 );
assert( gamma_move(board, 6, 21, 4) == 1 );
assert( gamma_move(board, 6, 3, 18) == 1 );
assert( gamma_move(board, 7, 20, 22) == 1 );
assert( gamma_move(board, 7, 21, 0) == 1 );
assert( gamma_move(board, 1, 16, 18) == 1 );
assert( gamma_move(board, 2, 17, 17) == 1 );
assert( gamma_move(board, 2, 19, 6) == 1 );
assert( gamma_move(board, 4, 6, 20) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 7, 1, 20) == 1 );
assert( gamma_move(board, 7, 10, 18) == 1 );
assert( gamma_move(board, 1, 10, 18) == 0 );
assert( gamma_move(board, 2, 15, 6) == 1 );
assert( gamma_free_fields(board, 2) == 450 );
assert( gamma_move(board, 3, 14, 15) == 1 );
assert( gamma_move(board, 3, 21, 3) == 1 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 6, 14, 5) == 1 );
assert( gamma_move(board, 6, 5, 15) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 21) == 1 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, 14) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 5, 19, 11) == 0 );
assert( gamma_move(board, 5, 4, 20) == 1 );
assert( gamma_move(board, 6, 7, 19) == 1 );
assert( gamma_move(board, 7, 6, 13) == 1 );
assert( gamma_move(board, 7, 14, 15) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 15, 21) == 1 );
assert( gamma_move(board, 3, 0, 17) == 1 );
assert( gamma_move(board, 4, 14, 16) == 1 );
assert( gamma_move(board, 4, 4, 15) == 1 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 2, 16, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 18, 12) == 1 );
assert( gamma_free_fields(board, 5) == 428 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 12, 18) == 1 );
assert( gamma_move(board, 7, 15, 1) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 1, 15, 10) == 1 );
assert( gamma_move(board, 2, 5, 18) == 1 );
assert( gamma_move(board, 2, 3, 19) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 16, 18) == 0 );
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 9) == 1 );
assert( gamma_move(board, 2, 21, 11) == 1 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 3, 12, 14) == 1 );
assert( gamma_move(board, 4, 13, 21) == 0 );
assert( gamma_move(board, 5, 1, 18) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 12, 21) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 1, 4, 17) == 1 );
assert( gamma_move(board, 1, 9, 21) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 3, 17) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 17, 4) == 1 );
assert( gamma_free_fields(board, 4) == 406 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 12, 16) == 1 );
assert( gamma_move(board, 6, 8, 19) == 1 );
assert( gamma_move(board, 7, 5, 17) == 1 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_move(board, 2, 19, 1) == 1 );
assert( gamma_move(board, 2, 7, 15) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 18) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 16, 10) == 1 );
assert( gamma_free_fields(board, 4) == 399 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 20) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_free_fields(board, 6) == 397 );
assert( gamma_move(board, 7, 20, 11) == 1 );
assert( gamma_move(board, 7, 13, 17) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 21, 4) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 7, 14, 4) == 1 );
assert( gamma_move(board, 7, 5, 21) == 1 );
assert( gamma_busy_fields(board, 7) == 23 );
assert( gamma_move(board, 1, 22, 8) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_free_fields(board, 1) == 388 );
assert( gamma_move(board, 2, 7, 13) == 1 );


char* board330276119 = gamma_board(board);
assert( board330276119 != NULL );
assert( strcmp(board330276119, 
"...2................7.\n"
"...3.7...1..67.2......\n"
".7..5.4......15.6.....\n"
"...2...66.....53......\n"
".5.6.2..1.7.655.1.6...\n"
"3..317..1.44.7...2...7\n"
"............6.4.......\n"
"5...46.2...3..3.....5.\n"
".6.....2...33..2......\n"
".25.2.72....3.........\n"
"...2.7.2.3........54..\n"
"..............7...1472\n"
"...6....2..7...14.....\n"
"....7....3..57..2....4\n"
"......................\n"
"...........4.....6....\n"
".....5.........2...2..\n"
"....33..1.....6.......\n"
".7.6.......12.7.24...6\n"
"...6...........33..5.3\n"
"........43........6..2\n"
"75.727.........7...2..\n"
"......7.1.....1.....37\n") == 0);
free(board330276119);
board330276119 = NULL;
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 3, 0, 17) == 0 );


char* board168377495 = gamma_board(board);
assert( board168377495 != NULL );
assert( strcmp(board168377495, 
"...2................7.\n"
"...3.7...1..67.2......\n"
".7..5.4......15.6.....\n"
"...2...66.....53......\n"
".5.6.2..1.7.655.1.6...\n"
"3..317..1.44.7...2...7\n"
"............6.4.......\n"
"5...46.2...3..3.....5.\n"
".6.....2...33..2......\n"
".25.2.72....3.........\n"
"...2.7.2.3........54..\n"
"..............7...1472\n"
"...6....2..7...14.....\n"
"....7....3..57..2....4\n"
"......................\n"
"...........4.....6....\n"
".....5...3.....2...2..\n"
"....33..1.....6.......\n"
".7.6.......12.7.24...6\n"
"...6...........33..5.3\n"
"........43........6..2\n"
"75.727.........7...2..\n"
"......7.1.....1.....37\n") == 0);
free(board168377495);
board168377495 = NULL;
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 6, 0, 20) == 1 );
assert( gamma_move(board, 6, 15, 4) == 1 );


char* board689045548 = gamma_board(board);
assert( board689045548 != NULL );
assert( strcmp(board689045548, 
"...2................7.\n"
"...3.7...1..67.2......\n"
"67..5.4......15.6.....\n"
"...2...66.....53......\n"
".5.6.2..1.7.655.1.6...\n"
"3..317..1.44.7...2...7\n"
"............6.4.......\n"
"5...46.2...3..3.....5.\n"
".6.....2...33..2......\n"
".25.2.72....3.........\n"
"...2.7.2.3........54..\n"
"..............7...1472\n"
"...6....2..7...14.....\n"
"....7....3..57..2....4\n"
"......................\n"
"4..........4.....6....\n"
".....5...3.....2...2..\n"
"....33..1.....6.......\n"
".7.6.......12.7624...6\n"
"...6........4..33..5.3\n"
"........43........6..2\n"
"75.727.........7...2..\n"
"......7.1.....1.....37\n") == 0);
free(board689045548);
board689045548 = NULL;
assert( gamma_move(board, 7, 20, 4) == 1 );


char* board210836243 = gamma_board(board);
assert( board210836243 != NULL );
assert( strcmp(board210836243, 
"...2................7.\n"
"...3.7...1..67.2......\n"
"67..5.4......15.6.....\n"
"...2...66.....53......\n"
".5.6.2..1.7.655.1.6...\n"
"3..317..1.44.7...2...7\n"
"............6.4.......\n"
"5...46.2...3..3.....5.\n"
".6.....2...33..2......\n"
".25.2.72....3.........\n"
"...2.7.2.3........54..\n"
"..............7...1472\n"
"...6....2..7...14.....\n"
"....7....3..57..2....4\n"
"......................\n"
"4..........4.....6....\n"
".....5...3.....2...2..\n"
"....33..1.....6.......\n"
".7.6.......12.7624..76\n"
"...6........4..33..5.3\n"
"........43........6..2\n"
"75.727.........7...2..\n"
"......7.1.....1.....37\n") == 0);
free(board210836243);
board210836243 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 21, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_free_fields(board, 2) == 380 );
assert( gamma_move(board, 3, 17, 6) == 1 );
assert( gamma_move(board, 3, 9, 14) == 1 );


char* board243313191 = gamma_board(board);
assert( board243313191 != NULL );
assert( strcmp(board243313191, 
"...2................7.\n"
"...3.7...1..67.2......\n"
"67..5.4......15.6.....\n"
"...2...66.....53......\n"
".5.6.2..1.7.655.1.6...\n"
"3..317..1.44.7...2...7\n"
"............6.4.......\n"
"5...46.2...3..3.....5.\n"
".6.....2.3.33..2......\n"
".25.2.72....3.........\n"
"...2.7.2.3........54..\n"
"..............7...1472\n"
"...6....2..7...14.....\n"
"....7....3..57..2....4\n"
"......................\n"
"4..........4.....6....\n"
".....5...3.....2.3.2..\n"
"....33..1.....6.......\n"
".7.6.......12.7624..76\n"
"...6........4..33..5.3\n"
"........43........6..2\n"
"75.727.........7...2..\n"
"..1...7.1.....1.....37\n") == 0);
free(board243313191);
board243313191 = NULL;
assert( gamma_move(board, 4, 14, 21) == 1 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 22, 13) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 16, 7) == 1 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 3, 9) == 1 );
assert( gamma_free_fields(board, 7) == 372 );
assert( gamma_free_fields(board, 1) == 372 );
assert( gamma_move(board, 2, 7, 20) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 20) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 18, 11) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 17, 18) == 1 );
assert( gamma_move(board, 3, 20, 3) == 1 );
assert( gamma_move(board, 4, 6, 19) == 1 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 22, 7) == 0 );
assert( gamma_move(board, 6, 16, 15) == 1 );
assert( gamma_move(board, 6, 16, 17) == 1 );
assert( gamma_busy_fields(board, 6) == 24 );
assert( gamma_free_fields(board, 6) == 360 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 7, 4, 20) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board204126094 = gamma_board(board);
assert( board204126094 != NULL );
assert( strcmp(board204126094, 
"...2................7.\n"
"...3.7...1..6742......\n"
"67.45.42.....15.6.....\n"
"...2..466.....53......\n"
".5.6.2..1.7.655.126...\n"
"3..317..1.44.7..62...7\n"
"............6.4.......\n"
"5...46.2...3..3.6...5.\n"
".6.....2.3.33..2......\n"
".25.2.72....3.........\n"
"5..2.7.2.3..4.....54..\n"
"..............7...1472\n"
"...6....2..7...14.....\n"
"...776...3..57..2....4\n"
"......................\n"
"4..........4....66....\n"
".....52..3..7..2.3.2..\n"
"..5.33.71.....6.......\n"
"67.6.......12.7624..76\n"
".1.6........4..33..533\n"
"........43........6..2\n"
"75.727.........7...2..\n"
"..1...7.1.....1.....37\n") == 0);
free(board204126094);
board204126094 = NULL;
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 3, 12, 16) == 0 );
assert( gamma_move(board, 4, 7, 20) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 13) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_move(board, 7, 3, 20) == 1 );
assert( gamma_move(board, 1, 21, 11) == 0 );
assert( gamma_move(board, 1, 7, 17) == 1 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 2, 21, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 15, 9) == 1 );
assert( gamma_move(board, 4, 11, 20) == 1 );
assert( gamma_move(board, 5, 19, 8) == 1 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 15, 15) == 1 );
assert( gamma_move(board, 7, 18, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 13, 19) == 1 );
assert( gamma_golden_move(board, 1, 18, 18) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 345 );
assert( gamma_move(board, 3, 17, 1) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_move(board, 5, 14, 19) == 0 );
assert( gamma_free_fields(board, 5) == 342 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 8, 15) == 1 );
assert( gamma_move(board, 7, 6, 15) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 7, 20) == 0 );
assert( gamma_move(board, 1, 14, 20) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 0, 19) == 1 );
assert( gamma_move(board, 3, 15, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 5, 13, 16) == 1 );
assert( gamma_move(board, 6, 18, 15) == 1 );
assert( gamma_move(board, 7, 2, 19) == 1 );
assert( gamma_busy_fields(board, 7) == 32 );
assert( gamma_free_fields(board, 7) == 333 );
assert( gamma_move(board, 1, 21, 1) == 1 );
assert( gamma_move(board, 1, 16, 22) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 2, 4, 20) == 0 );
assert( gamma_move(board, 3, 2, 18) == 1 );
assert( gamma_move(board, 4, 18, 6) == 1 );
assert( gamma_move(board, 5, 15, 3) == 0 );
assert( gamma_golden_move(board, 5, 10, 17) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 15, 12) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 17, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 4, 21, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 22, 17) == 0 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 6, 18, 20) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_free_fields(board, 7) == 319 );
assert( gamma_move(board, 1, 22, 10) == 0 );
assert( gamma_move(board, 1, 0, 16) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 21, 19) == 1 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 6, 2, 19) == 0 );
assert( gamma_move(board, 6, 19, 12) == 0 );
assert( gamma_move(board, 7, 20, 9) == 1 );
assert( gamma_free_fields(board, 7) == 316 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 2, 16, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 11, 20) == 0 );
assert( gamma_move(board, 7, 12, 21) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_move(board, 7, 16, 13) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 20, 12) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );


char* board472695051 = gamma_board(board);
assert( board472695051 != NULL );
assert( strcmp(board472695051, 
"...2............1...7.\n"
"...3.7...1..6742......\n"
"67.75.42...4.15.6.6...\n"
"2.72..466....153.....3\n"
".536.2..1.7.655.121...\n"
"3..317.11.54.7..62...7\n"
"1...........654.......\n"
"5...46727..3..366.6.5.\n"
".6.....2.3.33..2.3...2\n"
".25.2.722..63.........\n"
"5..2.7.2.3.24..6..542.\n"
"5.............7.2.1472\n"
"...6...72..7...14....4\n"
"...776...3..57.42.7.74\n"
"...6...............5..\n"
"4.....7....44...66....\n"
"....452..3..7..2.342..\n"
"..5.33.71.4...63......\n"
"67.6....4..12.7624..76\n"
".1.6....3...4..33..533\n"
".......543.6......6..2\n"
"75.7272..2.1...7.3.2.1\n"
"..1..77.1.4...1.....37\n") == 0);
free(board472695051);
board472695051 = NULL;
assert( gamma_move(board, 3, 17, 21) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );


char* board260784211 = gamma_board(board);
assert( board260784211 != NULL );
assert( strcmp(board260784211, 
"...2............1...7.\n"
"...3.7...1..6742.3....\n"
"67.75.42...4.15.6.6...\n"
"2.72..466....153.....3\n"
".536.2..1.7.655.121...\n"
"3..317.11.54.7..62...7\n"
"1...........654.......\n"
"5...46727..3..366.6.5.\n"
".6.....2.3.33..2.3...2\n"
".25.2.722..63.........\n"
"5..2.7.2.3424..6..542.\n"
"5..4..........7.2.1472\n"
"...6...72..7...14....4\n"
"...776...3..57.42.7.74\n"
"...6...............5..\n"
"4.....7....44...66....\n"
"....452..3..7..2.342..\n"
"..5.33.71.4...63......\n"
"67.6....4..12.7624..76\n"
".1.6....3...4..33..533\n"
".......543.6......6..2\n"
"75.72725.2.1...7.3.2.1\n"
"..1..77.1.4...1.....37\n") == 0);
free(board260784211);
board260784211 = NULL;
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 13, 21) == 0 );
assert( gamma_move(board, 7, 17, 12) == 1 );
assert( gamma_move(board, 1, 6, 16) == 1 );
assert( gamma_move(board, 1, 9, 21) == 0 );
assert( gamma_golden_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 15, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 20) == 0 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_move(board, 5, 15, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 14) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 7, 18, 11) == 0 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 1, 20, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 21, 6) == 1 );
assert( gamma_free_fields(board, 2) == 297 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_move(board, 4, 15, 22) == 1 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 6, 18, 11) == 0 );
assert( gamma_move(board, 6, 10, 16) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_golden_move(board, 7, 6, 19) == 0 );
assert( gamma_move(board, 1, 19, 16) == 1 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 18, 20) == 0 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_golden_move(board, 7, 2, 21) == 0 );
assert( gamma_move(board, 1, 6, 20) == 0 );
assert( gamma_move(board, 1, 16, 2) == 1 );
assert( gamma_move(board, 2, 13, 16) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 5, 8, 20) == 1 );
assert( gamma_move(board, 5, 21, 12) == 1 );
assert( gamma_move(board, 6, 21, 18) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 1, 6, 16) == 0 );
assert( gamma_move(board, 1, 18, 19) == 1 );
assert( gamma_free_fields(board, 1) == 282 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 10, 22) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 21, 9) == 0 );
assert( gamma_move(board, 5, 3, 18) == 0 );
assert( gamma_move(board, 5, 17, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 37 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 1, 15, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 7, 6, 15) == 0 );


char* board128206018 = gamma_board(board);
assert( board128206018 != NULL );
assert( strcmp(board128206018, 
"...2......3....41...7.\n"
"...3.7...1..6742.3....\n"
"67.75.425..4.15.6.6...\n"
"2.72..466....153..1..3\n"
".536.2..1.7.655.121..6\n"
"3..317.11.54.7..62...7\n"
"1.....1...6.654....1..\n"
"5...46727..3..366.6.5.\n"
".6.....263.33..2.3...2\n"
".25.26722.263.........\n"
"5..2.7.2.3424..6.75425\n"
"5..4.....5.7..7.251472\n"
"...6...72.47...14....4\n"
"...776.6.3..57.42.7.74\n"
"...6....7..........5..\n"
"4.....7....44..566....\n"
".2..452..3..7..2.342.2\n"
"..5.33.71.4...63......\n"
"67.6....4731237624..76\n"
".1.636.33...4..33..533\n"
"6..2...54376...11.6..2\n"
"75.72725.2.1...7.3.2.1\n"
"..1..77.1.4..11.....37\n") == 0);
free(board128206018);
board128206018 = NULL;
assert( gamma_move(board, 1, 13, 16) == 0 );
assert( gamma_move(board, 1, 21, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 18) == 1 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 4, 19, 15) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 3, 16) == 1 );
assert( gamma_busy_fields(board, 6) == 38 );
assert( gamma_golden_move(board, 6, 22, 3) == 0 );
assert( gamma_move(board, 7, 1, 12) == 1 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_golden_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_golden_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 19, 8) == 0 );
assert( gamma_move(board, 4, 5, 22) == 1 );
assert( gamma_free_fields(board, 4) == 264 );
assert( gamma_move(board, 5, 16, 16) == 1 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_free_fields(board, 1) == 262 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 21) == 1 );
assert( gamma_move(board, 3, 11, 22) == 1 );
assert( gamma_move(board, 4, 15, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 21, 1) == 0 );
assert( gamma_move(board, 1, 16, 15) == 0 );
assert( gamma_move(board, 1, 18, 10) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 258 );
assert( gamma_move(board, 4, 17, 19) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 19, 8) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 21, 10) == 0 );
assert( gamma_move(board, 7, 21, 17) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 14, 19) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 20, 20) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_golden_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 1, 20) == 0 );
assert( gamma_move(board, 7, 18, 14) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 13, 20) == 0 );
assert( gamma_move(board, 1, 13, 10) == 1 );
assert( gamma_move(board, 2, 21, 7) == 1 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 19, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 22, 18) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 0, 15) == 0 );
assert( gamma_move(board, 6, 11, 18) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 43 );
assert( gamma_golden_move(board, 7, 11, 16) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 12, 11) == 1 );
assert( gamma_move(board, 4, 13, 14) == 1 );
assert( gamma_move(board, 4, 16, 17) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 7, 16, 12) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_golden_move(board, 7, 18, 16) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 9, 19) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 19, 19) == 1 );
assert( gamma_move(board, 4, 17, 8) == 1 );
assert( gamma_move(board, 4, 20, 22) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 10, 15) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 46 );


char* board853680559 = gamma_board(board);
assert( board853680559 != NULL );
assert( strcmp(board853680559, 
"...2.4....33...41...7.\n"
"3..3.7...1..6742.3....\n"
"67.75.425..4.15.6.6.5.\n"
"2.72..4662...153.413.3\n"
"3536.2..1.76655.121..6\n"
"3..317.11.54.7..62...7\n"
"1..6..1...6.654.5..1..\n"
"5...46727.53..366.6451\n"
".6.....2632334.2.37..2\n"
".25.26722.263..4......\n"
"57.2.7.2.3424..6775425\n"
"5..4.....5.73.7.251472\n"
"...6...72.47.1.14.13.4\n"
"...776.6.3..57.42.7.74\n"
".5.6...77........4.5..\n"
"4...7.7....44..566...2\n"
".2.2452.13..7..2.342.2\n"
"..5.33.71.4..163......\n"
"66.6....4731237624..76\n"
".1.636.32...47.33..533\n"
"6..2..154376...11.6..2\n"
"75472725.2.1...7.3.2.1\n"
"5.1..77.164..11.....37\n") == 0);
free(board853680559);
board853680559 = NULL;
assert( gamma_move(board, 1, 0, 19) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 20, 12) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_free_fields(board, 2) == 236 );


char* board365018776 = gamma_board(board);
assert( board365018776 != NULL );
assert( strcmp(board365018776, 
"...2.4....33...41...7.\n"
"3..3.7...1..6742.3....\n"
"67.75.425..4.15.6.6.5.\n"
"2.72..4662...153.413.3\n"
"3536.2..1.76655.121..6\n"
"3..317.11.54.7..62...7\n"
"1..6..1...6.654.5..1..\n"
"5...46727.53..366.6451\n"
".6.....2632334.2.37..2\n"
".25.26722.263..4......\n"
"57.2.7.2.3424..6775425\n"
"5..4.....5.73.7.251472\n"
"...6...72.47.1.14.13.4\n"
"...776.6.3..57.42.7.74\n"
".5.6...77........4.5..\n"
"4...7.7....44..566...2\n"
".2.2452.13..7..2.342.2\n"
"..5.33.71.4..163......\n"
"66.6....4731237624..76\n"
".1.636.32...47.33..533\n"
"6..2..154376...11.6..2\n"
"75472725.2.1...7.3.2.1\n"
"5.1..77.164..11.....37\n") == 0);
free(board365018776);
board365018776 = NULL;
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_free_fields(board, 5) == 236 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 1, 11, 21) == 1 );
assert( gamma_move(board, 2, 22, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 16, 21) == 1 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 5, 10, 18) == 0 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 43 );
assert( gamma_move(board, 7, 13, 19) == 0 );
assert( gamma_free_fields(board, 7) == 232 );
assert( gamma_golden_move(board, 7, 18, 1) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 4, 22, 21) == 0 );
assert( gamma_move(board, 4, 19, 11) == 0 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 5, 3, 22) == 0 );
assert( gamma_free_fields(board, 5) == 232 );
assert( gamma_move(board, 6, 12, 21) == 0 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 16, 22) == 0 );
assert( gamma_move(board, 1, 14, 16) == 0 );
assert( gamma_move(board, 1, 0, 20) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 43 );
assert( gamma_free_fields(board, 2) == 231 );
assert( gamma_move(board, 3, 15, 12) == 0 );
assert( gamma_move(board, 3, 19, 18) == 1 );
assert( gamma_move(board, 4, 6, 19) == 0 );
assert( gamma_move(board, 5, 21, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 17, 18) == 0 );
assert( gamma_move(board, 7, 21, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_move(board, 2, 17, 20) == 1 );
assert( gamma_move(board, 3, 20, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 41 );


char* board293995793 = gamma_board(board);
assert( board293995793 != NULL );
assert( strcmp(board293995793, 
"...2.4....33...41...7.\n"
"3..3.7...1.1674243....\n"
"67.75.425..4.15.626.5.\n"
"2.72..4662...153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3..317.11.54.7..62...7\n"
"1..6..1...6.654.5..1..\n"
"5...46727.53..366.6451\n"
".6.....2632334.2.37..2\n"
".25.26722.263..4......\n"
"57.2.7.213424..6775425\n"
"5..4.....5.73.7.251472\n"
"...6...72.47.1.14.13.4\n"
"...776.6.3.657.42.7.74\n"
".5.6...77........4.53.\n"
"4...7.7....44..566...2\n"
".2.2452.136.7..2.342.2\n"
"..5.33.7164..163.....7\n"
"66.6....4731237624..76\n"
".1.636.32...47.33..533\n"
"6..2..154376...11.6..2\n"
"75472725.2.1...7.3.2.1\n"
"5.1..77.164..11.....37\n") == 0);
free(board293995793);
board293995793 = NULL;
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_move(board, 5, 19, 11) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 7, 11, 21) == 0 );
assert( gamma_move(board, 1, 3, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 223 );
assert( gamma_move(board, 3, 19, 20) == 1 );
assert( gamma_golden_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_free_fields(board, 5) == 222 );
assert( gamma_move(board, 6, 18, 4) == 1 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_free_fields(board, 6) == 221 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 20) == 1 );
assert( gamma_move(board, 7, 8, 21) == 1 );
assert( gamma_move(board, 1, 17, 9) == 1 );
assert( gamma_move(board, 1, 15, 17) == 1 );
assert( gamma_move(board, 2, 10, 20) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_move(board, 4, 20, 22) == 0 );
assert( gamma_move(board, 5, 18, 19) == 0 );
assert( gamma_busy_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 12, 19) == 1 );
assert( gamma_move(board, 7, 2, 20) == 0 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_golden_move(board, 2, 20, 10) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 17, 17) == 0 );
assert( gamma_move(board, 4, 20, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 12, 13) == 0 );
assert( gamma_move(board, 1, 2, 14) == 1 );


char* board789182858 = gamma_board(board);
assert( board789182858 != NULL );
assert( strcmp(board789182858, 
"...2.4....33...41...7.\n"
"3..3.7..71.1674243....\n"
"67775.425.24.15.62635.\n"
"2.72..4662..6153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3..317.11.54.7.162...7\n"
"1..6..1...6.654.5..1..\n"
"5...46727.53..366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4......\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.7.251472\n"
"...6...72.47.1.14.13.4\n"
"...776.6.3.657.4217.74\n"
".5.6...77........4.53.\n"
"4...7.7....44..566...2\n"
".2.2452.136.7..2.342.2\n"
"..5.33.7164..163....47\n"
"66.6....47312376246.76\n"
".1.636.32...47.33..533\n"
"6..2..154376...11.6..2\n"
"75472725.2.1...7.3.2.1\n"
"5.1..77.164..11.....37\n") == 0);
free(board789182858);
board789182858 = NULL;
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_free_fields(board, 2) == 213 );
assert( gamma_move(board, 3, 18, 20) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 4, 13, 16) == 0 );
assert( gamma_move(board, 4, 19, 20) == 0 );


char* board724779224 = gamma_board(board);
assert( board724779224 != NULL );
assert( strcmp(board724779224, 
"...2.4....33...41...7.\n"
"3..3.7..71.1674243....\n"
"67775.425.24.15.62635.\n"
"2.72..4662..6153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3..317.11.54.7.162...7\n"
"1..6..1...6.654.5..1..\n"
"5...46727.53..366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4......\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.7.251472\n"
"...6...72.47.1.14.13.4\n"
"...776.6.3.657.4217.74\n"
".5.6...77........4.53.\n"
"4...7.7....44..566...2\n"
".2.2452.136.7..2.342.2\n"
"..5.33.7164..163....47\n"
"66.6....47312376246.76\n"
".1.636.32...47.33..533\n"
"6..2..154376...11.6..2\n"
"75472725.2.1...7.3.2.1\n"
"5.1..77.164..11.....37\n") == 0);
free(board724779224);
board724779224 = NULL;
assert( gamma_move(board, 5, 8, 16) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 13, 16) == 0 );
assert( gamma_move(board, 6, 18, 3) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 19, 20) == 0 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 3, 17, 21) == 0 );
assert( gamma_move(board, 4, 21, 22) == 1 );
assert( gamma_move(board, 4, 17, 5) == 1 );
assert( gamma_move(board, 5, 14, 3) == 1 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 206 );
assert( gamma_move(board, 7, 6, 16) == 0 );
assert( gamma_free_fields(board, 7) == 206 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 20, 12) == 0 );
assert( gamma_move(board, 2, 2, 17) == 1 );
assert( gamma_move(board, 2, 20, 16) == 1 );
assert( gamma_busy_fields(board, 2) == 48 );
assert( gamma_golden_move(board, 2, 18, 14) == 0 );
assert( gamma_move(board, 3, 19, 10) == 0 );
assert( gamma_move(board, 4, 10, 21) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 16, 12) == 0 );
assert( gamma_move(board, 6, 15, 17) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 8, 21) == 0 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_golden_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 15, 8) == 1 );
assert( gamma_move(board, 2, 16, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 16) == 1 );
assert( gamma_move(board, 4, 21, 7) == 0 );
assert( gamma_move(board, 5, 2, 20) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 5, 18) == 0 );
assert( gamma_busy_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 15, 8) == 0 );
assert( gamma_move(board, 7, 14, 1) == 1 );
assert( gamma_move(board, 1, 22, 19) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 16, 1) == 1 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_free_fields(board, 4) == 195 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 18, 7) == 1 );
assert( gamma_move(board, 6, 13, 17) == 0 );


char* board730637612 = gamma_board(board);
assert( board730637612 != NULL );
assert( strcmp(board730637612, 
"...2.4....33...41...74\n"
"3..3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72..4662..6153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.5..12.\n"
"5...46727.53..366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4......\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.7.251472\n"
"4..6...72.47.1.14.13.4\n"
"...776.6.3.657.4217.74\n"
".5.6...77......2.4.53.\n"
"4...7.7....44..5666..2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..163.4..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6..2\n"
"75472725.2.1..7723.2.1\n"
"5.1..77.1647.11.....37\n") == 0);
free(board730637612);
board730637612 = NULL;
assert( gamma_move(board, 7, 3, 20) == 0 );


char* board932088630 = gamma_board(board);
assert( board932088630 != NULL );
assert( strcmp(board932088630, 
"...2.4....33...41...74\n"
"3..3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72..4662..6153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.5..12.\n"
"5...46727.53..366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4......\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.7.251472\n"
"4..6...72.47.1.14.13.4\n"
"...776.6.3.657.4217.74\n"
".5.6...77......2.4.53.\n"
"4...7.7....44..5666..2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..163.4..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6..2\n"
"75472725.2.1..7723.2.1\n"
"5.1..77.1647.11.....37\n") == 0);
free(board932088630);
board932088630 = NULL;
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 15, 17) == 0 );
assert( gamma_move(board, 2, 17, 16) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 16, 5) == 1 );
assert( gamma_move(board, 6, 17, 13) == 1 );
assert( gamma_move(board, 6, 15, 8) == 0 );
assert( gamma_free_fields(board, 6) == 188 );
assert( gamma_move(board, 7, 11, 19) == 1 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 1, 22, 7) == 0 );
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 51 );


char* board489167149 = gamma_board(board);
assert( board489167149 != NULL );
assert( strcmp(board489167149, 
"...2.4....33...41...74\n"
"3..3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72..4662.76153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.53..366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4.6....\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.7.251472\n"
"4..6...72.47.1.14.13.4\n"
"..177616.3.657.4217.74\n"
".5.6...77......2.4.53.\n"
"4...7.7....44..5666..2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6..2\n"
"75472725.2.1..7723.2.1\n"
"5.1..7731647.11.....37\n") == 0);
free(board489167149);
board489167149 = NULL;
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 22, 12) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 5, 13, 19) == 0 );
assert( gamma_golden_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 22, 9) == 0 );
assert( gamma_move(board, 7, 19, 6) == 0 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_move(board, 2, 5, 19) == 1 );
assert( gamma_move(board, 2, 12, 15) == 1 );
assert( gamma_free_fields(board, 2) == 66 );


char* board359129883 = gamma_board(board);
assert( board359129883 != NULL );
assert( strcmp(board359129883, 
"...2.4....33...41...74\n"
"3..3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72.24662.76153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4.6....\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.7.251472\n"
"4..6...72.47.1.14.13.4\n"
"..177616.3.657.4217.74\n"
".5.6...77......2.4.53.\n"
"4...7.7....44..5666..2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6..2\n"
"75472725.2.1..7723.2.1\n"
"5.1..7731647.11.....37\n") == 0);
free(board359129883);
board359129883 = NULL;
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 12, 0) == 1 );


char* board936923758 = gamma_board(board);
assert( board936923758 != NULL );
assert( strcmp(board936923758, 
"...2.4....33...41...74\n"
"3..3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72.24662.76153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4.6....\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.7.251472\n"
"4..6...72.47.1.14.13.4\n"
"..177616.3.657.4217.74\n"
".5.6...77......2.4.53.\n"
"4...7.7....44..5666..2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6..2\n"
"75472725.2.1..7723.2.1\n"
"5.1..7731647711.....37\n") == 0);
free(board936923758);
board936923758 = NULL;
assert( gamma_move(board, 1, 13, 18) == 0 );
assert( gamma_move(board, 1, 15, 11) == 1 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 18, 9) == 0 );
assert( gamma_move(board, 6, 18, 1) == 1 );
assert( gamma_move(board, 7, 22, 8) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 22, 7) == 0 );
assert( gamma_move(board, 1, 21, 18) == 0 );
assert( gamma_free_fields(board, 1) == 180 );
assert( gamma_golden_move(board, 1, 16, 8) == 0 );
assert( gamma_move(board, 2, 21, 7) == 0 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 180 );


char* board860410469 = gamma_board(board);
assert( board860410469 != NULL );
assert( strcmp(board860410469, 
"...2.4....33...41...74\n"
"3..3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72.24662.76153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4.6....\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.71251472\n"
"43.6...72.47.1.14.13.4\n"
"..177616.3.657.4217.74\n"
".5.6...774.....2.4.53.\n"
"4...7.7....44..5666..2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6..2\n"
"75472725.2.1..772362.1\n"
"5.1..7731647711.....37\n") == 0);
free(board860410469);
board860410469 = NULL;
assert( gamma_move(board, 4, 18, 15) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 180 );
assert( gamma_move(board, 6, 14, 20) == 0 );
assert( gamma_free_fields(board, 6) == 180 );
assert( gamma_move(board, 7, 10, 15) == 0 );


char* board752561795 = gamma_board(board);
assert( board752561795 != NULL );
assert( strcmp(board752561795, 
"...2.4....33...41...74\n"
"3..3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72.24662.76153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614...2632334.2.37..2\n"
".25.26722.263..4.6....\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.71251472\n"
"43.6...72.47.1.14.13.4\n"
"..177616.3.657.4217.74\n"
".5.6...774.....2.4.53.\n"
"4...7.7....44..5666..2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6..2\n"
"75472725.2.1..772362.1\n"
"5.1..7731647711.....37\n") == 0);
free(board752561795);
board752561795 = NULL;
assert( gamma_move(board, 1, 19, 20) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 14, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 20, 15) == 0 );
assert( gamma_move(board, 3, 20, 12) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 21, 1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 22, 8) == 0 );
assert( gamma_move(board, 6, 1, 21) == 1 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 16, 18) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_free_fields(board, 7) == 177 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_free_fields(board, 1) == 177 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 21, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 0, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 15, 6) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 53 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_free_fields(board, 1) == 175 );
assert( gamma_move(board, 2, 21, 6) == 0 );
assert( gamma_move(board, 2, 19, 13) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 22) == 0 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 5, 20, 3) == 0 );
assert( gamma_move(board, 6, 13, 18) == 0 );
assert( gamma_move(board, 6, 20, 2) == 1 );
assert( gamma_move(board, 7, 19, 7) == 1 );
assert( gamma_move(board, 7, 10, 19) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_free_fields(board, 2) == 59 );


char* board750821570 = gamma_board(board);
assert( board750821570 != NULL );
assert( strcmp(board750821570, 
"...2.4....33...41...74\n"
"36.3.7..7141674243....\n"
"67775.425.24.15.62635.\n"
"2.72.24662776153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162...7\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614...263233422.37..2\n"
".25.26722.263..4.6....\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273.71251472\n"
"43.6...72.47.1.14.13.4\n"
".117761623.657.4217.74\n"
".5.6.1.774.....2.4.53.\n"
"4..57.75...44..56667.2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6.62\n"
"75472725.2.1..772362.1\n"
"5.1..7731647711.....37\n") == 0);
free(board750821570);
board750821570 = NULL;
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 5, 20, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 22, 14) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 21, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, 21, 4) == 0 );
assert( gamma_move(board, 5, 2, 21) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 15, 20) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_free_fields(board, 7) == 165 );
assert( gamma_move(board, 1, 0, 19) == 0 );
assert( gamma_move(board, 2, 21, 7) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 5, 10, 16) == 0 );
assert( gamma_move(board, 5, 16, 20) == 0 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 55 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 7, 1, 22) == 1 );
assert( gamma_move(board, 1, 2, 19) == 0 );
assert( gamma_move(board, 1, 20, 17) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 21, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 55 );


char* board745285012 = gamma_board(board);
assert( board745285012 != NULL );
assert( strcmp(board745285012, 
".7.2.4....33...41...74\n"
"3653.7..7141674243....\n"
"67775.425.24.15662635.\n"
"2.72.24662776153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162..17\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614...263233422.37..2\n"
".25726722.263..4.6....\n"
"57.2.7.213424..6775425\n"
"5..4.6...5273171251472\n"
"43.6...72447.1.14.13.4\n"
".117761623.657.4217.74\n"
".5.6.1.7744....2.4.53.\n"
"4..57.75...44..56667.2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..154376...11.6.62\n"
"75472725.2.1..772362.1\n"
"5.1..7731647711.....37\n") == 0);
free(board745285012);
board745285012 = NULL;
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 5, 15, 19) == 0 );
assert( gamma_move(board, 6, 19, 1) == 0 );
assert( gamma_move(board, 7, 19, 0) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_move(board, 4, 13, 22) == 1 );
assert( gamma_busy_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 22, 8) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 13, 21) == 0 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_free_fields(board, 2) == 158 );
assert( gamma_move(board, 3, 6, 14) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 0, 15) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 17, 13) == 0 );
assert( gamma_move(board, 7, 20, 16) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 1, 19, 19) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 18, 13) == 1 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 19) == 0 );
assert( gamma_golden_move(board, 7, 1, 21) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );


char* board392058781 = gamma_board(board);
assert( board392058781 != NULL );
assert( strcmp(board392058781, 
".7.2.4....33.4.41...74\n"
"3653.7..7141674243....\n"
"67775.425.24.15662635.\n"
"2.72.24662776153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162..17\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614..3263233422.37..2\n"
".25726722.263..4.62...\n"
"57.227.213424..6775425\n"
"5..4.6...5273171251472\n"
"43.6...72447.1.14.13.4\n"
".1177616233657.4217.74\n"
".5.6.117744....2.4.53.\n"
"4..57.75...44..56667.2\n"
".2.2452.136.7..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..1543761..11.6.62\n"
"75472725.2.1..772362.1\n"
"5.1..7731647711.....37\n") == 0);
free(board392058781);
board392058781 = NULL;
assert( gamma_move(board, 3, 1, 20) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 22, 15) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_free_fields(board, 7) == 53 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 21, 0) == 0 );
assert( gamma_move(board, 2, 1, 20) == 0 );
assert( gamma_move(board, 2, 2, 20) == 0 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 4, 14, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 48 );


char* board591350550 = gamma_board(board);
assert( board591350550 != NULL );
assert( strcmp(board591350550, 
".7.2.4....33.4.41...74\n"
"3653.7..7141674243....\n"
"67775.425.24.15662635.\n"
"2.72.24662776153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162..17\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614..3263233422.37..2\n"
".25726722.263..4.62...\n"
"57.227.213424..6775425\n"
"5..4.6...5273171251472\n"
"43.6...72447.1.14.13.4\n"
".1177616233657.4217.74\n"
".5.6.117744....2.4.53.\n"
"4..57.75...44..56667.2\n"
".2.2452.13647..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..1543761..11.6.62\n"
"75472725.2.1..772362.1\n"
"5.1..7731647711.....37\n") == 0);
free(board591350550);
board591350550 = NULL;
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_free_fields(board, 5) == 154 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 20, 14) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );


char* board913658418 = gamma_board(board);
assert( board913658418 != NULL );
assert( strcmp(board913658418, 
".7.2.4....33.4.41...74\n"
"3653.7..7141674243....\n"
"67775.425.24.15662635.\n"
"2.72.24662776153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.54.7.162..17\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614..3263233422.37.62\n"
".25726722.263..4.62...\n"
"57.227.213424..6775425\n"
"5..4.6...5273171251472\n"
"43.6...72447.1.14.13.4\n"
".1177616233657.4217.74\n"
".5.6.117744....2.4.53.\n"
"4..57.75...44..56667.2\n"
".2.2452.13647..2.342.2\n"
".15.33.7164..16354..47\n"
"66.6....47312376246.76\n"
"61.636.323..47533.6533\n"
"6.12..1543761..11.6.62\n"
"75472725.2.1..772362.1\n"
"5.1..7731647711.....37\n") == 0);
free(board913658418);
board913658418 = NULL;
assert( gamma_move(board, 1, 17, 18) == 0 );
assert( gamma_move(board, 1, 12, 17) == 1 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_free_fields(board, 3) == 152 );
assert( gamma_move(board, 4, 0, 16) == 0 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 6, 9, 19) == 0 );
assert( gamma_move(board, 7, 21, 19) == 0 );
assert( gamma_move(board, 7, 15, 7) == 0 );
assert( gamma_move(board, 1, 22, 6) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_free_fields(board, 3) == 152 );
assert( gamma_move(board, 4, 21, 20) == 1 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_golden_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 38 );
assert( gamma_free_fields(board, 5) == 151 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 20, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 3, 19) == 0 );
assert( gamma_move(board, 1, 22, 12) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 21, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_golden_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 8, 21) == 0 );
assert( gamma_golden_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 21, 11) == 0 );
assert( gamma_move(board, 5, 5, 14) == 1 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 21, 14) == 0 );
assert( gamma_move(board, 7, 18, 15) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 1, 20, 9) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 16, 18) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_golden_move(board, 4, 10, 13) == 1 );
assert( gamma_move(board, 5, 21, 6) == 0 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 1, 19, 4) == 1 );
assert( gamma_move(board, 1, 15, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 14, 16) == 0 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_move(board, 4, 18, 7) == 0 );
assert( gamma_move(board, 4, 20, 0) == 0 );
assert( gamma_move(board, 5, 21, 4) == 0 );
assert( gamma_move(board, 6, 16, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 7, 17, 21) == 0 );
assert( gamma_free_fields(board, 7) == 50 );
assert( gamma_move(board, 1, 18, 15) == 0 );


char* board509960162 = gamma_board(board);
assert( board509960162 != NULL );
assert( strcmp(board509960162, 
".7.2.4....33.4.41...74\n"
"3653.7..7141674243....\n"
"67775.425.24.156626354\n"
"2.72.24662776153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.5417.162..17\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614.53263233422.37.62\n"
".25726722.463..4.62...\n"
"57.227.213424..6775425\n"
"5..4.6...5273171251472\n"
"43.6...72447.1.14.13.4\n"
".1177616233657.4217.74\n"
".5.6.117744....2.4.53.\n"
"4..57.75...44..56667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.7164..16354..47\n"
"66.6....47312376246176\n"
"61.636.323..47533.6533\n"
"6.12..15437614.11.6.62\n"
"75472725.2.1..77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board509960162);
board509960162 = NULL;
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_move(board, 3, 20, 1) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 5, 20) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 14, 16) == 0 );
assert( gamma_move(board, 7, 20, 20) == 0 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 1, 19, 5) == 1 );
assert( gamma_move(board, 1, 21, 13) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_free_fields(board, 3) == 141 );
assert( gamma_move(board, 4, 10, 20) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_free_fields(board, 6) == 141 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 16, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_free_fields(board, 1) == 141 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 1, 22) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_golden_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 22, 0) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 1, 16, 18) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );


char* board787087010 = gamma_board(board);
assert( board787087010 != NULL );
assert( strcmp(board787087010, 
".7.2.4....33.4.41...74\n"
"3653.7..7141674243....\n"
"677755425.24.156626354\n"
"2.72.24662776153.413.3\n"
"3536.2..1.76655.1213.6\n"
"3.2317.11.5417.162..17\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614.53263233422.37.62\n"
".25726722.463..4.62..1\n"
"57.227.213424..6775425\n"
"5..4.6..45273171251472\n"
"43.6...72447.1.14.13.4\n"
".1177616233657.4217.74\n"
".5.6.117744....2.4.53.\n"
"4..57.75...44..56667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.7164..16354.147\n"
"66.6....47312376246176\n"
"61.636.323..47533.6533\n"
"6.12..15437614.11.6.62\n"
"75472725.2.14.77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board787087010);
board787087010 = NULL;
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 20, 9) == 0 );
assert( gamma_move(board, 6, 8, 21) == 0 );
assert( gamma_busy_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 7, 20) == 0 );
assert( gamma_move(board, 7, 4, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 58 );
assert( gamma_move(board, 1, 21, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 5, 21, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_move(board, 6, 14, 15) == 0 );
assert( gamma_move(board, 7, 14, 4) == 0 );
assert( gamma_move(board, 1, 20, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 17, 8) == 0 );
assert( gamma_move(board, 5, 15, 11) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 9, 18) == 1 );
assert( gamma_move(board, 7, 16, 7) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 20, 20) == 0 );
assert( gamma_move(board, 4, 18, 18) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 22, 17) == 0 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_free_fields(board, 5) == 135 );
assert( gamma_move(board, 6, 0, 16) == 0 );
assert( gamma_move(board, 6, 2, 19) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 11, 22) == 0 );
assert( gamma_move(board, 5, 22, 0) == 0 );
assert( gamma_move(board, 5, 17, 2) == 1 );
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_golden_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 17, 22) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 12, 21) == 0 );
assert( gamma_move(board, 4, 19, 18) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 19, 4) == 0 );
assert( gamma_move(board, 7, 12, 5) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_busy_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 8, 16) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_golden_move(board, 4, 18, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 12, 20) == 1 );
assert( gamma_move(board, 6, 0, 18) == 0 );
assert( gamma_free_fields(board, 6) == 130 );
assert( gamma_move(board, 7, 8, 16) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 19, 9) == 1 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 16, 15) == 0 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 7, 17, 6) == 0 );
assert( gamma_move(board, 7, 3, 19) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 22, 2) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 19, 15) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );


char* board353884675 = gamma_board(board);
assert( board353884675 != NULL );
assert( strcmp(board353884675, 
".7.2.4....33.4.41...74\n"
"3653.7..7141674243....\n"
"677755425.245156626354\n"
"2.72.24662776153.413.3\n"
"3536.2..1676655.1213.6\n"
"3.2317.11.5417.162..17\n"
"1..63.1.5.6.654.52.12.\n"
"5...46727.532.366.6451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424..6775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"11177616233657.4217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344..56667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.71644716354.147\n"
"66.63...47312376246176\n"
"61.636.323..47533.6533\n"
"6.12..15437614.1156.62\n"
"75472725.2.14.77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board353884675);
board353884675 = NULL;
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 11, 16) == 1 );
assert( gamma_free_fields(board, 5) == 128 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 22, 9) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 17, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 5, 16) == 1 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 7, 17, 14) == 0 );
assert( gamma_move(board, 7, 16, 21) == 0 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_move(board, 1, 10, 20) == 0 );
assert( gamma_move(board, 2, 19, 20) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );


char* board132241051 = gamma_board(board);
assert( board132241051 != NULL );
assert( strcmp(board132241051, 
".7.2.4....33.4.41...74\n"
"3653.7..7141674243....\n"
"677755425.245156626354\n"
"2.72.24662776153.413.3\n"
"3536.2..1676655.1213.6\n"
"3.2317.11.5417.162..17\n"
"1..6361.5.65654.52.12.\n"
"5...46727.532.366.6451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424..6775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"11177616233657.4217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344..56667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.71644716354.147\n"
"66.63...47312376246176\n"
"61.636.323..4753336533\n"
"6.12..15437614.1156.62\n"
"75472725.2.14.77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board132241051);
board132241051 = NULL;
assert( gamma_move(board, 3, 18, 21) == 1 );
assert( gamma_move(board, 3, 9, 17) == 1 );
assert( gamma_golden_move(board, 3, 12, 16) == 1 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 55 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 19) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 7, 17, 18) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 21, 14) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_move(board, 5, 7, 20) == 0 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 0, 17) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_golden_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 20, 12) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 18, 15) == 0 );
assert( gamma_move(board, 5, 20, 21) == 1 );
assert( gamma_move(board, 6, 21, 20) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_busy_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 6, 16) == 0 );
assert( gamma_free_fields(board, 5) == 122 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 10, 20) == 0 );
assert( gamma_move(board, 7, 19, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 2, 2, 16) == 1 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 7, 21) == 0 );
assert( gamma_free_fields(board, 4) == 44 );


char* board879813495 = gamma_board(board);
assert( board879813495 != NULL );
assert( strcmp(board879813495, 
".7.2.4....33.4.41...74\n"
"3653.7..71416742433.5.\n"
"677755425.245156626354\n"
"2.72.24662776153.413.3\n"
"3536.2..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.366.6451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"11177616233657.4217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.71644716354.147\n"
"66.63...47312376246176\n"
"61.636.323..4753336533\n"
"6.12..15437614.1156.62\n"
"75472725.2.14.77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board879813495);
board879813495 = NULL;
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 16, 19) == 0 );
assert( gamma_move(board, 1, 13, 20) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 19, 19) == 0 );
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 7, 16, 21) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 2, 15, 20) == 0 );
assert( gamma_move(board, 3, 19, 1) == 0 );
assert( gamma_move(board, 4, 2, 20) == 0 );
assert( gamma_move(board, 5, 11, 17) == 0 );
assert( gamma_golden_move(board, 5, 18, 5) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 15, 17) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 2, 0, 15) == 0 );
assert( gamma_move(board, 2, 20, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 20) == 1 );
assert( gamma_move(board, 4, 21, 21) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 16, 21) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 6, 15, 12) == 0 );
assert( gamma_move(board, 7, 2, 19) == 0 );
assert( gamma_move(board, 7, 14, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 60 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 18, 4) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );


char* board832421704 = gamma_board(board);
assert( board832421704 != NULL );
assert( strcmp(board832421704, 
".7.2.4....33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.413.3\n"
"3536.2..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.366.6451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.71644716354.147\n"
"66.63...47312376246176\n"
"61.636.323..4753336533\n"
"6.12..15437614.1156.62\n"
"75472725.2.14.77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board832421704);
board832421704 = NULL;
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 17, 18) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_move(board, 2, 16, 21) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 16, 15) == 0 );
assert( gamma_move(board, 5, 19, 16) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 22, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 22, 12) == 0 );
assert( gamma_move(board, 2, 21, 19) == 0 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 21, 19) == 0 );
assert( gamma_move(board, 4, 13, 19) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 18, 6) == 0 );
assert( gamma_move(board, 5, 21, 0) == 0 );
assert( gamma_free_fields(board, 5) == 117 );
assert( gamma_move(board, 7, 14, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 60 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_move(board, 1, 1, 22) == 0 );
assert( gamma_move(board, 2, 22, 7) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_golden_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 4) == 117 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 22, 4) == 0 );
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_golden_move(board, 1, 2, 20) == 0 );
assert( gamma_move(board, 2, 22, 7) == 0 );
assert( gamma_move(board, 2, 17, 19) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 21, 4) == 0 );
assert( gamma_move(board, 6, 21, 19) == 0 );
assert( gamma_move(board, 7, 18, 15) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 19, 16) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 22) == 0 );
assert( gamma_golden_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 22, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 60 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 3, 20, 14) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 17, 20) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_free_fields(board, 6) == 115 );
assert( gamma_move(board, 7, 0, 17) == 0 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 18) == 0 );
assert( gamma_move(board, 6, 18, 4) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 1, 19, 20) == 0 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_free_fields(board, 1) == 115 );
assert( gamma_move(board, 2, 18, 6) == 0 );
assert( gamma_free_fields(board, 2) == 115 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 115 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 21, 3) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 1, 17, 18) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 115 );
assert( gamma_move(board, 3, 17, 19) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 7, 12, 18) == 0 );
assert( gamma_move(board, 7, 18, 20) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 17, 18) == 0 );
assert( gamma_move(board, 2, 20, 19) == 1 );
assert( gamma_move(board, 3, 7, 20) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_move(board, 6, 21, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 59 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 1, 8, 22) == 1 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 59 );


char* board451469914 = gamma_board(board);
assert( board451469914 != NULL );
assert( strcmp(board451469914, 
".7.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"3536.2..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.366.6451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.15437614.1156.62\n"
"75472725.2.14.77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board451469914);
board451469914 = NULL;
assert( gamma_move(board, 4, 22, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_golden_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 17, 15) == 1 );
assert( gamma_busy_fields(board, 6) == 60 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 7, 19) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board250650295 = gamma_board(board);
assert( board250650295 != NULL );
assert( strcmp(board250650295, 
".7.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"3536.2..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647..2.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.15437614.1156.62\n"
"75472725.2.14.77236261\n"
"5.1..7731647711.....37\n") == 0);
free(board250650295);
board250650295 = NULL;
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 5, 21, 15) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 20, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 16, 1) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 1, 20, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 4, 18) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 4, 7, 19) == 0 );
assert( gamma_move(board, 6, 14, 16) == 0 );
assert( gamma_free_fields(board, 6) == 109 );
assert( gamma_move(board, 7, 10, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 60 );


char* board732226783 = gamma_board(board);
assert( board732226783 != NULL );
assert( strcmp(board732226783, 
".7.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.15437614.1156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711.....37\n") == 0);
free(board732226783);
board732226783 = NULL;
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_move(board, 4, 14, 15) == 0 );
assert( gamma_move(board, 5, 3, 19) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 21, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 60 );
assert( gamma_move(board, 7, 18, 7) == 0 );
assert( gamma_move(board, 7, 19, 2) == 0 );
assert( gamma_free_fields(board, 7) == 42 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 21, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_move(board, 6, 18, 1) == 0 );


char* board100368182 = gamma_board(board);
assert( board100368182 != NULL );
assert( strcmp(board100368182, 
".7.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"5..4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.15437614.1156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711.....37\n") == 0);
free(board100368182);
board100368182 = NULL;
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 14, 2) == 1 );
assert( gamma_move(board, 1, 3, 21) == 0 );
assert( gamma_move(board, 2, 22, 19) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 21, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 9, 18) == 0 );
assert( gamma_move(board, 5, 17, 18) == 0 );
assert( gamma_move(board, 6, 19, 16) == 0 );
assert( gamma_move(board, 6, 20, 3) == 0 );
assert( gamma_free_fields(board, 6) == 108 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 18, 12) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 4, 2, 20) == 0 );
assert( gamma_move(board, 5, 20, 21) == 0 );
assert( gamma_move(board, 6, 5, 18) == 0 );
assert( gamma_move(board, 6, 19, 0) == 1 );
assert( gamma_move(board, 7, 15, 13) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 1, 11, 18) == 0 );
assert( gamma_move(board, 1, 5, 21) == 0 );


char* board253307325 = gamma_board(board);
assert( board253307325 != NULL );
assert( strcmp(board253307325, 
".7.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"57.4.6..45273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board253307325);
board253307325 = NULL;
assert( gamma_move(board, 2, 8, 21) == 0 );
assert( gamma_move(board, 3, 19, 20) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 7, 11) == 1 );


char* board127530651 = gamma_board(board);
assert( board127530651 != NULL );
assert( strcmp(board127530651, 
".7.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.227.213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board127530651);
board127530651 = NULL;
assert( gamma_move(board, 6, 0, 22) == 1 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_move(board, 7, 7, 20) == 0 );
assert( gamma_move(board, 7, 6, 12) == 1 );


char* board969930847 = gamma_board(board);
assert( board969930847 != NULL );
assert( strcmp(board969930847, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52.12.\n"
"5...46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board969930847);
board969930847 = NULL;
assert( gamma_move(board, 1, 7, 20) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 22, 2) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 16, 17) == 0 );
assert( gamma_move(board, 7, 21, 1) == 0 );
assert( gamma_move(board, 7, 20, 2) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_free_fields(board, 1) == 103 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 18, 16) == 1 );


char* board214209424 = gamma_board(board);
assert( board214209424 != NULL );
assert( strcmp(board214209424, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.162..17\n"
"1.26361.5.65354.52512.\n"
"5...46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board214209424);
board214209424 = NULL;
assert( gamma_golden_move(board, 6, 19, 14) == 0 );
assert( gamma_move(board, 7, 18, 16) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_move(board, 7, 19, 17) == 1 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 21, 11) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 17, 22) == 0 );
assert( gamma_move(board, 3, 1, 15) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 9, 20) == 0 );
assert( gamma_move(board, 5, 5, 21) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_move(board, 7, 7, 20) == 0 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 21, 22) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 6, 1, 22) == 0 );
assert( gamma_move(board, 7, 16, 22) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 13, 19) == 0 );
assert( gamma_move(board, 4, 19, 8) == 0 );
assert( gamma_free_fields(board, 4) == 100 );
assert( gamma_move(board, 5, 13, 16) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 7, 8, 21) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 13, 20) == 0 );
assert( gamma_move(board, 3, 3, 20) == 0 );
assert( gamma_move(board, 4, 15, 20) == 0 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 5, 0, 17) == 0 );
assert( gamma_move(board, 6, 17, 18) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 7, 21, 21) == 0 );
assert( gamma_busy_fields(board, 7) == 64 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 100 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 18, 16) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 13, 19) == 0 );
assert( gamma_move(board, 3, 20, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 18, 17) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );


char* board589183157 = gamma_board(board);
assert( board589183157 != NULL );
assert( strcmp(board589183157, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board589183157);
board589183157 = NULL;
assert( gamma_move(board, 5, 7, 19) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 48 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 62 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );


char* board489798626 = gamma_board(board);
assert( board489798626 != NULL );
assert( strcmp(board489798626, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433.54\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614.53263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744....2.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.52.342.2\n"
"315.33.71644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board489798626);
board489798626 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_move(board, 5, 16, 1) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 7, 2, 19) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 4, 19, 0) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 16, 6) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 15, 22) == 0 );
assert( gamma_move(board, 7, 16, 8) == 0 );
assert( gamma_move(board, 1, 14, 8) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 20, 13) == 0 );
assert( gamma_move(board, 4, 9, 17) == 0 );
assert( gamma_move(board, 5, 19, 20) == 0 );
assert( gamma_move(board, 5, 19, 21) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 63 );
assert( gamma_move(board, 7, 16, 7) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 8, 21) == 0 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_move(board, 4, 19, 19) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 22, 4) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_free_fields(board, 1) == 95 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 20) == 0 );
assert( gamma_move(board, 5, 4, 14) == 1 );
assert( gamma_move(board, 6, 12, 13) == 0 );
assert( gamma_move(board, 6, 17, 7) == 0 );
assert( gamma_move(board, 7, 17, 14) == 0 );
assert( gamma_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 22, 7) == 0 );
assert( gamma_move(board, 3, 22, 14) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 0, 15) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );


char* board210024190 = gamma_board(board);
assert( board210024190 != NULL );
assert( strcmp(board210024190, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433554\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614553263233422.37.62\n"
".25726722.4633.4.62..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744...12.4.53.\n"
"4..57.75..344.356667.2\n"
".2.2452.13647.525342.2\n"
"315.33671644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board210024190);
board210024190 = NULL;
assert( gamma_move(board, 6, 0, 19) == 0 );
assert( gamma_move(board, 6, 20, 5) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_golden_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 17, 6) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 19, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 18) == 0 );
assert( gamma_busy_fields(board, 6) == 63 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 22, 14) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 64 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 16, 13) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 21, 7) == 0 );
assert( gamma_move(board, 4, 19, 21) == 0 );
assert( gamma_move(board, 5, 7, 20) == 0 );
assert( gamma_busy_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 18, 14) == 0 );
assert( gamma_move(board, 6, 17, 15) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 14, 16) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 22, 18) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 6, 20) == 0 );
assert( gamma_move(board, 4, 13, 7) == 1 );


char* board430768122 = gamma_board(board);
assert( board430768122 != NULL );
assert( strcmp(board430768122, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433554\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614553263233422.37.62\n"
".25726722.4633.4162..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744...12.4.53.\n"
"4..57.75..3444356667.2\n"
".2.2452.13647.525342.2\n"
"315.33671644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board430768122);
board430768122 = NULL;
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 22, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 10, 5) == 0 );


char* board655279392 = gamma_board(board);
assert( board655279392 != NULL );
assert( strcmp(board655279392, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433554\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614553263233422.37.62\n"
".25726722.4633.4162..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744...12.4.53.\n"
"4..57.75..3444356667.2\n"
".2.2452.13647.525342.2\n"
"315.33671644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board655279392);
board655279392 = NULL;
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 1, 21) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 19, 13) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 7, 20) == 0 );
assert( gamma_move(board, 7, 10, 15) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );


char* board676455055 = gamma_board(board);
assert( board676455055 != NULL );
assert( strcmp(board676455055, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433554\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614553263233422.37.62\n"
".25726722.4633.4162..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744...12.4.53.\n"
"4..57.75..3444356667.2\n"
".2.2452.13647.525342.2\n"
"315.33671644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board676455055);
board676455055 = NULL;
assert( gamma_move(board, 3, 22, 7) == 0 );
assert( gamma_move(board, 3, 18, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );


char* board408488251 = gamma_board(board);
assert( board408488251 != NULL );
assert( strcmp(board408488251, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433554\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614553263233422.37.62\n"
".25726722.4633.4162..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744...12.4.53.\n"
"4..57.75..3444356667.2\n"
".2.2452.13647.525342.2\n"
"315.33671644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board408488251);
board408488251 = NULL;
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 16, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 21, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_free_fields(board, 5) == 91 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 19, 16) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 63 );


char* board874053687 = gamma_board(board);
assert( board874053687 != NULL );
assert( strcmp(board874053687, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433554\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.1213.6\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614553263233422.37.62\n"
".25726722.4633.4162..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1.14.13.4\n"
"1117761623365774217374\n"
".546.117744...1214.53.\n"
"4..57.75..3444356667.2\n"
".2.2452.13647.525342.2\n"
"315.33671644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board874053687);
board874053687 = NULL;
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 14, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 20, 12) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 13, 21) == 0 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_move(board, 4, 19, 14) == 1 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_free_fields(board, 5) == 89 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 19, 5) == 0 );
assert( gamma_move(board, 7, 15, 4) == 0 );
assert( gamma_move(board, 1, 13, 20) == 0 );
assert( gamma_move(board, 1, 20, 18) == 1 );
assert( gamma_move(board, 2, 16, 11) == 0 );


char* board775778619 = gamma_board(board);
assert( board775778619 != NULL );
assert( strcmp(board775778619, 
"67.2.4..1.33.4.41...74\n"
"3653.7..71416742433554\n"
"6777554253245156626354\n"
"2.72.24662776153.41323\n"
"353632..1676655.121316\n"
"3.2317.1135417.1624717\n"
"1.26361.5.65354.52512.\n"
"53..46727.532.36666451\n"
".614553263233422.37462\n"
".25726722.4633.4162..1\n"
"57.2277213424.56775425\n"
"57.4.6.545273171251472\n"
"43.67..72447.1114.13.4\n"
"1117761623365774217374\n"
".546.117744...1214.53.\n"
"4..57.75..3444356667.2\n"
".2.2452.13647.525342.2\n"
"315.33671644716354.147\n"
"66.636..47312376246176\n"
"61.636.323..4753336533\n"
"6.122.1543761471156.62\n"
"75472725.2.14.77236261\n"
"531..7731647711....637\n") == 0);
free(board775778619);
board775778619 = NULL;
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_golden_move(board, 3, 4, 16) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 19, 0) == 0 );
assert( gamma_move(board, 5, 13, 19) == 0 );
assert( gamma_move(board, 6, 10, 17) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_move(board, 2, 8, 21) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 18, 6) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 4, 17, 1) == 0 );


gamma_delete(board);

    return 0;
}
