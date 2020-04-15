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
uuid: 406879529
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(21, 21, 6, 35);
assert( board != NULL );


assert( gamma_move(board, 1, 14, 20) == 1 );
assert( gamma_free_fields(board, 1) == 440 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 14, 7) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 2, 14, 8) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 20, 8) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 10, 17) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 19) == 1 );
assert( gamma_golden_move(board, 6, 17, 10) == 0 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 3, 2, 18) == 1 );
assert( gamma_move(board, 3, 1, 16) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 13, 14) == 1 );
assert( gamma_move(board, 5, 12, 8) == 1 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 1, 18, 18) == 1 );
assert( gamma_move(board, 3, 20, 19) == 1 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 14, 11) == 1 );
assert( gamma_move(board, 2, 19, 17) == 1 );
assert( gamma_move(board, 2, 6, 17) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 4, 3, 16) == 1 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 16, 10) == 1 );
assert( gamma_move(board, 1, 8, 15) == 1 );
assert( gamma_free_fields(board, 1) == 398 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 20, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_golden_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_free_fields(board, 4) == 394 );
assert( gamma_move(board, 5, 18, 7) == 1 );
assert( gamma_move(board, 6, 14, 15) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 15, 0) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 1, 18) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_golden_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 6, 17, 7) == 1 );


char* board569175961 = gamma_board(board);
assert( board569175961 != NULL );
assert( strcmp(board569175961, 
"..............1......\n"
"................6...3\n"
".43...............1..\n"
"......2...5........2.\n"
".3.4.................\n"
"..2.....1.....6......\n"
"...3...4.....4.......\n"
"...5..6....4.........\n"
".....................\n"
".6.........2..1......\n"
"2434...1.1......1....\n"
".....................\n"
".4.6........5.2.....4\n"
".........4....6..65..\n"
"6.2...3.3............\n"
"3....................\n"
".....................\n"
".........3...........\n"
"1.1.........253......\n"
"......4..5...........\n"
".1..4..15......2.....\n") == 0);
free(board569175961);
board569175961 = NULL;
assert( gamma_move(board, 1, 13, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 383 );
assert( gamma_move(board, 2, 20, 19) == 0 );
assert( gamma_move(board, 3, 8, 16) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 4, 17, 17) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 2, 15) == 0 );
assert( gamma_free_fields(board, 6) == 375 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 15, 16) == 1 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_free_fields(board, 4) == 370 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_move(board, 5, 8, 20) == 1 );
assert( gamma_move(board, 6, 19, 9) == 1 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_move(board, 2, 19, 3) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 20, 17) == 1 );
assert( gamma_free_fields(board, 4) == 361 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 15, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_free_fields(board, 1) == 360 );
assert( gamma_move(board, 2, 20, 12) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 4, 12, 20) == 1 );
assert( gamma_move(board, 6, 20, 19) == 0 );
assert( gamma_move(board, 6, 18, 17) == 1 );
assert( gamma_move(board, 1, 13, 19) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 17, 18) == 1 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 20, 0) == 1 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 1, 13, 17) == 1 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 9, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 7, 16) == 1 );
assert( gamma_move(board, 4, 16, 18) == 1 );
assert( gamma_move(board, 4, 16, 7) == 1 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 17, 9) == 1 );
assert( gamma_move(board, 6, 4, 17) == 1 );
assert( gamma_golden_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 14, 9) == 1 );
assert( gamma_free_fields(board, 3) == 339 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_free_fields(board, 4) == 338 );
assert( gamma_move(board, 5, 15, 19) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_move(board, 1, 19, 13) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_golden_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_free_fields(board, 3) == 335 );
assert( gamma_move(board, 4, 5, 17) == 1 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 334 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 3, 1, 20) == 1 );
assert( gamma_move(board, 3, 18, 15) == 1 );
assert( gamma_free_fields(board, 3) == 330 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 17, 0) == 1 );
assert( gamma_move(board, 4, 13, 18) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 17, 11) == 1 );
assert( gamma_move(board, 6, 17, 17) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 1, 20, 13) == 1 );
assert( gamma_move(board, 2, 19, 0) == 1 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 3, 20, 11) == 1 );
assert( gamma_move(board, 4, 6, 20) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 14, 16) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_free_fields(board, 2) == 318 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 5, 17, 1) == 1 );
assert( gamma_free_fields(board, 1) == 317 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_move(board, 3, 16, 20) == 0 );
assert( gamma_move(board, 5, 8, 15) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 9, 13) == 1 );
assert( gamma_move(board, 6, 13, 15) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 18, 3) == 1 );


