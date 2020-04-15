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
uuid: 568338450
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(25, 18, 7, 44);
assert( board != NULL );


assert( gamma_move(board, 1, 18, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );


char* board864237048 = gamma_board(board);
assert( board864237048 != NULL );
assert( strcmp(board864237048, 
".........................\n"
".........................\n"
".........................\n"
".........................\n"
".........................\n"
".........................\n"
".........................\n"
".......3.................\n"
".........................\n"
".........................\n"
".........................\n"
".........................\n"
"..................1......\n"
".........................\n"
"............2............\n"
".........................\n"
".........................\n"
".........................\n") == 0);
free(board864237048);
board864237048 = NULL;
assert( gamma_move(board, 4, 23, 8) == 1 );
assert( gamma_move(board, 5, 16, 5) == 1 );
assert( gamma_move(board, 6, 1, 23) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 1, 21, 5) == 1 );
assert( gamma_free_fields(board, 1) == 441 );
assert( gamma_move(board, 3, 14, 18) == 0 );


char* board955300331 = gamma_board(board);
assert( board955300331 != NULL );
assert( strcmp(board955300331, 
".........................\n"
".........................\n"
".........................\n"
".........................\n"
".........................\n"
"7........................\n"
".........................\n"
".......3.................\n"
".........................\n"
".......................4.\n"
".........................\n"
"...6.....................\n"
"................5.1..1...\n"
".........................\n"
"............2............\n"
".........................\n"
".........................\n"
"..........1..............\n") == 0);
free(board955300331);
board955300331 = NULL;
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_move(board, 4, 21, 16) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 13, 12) == 1 );
assert( gamma_move(board, 1, 9, 23) == 0 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 9, 16) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 1) == 1 );
assert( gamma_move(board, 4, 22, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 23, 11) == 1 );
assert( gamma_free_fields(board, 6) == 428 );
assert( gamma_move(board, 7, 24, 12) == 1 );
assert( gamma_move(board, 7, 2, 15) == 1 );
assert( gamma_move(board, 1, 0, 19) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 2, 7, 19) == 0 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 3, 11, 20) == 0 );
assert( gamma_move(board, 4, 0, 23) == 0 );
assert( gamma_move(board, 4, 20, 8) == 1 );
assert( gamma_move(board, 5, 14, 14) == 1 );
assert( gamma_move(board, 6, 10, 17) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 0, 14) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 3, 15) == 1 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_move(board, 3, 20, 10) == 1 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 21, 7) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 18, 2) == 1 );
assert( gamma_golden_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 16, 8) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 4, 15, 24) == 0 );
assert( gamma_move(board, 5, 23, 4) == 1 );
assert( gamma_move(board, 6, 17, 23) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );


char* board434432567 = gamma_board(board);
assert( board434432567 != NULL );
assert( strcmp(board434432567, 
".4........6..............\n"
".........3...........4...\n"
"..72.....................\n"
"7..3..........5..........\n"
".........3...............\n"
"7..........227..........7\n"
".....5.................5.\n"
".......3............3....\n"
".........................\n"
"................1...4..4.\n"
"......7..............44..\n"
"..66...1.3....2..........\n"
"................5.1..1...\n"
".......................5.\n"
"....1.......2............\n"
".....22...........6......\n"
"2.........1.....4........\n"
"5...6....61..............\n") == 0);
free(board434432567);
board434432567 = NULL;
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 22) == 0 );
assert( gamma_move(board, 1, 21, 17) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 14) == 1 );
assert( gamma_move(board, 7, 12, 21) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 394 );
assert( gamma_move(board, 5, 15, 16) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 24, 10) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 3, 18, 14) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 6, 8, 14) == 1 );
assert( gamma_move(board, 7, 16, 22) == 0 );
assert( gamma_move(board, 7, 15, 1) == 1 );
assert( gamma_move(board, 1, 11, 19) == 0 );
assert( gamma_move(board, 2, 23, 10) == 1 );
assert( gamma_move(board, 3, 9, 15) == 1 );
assert( gamma_move(board, 4, 18, 16) == 1 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 17, 7) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 0, 13) == 1 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 10, 18) == 0 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_golden_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 5, 16, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 15) == 1 );
assert( gamma_move(board, 7, 13, 13) == 1 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 1, 24, 3) == 1 );
assert( gamma_move(board, 1, 14, 16) == 1 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 4, 20, 2) == 1 );


char* board284253177 = gamma_board(board);
assert( board284253177 != NULL );
assert( strcmp(board284253177, 
".4........6..........1...\n"
".........3....15..4..4...\n"
"..72.....3...6...........\n"
"7613....6.....5...3......\n"
"74...2..332..7...........\n"
"7..........227..........7\n"
".....5.................5.\n"
".......3....4.......3..26\n"
"........77...............\n"
"2..5..2.........1...4..4.\n"
"1.....7..........6...44..\n"
"..66...1.3....2.5........\n"
"..........14....5.1..1...\n"
"........3..............5.\n"
"...71....1..2...........1\n"
".....22...........6.4....\n"
"2.......2.1....74........\n"
"5.1.6..4.61..............\n") == 0);
free(board284253177);
board284253177 = NULL;
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 16) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_move(board, 7, 17, 13) == 1 );
assert( gamma_move(board, 1, 15, 6) == 1 );
assert( gamma_move(board, 2, 20, 13) == 1 );
assert( gamma_free_fields(board, 2) == 359 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 3, 16, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_free_fields(board, 4) == 356 );
assert( gamma_move(board, 5, 23, 9) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_move(board, 7, 1, 15) == 1 );
assert( gamma_free_fields(board, 1) == 352 );
assert( gamma_move(board, 2, 2, 21) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 7, 14) == 1 );
assert( gamma_move(board, 4, 3, 21) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 15, 24) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 16, 24) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 24, 7) == 1 );
assert( gamma_free_fields(board, 1) == 346 );
assert( gamma_golden_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_free_fields(board, 4) == 344 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_golden_move(board, 5, 15, 2) == 0 );


