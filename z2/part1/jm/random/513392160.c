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
uuid: 513392160
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(17, 16, 8, 43);
assert( board != NULL );


assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 15) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_move(board, 7, 14, 9) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 1, 15, 0) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 12, 15) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 14, 4) == 1 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 5, 6, 15) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 0, 6) == 1 );


char* board635882773 = gamma_board(board);
assert( board635882773 != NULL );
assert( strcmp(board635882773, 
"......4.....4....\n"
".................\n"
".3...2...........\n"
".................\n"
".................\n"
"..8..............\n"
".55...........7..\n"
".7...3...........\n"
".................\n"
"6...6.........6..\n"
".....8...........\n"
".1..2....2.3..7..\n"
"............2.1..\n"
".......1..2......\n"
".................\n"
"5......6......51.\n") == 0);
free(board635882773);
board635882773 = NULL;
assert( gamma_move(board, 7, 14, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 10, 2) == 1 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 13, 15) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 16, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 239 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_golden_move(board, 3, 15, 12) == 0 );
assert( gamma_move(board, 4, 15, 9) == 1 );
assert( gamma_move(board, 4, 10, 15) == 1 );
assert( gamma_move(board, 5, 8, 15) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_free_fields(board, 5) == 235 );


char* board339155159 = gamma_board(board);
assert( board339155159 != NULL );
assert( strcmp(board339155159, 
"......4.5.4.41..2\n"
".................\n"
".3...2...........\n"
".................\n"
".................\n"
"..88.............\n"
".55...........74.\n"
".7..53........7..\n"
".................\n"
"6...6.........6..\n"
".....8...........\n"
".1..2...12.3..7..\n"
"......2.....2.1..\n"
".......1..7......\n"
".................\n"
"5......6......51.\n") == 0);
free(board339155159);
board339155159 = NULL;
assert( gamma_move(board, 6, 15, 6) == 1 );
assert( gamma_free_fields(board, 6) == 234 );
assert( gamma_move(board, 7, 11, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 7, 15) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_golden_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 13, 14) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 0, 16) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 225 );


char* board975789744 = gamma_board(board);
assert( board975789744 != NULL );
assert( strcmp(board975789744, 
"......485.4.41..2\n"
".............21..\n"
".3...2.....7.....\n"
".................\n"
".................\n"
"..88.............\n"
".55...8.......74.\n"
".7..53.....3..7..\n"
".3...............\n"
"6...62........66.\n"
".....8...........\n"
".1..2...12.3..7..\n"
"......2.....2.1..\n"
".......1..7.4....\n"
".................\n"
"5......6......51.\n") == 0);
free(board975789744);
board975789744 = NULL;
assert( gamma_move(board, 8, 10, 13) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 15, 5) == 1 );


char* board504176440 = gamma_board(board);
assert( board504176440 != NULL );
assert( strcmp(board504176440, 
"......485.4.41..2\n"
".............21..\n"
".3...2....87.....\n"
".................\n"
".................\n"
"..88.............\n"
".55...8.......74.\n"
".7..53.....3..7..\n"
".3...............\n"
"6...62........66.\n"
".....8.........2.\n"
".1..2...12.3..7..\n"
"......2.....2.1..\n"
".......1..7.4....\n"
"...1.............\n"
"5......6......51.\n") == 0);
free(board504176440);
board504176440 = NULL;
assert( gamma_move(board, 3, 8, 15) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 6, 16, 3) == 1 );
assert( gamma_move(board, 7, 7, 16) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 7, 13) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_move(board, 1, 11, 15) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_busy_fields(board, 2) == 9 );


