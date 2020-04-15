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
uuid: 508309039
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 13, 7, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_free_fields(board, 6) == 147 );
assert( gamma_move(board, 7, 5, 8) == 1 );


char* board339543907 = gamma_board(board);
assert( board339543907 != NULL );
assert( strcmp(board339543907, 
"....6.......\n"
".4..........\n"
"............\n"
"............\n"
".....7......\n"
"............\n"
"............\n"
".4....21....\n"
"............\n"
".......33...\n"
"............\n"
"...1........\n"
"..5.........\n") == 0);
free(board339543907);
board339543907 = NULL;
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_golden_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );


char* board377323031 = gamma_board(board);
assert( board377323031 != NULL );
assert( strcmp(board377323031, 
"....6.......\n"
".41.........\n"
"..........3.\n"
".1...1......\n"
".....7......\n"
"............\n"
"............\n"
"64....21....\n"
"7...........\n"
".....4.33...\n"
"..6.........\n"
"...1.7..1...\n"
"..5.....4...\n") == 0);
free(board377323031);
board377323031 = NULL;
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_free_fields(board, 6) == 131 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_move(board, 5, 1, 8) == 0 );


char* board657138251 = gamma_board(board);
assert( board657138251 != NULL );
assert( strcmp(board657138251, 
"....6..1....\n"
".41..6......\n"
"......4...3.\n"
".1...1......\n"
".....7.....4\n"
"............\n"
"......2..7.6\n"
"64..5.21....\n"
"7...........\n"
".....4.33...\n"
"..6.........\n"
"...1.7.41...\n"
"..5.....4...\n") == 0);
free(board657138251);
board657138251 = NULL;
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 2) == 126 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 12) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );


char* board932531396 = gamma_board(board);
assert( board932531396 != NULL );
assert( strcmp(board932531396, 
"...76..1....\n"
".41..6......\n"
".....445..3.\n"
".1...1...5..\n"
".....7.....4\n"
"6.........34\n"
"......2737.6\n"
"64..5121..7.\n"
"7.....1.635.\n"
".....4233...\n"
"..6.....2...\n"
"...1.7541...\n"
"..5.....4..3\n") == 0);
free(board932531396);
board932531396 = NULL;
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_free_fields(board, 4) == 101 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_free_fields(board, 6) == 98 );
assert( gamma_move(board, 7, 3, 11) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_free_fields(board, 3) == 94 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_free_fields(board, 2) == 92 );
assert( gamma_golden_move(board, 2, 6, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_golden_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );


char* board771674045 = gamma_board(board);
assert( board771674045 != NULL );
assert( strcmp(board771674045, 
"...76..1....\n"
".417.6.....2\n"
"...2.445..3.\n"
".1..61..65..\n"
".3..57.7...4\n"
"6...5..5..34\n"
".2....273756\n"
"62..5121..7.\n"
"7..5..1.635.\n"
"...1.4233...\n"
".16.3..42...\n"
"...1.7541...\n"
"2.5....54.63\n") == 0);
free(board771674045);
board771674045 = NULL;
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );


char* board625632785 = gamma_board(board);
assert( board625632785 != NULL );
assert( strcmp(board625632785, 
"...76..1....\n"
".417.6.....2\n"
"...2.445.43.\n"
".1..61..65..\n"
".3..57.7...4\n"
"6...5..5..34\n"
".2....273756\n"
"62..5121..7.\n"
"7..5..1.635.\n"
"...1.4233...\n"
".16.3..42...\n"
"...1.7541...\n"
"2.5....54.63\n") == 0);
free(board625632785);
board625632785 = NULL;
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 86 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_golden_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board142207977 = gamma_board(board);
assert( board142207977 != NULL );
assert( strcmp(board142207977, 
"...76..1..2.\n"
".417.6...2.2\n"
"...2.445543.\n"
".1..61..656.\n"
".3..57.7...4\n"
"6...5..5..34\n"
".2..4.273756\n"
"62..5121..7.\n"
"7..5..1.635.\n"
"..51.4233...\n"
".16.3..425..\n"
"1..1.7541...\n"
"2.5...254.63\n") == 0);
free(board142207977);
board142207977 = NULL;
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );


char* board395217270 = gamma_board(board);
assert( board395217270 != NULL );
assert( strcmp(board395217270, 
"...76..14.2.\n"
".417.6...2.2\n"
"..32.445543.\n"
".1..61..656.\n"
".34.57.7..24\n"
"6...5.45..34\n"
".2..4.273756\n"
"62..5121..7.\n"
"71.5..1.6357\n"
"..51.4233...\n"
".16.3..425..\n"
"1..1.7541...\n"
"2.5..3254.63\n") == 0);
free(board395217270);
board395217270 = NULL;
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_golden_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );


char* board781674123 = gamma_board(board);
assert( board781674123 != NULL );
assert( strcmp(board781674123, 
"...766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
".1..61..656.\n"
".34.57.7..24\n"
"6...5.45.234\n"
"627.4.273756\n"
"623.5121..7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".16.3..425..\n"
"1411.7541...\n"
"2.5..3254.63\n") == 0);
free(board781674123);
board781674123 = NULL;
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 17 );