char* board374896323 = gamma_board(board);
assert( board374896323 != NULL );
assert( strcmp(board374896323, 
".4........6..........1...\n"
"........63....15..4..4...\n"
".772.....3...6...........\n"
"7613...36.....5...3......\n"
"74...2..332..7...7..2....\n"
"7.....5....2276.........7\n"
".....5.................5.\n"
".......3....4.......3..26\n"
".5...1..77.4.3.........5.\n"
"2..5..2.........1...4..4.\n"
"1.....7..........6...44.1\n"
"..66..21.34...215........\n"
"..........14....5.1..1...\n"
"....6...3...5...3......5.\n"
"...71.6..1..2...........1\n"
".....22.....5.....6.4....\n"
"22...4..2.1....74........\n"
"5.1.6..4.61..............\n") == 0);
free(board374896323);
board374896323 = NULL;
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 7, 4, 18) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 17, 1) == 1 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 17, 11) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 7, 20, 14) == 1 );
assert( gamma_move(board, 7, 3, 17) == 1 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 3, 24, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_move(board, 5, 11, 16) == 1 );
assert( gamma_move(board, 6, 17, 9) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 7, 12, 11) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 12, 14) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 9, 17) == 1 );
assert( gamma_move(board, 4, 15, 11) == 1 );
assert( gamma_move(board, 4, 19, 17) == 1 );
assert( gamma_move(board, 5, 7, 15) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 319 );
assert( gamma_move(board, 6, 15, 6) == 0 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 7, 14, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 13, 14) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 20) == 0 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_move(board, 4, 4, 15) == 1 );
assert( gamma_free_fields(board, 4) == 314 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 1, 21) == 0 );
assert( gamma_move(board, 7, 18, 8) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 13, 15) == 0 );
assert( gamma_move(board, 2, 12, 16) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 6, 20) == 0 );
assert( gamma_move(board, 7, 9, 21) == 0 );
assert( gamma_move(board, 7, 24, 4) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 20, 0) == 1 );
assert( gamma_free_fields(board, 2) == 307 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 8, 16) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 5, 16, 5) == 0 );
assert( gamma_move(board, 6, 11, 21) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 7, 14, 15) == 1 );
assert( gamma_move(board, 1, 14, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_golden_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 20, 8) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_move(board, 4, 19, 13) == 1 );
assert( gamma_free_fields(board, 4) == 299 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 17, 14) == 1 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_move(board, 1, 0, 23) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 3, 22, 8) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 24, 15) == 1 );
assert( gamma_golden_move(board, 5, 6, 16) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 16, 11) == 1 );
assert( gamma_move(board, 4, 14, 23) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 16, 22) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 17, 9) == 0 );
assert( gamma_move(board, 1, 16, 16) == 1 );
assert( gamma_move(board, 1, 14, 14) == 0 );
assert( gamma_move(board, 2, 19, 7) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 284 );
assert( gamma_move(board, 5, 5, 19) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_move(board, 7, 17, 8) == 1 );
assert( gamma_move(board, 7, 17, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_free_fields(board, 1) == 281 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_golden_move(board, 2, 5, 21) == 0 );
assert( gamma_move(board, 3, 18, 15) == 1 );
assert( gamma_move(board, 4, 1, 24) == 0 );
assert( gamma_move(board, 4, 16, 11) == 0 );
assert( gamma_move(board, 5, 10, 19) == 0 );
assert( gamma_move(board, 5, 18, 16) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 7, 18, 13) == 1 );
assert( gamma_move(board, 1, 16, 13) == 1 );
assert( gamma_move(board, 1, 14, 17) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 2, 23) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 17, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 17, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 22, 0) == 1 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 1, 24, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 7, 17) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 15, 2) == 1 );
assert( gamma_move(board, 5, 17, 12) == 1 );
assert( gamma_free_fields(board, 5) == 265 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 24, 12) == 0 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 13, 22) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );


char* board214763285 = gamma_board(board);
assert( board214763285 != NULL );
assert( strcmp(board214763285, 
".4.7...4.36...1....4.1...\n"
"........63.52.151.4..4...\n"
".7724..5.33..67...3.....5\n"
"761331.36...215..63.7....\n"
"745..252332..7..17742...1\n"
"7.1...5..6.2276..5......7\n"
".....5.7.2..7..435.....5.\n"
"...7.6.33...4.7.....3..26\n"
".55.21..77.4.3...6.....5.\n"
"2.35.72..6.211..177.4.34.\n"
"1556.777..4......6.2.44.1\n"
"..66.221.34...215........\n"
"..15.3...514.6..5.1..1...\n"
"5...6.743...5...34.....57\n"
"...7113..1.322..........1\n"
".3..522.7...5..5..6.4....\n"
"2241.47.2.1....742.......\n"
"5.136.14.615........2.6..\n") == 0);
free(board214763285);
board214763285 = NULL;
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 5, 21, 12) == 1 );
assert( gamma_move(board, 6, 6, 19) == 0 );
assert( gamma_move(board, 6, 19, 9) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 253 );
assert( gamma_move(board, 3, 6, 19) == 0 );
assert( gamma_golden_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 11, 19) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 7, 17, 9) == 0 );
assert( gamma_move(board, 1, 17, 16) == 1 );
assert( gamma_move(board, 1, 19, 1) == 1 );
assert( gamma_golden_move(board, 1, 16, 18) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_free_fields(board, 2) == 250 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board662684320 = gamma_board(board);
assert( board662684320 != NULL );
assert( strcmp(board662684320, 
".4.7...4.36...1....4.1...\n"
"........63.52.15114..4...\n"
".7724..5.33..67...3.....5\n"
"761331.36...215..63.7....\n"
"745..252332..7..17742...1\n"
"7.1...5..6.2276..5...5..7\n"
".....5.7.2..7..435.....5.\n"
"...7.6.33...4.7.....3..26\n"
".55.21.777.4.34..6.6...5.\n"
"2.35.72..63211..177.4.34.\n"
"1556.777..4......6.2.44.1\n"
"..66.221.34...215........\n"
"..15.3...514.6..5.1..1...\n"
"5...6.743...5...34.....57\n"
"...7113..1.322..........1\n"
".3..522.7...5..5..6.4....\n"
"2241.47.2.1....742.1.....\n"
"5.136.14.615........2.6..\n") == 0);
free(board662684320);
board662684320 = NULL;
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 17, 18) == 0 );
assert( gamma_move(board, 6, 0, 16) == 1 );
assert( gamma_move(board, 7, 16, 3) == 1 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 15, 5) == 1 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 16, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 22, 2) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 19) == 0 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 20, 14) == 0 );
assert( gamma_golden_move(board, 6, 3, 15) == 1 );


char* board437783052 = gamma_board(board);
assert( board437783052 != NULL );
assert( strcmp(board437783052, 
".4.7...4.36...1....4.1...\n"
"6.......63.52.15114..4...\n"
".7764..5.33..67...3.....5\n"
"761331.36...215..63.7....\n"
"745..252332..7..17742...1\n"
"741...5..6.2276..5...5..7\n"
".....5.7.2..7..435.....5.\n"
"5..7.6.33..34.7.....3..26\n"
".55.21.777.4.34..6.6...5.\n"
"2.35.72..63211..177.4.34.\n"
"1556.777..4......6.2.44.1\n"
"..66.221.34...215........\n"
"..15.3...514.6.35.1..1...\n"
"5...6.743...5...34.....57\n"
"...7113..1.322..7.......1\n"
".3..522.7...5..55.6.4.1..\n"
"2241.47.2.14...742.1.....\n"
"5.136.14.615........2.6..\n") == 0);
free(board437783052);
board437783052 = NULL;
assert( gamma_move(board, 1, 13, 10) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 13, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 22, 14) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 17) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );


char* board555700254 = gamma_board(board);
assert( board555700254 != NULL );
assert( strcmp(board555700254, 
"54.7...4.36..31....4.1...\n"
"6.......63.52.15114..4...\n"
".7764..5.33..67...3.....5\n"
"761331.36...215..63.7.4..\n"
"745..252332..7..17742...1\n"
"741...5..6.2276..5...5..7\n"
".....5.7.2..7..435.....5.\n"
"5..7.6.33..3417.....3..26\n"
".55.21.777.4.34..6.6...5.\n"
"2.35.72..63211..177.4.34.\n"
"1556.777..4......6.2.44.1\n"
"..66.221.34...215........\n"
"..15.3...514.6.35.1..1...\n"
"5...6.743...5...34.....57\n"
"...7113..1.322..7.......1\n"
".3..522.7...5..55.6.4.1..\n"
"2241.47.2.14...742.1.....\n"
"5.136.14.615........2.6..\n") == 0);
free(board555700254);
board555700254 = NULL;
assert( gamma_move(board, 6, 9, 22) == 0 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 2, 17, 15) == 1 );
assert( gamma_move(board, 2, 19, 13) == 0 );
assert( gamma_golden_move(board, 2, 7, 21) == 0 );
assert( gamma_move(board, 3, 10, 19) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 5, 15, 16) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 7, 1, 23) == 0 );
assert( gamma_move(board, 7, 19, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 35 );
assert( gamma_move(board, 1, 17, 6) == 1 );
assert( gamma_move(board, 1, 22, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 9, 21) == 0 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_move(board, 4, 13, 8) == 1 );


char* board695847833 = gamma_board(board);
assert( board695847833 != NULL );
assert( strcmp(board695847833, 
"54.7...4.36..31....4.1...\n"
"6.......63.52.15114..4...\n"
".7764..5.33..67..23.....5\n"
"761331.36...215..63.7.4..\n"
"7457.252332..7..17742...1\n"
"741...5..6.2276..5...5..7\n"
".....5.7.2..7..435.....5.\n"
"5..7.6.33..3417....73..26\n"
".55.21.777.4.34..6.6...5.\n"
"2.35.721.63214..177.4.34.\n"
"1556.777..4......6.2.44.1\n"
"..66.221.34...2151.......\n"
"..15.3...514.6.35.1..1...\n"
"5...6.743.5.5...34.....57\n"
"...7113..1.322..7.....1.1\n"
".3..522.7...5..55.6.4.1..\n"
"2241.47.2.14...742.1.....\n"
"5.136.14.615........2.6..\n") == 0);
free(board695847833);
board695847833 = NULL;
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 6, 3, 17) == 0 );
assert( gamma_move(board, 7, 6, 18) == 0 );
assert( gamma_move(board, 7, 19, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 36 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_free_fields(board, 4) == 225 );
assert( gamma_move(board, 5, 15, 12) == 1 );
assert( gamma_golden_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 23, 10) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 17, 17) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 32 );
assert( gamma_golden_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 8, 15) == 1 );
assert( gamma_busy_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 19, 17) == 0 );
assert( gamma_move(board, 6, 11, 15) == 1 );
assert( gamma_free_fields(board, 6) == 220 );
assert( gamma_move(board, 7, 10, 16) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 17, 20) == 0 );
assert( gamma_move(board, 6, 20, 6) == 1 );
assert( gamma_move(board, 7, 9, 21) == 0 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_move(board, 1, 16, 22) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );


char* board103966593 = gamma_board(board);
assert( board103966593 != NULL );
assert( strcmp(board103966593, 
"54.7...4.36..31..2.4.1...\n"
"6.......63752.15114..4...\n"
".7764..55336.67..23.....5\n"
"761331.36...215..63.7.4..\n"
"7457.252332..7..17742...1\n"
"741...5..6.22765.5...5..7\n"
"4.2..5.7.2..7..435.....5.\n"
"5..7.6.33..3417....73..26\n"
".55221.777.4.34..6.6...5.\n"
"2.35.721.63214..177.4.34.\n"
"1556.777..4......6.2.44.1\n"
"..66.221.34...2151..6....\n"
"..15.3.2.514.6.35.1..1...\n"
"5...6.7435515...34.....57\n"
"...7113..1.322..7.....1.1\n"
".3..522.7...5..55.6.4.1..\n"
"2241547.2.14...742.1.....\n"
"5.136.14.655.......72.6..\n") == 0);
free(board103966593);
board103966593 = NULL;
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 22, 10) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 15, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 7, 13, 16) == 1 );
assert( gamma_free_fields(board, 7) == 212 );
assert( gamma_move(board, 1, 6, 23) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 212 );
assert( gamma_move(board, 3, 1, 24) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 4, 22, 7) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 14, 16) == 0 );
assert( gamma_free_fields(board, 6) == 212 );
assert( gamma_move(board, 7, 6, 23) == 0 );
assert( gamma_move(board, 7, 17, 2) == 1 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 12, 16) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 3, 24, 13) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_free_fields(board, 3) == 211 );
assert( gamma_move(board, 4, 16, 10) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 14, 15) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 6, 21, 15) == 1 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_move(board, 7, 21, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 17, 24) == 0 );
assert( gamma_move(board, 2, 22, 0) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 16, 7) == 1 );
assert( gamma_move(board, 4, 21, 11) == 1 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_move(board, 5, 13, 15) == 0 );
assert( gamma_move(board, 1, 20, 13) == 0 );
assert( gamma_move(board, 1, 13, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 12, 16) == 0 );
assert( gamma_golden_move(board, 3, 9, 19) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 19, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 15, 15) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_golden_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 21, 17) == 0 );
assert( gamma_move(board, 1, 3, 19) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board927326600 = gamma_board(board);
assert( board927326600 != NULL );
assert( strcmp(board927326600, 
"54.7...4.36..31..2.4.1...\n"
"6.......63752715114..4...\n"
".7764..55336.676.23..6..5\n"
"761331.36...215..63.7.4..\n"
"7457.252332..7..17742...1\n"
"741...5..6.22765.5...5..7\n"
"4.2.65.7.2.77..435...4.5.\n"
"5..7.6.33..3417.4..73.326\n"
".55221.777.4.34..6.6...5.\n"
"2.35.721.63214..177.4.34.\n"
"1556.777..4.....46.2.44.1\n"
"..66.221.34...2151.46....\n"
"..15.3.26514.6.35.1..1...\n"
"5...6.7435515...34.....57\n"
"...7113..1.322..7.....1.1\n"
".3..522.7...5..5576.4.1..\n"
"2241547.2.14...742.1.....\n"
"5.136.14.655...5...72.6..\n") == 0);
free(board927326600);
board927326600 = NULL;
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 2, 17, 9) == 0 );
assert( gamma_move(board, 3, 17, 23) == 0 );
assert( gamma_move(board, 3, 24, 6) == 1 );
assert( gamma_move(board, 4, 12, 23) == 0 );
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_move(board, 5, 24, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 15, 16) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 12, 19) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_move(board, 7, 22, 8) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 20, 9) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 17, 22) == 0 );
assert( gamma_move(board, 6, 17, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 32 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 20) == 0 );