char* board294574333 = gamma_board(board);
assert( board294574333 != NULL );
assert( strcmp(board294574333, 
".3....4.5...4.1......\n"
".............1.56...3\n"
".43..........4..431..\n"
"....642...5..1...4624\n"
".3.44..33.....63.....\n"
"..2...5112...66...3..\n"
".5.3...4.....41......\n"
"...5..61.6.4.......11\n"
".5.311..26..41......2\n"
".635..3....2..16.6..3\n"
"2434...1.1..2...1....\n"
"..5...........3..5.6.\n"
".4.6...3....5.2.....4\n"
"..2..5...4....6.465..\n"
"6.21..3.3.1.5........\n"
"3221..2.2............\n"
"5.....3...5..........\n"
"6.1......3........12.\n"
"1.33.......4253......\n"
"......4..5.......5...\n"
".1..4..153..6.12.4.24\n") == 0);
free(board294574333);
board294574333 = NULL;
assert( gamma_move(board, 2, 14, 17) == 1 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 7, 19) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 3, 17) == 1 );
assert( gamma_move(board, 4, 2, 20) == 1 );
assert( gamma_move(board, 5, 20, 15) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_free_fields(board, 6) == 300 );
assert( gamma_move(board, 1, 16, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 15) == 0 );


char* board377733132 = gamma_board(board);
assert( board377733132 != NULL );
assert( strcmp(board377733132, 
".34...4.5...4.1......\n"
".......3.....1.56...3\n"
".43..........4..431..\n"
"...4642...5..12..4624\n"
".3.44..33.....63.....\n"
"..2...5112...66...3.5\n"
".5.3...4.....41......\n"
"...5..61.6.4.......11\n"
".5.311..26..41..1...2\n"
".635..3....2..16.6..3\n"
"2434...1.1..2...1....\n"
"..5...........3..5.6.\n"
".4.6...3....5.2.....4\n"
"..2..5...4....6.465..\n"
"6.21..3.3.1.5........\n"
"3221..2.2............\n"
"5.....3...5..........\n"
"6.1......3........12.\n"
"1.33.......4253......\n"
"......4..5.......5...\n"
".1..4..153..6.12.4.24\n") == 0);
free(board377733132);
board377733132 = NULL;
assert( gamma_move(board, 3, 15, 7) == 1 );
assert( gamma_move(board, 3, 2, 16) == 1 );
assert( gamma_move(board, 4, 16, 3) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 18, 17) == 0 );
assert( gamma_free_fields(board, 6) == 296 );
assert( gamma_move(board, 1, 18, 5) == 1 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 19, 0) == 0 );
assert( gamma_move(board, 3, 9, 18) == 1 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_move(board, 6, 12, 15) == 1 );
assert( gamma_move(board, 6, 15, 13) == 1 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 10, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 18) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 12, 19) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 0, 19) == 1 );
assert( gamma_move(board, 3, 16, 14) == 1 );
assert( gamma_free_fields(board, 3) == 283 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_free_fields(board, 6) == 278 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 18, 7) == 0 );


char* board814815285 = gamma_board(board);
assert( board814815285 != NULL );
assert( strcmp(board814815285, 
".34...4.5...4.1......\n"
"2......3....61.56...3\n"
".43.....53...4..431..\n"
"...4642...5..12..4624\n"
".3344..33.....63.....\n"
"..2...5112..666...3.5\n"
".5.3...4..4..41.3....\n"
"...5..61.6.4...6...11\n"
".54311..26..41..1...2\n"
".6355.3....2..16.6..3\n"
"2434...1.14.2...1....\n"
"..5...........3..5.6.\n"
".4.6...3....5.2.....4\n"
"..2..5...4..1.63465..\n"
"6.21..3.3.115........\n"
"3221..2.2...36....1..\n"
"5..6..3...5..........\n"
"6.1......3...1..4.12.\n"
"1533.......4253......\n"
"......4..5.......5...\n"
".1..4..153..6.12.4.24\n") == 0);
free(board814815285);
board814815285 = NULL;
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 19, 13) == 0 );
assert( gamma_move(board, 5, 12, 18) == 1 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 17, 1) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_move(board, 1, 15, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 20, 18) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 20, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 6, 18) == 1 );
assert( gamma_move(board, 3, 19, 1) == 1 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_free_fields(board, 4) == 269 );
assert( gamma_golden_move(board, 4, 19, 0) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 13, 20) == 1 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 16, 19) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 18, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 26 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 17, 19) == 1 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 2, 4, 20) == 1 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 12, 20) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 1, 10, 19) == 1 );
assert( gamma_free_fields(board, 1) == 259 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 3, 19, 17) == 0 );
assert( gamma_move(board, 3, 15, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 14, 18) == 1 );
assert( gamma_busy_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 254 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_free_fields(board, 1) == 252 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_golden_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 3, 15, 19) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 16, 6) == 1 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 11, 18) == 1 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 1, 12, 17) == 1 );


char* board892448107 = gamma_board(board);
assert( board892448107 != NULL );
assert( strcmp(board892448107, 
".34.2.4.5...431......\n"
"2......3..1.61.561..3\n"
".43...3.53.5544.431.2\n"
"...4642...5.112..4624\n"
".3344..33.....63.....\n"
"..2...5112..666...3.5\n"
".5.3...4..4..41.3....\n"
"...5..61.6.4...6...11\n"
"454311..26..41..1...2\n"
"56355.3...22..16.6..3\n"
"2434...1.1422...1....\n"
"..5.55.....2..3..566.\n"
".4.6...3.1..5423....4\n"
"..23.5...43.1.63465.6\n"
"6.21..3.3.115...4....\n"
"3221..2.2...36....1..\n"
"5.16..3...5..........\n"
"6.1...5.23...1..4.12.\n"
"1533.......4253......\n"
"......4..5.......5.3.\n"
".1..4..153..6.12.4.44\n") == 0);
free(board892448107);
board892448107 = NULL;
assert( gamma_move(board, 2, 4, 18) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 2, 15, 4) == 1 );
assert( gamma_move(board, 3, 17, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 6, 0, 20) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 2, 3, 15) == 1 );


