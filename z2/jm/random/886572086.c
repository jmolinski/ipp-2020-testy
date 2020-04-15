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
uuid: 886572086
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(18, 18, 9, 50);
assert( board != NULL );


assert( gamma_move(board, 1, 15, 15) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 8, 17) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 10, 17) == 1 );
assert( gamma_move(board, 4, 13, 12) == 1 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_move(board, 6, 12, 16) == 1 );
assert( gamma_move(board, 6, 4, 17) == 1 );
assert( gamma_move(board, 7, 11, 16) == 1 );
assert( gamma_move(board, 7, 15, 17) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 16, 7) == 1 );
assert( gamma_move(board, 9, 15, 6) == 1 );
assert( gamma_golden_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 2, 15, 12) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 11, 17) == 1 );
assert( gamma_move(board, 4, 16, 6) == 1 );
assert( gamma_move(board, 6, 15, 10) == 1 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 10, 16) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 301 );
assert( gamma_move(board, 8, 1, 17) == 1 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 15, 0) == 1 );
assert( gamma_move(board, 3, 17, 1) == 1 );
assert( gamma_move(board, 4, 7, 17) == 1 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 6, 17, 7) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 290 );
assert( gamma_move(board, 8, 13, 12) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 9, 9, 10) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 14, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_free_fields(board, 4) == 285 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 6, 13, 17) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 8, 14, 12) == 1 );
assert( gamma_move(board, 9, 13, 17) == 0 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_free_fields(board, 9) == 280 );
assert( gamma_move(board, 1, 9, 16) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 12, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 10, 17) == 0 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_free_fields(board, 9) == 269 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 264 );


char* board892031185 = gamma_board(board);
assert( board892031185 != NULL );
assert( strcmp(board892031185, 
".8..6..42.34.6.7..\n"
".........1776.....\n"
"...............1..\n"
"....3.6...........\n"
"5..4.8........2...\n"
"........5....482..\n"
"1......3..3.......\n"
".........9...2.6..\n"
"......8.....7.....\n"
"......6....2......\n"
".4...57.....5...86\n"
"1...9..........94.\n"
"..6.2....2........\n"
"...7.........6....\n"
"............2.....\n"
"..................\n"
".9....9.91...62..3\n"
"7.3.8..........3..\n") == 0);
free(board892031185);
board892031185 = NULL;
assert( gamma_move(board, 8, 0, 16) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_move(board, 9, 9, 13) == 1 );
assert( gamma_move(board, 1, 9, 15) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );


char* board794901057 = gamma_board(board);
assert( board794901057 != NULL );
assert( strcmp(board794901057, 
".8..6..42.34.6.7..\n"
"8........1776.....\n"
".........1.....1..\n"
"....3.6...........\n"
"5..4.8...9....2...\n"
"........5....482..\n"
"1......3..3.......\n"
".........9...2.6..\n"
"......8.....7.....\n"
"......6....2......\n"
".4...57.....5...86\n"
"1...9..........94.\n"
"..6.2....2........\n"
"...7.........6....\n"
"........9...2.....\n"
"..................\n"
".9....9.91...62..3\n"
"7.3.8..........3..\n") == 0);
free(board794901057);
board794901057 = NULL;
assert( gamma_move(board, 2, 9, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_free_fields(board, 2) == 259 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board776482406 = gamma_board(board);
assert( board776482406 != NULL );
assert( strcmp(board776482406, 
".8..6..42.34.6.7..\n"
"8........1776.....\n"
".........1.....1..\n"
"....3.6..2........\n"
"5.64.8...9....2...\n"
"......4.5....482..\n"
"1.....53..3.......\n"
".........9...2.6..\n"
".....58.....7.....\n"
"......6....2......\n"
".4...57.....5...86\n"
"1...9........3.94.\n"
"..6.2....2........\n"
"...7.........6....\n"
"........9...2.....\n"
"..................\n"
".9....9.91...62..3\n"
"7.3.8..........3..\n") == 0);
free(board776482406);
board776482406 = NULL;
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 14, 2) == 1 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 7, 15, 1) == 1 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 12, 6) == 1 );
assert( gamma_move(board, 9, 1, 12) == 1 );
assert( gamma_move(board, 9, 4, 16) == 1 );
assert( gamma_golden_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 17, 4) == 1 );
assert( gamma_move(board, 1, 6, 15) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 17) == 1 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );


char* board687268424 = gamma_board(board);
assert( board687268424 != NULL );
assert( strcmp(board687268424, 
".8..6..42.34.667..\n"
"8...9....1776.....\n"
"......1..1.....1..\n"
"....3.6..2........\n"
"5.64.8...9....2...\n"
".9....4.5....482..\n"
"1.....53..3.......\n"
"........79...2.6..\n"
"...2.58..8..7.....\n"
"......6....2......\n"
"34...57.....5...86\n"
"1...9.......83.94.\n"
"..6.259..2........\n"
"..77.........6...1\n"
"........9...2.....\n"
"...5..4.......8...\n"
".9....9.91...627.3\n"
"7.3.8...3......3..\n") == 0);
free(board687268424);
board687268424 = NULL;
assert( gamma_move(board, 8, 2, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 14) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );


char* board882009709 = gamma_board(board);
assert( board882009709 != NULL );
assert( strcmp(board882009709, 
".8..6..42.34.667..\n"
"8...9....1776.....\n"
"......1..1.....1..\n"
"2...3.6..2........\n"
"5.64.8...9....2...\n"
".9....4.5....482..\n"
"1.8...53..3.......\n"
"........79...2.6..\n"
"...2.58..8..7.....\n"
"......6....2......\n"
"34.1.57.....5...86\n"
"1...9.......83.94.\n"
"..6.259..2........\n"
"..77.........6...1\n"
"........9..32.....\n"
"...5..4.......8...\n"
".9....9.91...627.3\n"
"7.3.8...3......3..\n") == 0);
free(board882009709);
board882009709 = NULL;
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 2, 15) == 1 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 8, 17, 16) == 1 );
assert( gamma_free_fields(board, 8) == 227 );
assert( gamma_free_fields(board, 9) == 227 );


char* board780849217 = gamma_board(board);
assert( board780849217 != NULL );
assert( strcmp(board780849217, 
".8..6..42.34.667..\n"
"8...9....1776....8\n"
"..6...1..1.....1..\n"
"2.4.3.65.2........\n"
"5.64.8...9....2...\n"
".9....4.5....482..\n"
"1.8...53..3.......\n"
"........79...2.6..\n"
"...2.58..8..7.....\n"
"......6....2......\n"
"34.1.57.....5...86\n"
"1...9.......83.94.\n"
"..6.259..2........\n"
"..77.........6...1\n"
"........9..32.....\n"
"...5..4.......8...\n"
".9....9.91...627.3\n"
"7.3.8...3.4....3..\n") == 0);
free(board780849217);
board780849217 = NULL;
assert( gamma_move(board, 2, 15, 14) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 4, 16, 14) == 1 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 17, 3) == 1 );
assert( gamma_move(board, 8, 13, 8) == 1 );
assert( gamma_move(board, 8, 11, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );


char* board868279048 = gamma_board(board);
assert( board868279048 != NULL );
assert( strcmp(board868279048, 
".8..6..42.34.667..\n"
"8...9....1776....8\n"
"..6...1..1.....1..\n"
"2.4.3.65.2.....24.\n"
"5.64.8...9.8..2...\n"
".9....4.5.4.1482..\n"
"1.8...53..3.......\n"
"........79...2.6..\n"
"...2.58..8..7.....\n"
"......6....2.8....\n"
"34.1.57.....5...86\n"
"1.7.9.......83.94.\n"
"..6.259..2........\n"
"..772........6...1\n"
"........9..32....7\n"
"...5..4..6....8...\n"
".9....9.91.2.627.3\n"
"7.3.8...3.4....3..\n") == 0);
free(board868279048);
board868279048 = NULL;
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 13, 16) == 1 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_free_fields(board, 7) == 214 );
assert( gamma_move(board, 8, 17, 4) == 0 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 13 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 12, 11) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 17, 16) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );


char* board633553503 = gamma_board(board);
assert( board633553503 != NULL );
assert( strcmp(board633553503, 
".8..6..42.34.667..\n"
"8...9....17764...8\n"
"..6...1..1.....1..\n"
"2.4.3.65.2.....24.\n"
"5.64.8...9.8..2...\n"
".9....4.5.4.1482..\n"
"1.8...53..3.2.....\n"
"........79...2.6..\n"
"...2.58..8..7.....\n"
"......6....2.8....\n"
"3491.57.....5...86\n"
"1.7.93....1.83.94.\n"
"..6.259..2........\n"
"..772........6...1\n"
".9......9..32....7\n"
"...5..4..6....8...\n"
".9....9.91.2.627.3\n"
"7.3.8...3.4.3..3..\n") == 0);
free(board633553503);
board633553503 = NULL;
assert( gamma_move(board, 6, 17, 0) == 1 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 8, 10, 15) == 1 );
assert( gamma_busy_fields(board, 8) == 16 );
assert( gamma_move(board, 9, 9, 11) == 1 );
assert( gamma_move(board, 9, 0, 14) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 9, 15) == 0 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_move(board, 5, 17, 12) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 3, 14) == 1 );
assert( gamma_move(board, 7, 14, 11) == 1 );
assert( gamma_move(board, 7, 15, 14) == 0 );
assert( gamma_free_fields(board, 7) == 196 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_free_fields(board, 8) == 196 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 13, 15) == 1 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 5, 15) == 1 );
assert( gamma_move(board, 5, 14, 5) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_free_fields(board, 8) == 187 );
assert( gamma_golden_move(board, 8, 3, 12) == 1 );
assert( gamma_move(board, 9, 9, 16) == 0 );
assert( gamma_move(board, 9, 17, 14) == 1 );
assert( gamma_move(board, 1, 6, 17) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_free_fields(board, 1) == 185 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 3) == 1 );
assert( gamma_golden_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 5, 16) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_move(board, 8, 13, 2) == 1 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 9, 10, 8) == 1 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 16, 5) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_free_fields(board, 5) == 175 );
assert( gamma_move(board, 6, 11, 17) == 0 );
assert( gamma_move(board, 7, 15, 14) == 0 );
assert( gamma_move(board, 8, 1, 16) == 1 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 19 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 17, 16) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 13, 10) == 0 );
assert( gamma_move(board, 9, 1, 15) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );


char* board362257142 = gamma_board(board);
assert( board362257142 != NULL );
assert( strcmp(board362257142, 
".8..6.142.34.667..\n"
"88..96...17764...8\n"
".96..41..18..3.1..\n"
"2.463.65.2.....249\n"
"5.64.8...9.8..2...\n"
".928..485.4.1482.5\n"
"1.8...53.935227...\n"
"....6.7.79...2.6..\n"
"...2858.48..7.....\n"
"......6...92.8....\n"
"3491.57.....5...86\n"
"1.7.93....1.83.94.\n"
"..6.259..2791.5.2.\n"
"7.772........64..1\n"
".9......9..32.33.7\n"
"..152.4.56..288...\n"
".9..9.9991.2.627.3\n"
"7.3.8...3.4.3..3.6\n") == 0);
free(board362257142);
board362257142 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 16, 12) == 1 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 15, 13) == 1 );
assert( gamma_free_fields(board, 5) == 168 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 16, 1) == 1 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 9, 12, 9) == 0 );
assert( gamma_move(board, 1, 13, 17) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_free_fields(board, 4) == 165 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 2, 16) == 1 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_free_fields(board, 8) == 163 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 9, 6, 16) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 14, 16) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 15, 14) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 14) == 0 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 1, 17, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 155 );
assert( gamma_move(board, 6, 13, 17) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 7, 12) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_free_fields(board, 1) == 152 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_golden_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 150 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_free_fields(board, 6) == 149 );
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_move(board, 8, 13, 14) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 17, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_golden_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 15, 3) == 0 );
assert( gamma_move(board, 9, 13, 12) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 15, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );


char* board299431714 = gamma_board(board);
assert( board299431714 != NULL );
assert( strcmp(board299431714, 
".8..6.142.34.667..\n"
"886.969..177642..8\n"
".96..41..18..3.1..\n"
"2.463.65.2...8.249\n"
"5.64.8...9.8.125..\n"
".928..485.4.148235\n"
"1.8.4.533933227...\n"
"..146.7.79...236..\n"
"...2858.48..7....1\n"
"......63..9218....\n"
"3491.57..1.55...86\n"
"1377936...1.83.941\n"
".36.259..2791.5.2.\n"
"7.772.41...2.642.1\n"
"69...6..9..32.33.7\n"
"..15264.56..288...\n"
".9..9.9991.2.62773\n"
"7.3.8..33.4.3..3.6\n") == 0);
free(board299431714);
board299431714 = NULL;
assert( gamma_move(board, 8, 12, 11) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_golden_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_free_fields(board, 1) == 139 );
assert( gamma_move(board, 2, 17, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_free_fields(board, 4) == 138 );
assert( gamma_move(board, 5, 11, 15) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 14, 7) == 1 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 7, 14, 17) == 0 );
assert( gamma_busy_fields(board, 7) == 18 );
assert( gamma_free_fields(board, 7) == 136 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 9, 13, 11) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 15, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 16, 15) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 9, 10, 14) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 17) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_free_fields(board, 2) == 128 );
assert( gamma_move(board, 3, 16, 10) == 1 );
assert( gamma_move(board, 3, 16, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 5, 17) == 1 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );


char* board116018660 = gamma_board(board);
assert( board116018660 != NULL );
assert( strcmp(board116018660, 
".81.65142.34.667..\n"
"886.969..177642..8\n"
".96..41..185.3.16.\n"
"2.463.65.29..8.249\n"
"5.64.8...9.8.125..\n"
".928..485.4.148235\n"
"1.8.4.533933227...\n"
"..146.7.79...2363.\n"
".1.2858.48..7....1\n"
".....3637.9218....\n"
"3491.57.31.55.6.86\n"
"1377936...1.83.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69...6..9..32.33.7\n"
".415264.56..288...\n"
".9..9.9991.2.62773\n"
"7.3.8..33.4.3..3.6\n") == 0);
free(board116018660);
board116018660 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_golden_move(board, 7, 3, 8) == 0 );
assert( gamma_golden_move(board, 8, 16, 11) == 0 );
assert( gamma_move(board, 9, 10, 7) == 1 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 124 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_free_fields(board, 2) == 124 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 3, 15) == 1 );
assert( gamma_busy_fields(board, 5) == 17 );


char* board759289552 = gamma_board(board);
assert( board759289552 != NULL );
assert( strcmp(board759289552, 
".81.65142.34.667..\n"
"886.969..177642..8\n"
".965.41..185.3.16.\n"
"2.463.65.29..8.249\n"
"5.64.8...9.8.125..\n"
".928..485.4.148235\n"
"1.8.4.533933227...\n"
"..146.7.79...2363.\n"
".1.2858.48..7....1\n"
".....3637.9218....\n"
"3491.57.31955.6.86\n"
"1377936...1.83.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69...6..9..32.33.7\n"
".415264.56..288...\n"
"49..9.9991.2.62773\n"
"7.3.8..33.4.3..3.6\n") == 0);
free(board759289552);
board759289552 = NULL;
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 15, 0) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 1, 17, 17) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_free_fields(board, 3) == 119 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 5, 7, 16) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 17, 2) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_free_fields(board, 7) == 116 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );


char* board533541492 = gamma_board(board);
assert( board533541492 != NULL );
assert( strcmp(board533541492, 
".81.65142.34.667.1\n"
"886.9695.177642..8\n"
".965.41..185.3.16.\n"
"2.463.65.29..8.249\n"
"5.64.8...9.8.125..\n"
".928..485.4.148235\n"
"1.8.4.533933227...\n"
"..146.7.79...2363.\n"
".172858.48..7....1\n"
".....3637.92183...\n"
"3491.57.31955.6.86\n"
"1377936..11.83.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69...6..9..32.33.7\n"
".415264.56..288..7\n"
"49..9.9991.2.62773\n"
"7.3.8..3314.3..3.6\n") == 0);
free(board533541492);
board533541492 = NULL;
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_move(board, 5, 13, 17) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 14, 12) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 15, 16) == 1 );
assert( gamma_move(board, 8, 15, 1) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );


char* board961332081 = gamma_board(board);
assert( board961332081 != NULL );
assert( strcmp(board961332081, 
".81.65142.34.667.1\n"
"886.9695.1776428.8\n"
".965.41..185.3.16.\n"
"2.463.65.29..8.249\n"
"5.64.8...9.8.125..\n"
".928..485.4.148235\n"
"1.8.4.533933227...\n"
"..146.7.79...2363.\n"
".172858.48..7....1\n"
".....3637.92183...\n"
"3491.57.31955.6.86\n"
"1377936..11.83.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69...6..9..32.33.7\n"
".415264.56..288..7\n"
"49..9.9991.2.62773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board961332081);
board961332081 = NULL;
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_golden_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 8, 15) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 8, 15, 0) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 17, 12) == 0 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 17, 11) == 1 );
assert( gamma_golden_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_move(board, 7, 14, 17) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 9, 16, 8) == 1 );
assert( gamma_move(board, 1, 17, 16) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 15, 17) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_golden_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 15, 12) == 0 );
assert( gamma_golden_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 12, 13) == 1 );
assert( gamma_free_fields(board, 7) == 106 );
assert( gamma_move(board, 8, 14, 8) == 0 );
assert( gamma_move(board, 9, 14, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_move(board, 4, 9, 16) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_golden_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_move(board, 2, 15, 8) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 5, 16, 16) == 1 );


char* board301441897 = gamma_board(board);
assert( board301441897 != NULL );
assert( strcmp(board301441897, 
".81.65142.34.667.1\n"
"886.9695.177642858\n"
".965.4116185.3.16.\n"
"23463.65.29..8.249\n"
"5.64.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
"..146.5.793..2363.\n"
"4172858.48..7.9..1\n"
".....3637.9218329.\n"
"3491.57.3195516.86\n"
"1377936..21683.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69.5.6..9..32.33.7\n"
".415264.56..288..7\n"
"49..9.9991.2.62773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board301441897);
board301441897 = NULL;
assert( gamma_move(board, 6, 17, 3) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_free_fields(board, 6) == 99 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 16, 16) == 1 );
assert( gamma_move(board, 7, 2, 15) == 0 );
assert( gamma_move(board, 8, 8, 14) == 1 );
assert( gamma_move(board, 8, 16, 14) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 12, 15) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_free_fields(board, 3) == 97 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 6, 1, 17) == 0 );
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 15, 9) == 1 );


char* board780130376 = gamma_board(board);
assert( board780130376 != NULL );
assert( strcmp(board780130376, 
".81.65142.34.667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"23463.65829..8.249\n"
"5.64.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
"..146.5.793..2363.\n"
"4172858.48..7.98.1\n"
".....3637.9218329.\n"
"3491.57.3195516.86\n"
"1377936..21683.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69.5.6..9..32.33.7\n"
".415264.56..288..7\n"
"49..9.9991.2.62773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board780130376);
board780130376 = NULL;
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 1, 17, 16) == 0 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_golden_move(board, 1, 15, 2) == 0 );