char* board499194433 = gamma_board(board);
assert( board499194433 != NULL );
assert( strcmp(board499194433, 
"54.7..44.36..31..2.4.1...\n"
"6.......63752715114..4...\n"
".7764..55336.676.23..6..5\n"
"761331.36...215..63.7.4..\n"
"7457.252332..7..17742...1\n"
"741.6.5..6.22765.5...5..7\n"
"4.2.65.7.2.77..435...4.5.\n"
"5..7.6.33..3417.4..73.326\n"
".55221.777.4.34..6.61..5.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..4.....46.2.44.1\n"
"..66.221.34...2151.46...3\n"
"..15.3.26514.6.35.1..1...\n"
"5...6.7435515...34.....57\n"
"...7113..1.322..7.....1.1\n"
".3..522.7...5..5576.4.1..\n"
"2241547.2.14...742.1.....\n"
"5.136.14.655.7.5...72.6..\n") == 0);
free(board499194433);
board499194433 = NULL;
assert( gamma_move(board, 7, 22, 1) == 1 );
assert( gamma_move(board, 1, 2, 23) == 0 );
assert( gamma_move(board, 2, 9, 21) == 0 );


char* board467138182 = gamma_board(board);
assert( board467138182 != NULL );
assert( strcmp(board467138182, 
"54.7..44.36..31..2.4.1...\n"
"6.......63752715114..4...\n"
".7764..55336.676.23..6..5\n"
"761331.36...215..63.7.4..\n"
"7457.252332..7..17742...1\n"
"741.6.5..6.22765.5...5..7\n"
"4.2.65.7.2.77..435...4.5.\n"
"5..7.6.33..3417.4..73.326\n"
".55221.777.4.34..6.61..5.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..4.....46.2.44.1\n"
"..66.221.34...2151.46...3\n"
"..15.3.26514.6.35.1..1...\n"
"5...6.7435515...34.....57\n"
"...7113..1.322..7.....1.1\n"
".3..522.7...5..5576.4.1..\n"
"2241547.2.14...742.1..7..\n"
"5.136.14.655.7.5...72.6..\n") == 0);
free(board467138182);
board467138182 = NULL;
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 19, 5) == 1 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 21, 10) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 5, 20, 15) == 1 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 7, 17, 16) == 0 );
assert( gamma_free_fields(board, 7) == 191 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 24) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_free_fields(board, 1) == 191 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 18, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 4, 20) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_free_fields(board, 7) == 189 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 11, 20) == 0 );
assert( gamma_move(board, 1, 15, 12) == 0 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_golden_move(board, 3, 6, 17) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 13, 15) == 0 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_move(board, 6, 9, 21) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 7, 20) == 0 );
assert( gamma_move(board, 2, 9, 22) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 4, 16) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 14, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 17, 23) == 0 );
assert( gamma_move(board, 7, 10, 12) == 1 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 15, 5) == 0 );
assert( gamma_move(board, 4, 16, 20) == 0 );
assert( gamma_move(board, 5, 18, 4) == 1 );
assert( gamma_move(board, 5, 19, 12) == 1 );
assert( gamma_golden_move(board, 5, 5, 15) == 0 );


char* board446887421 = gamma_board(board);
assert( board446887421 != NULL );
assert( strcmp(board446887421, 
"54.7..44.36..31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36...215..63.7.4..\n"
"7457.252332..7..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.7.2.77..435...4.5.\n"
"5..7.6.33.53417.4.2733326\n"
".55221.777.4534..6.61..5.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..4.....46.2.44.1\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6.7435515...345....57\n"
"...7113..1.322..7.....1.1\n"
".3..522.7...5..5576.4.1..\n"
"2241547.2.14...742.1..7..\n"
"54136.14.655.7.5...72.6..\n") == 0);
free(board446887421);
board446887421 = NULL;
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, 19, 2) == 1 );
assert( gamma_move(board, 1, 21, 15) == 0 );
assert( gamma_move(board, 1, 23, 7) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 17, 15) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 5, 6, 22) == 0 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_free_fields(board, 6) == 178 );
assert( gamma_move(board, 7, 9, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 16, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 17, 15) == 0 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 13, 22) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 5, 17, 22) == 0 );
assert( gamma_move(board, 6, 0, 23) == 0 );
assert( gamma_move(board, 7, 17, 12) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );


char* board420070145 = gamma_board(board);
assert( board420070145 != NULL );
assert( strcmp(board420070145, 
"54.7..44.36..31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36...215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.4534..6.61..5.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42....46.2.4411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6.7435515...345....57\n"
"...7113..1.322..7.....1.1\n"
"13..522.7...5..557674.1..\n"
"2241547.2.14...742.1..7..\n"
"54136.14.655.7.5...72.6..\n") == 0);
free(board420070145);
board420070145 = NULL;
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 22, 9) == 1 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 5, 24) == 0 );
assert( gamma_move(board, 6, 8, 15) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 3, 17) == 0 );
assert( gamma_move(board, 1, 16, 19) == 0 );
assert( gamma_free_fields(board, 1) == 172 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 4, 22, 7) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_free_fields(board, 5) == 172 );
assert( gamma_move(board, 6, 0, 24) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 15, 6) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_move(board, 2, 17, 20) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_free_fields(board, 3) == 172 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 24, 8) == 0 );
assert( gamma_move(board, 5, 11, 17) == 1 );
assert( gamma_busy_fields(board, 5) == 50 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 16, 23) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 17, 22) == 0 );
assert( gamma_move(board, 2, 23, 1) == 1 );
assert( gamma_free_fields(board, 2) == 170 );
assert( gamma_move(board, 3, 14, 14) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 15, 23) == 0 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 23) == 0 );
assert( gamma_move(board, 5, 15, 7) == 1 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 15, 6) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 17, 20) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 18) == 0 );
assert( gamma_move(board, 3, 17, 11) == 0 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 17, 23) == 0 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_move(board, 1, 15, 9) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 5, 19, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 18) == 0 );
assert( gamma_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 7, 11, 18) == 0 );
assert( gamma_move(board, 7, 17, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 45 );
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 1, 9, 16) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 36 );