char* board221357761 = gamma_board(board);
assert( board221357761 != NULL );
assert( strcmp(board221357761, 
"......485.4141..2\n"
".............21..\n"
".3...2.8..87.....\n"
".................\n"
"...6.............\n"
"..88.............\n"
".55...8.......74.\n"
".7..53.7...3..7..\n"
".3...............\n"
"6...62........66.\n"
".....8.........2.\n"
".1..2...12.3..7..\n"
"......23....2.1.6\n"
".......1..7.4....\n"
"...1.............\n"
"5......6.4....51.\n") == 0);
free(board221357761);
board221357761 = NULL;
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 12, 16) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 14, 2) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 4, 15, 4) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_free_fields(board, 5) == 202 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 16, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 10, 11) == 1 );


char* board503176010 = gamma_board(board);
assert( board503176010 != NULL );
assert( strcmp(board503176010, 
"......485.4141..2\n"
".............21..\n"
".3..22.8..87.....\n"
".................\n"
".3.6......5......\n"
"5.88.............\n"
".55...8.......74.\n"
".7..5367...33.7..\n"
".3...............\n"
"688.62........66.\n"
"..8.18.........2.\n"
".1..2...12.3..74.\n"
"...6..23....2.1.6\n"
"..74.7.1..7.4.7..\n"
"...1.....44.....1\n"
"5....1.6.4..5.51.\n") == 0);
free(board503176010);
board503176010 = NULL;
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 16, 1) == 0 );
assert( gamma_golden_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 8, 16) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 16, 11) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_free_fields(board, 8) == 189 );
assert( gamma_golden_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_free_fields(board, 1) == 187 );
assert( gamma_move(board, 2, 15, 14) == 1 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_free_fields(board, 3) == 185 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_free_fields(board, 4) == 184 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 14, 11) == 1 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 14, 12) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_free_fields(board, 3) == 176 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 16, 8) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 3, 12, 14) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 15, 13) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 13, 13) == 1 );


char* board349714977 = gamma_board(board);
assert( board349714977 != NULL );
assert( strcmp(board349714977, 
"......485.4141..2\n"
"............3212.\n"
".3..22383.87.6.5.\n"
".....3...1....2..\n"
".3.6...6..5...6.6\n"
"5.88.............\n"
".552..8..7....74.\n"
".7..5367...33.7.7\n"
".3....4..........\n"
"688562......4.66.\n"
"..8.18.8...5...2.\n"
".1.12..712.3..74.\n"
"...65123....2.1.6\n"
"1274.711..7.4.7..\n"
"5..1.....44.2...1\n"
"5....1.6.4..5251.\n") == 0);
free(board349714977);
board349714977 = NULL;
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 6, 16) == 0 );
assert( gamma_move(board, 8, 16, 11) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 15) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 160 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 8, 15, 3) == 1 );
assert( gamma_move(board, 1, 3, 15) == 1 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_free_fields(board, 4) == 154 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 9, 7) == 1 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 8, 15, 3) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 1, 10, 16) == 0 );


char* board111935610 = gamma_board(board);
assert( board111935610 != NULL );
assert( strcmp(board111935610, 
"...13.485.4141..2\n"
"............3212.\n"
".3..22383.87.6.5.\n"
".....3.3.1....2..\n"
"73.6...6..57..6.6\n"
"5.88.............\n"
".552.18.77....74.\n"
".7..5367...33.7.7\n"
".3....48.6.1..2..\n"
"688562......4.66.\n"
"..8.18.8...5...2.\n"
".1.12..712.3..74.\n"
"...65123....2.186\n"
"1274.7118.7.447..\n"
"5..1.....44.2.5.1\n"
"8....1.6.4..5251.\n") == 0);
free(board111935610);
board111935610 = NULL;
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_free_fields(board, 3) == 149 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board704568200 = gamma_board(board);
assert( board704568200 != NULL );
assert( strcmp(board704568200, 
"...13.485.4141..2\n"
"............3212.\n"
".3..22383.87.6.5.\n"
".....3.3.1....2..\n"
"73.6...6..57..6.6\n"
"5.88.............\n"
".552.18.77....74.\n"
".7..5367...33.7.7\n"
".3....48.6.1..2..\n"
"688562......4.66.\n"
"..8.18.8...5...2.\n"
".1.12..712.3..74.\n"
"...65123....2.186\n"
"1274.7118.7.447..\n"
"5..1.....44.2.5.1\n"
"8....1.6.4..5251.\n") == 0);
free(board704568200);
board704568200 = NULL;
assert( gamma_move(board, 5, 8, 10) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 16, 15) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_free_fields(board, 2) == 146 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 14) == 1 );
assert( gamma_move(board, 8, 11, 9) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_golden_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_free_fields(board, 3) == 137 );
assert( gamma_golden_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_free_fields(board, 4) == 137 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 6, 13, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 16, 2) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 7, 16, 8) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 13, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );


char* board376509707 = gamma_board(board);
assert( board376509707 != NULL );
assert( strcmp(board376509707, 
"...13.485.4141..2\n"
".7...2......3212.\n"
".3.222383.87.6.5.\n"
".....333.1..1.2..\n"
"73.6..365.57..6.6\n"
"5.883...5........\n"
".552.18.77.8..74.\n"
"77..5367...3367.7\n"
"63....41.681..2..\n"
"688562......4.66.\n"
".28.18.836.5...2.\n"
".1.125.712.3..74.\n"
"...651231..12.186\n"
"127477118.7.447.4\n"
"5..1.....4412.5.1\n"
"8.3..1.6.4..5251.\n") == 0);
free(board376509707);
board376509707 = NULL;
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 15, 1) == 1 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 7, 15, 15) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 15, 12) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 0, 15) == 1 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_free_fields(board, 6) == 118 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 2, 15) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );


char* board264848681 = gamma_board(board);
assert( board264848681 != NULL );
assert( strcmp(board264848681, 
"2.813.485.4141.72\n"
"47...2..4...3212.\n"
".3.222383.87.6.5.\n"
"...2.333.1..1.21.\n"
"73.6..365.57..6.6\n"
"5.883...5........\n"
".552.18.77.8..74.\n"
"77..5367...3367.7\n"
"63....41.681..2..\n"
"688562..8...4.66.\n"
".28.184836.5...2.\n"
".1.125.712.3..74.\n"
"...651231..12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.3..1.6.4..5251.\n") == 0);
free(board264848681);
board264848681 = NULL;
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board640319643 = gamma_board(board);
assert( board640319643 != NULL );
assert( strcmp(board640319643, 
"2.813.485.4141.72\n"
"47...2..4...3212.\n"
".3.222383.87.6.5.\n"
"...2.333.1..1.21.\n"
"73.6..365.57..6.6\n"
"5.883...5........\n"
".552.18.77.8..74.\n"
"77..5367...3367.7\n"
"63....41.681..2..\n"
"688562..8...4.66.\n"
".28.184836.5...2.\n"
".1.125.712.3..74.\n"
"...651231..12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.3..1.6.4.15251.\n") == 0);
free(board640319643);
board640319643 = NULL;
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 4, 11, 14) == 1 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_golden_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 16, 15) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 11, 15) == 0 );
assert( gamma_move(board, 6, 2, 15) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 4, 16) == 0 );
assert( gamma_move(board, 8, 7, 15) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_free_fields(board, 4) == 103 );
assert( gamma_move(board, 5, 7, 15) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_free_fields(board, 7) == 102 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 11, 16) == 0 );
assert( gamma_move(board, 8, 6, 16) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 11, 12) == 0 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_golden_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );


char* board347437665 = gamma_board(board);
assert( board347437665 != NULL );
assert( strcmp(board347437665, 
"2.813.485.4141.72\n"
"47...2..4..43212.\n"
".3.222383.87.6.5.\n"
"...2.333.1251.21.\n"
"73.6..365.57..6.6\n"
"5.883.145........\n"
".552118.77.8..74.\n"
"77.85367...3367.7\n"
"63....41.681..2..\n"
"688562..8...4.66.\n"
".28.184836.54..2.\n"
".1.125.71233.674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board347437665);
board347437665 = NULL;
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 6, 16, 14) == 1 );
assert( gamma_golden_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 2, 15) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_free_fields(board, 2) == 97 );
assert( gamma_move(board, 3, 10, 14) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_move(board, 5, 2, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );


char* board514385107 = gamma_board(board);
assert( board514385107 != NULL );
assert( strcmp(board514385107, 
"2.813.485.4141.72\n"
"475..2..4.3432126\n"
".3.222383.87.6.5.\n"
"...2.333.1251.21.\n"
"73.6.1365.57..6.6\n"
"5.883.145....5...\n"
".552118.77.8..74.\n"
"77.85367...3367.7\n"
"63....41.681..2..\n"
"688562..8...4.66.\n"
".28.184836.54..2.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board514385107);
board514385107 = NULL;
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );


char* board334204853 = gamma_board(board);
assert( board334204853 != NULL );
assert( strcmp(board334204853, 
"2.813.485.4141.72\n"
"475..2..4.3432126\n"
".3.222383.87.6.5.\n"
"...2.333.1251.21.\n"
"73.6.1365.57..6.6\n"
"5.883.145....5...\n"
".552118.77.8..74.\n"
"77.85367...3367.7\n"
"63....41.681..2..\n"
"688562..8...4.66.\n"
".28.184836.54..2.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board334204853);
board334204853 = NULL;
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_free_fields(board, 5) == 90 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 10, 12) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 13, 13) == 0 );
assert( gamma_move(board, 6, 9, 14) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 13, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 84 );
assert( gamma_move(board, 4, 15, 14) == 0 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 8, 15) == 0 );
assert( gamma_move(board, 7, 16, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 10, 16) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 3, 16, 9) == 1 );
assert( gamma_move(board, 5, 11, 15) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board188344819 = gamma_board(board);
assert( board188344819 != NULL );
assert( strcmp(board188344819, 
"2.813.485.4141.72\n"
"475..2..463432126\n"
".3.22238318726.5.\n"
"...2.33321251.21.\n"
"73.651365.57..6.6\n"
"5.883.145....5...\n"
".552118.77.848743\n"
"77.853673..3367.7\n"
"63....41.681..2..\n"
"6885627.8...4.66.\n"
".28.184836.54.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board188344819);
board188344819 = NULL;
assert( gamma_move(board, 7, 0, 16) == 0 );
assert( gamma_move(board, 7, 16, 15) == 0 );
assert( gamma_move(board, 8, 7, 16) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_free_fields(board, 2) == 80 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 7, 16) == 0 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 13, 15) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 14, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 15, 14) == 0 );
assert( gamma_free_fields(board, 4) == 75 );


char* board645699413 = gamma_board(board);
assert( board645699413 != NULL );
assert( strcmp(board645699413, 
"2.813.485.4141.72\n"
"4751.2..463432126\n"
".3.2223831872685.\n"
"...2.33321251.21.\n"
"73.651365.571.6.6\n"
"5.883.145.2..5...\n"
".552118.77.848743\n"
"77.853673..3367.7\n"
"638.5.41.681..2..\n"
"6885627.8...4.66.\n"
".28.184836.54.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board645699413);
board645699413 = NULL;
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 12, 12) == 0 );
assert( gamma_move(board, 8, 15, 7) == 1 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 9, 15) == 1 );
assert( gamma_free_fields(board, 4) == 73 );