char* board747184417 = gamma_board(board);
assert( board747184417 != NULL );
assert( strcmp(board747184417, 
".81.65142.34.667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"23463.65829..8.249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
"..146.5.793..2363.\n"
"4172858.48..7.98.1\n"
".....3637.9218329.\n"
"3491.57.3195516.86\n"
"1377936..21683.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69.5.6..9..32.33.7\n"
".415264.56..288..7\n"
"49..9.9991.2.62773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board747184417);
board747184417 = NULL;
assert( gamma_move(board, 2, 8, 15) == 0 );


char* board223753528 = gamma_board(board);
assert( board223753528 != NULL );
assert( strcmp(board223753528, 
".81.65142.34.667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"23463.65829..8.249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
"..146.5.793..2363.\n"
"4172858.48..7.98.1\n"
".....3637.9218329.\n"
"3491.57.3195516.86\n"
"1377936..21683.941\n"
".36.259..2791.5.2.\n"
"7.772.41.2.24642.1\n"
"69.5.6..9..32.33.7\n"
".415264.56..288..7\n"
"49..9.9991.2.62773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board223753528);
board223753528 = NULL;
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 5, 0, 17) == 1 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 15, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 5, 17, 16) == 0 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_free_fields(board, 7) == 89 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 12, 17) == 1 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 22 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 8, 4, 16) == 0 );
assert( gamma_busy_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_busy_fields(board, 9) == 25 );
assert( gamma_free_fields(board, 9) == 87 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 16) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 5, 14, 14) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 11, 16) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 16) == 0 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_golden_move(board, 1, 14, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 15, 13) == 0 );
assert( gamma_golden_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 17, 11) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 8, 17) == 0 );
assert( gamma_move(board, 9, 16, 9) == 1 );
assert( gamma_free_fields(board, 9) == 81 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_free_fields(board, 5) == 81 );
assert( gamma_move(board, 6, 10, 17) == 0 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 16, 3) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 15, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_golden_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_move(board, 9, 2, 16) == 0 );
assert( gamma_move(board, 9, 16, 9) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_golden_move(board, 6, 13, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_golden_move(board, 8, 2, 17) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 3, 15) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 5, 6, 10) == 0 );


char* board636703911 = gamma_board(board);
assert( board636703911 != NULL );
assert( strcmp(board636703911, 
"581.65142.342667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"23463165829..85249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
".8146.56793..2363.\n"
"4172858.48.17.9891\n"
"....43637.9218329.\n"
"3491.57.3195516.86\n"
"1377936..21683.941\n"
".36.2596.2791.5.2.\n"
"7.772741.2.24642.1\n"
"69.536159..32.3387\n"
".415264.56..288..7\n"
"49..9.9991.2461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board636703911);
board636703911 = NULL;
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 2, 15) == 0 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_move(board, 9, 17, 9) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 13, 3) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 15, 0) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 16, 4) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );


char* board225947460 = gamma_board(board);
assert( board225947460 != NULL );
assert( strcmp(board225947460, 
"581.65142.342667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"23463165829..85249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
".8146.56793..2363.\n"
"4172858.48.17.9891\n"
"....43637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36.2596.2791.5.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"49..9.9991.2461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board225947460);
board225947460 = NULL;
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_golden_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 15) == 0 );
assert( gamma_busy_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );


char* board494478285 = gamma_board(board);
assert( board494478285 != NULL );
assert( strcmp(board494478285, 
"581.65142.342667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"234631658293.85249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
".8146.56793..2363.\n"
"4172858.48.17.9891\n"
"....43637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36.2596.279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"49..9.9991.2461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board494478285);
board494478285 = NULL;
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 3, 13, 17) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );


char* board250654534 = gamma_board(board);
assert( board250654534 != NULL );
assert( strcmp(board250654534, 
"581.65142.342667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"234631658293.85249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.8.4.533933227..2\n"
".8146.56793..2363.\n"
"4172858.48.17.9891\n"
"....43637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36.2596.279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"49..9.9991.2461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board250654534);
board250654534 = NULL;
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 3, 11) == 1 );


char* board460232241 = gamma_board(board);
assert( board460232241 != NULL );
assert( strcmp(board460232241, 
"581.65142.342667.1\n"
"886.9695.177642868\n"
".965.411618513.16.\n"
"234631658293.85249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.864.533933227..2\n"
".8146.56793..2363.\n"
"4172858.48.17.9891\n"
"....43637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36.2596.279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"49..9.9991.2461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board460232241);
board460232241 = NULL;
assert( gamma_move(board, 7, 14, 13) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 23 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 11, 15) == 0 );
assert( gamma_golden_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 13, 17) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 11, 15) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 33 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 16) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 15, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_free_fields(board, 9) == 69 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 15, 3) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 17, 14) == 0 );
assert( gamma_free_fields(board, 6) == 67 );