char* board356019071 = gamma_board(board);
assert( board356019071 != NULL );
assert( strcmp(board356019071, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.45341.6.61.35.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.2.4411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...637435515...3455...57\n"
"...7113..1.322..7.....1.1\n"
"13..522.7...5..557674.1..\n"
"2241547.2.14...742.1..72.\n"
"54136614.655.7.5...72.6..\n") == 0);
free(board356019071);
board356019071 = NULL;
assert( gamma_move(board, 4, 8, 16) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 6, 24, 7) == 0 );
assert( gamma_move(board, 6, 20, 13) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 16, 24) == 0 );
assert( gamma_move(board, 3, 5, 23) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 24) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_free_fields(board, 4) == 165 );


char* board763973405 = gamma_board(board);
assert( board763973405 != NULL );
assert( strcmp(board763973405, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.45341.6.61.35.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.2.4411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...637435515...3455...57\n"
"...7113..1.322..7.....1.1\n"
"13..522.7...5..557674.1..\n"
"2241547.2.14...742.1..72.\n"
"54136614.655.7.5...72.6..\n") == 0);
free(board763973405);
board763973405 = NULL;
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 52 );
assert( gamma_move(board, 7, 18, 5) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_free_fields(board, 7) == 165 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_free_fields(board, 1) == 165 );
assert( gamma_move(board, 2, 20, 3) == 1 );
assert( gamma_move(board, 2, 21, 12) == 0 );


char* board953456708 = gamma_board(board);
assert( board953456708 != NULL );
assert( strcmp(board953456708, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.45341.6.61.35.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.2.4411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...637435515...3455...57\n"
"...7113..1.322..7...2.1.1\n"
"13..522.7...5..557674.1..\n"
"2241547.2.14...742.1..72.\n"
"54136614.655.7.5...72.6..\n") == 0);
free(board953456708);
board953456708 = NULL;
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 21, 9) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 13, 23) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 162 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 20, 7) == 1 );
assert( gamma_move(board, 4, 19, 17) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );


char* board657746735 = gamma_board(board);
assert( board657746735 != NULL );
assert( strcmp(board657746735, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.45341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.244411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...637435515...3455...57\n"
"...7113..1.322..7...2.1.1\n"
"13..522.73..5..557674.1..\n"
"2241547.2514...742.1..72.\n"
"54136614.655.7.5...72.6..\n") == 0);
free(board657746735);
board657746735 = NULL;
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 15, 12) == 0 );
assert( gamma_move(board, 1, 2, 24) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 24, 1) == 1 );


char* board628247082 = gamma_board(board);
assert( board628247082 != NULL );
assert( strcmp(board628247082, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.45341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.244411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...7113..1.322..7...2.1.1\n"
"13..522.73..5..557674.1..\n"
"2241547.2514...742.1..723\n"
"54136614.655.7.5...72.6..\n") == 0);
free(board628247082);
board628247082 = NULL;
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 2, 23) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 7, 18, 3) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 1, 24, 0) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_free_fields(board, 2) == 155 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_move(board, 7, 20, 9) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 1, 19, 9) == 0 );


char* board279114371 = gamma_board(board);
assert( board279114371 != NULL );
assert( strcmp(board279114371, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.45341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.244411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...7113..11322..7.7.2.1.1\n"
"13..522.73..5..557674.1..\n"
"2241547.2514...742.1..723\n"
"54136614.655.7.5...72.6.1\n") == 0);
free(board279114371);
board279114371 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );


char* board433536360 = gamma_board(board);
assert( board433536360 != NULL );
assert( strcmp(board433536360, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33753417.4.2733326\n"
".55221.777.45341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.244411\n"
"..66.221.34...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...7113..11322..7.7.2.1.1\n"
"13..522.73..5..557674.1..\n"
"2241547.2514...742.1..723\n"
"54136614.655.7.5...72.6.1\n") == 0);
free(board433536360);
board433536360 = NULL;
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 16, 5) == 0 );
assert( gamma_move(board, 5, 10, 16) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_free_fields(board, 6) == 153 );
assert( gamma_move(board, 7, 21, 11) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 1, 21, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 43 );
assert( gamma_golden_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 14, 24) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 17, 15) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 14, 16) == 0 );


char* board410275327 = gamma_board(board);
assert( board410275327 != NULL );
assert( strcmp(board410275327, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33713417.4.2733326\n"
".55221.777.45341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.244411\n"
"..66.221434...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...71134.11322..7.7.2.1.1\n"
"13..522.73..53.557674.1..\n"
"2241547.25145..742.1..723\n"
"54136614.655.7.5...72.6.1\n") == 0);
free(board410275327);
board410275327 = NULL;
assert( gamma_move(board, 7, 12, 12) == 0 );
assert( gamma_free_fields(board, 7) == 151 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_free_fields(board, 1) == 151 );
assert( gamma_move(board, 2, 3, 23) == 0 );
assert( gamma_move(board, 2, 24, 2) == 1 );


char* board529000520 = gamma_board(board);
assert( board529000520 != NULL );
assert( strcmp(board529000520, 
"54.7..44.365.31..2.4.1...\n"
"6...3...63752715114..4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33713417.4.2733326\n"
".55221.777.45341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.244411\n"
"..66.221434...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...71134.11322..7.7.2.1.1\n"
"13..522.73..53.557674.1.2\n"
"2241547.25145..742.1..723\n"
"54136614.655.7.5...72.6.1\n") == 0);
free(board529000520);
board529000520 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_free_fields(board, 3) == 150 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_golden_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 11, 24) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 13, 15) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_free_fields(board, 7) == 150 );
assert( gamma_move(board, 2, 19, 16) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 15, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 55 );


char* board594197555 = gamma_board(board);
assert( board594197555 != NULL );
assert( strcmp(board594197555, 
"54.7..44.365.31..2.4.1...\n"
"6...3...637527151142.4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33713417.4.2733326\n"
".55221.777.45341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..42...546.244411\n"
"..66.221434...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...71134.11322..7.7.2.1.1\n"
"13.5522.73..53.557674.1.2\n"
"2241547.25145..742.1..723\n"
"54136614.655.7.5...72.6.1\n") == 0);
free(board594197555);
board594197555 = NULL;
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_move(board, 2, 21, 0) == 1 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 3, 23, 7) == 0 );
assert( gamma_move(board, 4, 3, 23) == 0 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_move(board, 5, 3, 21) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 7, 16, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 46 );
assert( gamma_golden_move(board, 7, 10, 7) == 1 );
assert( gamma_move(board, 1, 1, 16) == 1 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 13, 22) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 16, 11) == 0 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_move(board, 3, 8, 21) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 22, 14) == 0 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );


char* board692067969 = gamma_board(board);
assert( board692067969 != NULL );
assert( strcmp(board692067969, 
"54.7..44.365.31..2.4.1...\n"
"61..3...637527151142.4...\n"
".7764..55336.676.23.56..5\n"
"761331.36..6215..63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.65.742.77..435...4.5.\n"
"5.67.6.33713417.4.2733326\n"
".55221.777545341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..726..546.244411\n"
"..66.221434...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...71134.11322..7.7.2.1.1\n"
"1355522.73..53.557674.1.2\n"
"2241547.25145..742.1..723\n"
"54136614.655.7.5...7226.1\n") == 0);
free(board692067969);
board692067969 = NULL;
assert( gamma_move(board, 7, 19, 13) == 0 );
assert( gamma_move(board, 7, 15, 14) == 1 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_golden_move(board, 4, 6, 19) == 0 );
assert( gamma_move(board, 5, 21, 2) == 1 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 37 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 7, 22, 17) == 1 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 4, 5, 15) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 17, 20) == 0 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_move(board, 6, 12, 20) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 21, 1) == 1 );
assert( gamma_free_fields(board, 6) == 137 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 1, 20, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 18, 13) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 3, 22, 0) == 0 );


char* board726472240 = gamma_board(board);
assert( board726472240 != NULL );
assert( strcmp(board726472240, 
"54.7..44.365.31..2.4.17..\n"
"61..3...637527151142.4...\n"
".77644.55336.676.23.56..5\n"
"761331.36..62157.63.7.4..\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.657742.77..435...4.5.\n"
"5.67.6.33713417.4.2733326\n"
".55221.777545341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..726..546.244411\n"
"..66.221434...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...71134.11322..7.7.2.1.1\n"
"1355522.73.153.55767451.2\n"
"2241547.25145..742.1.6723\n"
"54136614.655.7.5...7226.1\n") == 0);
free(board726472240);
board726472240 = NULL;
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_move(board, 5, 18, 14) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 23, 14) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 5, 16) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 13, 7) == 0 );
assert( gamma_free_fields(board, 4) == 134 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 6, 18, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board496696181 = gamma_board(board);
assert( board496696181 != NULL );
assert( strcmp(board496696181, 
"54.7..44.365.31..2.4.17..\n"
"61..32..637527151142.4...\n"
".77644.55336.676.23.56..5\n"
"761331.36..62157.63.7.41.\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.2.657742.77..435...4.5.\n"
"5.67.6.33713417.4.2733326\n"
".55221.777545341.6.61535.\n"
"2.35.721.63214..177.4.345\n"
"1556.777..726..5466244411\n"
"..66.221434...2151.46...3\n"
".415.3.2651456.35.15.1...\n"
"5...6374355156..3455...57\n"
"...71134.11322..7.7.2.1.1\n"
"1355522.73.153.55767451.2\n"
"2241547.25145..742.1.6723\n"
"54136614.655.7.5...7226.1\n") == 0);
free(board496696181);
board496696181 = NULL;
assert( gamma_move(board, 7, 5, 17) == 1 );
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 4, 19, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 15, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 39 );
assert( gamma_move(board, 7, 8, 21) == 0 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 1, 11, 24) == 0 );
assert( gamma_move(board, 1, 14, 17) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_golden_move(board, 2, 15, 14) == 1 );
assert( gamma_move(board, 3, 6, 22) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 21, 2) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 10, 17) == 0 );
assert( gamma_move(board, 7, 21, 1) == 0 );
assert( gamma_golden_move(board, 7, 17, 10) == 0 );
assert( gamma_move(board, 1, 6, 21) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 3, 18, 0) == 1 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 16, 11) == 0 );
assert( gamma_move(board, 7, 15, 8) == 1 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 14, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_golden_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 6, 14, 21) == 0 );
assert( gamma_move(board, 7, 5, 20) == 0 );
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 2, 21, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 21, 12) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 21) == 0 );
assert( gamma_busy_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_golden_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 6, 17, 2) == 0 );
assert( gamma_free_fields(board, 6) == 121 );
assert( gamma_move(board, 7, 17, 4) == 0 );
assert( gamma_move(board, 1, 13, 16) == 0 );
assert( gamma_move(board, 1, 23, 0) == 1 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 13, 23) == 0 );
assert( gamma_move(board, 4, 4, 15) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 13, 23) == 0 );
assert( gamma_move(board, 6, 20, 14) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_golden_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 14, 16) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 8, 21) == 0 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_move(board, 6, 17, 13) == 0 );


char* board127545894 = gamma_board(board);
assert( board127545894 != NULL );
assert( strcmp(board127545894, 
"54.7.744.365.31..2.4.17..\n"
"61..32..637527151142.4...\n"
".77644.55336.676.23.56..5\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435...4.5.\n"
"5.67.6.33713417.4.2733326\n"
".552217777545341.6.61535.\n"
"2.35.721.63214.7177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151.46...3\n"
".415.3.2651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322.57.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.25145..742.1.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board127545894);
board127545894 = NULL;
assert( gamma_move(board, 7, 16, 17) == 1 );
assert( gamma_free_fields(board, 7) == 117 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 24) == 0 );
assert( gamma_move(board, 2, 11, 16) == 0 );
assert( gamma_move(board, 3, 23, 4) == 0 );
assert( gamma_free_fields(board, 3) == 117 );
assert( gamma_golden_move(board, 3, 1, 19) == 0 );
assert( gamma_move(board, 5, 18, 4) == 0 );
assert( gamma_move(board, 5, 22, 14) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 6, 20, 0) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 53 );
assert( gamma_move(board, 1, 5, 23) == 0 );
assert( gamma_move(board, 1, 17, 10) == 1 );
assert( gamma_move(board, 2, 11, 24) == 0 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 116 );
assert( gamma_move(board, 5, 5, 24) == 0 );
assert( gamma_busy_fields(board, 5) == 59 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 13, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 54 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 14, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 23, 15) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 1, 14, 24) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_golden_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_move(board, 2, 18, 6) == 1 );
assert( gamma_move(board, 3, 3, 23) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 19, 11) == 1 );