char* board542804269 = gamma_board(board);
assert( board542804269 != NULL );
assert( strcmp(board542804269, 
"634.2.4.5...431......\n"
"2......3..1.61.561..3\n"
".43.2.3.53.5544.431.2\n"
"...4642...5.112..4624\n"
".3344..33.....63.....\n"
"..22..5112..666...3.5\n"
".5.3...4..4..41.3....\n"
"...54.61.6.4...6...11\n"
"454311..26..41..1...2\n"
"5635563...22..16.6..3\n"
"2434...1.1422...1....\n"
"..5.551....2..3..566.\n"
".4.6...3.1..5423.3..4\n"
"..23.5...43.1.63465.6\n"
"6.21.63.3.115...4....\n"
"3221..2.2...36....1..\n"
"5.16..3...5....2.....\n"
"6.14..5.23...1..4.12.\n"
"1533.......4253......\n"
"......4..5.......5.3.\n"
".1..42.153..6.12.4.44\n") == 0);
free(board542804269);
board542804269 = NULL;
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );


char* board397039186 = gamma_board(board);
assert( board397039186 != NULL );
assert( strcmp(board397039186, 
"634.2.4.5...431......\n"
"2......3..1.61.561..3\n"
".43.2.3.53.5544.431.2\n"
"...4642...5.112..4624\n"
".3344..33.....63.....\n"
"..22..5112..666...3.5\n"
".5.3...4..4..41.3....\n"
"...54.61.6.4...6...11\n"
"454311..26..41..1...2\n"
"5635563...22..16.6..3\n"
"2434...1.1422...1....\n"
"..5.551....2..3..566.\n"
".4.6...3.1..5423.3..4\n"
"..23.5...43.1.63465.6\n"
"6.21.63.3.115...4....\n"
"3221..2.2...36....1..\n"
"5.16..3...5....2.....\n"
"6.14..5.23...1..4.12.\n"
"1533.......4253......\n"
"......4..5.......5.3.\n"
".1..423153..6.12.4.44\n") == 0);
free(board397039186);
board397039186 = NULL;
assert( gamma_move(board, 4, 6, 19) == 1 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 1, 13, 17) == 0 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );


char* board311762177 = gamma_board(board);
assert( board311762177 != NULL );
assert( strcmp(board311762177, 
"634.2.4.5...431......\n"
"2.....43..1.61.561..3\n"
".43.2.3.53.5544.431.2\n"
"...4642...5.112..4624\n"
".3344..33.....63.....\n"
"..22..5112..666...3.5\n"
".5.3...4..4..41.3....\n"
"...54.61.6.4...6...11\n"
"454311..26..41..1...2\n"
"5635563...22..16.6..3\n"
"2434...1.1422...1....\n"
"..5.551....2..3..566.\n"
".4.6...3.1..5423.3..4\n"
"..23.5...43.1.63465.6\n"
"6.21.63.3.115...4....\n"
"3221..2.2...36....1..\n"
"5.16..3...5....2.....\n"
"6.14..5.23...1..4.12.\n"
"1533.......4253......\n"
".....64..5.......5.3.\n"
".1..423153..6.12.4.44\n") == 0);
free(board311762177);
board311762177 = NULL;
assert( gamma_move(board, 3, 19, 9) == 0 );
assert( gamma_move(board, 3, 16, 13) == 1 );
assert( gamma_golden_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 18, 19) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 1, 18) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_move(board, 2, 14, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_golden_move(board, 3, 12, 16) == 0 );
assert( gamma_move(board, 4, 8, 16) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 5, 9, 19) == 1 );
assert( gamma_move(board, 6, 20, 19) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 1, 6, 20) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 20, 10) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 4, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 4, 18, 15) == 0 );
assert( gamma_move(board, 4, 16, 8) == 1 );
assert( gamma_move(board, 5, 20, 1) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_move(board, 1, 19, 4) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 12, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 5, 14, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 9, 16) == 1 );
assert( gamma_move(board, 1, 15, 17) == 1 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_golden_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 5, 17, 13) == 1 );
assert( gamma_move(board, 5, 7, 20) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 2, 2, 17) == 1 );
assert( gamma_golden_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 12, 11) == 1 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 15, 15) == 1 );
assert( gamma_move(board, 3, 18, 19) == 0 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 43 );
assert( gamma_free_fields(board, 5) == 209 );
assert( gamma_move(board, 6, 0, 15) == 1 );
assert( gamma_move(board, 6, 18, 18) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_free_fields(board, 1) == 68 );