char* board985711436 = gamma_board(board);
assert( board985711436 != NULL );
assert( strcmp(board985711436, 
"581.65142.342667.1\n"
"88679695.177642868\n"
".965.411618513.16.\n"
"234631658293.85249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.864.533933227..2\n"
".8146.56793..2363.\n"
"4172858.48317.9891\n"
"....43637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36.2596.279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board985711436);
board985711436 = NULL;
assert( gamma_move(board, 8, 13, 16) == 0 );
assert( gamma_busy_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 9, 16, 11) == 1 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 3, 17) == 1 );


char* board748806526 = gamma_board(board);
assert( board748806526 != NULL );
assert( strcmp(board748806526, 
"581365142.342667.1\n"
"88679695.177642868\n"
".965.411618513.16.\n"
"234631658293.85249\n"
"5164.8...9.87125..\n"
".928..485.4.148235\n"
"1.864.533933227.92\n"
".8146.56793..2363.\n"
"4172858.48317.9891\n"
"....43637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36.2596.279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board748806526);
board748806526 = NULL;
assert( gamma_move(board, 4, 8, 17) == 0 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 0, 16) == 0 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_move(board, 4, 17, 12) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 8, 10, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 29 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 17, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board122301037 = gamma_board(board);
assert( board122301037 != NULL );
assert( strcmp(board122301037, 
"581365142.342667.1\n"
"88679695.177642868\n"
".965.411618513.16.\n"
"234631658293.85249\n"
"5164.8...9887125..\n"
".928..485.4.148234\n"
"1.864.533933227.92\n"
".8146.56793..2363.\n"
"4172858.48317.9891\n"
"8...43637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36.25968279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board122301037);
board122301037 = NULL;
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 12, 17) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 7, 11, 15) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_golden_move(board, 8, 6, 16) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_golden_move(board, 9, 9, 15) == 1 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 5, 13, 16) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 7, 1, 16) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_free_fields(board, 9) == 61 );
assert( gamma_move(board, 1, 13, 13) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_free_fields(board, 8) == 59 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 16, 10) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 5, 15, 14) == 0 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 6, 17, 0) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 17) == 0 );
assert( gamma_move(board, 8, 12, 15) == 0 );
assert( gamma_busy_fields(board, 8) == 30 );
assert( gamma_free_fields(board, 8) == 58 );
assert( gamma_move(board, 9, 14, 12) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 17, 16) == 0 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board270094953 = gamma_board(board);
assert( board270094953 != NULL );
assert( strcmp(board270094953, 
"581365142.342667.1\n"
"88679695.177642868\n"
".965.411698513.16.\n"
"234631658293.85249\n"
"516448...9887125..\n"
".928..485.4.148234\n"
"1.864.533933227.92\n"
".8146.56793..2363.\n"
"4172858.4831759891\n"
"8..943637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36525968279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.3314.3..3.6\n") == 0);
free(board270094953);
board270094953 = NULL;
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 17, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 8, 17, 2) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 13, 16) == 0 );
assert( gamma_move(board, 6, 5, 15) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 7, 11, 15) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 14, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 15, 14) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_move(board, 5, 0, 16) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 11, 15) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );


char* board387723481 = gamma_board(board);
assert( board387723481 != NULL );
assert( strcmp(board387723481, 
"581365142.342667.1\n"
"88679695.177642868\n"
".965.411698513.16.\n"
"234631658293.85249\n"
"516448...9887125..\n"
"7928..485.4.148234\n"
"1.864.533933227.92\n"
".8146.56793..2363.\n"
"4172858.4831759891\n"
"8..943637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36525968279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.331413..3.6\n") == 0);
free(board387723481);
board387723481 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 15, 0) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 26 );
assert( gamma_move(board, 8, 1, 17) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_move(board, 4, 15, 14) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );


char* board604119875 = gamma_board(board);
assert( board604119875 != NULL );
assert( strcmp(board604119875, 
"581365142.342667.1\n"
"88679695.177642868\n"
".965.411698513.16.\n"
"234631658293.85249\n"
"516448...9887125..\n"
"7928..485.4.148234\n"
"1.864.533933227.92\n"
".8146.56793..2363.\n"
"4172858.4831759891\n"
"8..943637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36525968279155.2.\n"
"7.772741.2.2464281\n"
"69.5361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.331413..3.6\n") == 0);
free(board604119875);
board604119875 = NULL;
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 4, 15) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_free_fields(board, 9) == 55 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 3, 12, 17) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 2, 16) == 0 );
assert( gamma_move(board, 7, 14, 12) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 28 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 8, 16, 3) == 0 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );


char* board590712723 = gamma_board(board);
assert( board590712723 != NULL );
assert( strcmp(board590712723, 
"581365142.342667.1\n"
"88679695.177642868\n"
".9658411698513.16.\n"
"234631658293.85249\n"
"516448...9887125..\n"
"79285.485.4.148234\n"
"1.864.533933227.92\n"
".8146.76793..2363.\n"
"4172858.4831759891\n"
"8.5943637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36525968279155.2.\n"
"7.772741.282464281\n"
"6915361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.331413..3.6\n") == 0);
free(board590712723);
board590712723 = NULL;
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 11, 15) == 0 );
assert( gamma_move(board, 5, 13, 15) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 14, 12) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 10, 17) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 11, 13) == 0 );
assert( gamma_golden_move(board, 9, 7, 7) == 0 );


char* board830858958 = gamma_board(board);
assert( board830858958 != NULL );
assert( strcmp(board830858958, 
"581365142.342667.1\n"
"88679695.177642868\n"
".9658411698513.16.\n"
"234631658293.85249\n"
"516448...9887125..\n"
"79285.485.4.148234\n"
"1.864.533933227.92\n"
".8146.76793..2363.\n"
"4172858.4831759891\n"
"8.5943637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36525968279155.2.\n"
"7.772741.282464281\n"
"6915361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.331413..3.6\n") == 0);
free(board830858958);
board830858958 = NULL;
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 14, 12) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 9, 16) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 13, 17) == 0 );
assert( gamma_move(board, 9, 17, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_golden_move(board, 9, 7, 16) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );


char* board988299257 = gamma_board(board);
assert( board988299257 != NULL );
assert( strcmp(board988299257, 
"581365142.342667.1\n"
"88679695.177642868\n"
".9658411698513.16.\n"
"234631658293.85249\n"
"516448...9887125..\n"
"79285.485.4.148234\n"
"1.864.533933227.92\n"
".8146.76793..2363.\n"
"4172858.4831759891\n"
"8.5943637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36525968279155.2.\n"
"76772741.282464281\n"
"6915361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.331413..3.6\n") == 0);
free(board988299257);
board988299257 = NULL;
assert( gamma_move(board, 2, 8, 9) == 0 );


char* board151024361 = gamma_board(board);
assert( board151024361 != NULL );
assert( strcmp(board151024361, 
"581365142.342667.1\n"
"88679695.177642868\n"
".9658411698513.16.\n"
"234631658293.85249\n"
"516448...9887125..\n"
"79285.485.4.148234\n"
"1.864.533933227.92\n"
".8146.76793..2363.\n"
"4172858.4831759891\n"
"8.5943637.9218329.\n"
"3491.5793195516.86\n"
"1377936..21683.941\n"
".36525968279155.2.\n"
"76772741.282464281\n"
"6915361596.3263387\n"
"9415264.56..288..7\n"
"497.9.999152461773\n"
"7.3.87.331413..3.6\n") == 0);
free(board151024361);
board151024361 = NULL;
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 5, 17, 15) == 1 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 7, 17, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 17, 14) == 0 );
assert( gamma_golden_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 14, 16) == 0 );
assert( gamma_busy_fields(board, 8) == 32 );
assert( gamma_move(board, 9, 3, 0) == 1 );


gamma_delete(board);

    return 0;
}
