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
uuid: 517673050
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 12, 9, 36);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_free_fields(board, 1) == 190 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_golden_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_free_fields(board, 4) == 187 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 15, 7) == 1 );
assert( gamma_free_fields(board, 6) == 185 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 11, 14) == 0 );
assert( gamma_move(board, 9, 10, 11) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 15, 8) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 7, 14, 4) == 1 );


char* board491017234 = gamma_board(board);
assert( board491017234 != NULL );
assert( strcmp(board491017234, 
"..........9.....\n"
".4...7..........\n"
".6..4.3.......2.\n"
"..7.7..........4\n"
"..........5..3.6\n"
"................\n"
".8..5...........\n"
".........6....7.\n"
".....5.....8....\n"
".............2..\n"
"1.......2....1..\n"
".........1......\n") == 0);
free(board491017234);
board491017234 = NULL;
assert( gamma_move(board, 8, 15, 11) == 1 );
assert( gamma_free_fields(board, 8) == 167 );
assert( gamma_move(board, 9, 13, 11) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_free_fields(board, 6) == 158 );
assert( gamma_move(board, 7, 3, 15) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_free_fields(board, 8) == 158 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 14, 2) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_free_fields(board, 7) == 149 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 6, 15, 5) == 1 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 8, 0) == 1 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_free_fields(board, 9) == 139 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board858561907 = gamma_board(board);
assert( board858561907 != NULL );
assert( strcmp(board858561907, 
"9.........9..9.8\n"
".4.6.7.4........\n"
".6..4.3.9.....2.\n"
"..7.7..........4\n"
".45.....525..3.6\n"
"..4.346.........\n"
".8..5..5..39...6\n"
"......73.6....7.\n"
".1...5.3...8....\n"
"..1.....2....24.\n"
"1....1.42....1..\n"
"..32..1.91......\n") == 0);
free(board858561907);
board858561907 = NULL;
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 11, 10) == 1 );
assert( gamma_free_fields(board, 8) == 129 );
assert( gamma_golden_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_move(board, 2, 15, 6) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );


char* board815245484 = gamma_board(board);
assert( board815245484 != NULL );
assert( strcmp(board815245484, 
"9.....2...9..9.8\n"
"24.6.7.4...8....\n"
".6..4.3.9.....2.\n"
"..7.7..........4\n"
".45.....5253.3.6\n"
"..4.346........2\n"
".8..55.5..39...6\n"
"...4..73.6.1..7.\n"
".1...5.3...8....\n"
"..1.....2....24.\n"
"16.6.1342....1..\n"
"..321.1.91......\n") == 0);
free(board815245484);
board815245484 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 125 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_move(board, 6, 13, 9) == 1 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 9, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 9, 0, 15) == 0 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 5, 15, 7) == 0 );


char* board789333123 = gamma_board(board);
assert( board789333123 != NULL );
assert( strcmp(board789333123, 
"9..9..2...9..9.8\n"
"24.6.7.4.7.8....\n"
".6..4.3.9....62.\n"
"4.7.7...7.1..1.4\n"
".45.....5253.3.6\n"
"..4.34645..2...2\n"
"58..55.5..39...6\n"
"...4..73.6.1..7.\n"
".1...5.3...85...\n"
"..1.....2...324.\n"
"16.6.1342....1..\n"
"..321.1.91......\n") == 0);
free(board789333123);
board789333123 = NULL;
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 8, 3, 15) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 10, 14) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 7, 15, 2) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 99 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );


char* board821714565 = gamma_board(board);
assert( board821714565 != NULL );
assert( strcmp(board821714565, 
"97.9..2...9..9.8\n"
"2476.7.4.7.8....\n"
".6.24.3.9....62.\n"
"4.717..67.14.1.4\n"
".45.....5253.3.6\n"
"3.4.34645..2...2\n"
"582.55.51139...6\n"
".1.4..73.6.12.7.\n"
".1...5.3..885.2.\n"
"..1....922..3247\n"
"16.671342..7.1..\n"
"4.321.1.915.....\n") == 0);
free(board821714565);
board821714565 = NULL;
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 7, 14, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_free_fields(board, 2) == 86 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 7, 15, 11) == 0 );
assert( gamma_move(board, 8, 0, 15) == 0 );
assert( gamma_move(board, 9, 11, 14) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_move(board, 9, 6, 10) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 4, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_free_fields(board, 6) == 80 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_free_fields(board, 8) == 79 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_golden_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_free_fields(board, 9) == 71 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 14, 11) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 10, 14) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board294541390 = gamma_board(board);
assert( board294541390 != NULL );
assert( strcmp(board294541390, 
"9759..2...9..928\n"
"2476.7842718....\n"
".6524.3.9..9.62.\n"
"4.7175.67.14.1.4\n"
"145..3.55253.3.6\n"
"3.4834645..2..72\n"
"582455.51139...6\n"
".134..73.6312.7.\n"
"91.1.5.3..865.2.\n"
"..1.6..922..3247\n"
"163671342..7.1..\n"
"4232151.215.14..\n") == 0);
free(board294541390);
board294541390 = NULL;
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board125775269 = gamma_board(board);
assert( board125775269 != NULL );
assert( strcmp(board125775269, 
"9759..2...9..928\n"
"2476.7842718....\n"
".6524.3.9..9.62.\n"
"4.7175.67.14.1.4\n"
"145..3.55253.3.6\n"
"3.4834645..2..72\n"
"582455.51139...6\n"
".134..73.6312.7.\n"
"91.1.5.3..865.2.\n"
"..1.6..922..3247\n"
"163671342..7.1..\n"
"4232151.215.14..\n") == 0);
free(board125775269);
board125775269 = NULL;
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 15, 5) == 0 );
assert( gamma_move(board, 9, 10, 13) == 0 );
assert( gamma_move(board, 9, 9, 10) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 13, 10) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_move(board, 8, 0, 15) == 0 );
assert( gamma_move(board, 8, 15, 8) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_free_fields(board, 9) == 57 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, 4, 3) == 1 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );


char* board101760510 = gamma_board(board);
assert( board101760510 != NULL );
assert( strcmp(board101760510, 
"9759..2...9..928\n"
"2476.7842718.6..\n"
".6524.3.9..9.62.\n"
"4.7175.67.1431.4\n"
"145..375525343.6\n"
"3.4834645..25.72\n"
"582455.51139...6\n"
".1347.73.6312.7.\n"
"916195532.865.2.\n"
"..126..922..3247\n"
"163671342..711..\n"
"4232151.215.14..\n") == 0);
free(board101760510);
board101760510 = NULL;
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_free_fields(board, 6) == 52 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );


char* board598317047 = gamma_board(board);
assert( board598317047 != NULL );
assert( strcmp(board598317047, 
"9759..2...9..928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.67.1431.4\n"
"145..375525343.6\n"
"394834645..25.72\n"
"582455.51139...6\n"
".1347.73.6312.7.\n"
"916195532.865.2.\n"
"..126..922..3247\n"
"163671342.4711..\n"
"4232151.215.14..\n") == 0);
free(board598317047);
board598317047 = NULL;
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );


char* board408042648 = gamma_board(board);
assert( board408042648 != NULL );
assert( strcmp(board408042648, 
"9759..2...9..928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.67.1431.4\n"
"145..375525343.6\n"
"394834645..25.72\n"
"582455.51139...6\n"
".1347.73.6312.7.\n"
"916195532.865.2.\n"
"..126..922..3247\n"
"163671342.4711..\n"
"4232151.215.14..\n") == 0);
free(board408042648);
board408042648 = NULL;
assert( gamma_move(board, 6, 15, 4) == 1 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );


char* board711708190 = gamma_board(board);
assert( board711708190 != NULL );
assert( strcmp(board711708190, 
"9759..2...9..928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645..25.72\n"
"582455.51139...6\n"
".1347.73.6312.76\n"
"916195532.865.2.\n"
"..126..922..3247\n"
"163671342.4711..\n"
"42321518215.14..\n") == 0);
free(board711708190);
board711708190 = NULL;
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );


char* board827157443 = gamma_board(board);
assert( board827157443 != NULL );
assert( strcmp(board827157443, 
"9759..2...9..928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645..25.72\n"
"582455.51139...6\n"
".1347.73.6312.76\n"
"916195532.86542.\n"
"..126..922..3247\n"
"163671342.4711..\n"
"42321518215.14..\n") == 0);
free(board827157443);
board827157443 = NULL;
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );


char* board140193163 = gamma_board(board);
assert( board140193163 != NULL );
assert( strcmp(board140193163, 
"9759..2...9..928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645..25.72\n"
"582455.51139...6\n"
".1347.73.6312.76\n"
"916195532.86542.\n"
"..126..922..3247\n"
"163671342.4711..\n"
"42321518215.14..\n") == 0);
free(board140193163);
board140193163 = NULL;
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 7, 11) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 11, 11) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 15, 3) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 8, 15, 0) == 1 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 15, 8) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 15, 1) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board415371694 = gamma_board(board);
assert( board415371694 != NULL );
assert( strcmp(board415371694, 
"9759..28..99.928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645..25.72\n"
"582455.51139...6\n"
".1347.73.6312.76\n"
"916195532.865426\n"
"..1269.922..3247\n"
"163671342.4711.4\n"
"42321518215.1438\n") == 0);
free(board415371694);
board415371694 = NULL;
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );


char* board633160925 = gamma_board(board);
assert( board633160925 != NULL );
assert( strcmp(board633160925, 
"9759..28..99.928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645..25.72\n"
"582455651139...6\n"
".1347.73.6312.76\n"
"916195532.865426\n"
"..12696922..3247\n"
"163671342.4711.4\n"
"42321518215.1438\n") == 0);
free(board633160925);
board633160925 = NULL;
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_golden_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 15, 11) == 0 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 9, 8, 14) == 0 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board436216030 = gamma_board(board);
assert( board436216030 != NULL );
assert( strcmp(board436216030, 
"9759..28..99.928\n"
"2476.7842718.6..\n"
"56524.3.9..9.62.\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645.925.72\n"
"582455651139...6\n"
".1347.73.6312.76\n"
"916195532.865426\n"
".812696922..3247\n"
"163671342.4711.4\n"
"42321518215.1438\n") == 0);
free(board436216030);
board436216030 = NULL;
assert( gamma_busy_fields(board, 9) == 14 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 9) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board946701053 = gamma_board(board);
assert( board946701053 != NULL );
assert( strcmp(board946701053, 
"9759..28..99.928\n"
"2476.7842718.6..\n"
"56524.3.93.9.622\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645.925.72\n"
"582455651139...6\n"
".1347.73.6312.76\n"
"916195532.865426\n"
".812696922..3247\n"
"163671342.4711.4\n"
"42321518215.1438\n") == 0);
free(board946701053);
board946701053 = NULL;
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 12, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_golden_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );


char* board850250928 = gamma_board(board);
assert( board850250928 != NULL );
assert( strcmp(board850250928, 
"9759..28..99.928\n"
"2476.7842718.6..\n"
"56524.3.93.9.622\n"
"4.7175.6711431.4\n"
"145.3375525343.6\n"
"394834645.925.72\n"
"582455651139...6\n"
".1347.73.6312.76\n"
"916195532.865426\n"
".812696922..3247\n"
"163671342.4711.4\n"
"42321518215.1438\n") == 0);
free(board850250928);
board850250928 = NULL;
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 15, 2) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 14, 7) == 1 );


gamma_delete(board);

    return 0;
}