char* board340068089 = gamma_board(board);
assert( board340068089 != NULL );
assert( strcmp(board340068089, 
"634.2.455...431......\n"
"2.....43.51.61.5614.3\n"
".43.2.3.53.5544.431.2\n"
"..24642...5.1121.4624\n"
".3344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..4..41.3....\n"
"...54261.6.4...635.11\n"
"454311..262.41..1...2\n"
"5635563...225.16.6..3\n"
"2434.1.1.1422...1...6\n"
"..5.551..5.2..3..566.\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6.21.63.3.115...4....\n"
"32212.2.2...36....1..\n"
"5.166.3...54...2...1.\n"
"6.14..5.23...1..4.12.\n"
"1533.......4253......\n"
"....664..56......5.35\n"
".1..423153..6.12.4.44\n") == 0);
free(board340068089);
board340068089 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 17, 6) == 1 );
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 6, 17, 10) == 1 );
assert( gamma_move(board, 1, 14, 20) == 0 );


char* board489744955 = gamma_board(board);
assert( board489744955 != NULL );
assert( strcmp(board489744955, 
"634.2.455...431......\n"
"2.....43.51.61.5614.3\n"
".43.2.3.53.5544.431.2\n"
"..24642...5.1121.4624\n"
".3344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..4..41.3....\n"
"...54261.6.4...635.11\n"
"454311..262.41..1...2\n"
"5635563...225.16.6..3\n"
"2434.1.1.1422...16..6\n"
"..5.551..5.2..3..566.\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6.21.63.3.115...45...\n"
"32212.2.2...36....1..\n"
"5.166.3...54...2...1.\n"
"6.14..5.23...1..4.12.\n"
"1533.......4253......\n"
"....664..56......5.35\n"
".1..423153..6.12.4.44\n") == 0);
free(board489744955);
board489744955 = NULL;
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 14, 20) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_move(board, 5, 16, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 17) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 16, 5) == 0 );
assert( gamma_move(board, 2, 16, 17) == 1 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 6, 17, 11) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 3, 20) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 3, 20, 12) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 14) == 1 );
assert( gamma_free_fields(board, 5) == 199 );


char* board639383913 = gamma_board(board);
assert( board639383913 != NULL );
assert( strcmp(board639383913, 
"634.2.455...431......\n"
"2.....43.51.61.5614.3\n"
".43.2.3.53.5544.431.2\n"
"..24642...5.112124624\n"
".3344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..4.541.3....\n"
"...54261.6.4...635.11\n"
"454311..262.41..1...2\n"
"5635563...225.16.6..3\n"
"2434.1.121422...16..6\n"
"..5.551..5.2..3.5566.\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6.21.63.3.115...45...\n"
"32212.2.2...36....1..\n"
"5.166.3...54...2...1.\n"
"6.14..5623...1..4.12.\n"
"1533.......4253......\n"
"....664..56......5.35\n"
".1..423153..6.12.4.44\n") == 0);
free(board639383913);
board639383913 = NULL;
assert( gamma_move(board, 6, 10, 18) == 1 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 5, 20, 1) == 0 );
assert( gamma_move(board, 6, 17, 7) == 0 );
assert( gamma_free_fields(board, 6) == 198 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 17, 20) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 18, 0) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_free_fields(board, 2) == 193 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 10, 13) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 19) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 17, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 18, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 20, 10) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_golden_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 5, 18, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 20, 7) == 0 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 1, 20) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 14, 19) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 6, 20, 18) == 0 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 17, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 1, 2, 20) == 0 );
assert( gamma_move(board, 1, 17, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 16, 17) == 0 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 6, 0, 16) == 1 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 19, 2) == 1 );
assert( gamma_move(board, 3, 10, 19) == 0 );
assert( gamma_move(board, 4, 15, 19) == 0 );
assert( gamma_move(board, 4, 20, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 17, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_golden_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 3, 6, 20) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 10, 13) == 0 );
assert( gamma_golden_move(board, 5, 5, 13) == 0 );


char* board836893481 = gamma_board(board);
assert( board836893481 != NULL );
assert( strcmp(board836893481, 
"634.2.455...431..1...\n"
"2.....43.51.61.5614.3\n"
".43.2.3.5365544.431.2\n"
"..24642...5.112124624\n"
"63344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..4.541.3....\n"
"...54261.664...635.11\n"
"454311.6262.41..1.5.2\n"
"5635563...225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.5566.\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36....1..\n"
"5.166.3.5.54...2...1.\n"
"6514..5623...1..4.12.\n"
"1533.......4253....3.\n"
"....6646.56......5.35\n"
".1..423153..6.12.4244\n") == 0);
free(board836893481);
board836893481 = NULL;
assert( gamma_move(board, 6, 14, 19) == 1 );
assert( gamma_move(board, 6, 15, 11) == 0 );


char* board405914833 = gamma_board(board);
assert( board405914833 != NULL );
assert( strcmp(board405914833, 
"634.2.455...431..1...\n"
"2.....43.51.6165614.3\n"
".43.2.3.5365544.431.2\n"
"..24642...5.112124624\n"
"63344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..4.541.3....\n"
"...54261.664...635.11\n"
"454311.6262.41..1.5.2\n"
"5635563...225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.5566.\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36....1..\n"
"5.166.3.5.54...2...1.\n"
"6514..5623...1..4.12.\n"
"1533.......4253....3.\n"
"....6646.56......5.35\n"
".1..423153..6.12.4244\n") == 0);
free(board405914833);
board405914833 = NULL;
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 2, 20, 9) == 1 );
assert( gamma_move(board, 3, 14, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 19, 14) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 45 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 16, 5) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 17, 7) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 2, 19) == 0 );
assert( gamma_move(board, 2, 17, 6) == 0 );