char* board109982029 = gamma_board(board);
assert( board109982029 != NULL );
assert( strcmp(board109982029, 
"54.7.744.365.31.72.4.17..\n"
"61..32..637527151142.4...\n"
".77644.55336.676.23.56.45\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.4.5.\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.61535.\n"
"2.35.721263214.7177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".415.3.2651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322.57.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.2514572742.1.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board109982029);
board109982029 = NULL;
assert( gamma_move(board, 5, 4, 21) == 0 );
assert( gamma_move(board, 5, 22, 11) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );


char* board438210729 = gamma_board(board);
assert( board438210729 != NULL );
assert( strcmp(board438210729, 
"54.7.744.365.31.72.4.17..\n"
"61..32..637527151142.4...\n"
".77644.55336.676.23.56.45\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.455.\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.61535.\n"
"2.35.721263214.7177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".415.3.2651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322.57.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.2514572742.1.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board438210729);
board438210729 = NULL;
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 17, 20) == 0 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 8, 16) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_free_fields(board, 5) == 109 );
assert( gamma_move(board, 6, 17, 15) == 0 );
assert( gamma_move(board, 7, 6, 23) == 0 );
assert( gamma_move(board, 7, 21, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 54 );


char* board136709452 = gamma_board(board);
assert( board136709452 != NULL );
assert( strcmp(board136709452, 
"54.7.744.365.31.72.4.17..\n"
"61..32..637527151142.4...\n"
".77644.55336.676.23.56.45\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..17742...1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.455.\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.61535.\n"
"2.35.721263214.7177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".415.3.2651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322.57.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.2514572742.1.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board136709452);
board136709452 = NULL;
assert( gamma_move(board, 1, 9, 24) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 4, 20) == 0 );
assert( gamma_move(board, 3, 12, 17) == 1 );
assert( gamma_move(board, 5, 8, 19) == 0 );
assert( gamma_move(board, 5, 21, 13) == 1 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 1, 5, 20) == 0 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 24, 12) == 0 );
assert( gamma_free_fields(board, 2) == 107 );
assert( gamma_move(board, 3, 18, 14) == 0 );
assert( gamma_move(board, 3, 17, 14) == 0 );
assert( gamma_move(board, 4, 4, 21) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 61 );
assert( gamma_golden_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 7, 16, 23) == 0 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_move(board, 1, 13, 23) == 0 );
assert( gamma_move(board, 1, 22, 3) == 0 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_move(board, 2, 21, 10) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 24, 9) == 1 );
assert( gamma_move(board, 4, 7, 16) == 1 );
assert( gamma_move(board, 6, 9, 16) == 0 );
assert( gamma_move(board, 7, 17, 8) == 0 );
assert( gamma_move(board, 1, 4, 20) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 22) == 0 );
assert( gamma_move(board, 5, 6, 22) == 0 );
assert( gamma_free_fields(board, 5) == 104 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_move(board, 7, 16, 22) == 0 );
assert( gamma_free_fields(board, 7) == 104 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 22, 8) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 18, 1) == 1 );
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_busy_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 15, 16) == 0 );
assert( gamma_move(board, 7, 16, 24) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_golden_move(board, 2, 4, 16) == 0 );
assert( gamma_move(board, 3, 24, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 18, 13) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );


char* board428822250 = gamma_board(board);
assert( board428822250 != NULL );
assert( strcmp(board428822250, 
"54.7.744.365331.72.4.17..\n"
"61..32.4637527151142.4...\n"
".77644555336.676.23.56.45\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..177425..1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.4553\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.615353\n"
"2.35.721263214.7177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".415.322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board428822250);
board428822250 = NULL;
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 14, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 7) == 98 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 21, 13) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 13, 22) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 23) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 8, 21) == 0 );
assert( gamma_golden_move(board, 5, 17, 18) == 0 );
assert( gamma_move(board, 6, 6, 21) == 0 );
assert( gamma_move(board, 6, 17, 13) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 22, 7) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 5, 12, 23) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board959208236 = gamma_board(board);
assert( board959208236 != NULL );
assert( strcmp(board959208236, 
"54.7.744.365331.72.4.17..\n"
"61..32.4637527151142.4...\n"
".77644555336.676.23.56.45\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..177425..1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.4553\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.615353\n"
"2.35.72126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board959208236);
board959208236 = NULL;
assert( gamma_move(board, 7, 14, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 55 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 22, 8) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 17, 2) == 0 );
assert( gamma_move(board, 3, 3, 16) == 1 );
assert( gamma_move(board, 4, 21, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 17, 15) == 0 );
assert( gamma_move(board, 5, 15, 15) == 0 );
assert( gamma_move(board, 6, 4, 22) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 17, 15) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_move(board, 2, 14, 24) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 49 );


char* board171109885 = gamma_board(board);
assert( board171109885 != NULL );
assert( strcmp(board171109885, 
"54.7.744.365331.72.4.17..\n"
"61.332.4637527151142.4...\n"
".77644555336.676.23.56.45\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..177425..1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.4553\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.615353\n"
"2.35.72126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board171109885);
board171109885 = NULL;
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 6, 13, 15) == 0 );
assert( gamma_move(board, 6, 14, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_busy_fields(board, 7) == 55 );
assert( gamma_move(board, 1, 2, 23) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 5, 22, 17) == 0 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_free_fields(board, 5) == 97 );
assert( gamma_golden_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_move(board, 6, 17, 6) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 7, 15, 14) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 23, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 12, 16) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 11, 13) == 0 );


char* board914922499 = gamma_board(board);
assert( board914922499 != NULL );
assert( strcmp(board914922499, 
"54.7.744.365331.72.4.17..\n"
"61.332.4637527151142.4...\n"
".77644555336.676.23.56.45\n"
"761331.36..62152.63.7.41.\n"
"7457.252332427..177425..1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.4553\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.615353\n"
"2.35.72126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board914922499);
board914922499 = NULL;
assert( gamma_move(board, 7, 22, 11) == 0 );
assert( gamma_golden_move(board, 7, 7, 17) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 22, 7) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 22) == 0 );
assert( gamma_move(board, 5, 8, 19) == 0 );
assert( gamma_move(board, 5, 0, 15) == 1 );
assert( gamma_move(board, 6, 0, 16) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 13, 22) == 0 );
assert( gamma_move(board, 7, 23, 0) == 0 );
assert( gamma_free_fields(board, 7) == 96 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 2, 23) == 0 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 4, 14, 19) == 0 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_free_fields(board, 4) == 96 );
assert( gamma_move(board, 5, 19, 14) == 1 );
assert( gamma_move(board, 5, 13, 17) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 3, 22, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 6, 24, 2) == 0 );
assert( gamma_move(board, 7, 15, 16) == 0 );
assert( gamma_free_fields(board, 7) == 95 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 14, 16) == 0 );
assert( gamma_move(board, 1, 20, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 16, 20) == 0 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_move(board, 6, 17, 11) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 12, 17) == 0 );
assert( gamma_move(board, 1, 16, 20) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 95 );
assert( gamma_move(board, 5, 3, 1) == 0 );