char* board940795850 = gamma_board(board);
assert( board940795850 != NULL );
assert( strcmp(board940795850, 
"2.813.48544141.72\n"
"4751.2..463432126\n"
".3.2223831872685.\n"
"...2.33321251.21.\n"
"73.651365.571.6.6\n"
"5.883.145.2..5...\n"
".552118.77.848743\n"
"77.853673..3367.7\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
".28.184836.54.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board940795850);
board940795850 = NULL;
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );


char* board643620081 = gamma_board(board);
assert( board643620081 != NULL );
assert( strcmp(board643620081, 
"2.813.48544141.72\n"
"4751.2..463432126\n"
".3.2223831872685.\n"
"...2.33321251.21.\n"
"73.651365.571.6.6\n"
"5.883.145.2..5...\n"
".552118.77.848743\n"
"77.853673..3367.7\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
".28.184836.54.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board643620081);
board643620081 = NULL;
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 0, 15) == 0 );
assert( gamma_free_fields(board, 8) == 73 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 15, 11) == 1 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 15, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 15, 11) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 13, 12) == 1 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_golden_move(board, 1, 12, 13) == 0 );


char* board709102204 = gamma_board(board);
assert( board709102204 != NULL );
assert( strcmp(board709102204, 
"2.813.48544141.72\n"
"4751.2..463432126\n"
".3.2223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.145.2..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
".28.184836.54.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board709102204);
board709102204 = NULL;
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 24 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 6, 16, 11) == 0 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 10, 10) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 3, 12, 16) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 7, 16, 14) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 16, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_golden_move(board, 5, 9, 16) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 15, 11) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_move(board, 8, 10, 15) == 0 );
assert( gamma_free_fields(board, 8) == 67 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );


char* board699793282 = gamma_board(board);
assert( board699793282 != NULL );
assert( strcmp(board699793282, 
"2.813.48544141.72\n"
"4751.2..463432126\n"
".362223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.14512..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
"128.184836654.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5..1....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board699793282);
board699793282 = NULL;
assert( gamma_move(board, 2, 15, 14) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 6, 15, 5) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_free_fields(board, 7) == 66 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_free_fields(board, 8) == 65 );


char* board224430392 = gamma_board(board);
assert( board224430392 != NULL );
assert( strcmp(board224430392, 
"2.813.48544141.72\n"
"4751.2..463432126\n"
".362223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.14512..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
"128.184836654.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5.81....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board224430392);
board224430392 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );


char* board420192137 = gamma_board(board);
assert( board420192137 != NULL );
assert( strcmp(board420192137, 
"2.813.48544141.72\n"
"4751.2..463432126\n"
".362223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.14512..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
"128.184836654.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5.81....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board420192137);
board420192137 = NULL;
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_move(board, 3, 5, 16) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_move(board, 7, 7, 14) == 1 );
assert( gamma_move(board, 8, 7, 15) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 16) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );


char* board712077604 = gamma_board(board);
assert( board712077604 != NULL );
assert( strcmp(board712077604, 
"2.813.48544141.72\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.14512..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
"128.184836654.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5681....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board712077604);
board712077604 = NULL;
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 15, 15) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 12, 16) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );


char* board245971151 = gamma_board(board);
assert( board245971151 != NULL );
assert( strcmp(board245971151, 
"2.813.48544141.72\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.14512..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5.41.681..28.\n"
"6885627.8...4.66.\n"
"128.184836654.22.\n"
"71.125.712334674.\n"
"3..6512314.12.186\n"
"127477118.75447.4\n"
"5681....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board245971151);
board245971151 = NULL;
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 2, 6, 16) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 7, 16) == 0 );
assert( gamma_move(board, 6, 0, 16) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_golden_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );


char* board599544793 = gamma_board(board);
assert( board599544793 != NULL );
assert( strcmp(board599544793, 
"2.813.48544141.72\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.14512..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5241.681..28.\n"
"688562778...4.66.\n"
"128.184836654.22.\n"
"71.125.712334674.\n"
"36.6512314.12.186\n"
"127477118.75447.4\n"
"5681....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board599544793);
board599544793 = NULL;
assert( gamma_move(board, 7, 5, 16) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_free_fields(board, 8) == 59 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_move(board, 2, 12, 13) == 0 );


char* board284538251 = gamma_board(board);
assert( board284538251 != NULL );
assert( strcmp(board284538251, 
"2.813.48544141.72\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.33321251821.\n"
"73.651365.571.646\n"
"5.883.14512..5...\n"
".552118.77.848743\n"
"77.853673..336757\n"
"638.5241.681..28.\n"
"688562778...4.66.\n"
"128.184836654.22.\n"
"717125.712334674.\n"
"36.6512314.12.186\n"
"127477118.75447.4\n"
"5681....44412.561\n"
"8.34.1.6.4.15251.\n") == 0);
free(board284538251);
board284538251 = NULL;
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_free_fields(board, 8) == 58 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 16, 10) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 26 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 8, 13, 13) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_golden_move(board, 8, 1, 15) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 11, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 26 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 1, 16, 12) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 14, 15) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 9, 15) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_golden_move(board, 6, 8, 12) == 1 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 26 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 10, 10) == 0 );
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_golden_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 26 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 0, 16) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 26 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );


char* board945568715 = gamma_board(board);
assert( board945568715 != NULL );
assert( strcmp(board945568715, 
"2.813.48544141272\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.233612518211\n"
"73.651365.571.646\n"
"5.883614552..5..5\n"
".552118.774848743\n"
"77.853673..336757\n"
"638.5241.681.228.\n"
"688562778..24.66.\n"
"128.184836654.22.\n"
"7171257712334674.\n"
"36.6512314.123186\n"
"127477118.75447.4\n"
"5681..8.44412.561\n"
"85345146.4215251.\n") == 0);
free(board945568715);
board945568715 = NULL;
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 16, 5) == 1 );


char* board697815646 = gamma_board(board);
assert( board697815646 != NULL );
assert( strcmp(board697815646, 
"2.813.48544141272\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.233612518211\n"
"73.651365.571.646\n"
"5.883614552..5..5\n"
".552118.774848743\n"
"77.853673..336757\n"
"638.5241.681.228.\n"
"688562778..24.66.\n"
"128.184836654.224\n"
"7171257712334674.\n"
"36.65123141123186\n"
"127477118.75447.4\n"
"5681..8.44412.561\n"
"85345146.4215251.\n") == 0);
free(board697815646);
board697815646 = NULL;
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 27 );
assert( gamma_golden_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 6, 16) == 0 );


char* board306011149 = gamma_board(board);
assert( board306011149 != NULL );
assert( strcmp(board306011149, 
"2.813.48544141272\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.233612518211\n"
"73.651365.571.646\n"
"5.883614552..5..5\n"
".552118.774848743\n"
"77.853673..336757\n"
"638.5241.681.228.\n"
"688562778..24.66.\n"
"1288184836654.224\n"
"7171257712334674.\n"
"36.65123141123186\n"
"127477118.75447.4\n"
"5681..8.44412.561\n"
"85345146.4215251.\n") == 0);
free(board306011149);
board306011149 = NULL;
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_free_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 4, 15) == 0 );
assert( gamma_move(board, 5, 6, 16) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_move(board, 5, 15, 16) == 0 );
assert( gamma_move(board, 6, 13, 16) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 28 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 28 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );


char* board654694260 = gamma_board(board);
assert( board654694260 != NULL );
assert( strcmp(board654694260, 
"2.813.48544141272\n"
"4751.2.7463432126\n"
".362223831872685.\n"
"...2.233612518211\n"
"73.651365.571.646\n"
"58883614552..5..5\n"
".552118.774848743\n"
"77.853673..336757\n"
"638.5241.681.228.\n"
"688562778..24.66.\n"
"1288184836654.224\n"
"7171257712334674.\n"
"36.65123141123186\n"
"127477118.75447.4\n"
"56816.8.44412.561\n"
"85345146.4215251.\n") == 0);
free(board654694260);
board654694260 = NULL;
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 2, 15) == 0 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


gamma_delete(board);

    return 0;
}