char* board876280207 = gamma_board(board);
assert( board876280207 != NULL );
assert( strcmp(board876280207, 
"634.2.455...431..1...\n"
"2.....43.51.6165614.3\n"
".43.2.3.5365544.431.2\n"
"..24642...5.112124624\n"
"63344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..4.541.3....\n"
"...54261.664...635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36..4.1..\n"
"5.166.3.5.54...2...1.\n"
"6514..5623...1..4.12.\n"
"1533.......4253....3.\n"
"....6646.56..2...5.35\n"
".1..423153..6.12.4244\n") == 0);
free(board876280207);
board876280207 = NULL;
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 4, 11, 14) == 1 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 2, 13, 13) == 1 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );


char* board720169969 = gamma_board(board);
assert( board720169969 != NULL );
assert( strcmp(board720169969, 
"634.2.455...431..1...\n"
"2.....43.51.6165614.3\n"
".43.2.3.5365544.431.2\n"
"..24642...5.112124624\n"
"63344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36..4.1..\n"
"5.166.3.5.54...2...1.\n"
"6514..5623...1..4.12.\n"
"1533.......4253....3.\n"
"....6646.56..2...5.35\n"
".1..423153..6.12.4244\n") == 0);
free(board720169969);
board720169969 = NULL;
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 19, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 6, 12, 17) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 20, 18) == 0 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 5, 5, 19) == 0 );
assert( gamma_move(board, 5, 15, 18) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 4, 20) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_free_fields(board, 4) == 176 );
assert( gamma_move(board, 5, 18, 12) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 18, 3) == 0 );
assert( gamma_move(board, 1, 11, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board486146293 = gamma_board(board);
assert( board486146293 != NULL );
assert( strcmp(board486146293, 
"634.2.455...431..1...\n"
"2.....43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36..4.1..\n"
"5.166.3.5.54...2...1.\n"
"6514..5623...1..4.12.\n"
"1533.......4253....3.\n"
"....6646.56..2...5.35\n"
".1..423153..6.12.4244\n") == 0);
free(board486146293);
board486146293 = NULL;
assert( gamma_move(board, 3, 1, 18) == 0 );
assert( gamma_move(board, 3, 18, 10) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_move(board, 5, 20, 11) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );


char* board396350758 = gamma_board(board);
assert( board396350758 != NULL );
assert( strcmp(board396350758, 
"634.2.455...431..1...\n"
"2.....43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36..4.1..\n"
"5.166.3.5.54...2...1.\n"
"6514..5623...1..4.12.\n"
"1533.......4253....3.\n"
"....6646.56..2...5.35\n"
".1..423153..6.12.4244\n") == 0);
free(board396350758);
board396350758 = NULL;
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 11, 19) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 45 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 19) == 0 );
assert( gamma_move(board, 6, 20, 3) == 0 );


char* board281682457 = gamma_board(board);
assert( board281682457 != NULL );
assert( strcmp(board281682457, 
"634.2.455...431..1...\n"
"2.....43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344..336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36..4.1..\n"
"5.166.3.5.54...2...1.\n"
"6514..5623...1..4.12.\n"
"1533.......4253....3.\n"
"....6646.56..2...5.35\n"
".1..423153..6.12.4244\n") == 0);
free(board281682457);
board281682457 = NULL;
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 1, 16, 7) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 20, 19) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 15, 17) == 0 );
assert( gamma_move(board, 5, 6, 16) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 1, 20, 11) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 19, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 20, 14) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 0, 20) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 20, 0) == 0 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_move(board, 2, 4, 19) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 7, 18) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 20, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 45 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 15, 16) == 0 );
assert( gamma_move(board, 5, 14, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );


char* board423131808 = gamma_board(board);
assert( board423131808 != NULL );
assert( strcmp(board423131808, 
"634.2.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.5336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36..4.1..\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56..2...5.35\n"
"11..423153..6112.4244\n") == 0);
free(board423131808);
board423131808 = NULL;
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 20, 3) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 15, 5) == 0 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board103871735 = gamma_board(board);
assert( board103871735 != NULL );
assert( strcmp(board103871735, 
"634.2.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.5336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422...16..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...45...\n"
"32212.2.2...36..4.1..\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56..2...5.35\n"
"11..423153..6112.4244\n") == 0);
free(board103871735);
board103871735 = NULL;
assert( gamma_move(board, 2, 20, 5) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 5, 19, 11) == 0 );
assert( gamma_move(board, 6, 19, 16) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 18, 6) == 1 );
assert( gamma_move(board, 2, 17, 14) == 0 );
assert( gamma_move(board, 3, 19, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 6, 1, 20) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 12, 17) == 0 );
assert( gamma_move(board, 2, 19, 11) == 0 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 19, 17) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 2, 18) == 0 );
assert( gamma_golden_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 6, 15, 10) == 1 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );


char* board235042375 = gamma_board(board);
assert( board235042375 != NULL );
assert( strcmp(board235042375, 
"634.2.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.5336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...451..\n"
"32212.2.2...36..4.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56..2...5.35\n"
"11..423153..6112.4244\n") == 0);
free(board235042375);
board235042375 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 18, 19) == 0 );
assert( gamma_move(board, 5, 4, 20) == 0 );
assert( gamma_move(board, 5, 13, 20) == 0 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_golden_move(board, 2, 0, 19) == 0 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 5, 4, 18) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_free_fields(board, 1) == 53 );


char* board798565821 = gamma_board(board);
assert( board798565821 != NULL );
assert( strcmp(board798565821, 
"634.2.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.5336....63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...451..\n"
"32212.2.2...36..4.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56..2...5.35\n"
"11..423153..6112.4244\n") == 0);
free(board798565821);
board798565821 = NULL;
assert( gamma_busy_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 12, 19) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 10, 16) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 4, 20, 12) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 11, 16) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 47 );


char* board599213349 = gamma_board(board);
assert( board599213349 != NULL );
assert( strcmp(board599213349, 
"634.2.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.53366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...451..\n"
"32212.2.2...36..4.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56..2...5.35\n"
"11..423153..6112.4244\n") == 0);
free(board599213349);
board599213349 = NULL;
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_move(board, 3, 18, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 4, 20, 20) == 0 );
assert( gamma_move(board, 5, 4, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_golden_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 47 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 20, 11) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 14, 5) == 1 );
assert( gamma_move(board, 1, 3, 20) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 16, 16) == 0 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 48 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 20, 16) == 0 );


char* board957153349 = gamma_board(board);
assert( board957153349 != NULL );
assert( strcmp(board957153349, 
"634.2.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.53366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...451..\n"
"32212.2.2...366.4.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56..2...5335\n"
"11..423153..6112.4244\n") == 0);
free(board957153349);
board957153349 = NULL;
assert( gamma_move(board, 4, 18, 14) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 18, 19) == 0 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );


char* board398393953 = gamma_board(board);
assert( board398393953 != NULL );
assert( strcmp(board398393953, 
"634.2.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.53366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.1.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...451..\n"
"32212.2.2...366.4.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56..2...5335\n"
"11..423153..6112.4244\n") == 0);
free(board398393953);
board398393953 = NULL;
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 15, 5) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 15, 19) == 0 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_move(board, 5, 20, 20) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 1, 0, 20) == 0 );
assert( gamma_move(board, 2, 18, 16) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 3, 20) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_golden_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 1, 15, 17) == 0 );
assert( gamma_move(board, 2, 15, 11) == 0 );


char* board455786995 = gamma_board(board);
assert( board455786995 != NULL );
assert( strcmp(board455786995, 
"63442.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.53366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.5.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...451..\n"
"32212.2.2...36624.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board455786995);
board455786995 = NULL;
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 18, 5) == 0 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 6, 19, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 49 );
assert( gamma_golden_move(board, 2, 8, 16) == 0 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_golden_move(board, 3, 18, 12) == 0 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_move(board, 5, 16, 19) == 0 );
assert( gamma_move(board, 5, 14, 11) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 10, 13) == 0 );


char* board224348264 = gamma_board(board);
assert( board224348264 != NULL );
assert( strcmp(board224348264, 
"63442.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...5.112124624\n"
"63344.53366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.5.1542343..4\n"
"..23.5.1243.1.63465.6\n"
"6221.63.3.115...451..\n"
"32212.2.2...36624.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.12.\n"
"1533....2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board224348264);
board224348264 = NULL;
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 4, 20, 9) == 0 );
assert( gamma_move(board, 4, 5, 16) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 19) == 0 );
assert( gamma_move(board, 5, 14, 19) == 0 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 49 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 20, 3) == 1 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 11, 17) == 1 );
assert( gamma_move(board, 6, 16, 0) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 15, 6) == 1 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 15, 17) == 0 );
assert( gamma_move(board, 5, 16, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board916733952 = gamma_board(board);
assert( board916733952 != NULL );
assert( strcmp(board916733952, 
"63442.455...431..1...\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...55112124624\n"
"63344453366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.5.1542343..4\n"
"1.23.5.1243.1.63465.6\n"
"6221.63.3.115..2451..\n"
"32212.2.2...36624.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533....2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board916733952);
board916733952 = NULL;
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_move(board, 2, 20, 8) == 0 );
assert( gamma_move(board, 3, 15, 11) == 0 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 20, 20) == 1 );
assert( gamma_move(board, 5, 1, 20) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );


char* board592249736 = gamma_board(board);
assert( board592249736 != NULL );
assert( strcmp(board592249736, 
"63442.455...431..1..5\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...55112124624\n"
"63344453366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.6262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.5.1542343..4\n"
"1.23.5.1243.1.63465.6\n"
"6221.63.3.115..2451..\n"
"32212.2.2...36624.1.2\n"
"5.166.3.5.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533....2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board592249736);
board592249736 = NULL;
assert( gamma_move(board, 2, 16, 20) == 0 );
assert( gamma_move(board, 3, 12, 19) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 51 );
assert( gamma_golden_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 3, 20, 16) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_free_fields(board, 4) == 155 );
assert( gamma_move(board, 5, 10, 18) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_move(board, 2, 13, 16) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 6, 19) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 2, 6, 20) == 0 );
assert( gamma_move(board, 3, 16, 12) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_golden_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board599238161 = gamma_board(board);
assert( board599238161 != NULL );
assert( strcmp(board599238161, 
"63442.455...431..1..5\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...55112124624\n"
"63344453366...63.....\n"
"6.22..5112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.5.1542343..4\n"
"1.23.5.1243.1.63465.6\n"
"6221.63.3.115..2451..\n"
"32212.2.2...36624.1.2\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533....2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board599238161);
board599238161 = NULL;
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 1, 20, 11) == 0 );
assert( gamma_move(board, 1, 19, 5) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 4, 20, 16) == 1 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_move(board, 5, 3, 18) == 0 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 6, 19, 9) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 19, 18) == 0 );
assert( gamma_move(board, 4, 10, 19) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 2, 20) == 0 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 1, 5, 15) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_golden_move(board, 2, 6, 16) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 18, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 5, 16, 17) == 0 );
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );


char* board955657281 = gamma_board(board);
assert( board955657281 != NULL );
assert( strcmp(board955657281, 
"63442.455...431..1..5\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.5.2\n"
"56355631..225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.5.1542343..4\n"
"1.23.5.124361.63465.6\n"
"6221.63.3.115..2451..\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533....2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board955657281);
board955657281 = NULL;
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 18, 8) == 1 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_move(board, 6, 14, 15) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 49 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board420159884 = gamma_board(board);
assert( board420159884 != NULL );
assert( strcmp(board420159884, 
"63442.455...431..1..5\n"
"2...2.43.51.6165614.3\n"
".43.2.3.53655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.5.2\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".4.6...3.5.15423434.4\n"
"1.23.5.124361.63465.6\n"
"6221.63.3.115..2451..\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533....2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board420159884);
board420159884 = NULL;
assert( gamma_move(board, 2, 14, 20) == 0 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 20) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 18, 5) == 0 );
assert( gamma_move(board, 6, 19, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 17, 19) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 1, 4, 20) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 18, 1) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 15, 7) == 0 );
assert( gamma_move(board, 6, 11, 19) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 20, 13) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_move(board, 5, 20, 1) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 18, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 5, 6, 20) == 0 );
assert( gamma_golden_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 16, 12) == 0 );
assert( gamma_move(board, 1, 16, 19) == 0 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 2, 20) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 20, 15) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 7, 18) == 1 );
assert( gamma_move(board, 4, 19, 3) == 0 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 4, 20) == 0 );
assert( gamma_move(board, 5, 20, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 19) == 0 );
assert( gamma_move(board, 6, 16, 16) == 0 );
assert( gamma_move(board, 1, 11, 16) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 10, 20) == 0 );
assert( gamma_move(board, 1, 14, 17) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 20, 19) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 44 );
assert( gamma_golden_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 4, 19, 5) == 0 );
assert( gamma_move(board, 5, 15, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 14, 19) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 19, 6) == 1 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_move(board, 1, 20, 13) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 10, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 19) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_golden_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 4, 13, 17) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 20, 14) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 2, 19, 12) == 1 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 16, 20) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 14, 15) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 15, 19) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 5, 14, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 18, 13) == 0 );


char* board661216947 = gamma_board(board);
assert( board661216947 != NULL );
assert( strcmp(board661216947, 
"63442.455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...3.5.15423434.4\n"
"1.23.5.124361.63465.6\n"
"6221.63.3.115..24513.\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board661216947);
board661216947 = NULL;
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 49 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 6, 14, 19) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 16, 19) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 2, 20) == 0 );
assert( gamma_move(board, 4, 18, 12) == 0 );


char* board777952954 = gamma_board(board);
assert( board777952954 != NULL );
assert( strcmp(board777952954, 
"63442.455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34..4..44541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...3.5.15423434.4\n"
"1.23.5.124361.63465.6\n"
"6221.63.3.115..24513.\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board777952954);
board777952954 = NULL;
assert( gamma_move(board, 5, 6, 14) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_move(board, 6, 9, 14) == 1 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 1, 2, 20) == 0 );
assert( gamma_golden_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 5, 20) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 5, 16, 16) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 6, 14, 12) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board618543158 = gamma_board(board);
assert( board618543158 != NULL );
assert( strcmp(board618543158, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...3.5.15423434.4\n"
"1.23.5.124361.63465.6\n"
"6221.63.3.115..24513.\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..4253....3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board618543158);
board618543158 = NULL;
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 19, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 15, 2) == 1 );


char* board174353013 = gamma_board(board);
assert( board174353013 != NULL );
assert( strcmp(board174353013, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...3.5.15423434.4\n"
"1.23.5.124361.63465.6\n"
"6221.63.3.115..24513.\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board174353013);
board174353013 = NULL;
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 50 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 8, 17) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 17, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 50 );