char* board137256211 = gamma_board(board);
assert( board137256211 != NULL );
assert( strcmp(board137256211, 
"54.7.744.365331.72.4.17..\n"
"61.332.4637527151142.4...\n"
"577644555336.676.23.56.45\n"
"761331.36..62152.6357.41.\n"
"7457.252332427..177425..1\n"
"741.6.5..6722765.5.5.5..7\n"
"4.24657742.77..435.4.4553\n"
"5.67.6.33713417.412733326\n"
".552217777545341.6.615353\n"
"2.35.72126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.5..3722611\n") == 0);
free(board137256211);
board137256211 = NULL;
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 19, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 24, 11) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 17, 23) == 0 );
assert( gamma_move(board, 6, 8, 12) == 1 );
assert( gamma_move(board, 7, 15, 19) == 0 );
assert( gamma_move(board, 1, 24, 13) == 0 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 4, 5, 24) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 21, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 15) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 21, 0) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 16, 0) == 1 );
assert( gamma_move(board, 5, 18, 2) == 0 );
assert( gamma_move(board, 5, 22, 2) == 0 );
assert( gamma_move(board, 6, 17, 24) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_move(board, 7, 22, 10) == 0 );
assert( gamma_golden_move(board, 7, 13, 24) == 0 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 22, 1) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 5, 0, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 64 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );


char* board864630305 = gamma_board(board);
assert( board864630305 != NULL );
assert( strcmp(board864630305, 
"54.7.744.365331.72.4.17..\n"
"61.332.4637527151142.4...\n"
"577644555336.676.23.56.45\n"
"761331.36..62152.6357.41.\n"
"74577252332427..177425..1\n"
"741.645.66722765.5.5.5..7\n"
"4.24657742.77..435.4.4553\n"
"5.67.6633713417.412733326\n"
".552217777545341.6.615353\n"
"2.35472126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.53.3722611\n") == 0);
free(board864630305);
board864630305 = NULL;
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 23, 9) == 0 );
assert( gamma_move(board, 5, 13, 11) == 1 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_move(board, 3, 5, 24) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_move(board, 5, 9, 16) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 23, 0) == 0 );
assert( gamma_move(board, 6, 16, 14) == 1 );
assert( gamma_busy_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 5, 17) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 1, 13, 23) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_free_fields(board, 2) == 86 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 1, 20) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 45 );
assert( gamma_free_fields(board, 6) == 86 );
assert( gamma_move(board, 7, 18, 15) == 0 );
assert( gamma_move(board, 1, 6, 22) == 0 );
assert( gamma_move(board, 2, 16, 24) == 0 );
assert( gamma_move(board, 2, 23, 12) == 1 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 22) == 0 );
assert( gamma_move(board, 2, 4, 20) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 13, 15) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 17, 15) == 0 );


char* board633747292 = gamma_board(board);
assert( board633747292 != NULL );
assert( strcmp(board633747292, 
"54.7.744.365331.72.4.17..\n"
"61.332.4637527151142.4...\n"
"577644555336.676.23.56.45\n"
"761331.36..6215266357.41.\n"
"74577252332427..177425..1\n"
"7414645.66722765.5.5.5.27\n"
"4.24657742.775.435.4.4553\n"
"5.67.6633713417.412733326\n"
".552217777545341.6.615353\n"
"2.35472126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.53.3722611\n") == 0);
free(board633747292);
board633747292 = NULL;
assert( gamma_move(board, 1, 22, 2) == 0 );


char* board240443260 = gamma_board(board);
assert( board240443260 != NULL );
assert( strcmp(board240443260, 
"54.7.744.365331.72.4.17..\n"
"61.332.4637527151142.4...\n"
"577644555336.676.23.56.45\n"
"761331.36..6215266357.41.\n"
"74577252332427..177425..1\n"
"7414645.66722765.5.5.5.27\n"
"4.24657742.775.435.4.4553\n"
"5.67.6633713417.412733326\n"
".552217777545341.6.615353\n"
"2.35472126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.1...\n"
"53.66374355156..3455...57\n"
"...71134.11322757.74221.1\n"
"1355522.73.153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7.53.3722611\n") == 0);
free(board240443260);
board240443260 = NULL;
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 4, 16, 22) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_golden_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 16, 24) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 19, 5) == 0 );
assert( gamma_golden_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 17, 24) == 0 );
assert( gamma_move(board, 2, 18, 15) == 0 );
assert( gamma_golden_move(board, 2, 16, 14) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 7, 15, 12) == 0 );
assert( gamma_move(board, 7, 2, 16) == 1 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_move(board, 2, 14, 21) == 0 );
assert( gamma_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 3, 15, 5) == 0 );
assert( gamma_move(board, 4, 16, 20) == 0 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 66 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 22) == 0 );
assert( gamma_move(board, 2, 4, 20) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 16, 17) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 18, 16) == 0 );
assert( gamma_move(board, 6, 22, 5) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_move(board, 6, 13, 23) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );


char* board742973208 = gamma_board(board);
assert( board742973208 != NULL );
assert( strcmp(board742973208, 
"54.7.744.365331.72.4.17..\n"
"617332.4637527151142.4...\n"
"577644555336.676.23.56.45\n"
"761331.36..6215266357.41.\n"
"74577252332427..177425..1\n"
"7414645.66722765.5.5.5.27\n"
"4.24657742.775.435.4.4553\n"
"5.67.6633713417.412733326\n"
".552217777545341.6.615353\n"
"2.35472126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.16..\n"
"53.66374355156..3455...57\n"
"5..71134.11322757.74221.1\n"
"1355522.731153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7353.3722611\n") == 0);
free(board742973208);
board742973208 = NULL;
assert( gamma_move(board, 1, 12, 22) == 0 );
assert( gamma_move(board, 2, 5, 23) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 24, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 17, 17) == 0 );
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_move(board, 7, 22, 15) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 2, 17, 15) == 0 );
assert( gamma_move(board, 2, 21, 3) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 3, 17) == 0 );


char* board444151287 = gamma_board(board);
assert( board444151287 != NULL );
assert( strcmp(board444151287, 
"54.7.744.365331.72.4.17..\n"
"617332.4637527151142.4...\n"
"577644555336.676.23.56745\n"
"761331.36..6215266357.41.\n"
"74577252332427..177425..1\n"
"7414645.66722765.5.5.5.27\n"
"4.24657742.775.435.4.4553\n"
"5.67.6633713417.412733326\n"
".552217777545341.6.615353\n"
"2.35472126321467177.4.345\n"
"15563777..726.15466244411\n"
"..66.221434..32151246...3\n"
".4156322651456.35.15.16..\n"
"53.66374355156..3455...57\n"
"5..71134.11322757.74221.1\n"
"1355522.731153155767451.2\n"
"2241547.251457274241.6723\n"
"54136614.655.7353.3722611\n") == 0);
free(board444151287);
board444151287 = NULL;
assert( gamma_move(board, 6, 12, 22) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_golden_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 1, 19, 16) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 17) == 1 );
assert( gamma_golden_move(board, 3, 0, 24) == 0 );
assert( gamma_busy_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 22, 14) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 7, 13, 23) == 0 );
assert( gamma_move(board, 1, 11, 18) == 0 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 3, 24, 4) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );


gamma_delete(board);

    return 0;
}