char* board149457306 = gamma_board(board);
assert( board149457306 != NULL );
assert( strcmp(board149457306, 
"...766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
".1..61..656.\n"
".34.57.7..24\n"
"6...5.45.234\n"
"627.4.273756\n"
"623.5121..7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".16.3..425..\n"
"1411.7541...\n"
"2.5..3254.63\n") == 0);
free(board149457306);
board149457306 = NULL;
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_move(board, 7, 11, 10) == 0 );


char* board624304847 = gamma_board(board);
assert( board624304847 != NULL );
assert( strcmp(board624304847, 
"...766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
".1..61..656.\n"
".34.57.7..24\n"
"6...5.45.234\n"
"62774.273756\n"
"623.5121..7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".16.3..425.6\n"
"1411.7541...\n"
"2.5..3254.63\n") == 0);
free(board624304847);
board624304847 = NULL;
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_golden_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );


char* board262546338 = gamma_board(board);
assert( board262546338 != NULL );
assert( strcmp(board262546338, 
"...766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
".1..61..656.\n"
".34.57.7..24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".16.3..425.6\n"
"1411.7541...\n"
"2.5..3254.63\n") == 0);
free(board262546338);
board262546338 = NULL;
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );


char* board188888019 = gamma_board(board);
assert( board188888019 != NULL );
assert( strcmp(board188888019, 
"..7766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..656.\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".1613..425.6\n"
"1411.7541...\n"
"1.5..3254.63\n") == 0);
free(board188888019);
board188888019 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );


char* board383319672 = gamma_board(board);
assert( board383319672 != NULL );
assert( strcmp(board383319672, 
"..7766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..656.\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".1613..425.6\n"
"1411.7541...\n"
"1.5..3254.63\n") == 0);
free(board383319672);
board383319672 = NULL;
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );


char* board561619876 = gamma_board(board);
assert( board561619876 != NULL );
assert( strcmp(board561619876, 
"..7766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..656.\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".1613..425.6\n"
"1411.7541...\n"
"1.56.3254.63\n") == 0);
free(board561619876);
board561619876 = NULL;
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );


char* board525390430 = gamma_board(board);
assert( board525390430 != NULL );
assert( strcmp(board525390430, 
"..7766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..656.\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.5..1.6357\n"
"..51.42333..\n"
".16136.425.6\n"
"1411.7541...\n"
"1.56.3254.63\n") == 0);
free(board525390430);
board525390430 = NULL;
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );


char* board426385502 = gamma_board(board);
assert( board426385502 != NULL );
assert( strcmp(board426385502, 
"..7766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..656.\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.57.1.6357\n"
"..51.42333..\n"
".16136.425.6\n"
"1411.7541...\n"
"1.56.3254.63\n") == 0);
free(board426385502);
board426385502 = NULL;
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );


char* board922360846 = gamma_board(board);
assert( board922360846 != NULL );
assert( strcmp(board922360846, 
"..7766.14.2.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..656.\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.57.1.6357\n"
"..51.42333..\n"
".16136.425.6\n"
"1411.7541...\n"
"1.56.3254.63\n") == 0);
free(board922360846);
board922360846 = NULL;
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_golden_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );


char* board177176253 = gamma_board(board);
assert( board177176253 != NULL );
assert( strcmp(board177176253, 
"..776661422.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..6562\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.57.1.6357\n"
"6.51.42333..\n"
".16136.425.6\n"
"1411.7541...\n"
"1.56.3254.63\n") == 0);
free(board177176253);
board177176253 = NULL;
assert( gamma_move(board, 4, 8, 6) == 0 );


char* board487038332 = gamma_board(board);
assert( board487038332 != NULL );
assert( strcmp(board487038332, 
"..776661422.\n"
".417.6.7.242\n"
"..32.445543.\n"
"61..61..6562\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.57.1.6357\n"
"6.51.42333..\n"
".16136.425.6\n"
"1411.7541...\n"
"1.56.3254.63\n") == 0);
free(board487038332);
board487038332 = NULL;
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );


char* board215635468 = gamma_board(board);
assert( board215635468 != NULL );
assert( strcmp(board215635468, 
"..776661422.\n"
".417.6.7.242\n"
"..32.4455432\n"
"61..61..6562\n"
".34.57.73.24\n"
"67..5.45.234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.57.1.6357\n"
"6.51.42333..\n"
".16136.425.6\n"
"1411.7541...\n"
"1.56.3254.63\n") == 0);
free(board215635468);
board215635468 = NULL;
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_golden_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 6, 0, 6) == 0 );


char* board177071881 = gamma_board(board);
assert( board177071881 != NULL );
assert( strcmp(board177071881, 
"..776661422.\n"
".417.6.73242\n"
"..3214455432\n"
"61..61..6562\n"
".34.57.73224\n"
"67..5.453234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.57.1.6357\n"
"6.51.42333..\n"
".16136.42556\n"
"1411.7541.2.\n"
"1156.3254.63\n") == 0);
free(board177071881);
board177071881 = NULL;
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );


char* board294736970 = gamma_board(board);
assert( board294736970 != NULL );
assert( strcmp(board294736970, 
"..776661422.\n"
".417.6.73242\n"
"..3214455432\n"
"61..61..6562\n"
".34.57.73224\n"
"67..5.453234\n"
"62774.273756\n"
"623.51213.7.\n"
"61.57.1.6357\n"
"6.51.42333..\n"
".16136.42556\n"
"1411.7541.2.\n"
"1156.3254.63\n") == 0);
free(board294736970);
board294736970 = NULL;
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );


gamma_delete(board);

    return 0;
}