char* board849493447 = gamma_board(board);
assert( board849493447 != NULL );
assert( strcmp(board849493447, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...3.5.15423434.4\n"
"1.23.5.124361463465.6\n"
"6221.63.3.115..24513.\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board849493447);
board849493447 = NULL;
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 19, 4) == 0 );
assert( gamma_move(board, 1, 20, 18) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 11, 18) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 16, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 52 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 19, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 20, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );


char* board408772479 = gamma_board(board);
assert( board408772479 != NULL );
assert( strcmp(board408772479, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.15112..6662..3.5\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...3.5.15423434.4\n"
"1223.5.124361463465.6\n"
"6221.63.3.115..24513.\n"
"32212.2.2...36624.112\n"
"5.166.355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62...5335\n"
"11..423153..6112.4244\n") == 0);
free(board408772479);
board408772479 = NULL;
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 15, 16) == 0 );
assert( gamma_move(board, 2, 19, 1) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_move(board, 3, 19, 19) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 19, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 5, 7, 19) == 0 );
assert( gamma_move(board, 6, 20, 19) == 0 );
assert( gamma_move(board, 6, 17, 17) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 17) == 0 );
assert( gamma_move(board, 1, 19, 19) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 15, 1) == 1 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 50 );
assert( gamma_move(board, 6, 15, 17) == 0 );
assert( gamma_move(board, 6, 12, 13) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 16, 17) == 0 );
assert( gamma_move(board, 4, 10, 15) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 14, 19) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 55 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 14, 20) == 0 );
assert( gamma_move(board, 6, 20, 15) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 20) == 0 );
assert( gamma_move(board, 2, 11, 18) == 0 );
assert( gamma_busy_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 5, 11, 19) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 13) == 0 );


char* board660218007 = gamma_board(board);
assert( board660218007 != NULL );
assert( strcmp(board660218007, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.151124.6662..335\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...355.15423434.4\n"
"1223.5.124361463465.6\n"
"6221.6313.115..24513.\n"
"32212.2.2...36624.112\n"
"5.1666355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62.3.5335\n"
"11..423153..6112.4244\n") == 0);
free(board660218007);
board660218007 = NULL;
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );


char* board397080118 = gamma_board(board);
assert( board397080118 != NULL );
assert( strcmp(board397080118, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.151124.6662..335\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...355.15423434.4\n"
"1223.5.124361463465.6\n"
"6221.6313.115..24513.\n"
"32212.2.2...36624.112\n"
"5.1666355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62.3.5335\n"
"11..423153..6112.4244\n") == 0);
free(board397080118);
board397080118 = NULL;
assert( gamma_move(board, 5, 0, 16) == 0 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 6, 11, 17) == 0 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_golden_move(board, 2, 16, 3) == 0 );


char* board127497328 = gamma_board(board);
assert( board127497328 != NULL );
assert( strcmp(board127497328, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.151124.6662..335\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...355.15423434.4\n"
"1223.5.124361463465.6\n"
"6221.6313.115..24513.\n"
"32212.2.2...36624.112\n"
"5.1666355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62.3.5335\n"
"11..423153..6112.4244\n") == 0);
free(board127497328);
board127497328 = NULL;
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );


char* board612433288 = gamma_board(board);
assert( board612433288 != NULL );
assert( strcmp(board612433288, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.3353655445431.2\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.151124.6662..335\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...355.15423434.4\n"
"1223.5.124361463465.6\n"
"6221.6313.115..24513.\n"
"32212.2.2...36624.112\n"
"5.1666355.54...2...1.\n"
"6514.45623...1..4.122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62.3.5335\n"
"11..423153..6112.4244\n") == 0);
free(board612433288);
board612433288 = NULL;
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 5, 20, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 18) == 0 );
assert( gamma_golden_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 1, 19, 19) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 19, 18) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 10, 18) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 0, 19) == 0 );
assert( gamma_move(board, 6, 2, 18) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 11, 18) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 17, 3) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 19, 5) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 13, 14) == 0 );


char* board671808989 = gamma_board(board);
assert( board671808989 != NULL );
assert( strcmp(board671808989, 
"634422455...431..1..5\n"
"2...2.43.5166165614.3\n"
".43.2.335365544543122\n"
"..24642...55112124624\n"
"63344453366...63....4\n"
"6.22.151124.6662..335\n"
".5.34.54.644541.3....\n"
"...54261.664.2.635.11\n"
"454311.2262.41..1.522\n"
"563556311.225.16.6..3\n"
"2434512121422..616..6\n"
"..5.551.65.2..3.55662\n"
".466...355.15423434.4\n"
"1223.5.124361463465.6\n"
"6221.6313.115..24513.\n"
"32212.2.2...36624.112\n"
"5.1666355.54...2...1.\n"
"6514.45623...1..44122\n"
"1533.4..2..42533...3.\n"
"....6646.56.62.3.5335\n"
"11..423153..6112.4244\n") == 0);
free(board671808989);
board671808989 = NULL;
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_free_fields(board, 2) == 128 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 12, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 51 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 6, 15, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 54 );
assert( gamma_move(board, 1, 20, 16) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 14, 20) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_move(board, 3, 13, 15) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 54 );


gamma_delete(board);

    return 0;
}
