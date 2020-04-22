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
uuid: 139219576
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 14, 8, 45);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_free_fields(board, 7) == 160 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_free_fields(board, 1) == 158 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_golden_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 5, 2, 13) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 8, 10, 13) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );


char* board488433534 = gamma_board(board);
assert( board488433534 != NULL );
assert( strcmp(board488433534, 
"..5.......8.\n"
"............\n"
"..1.4..15...\n"
"....36.....1\n"
".85........3\n"
".....72.2...\n"
"..4.........\n"
"4..14......5\n"
"..4......2..\n"
"3.......2..8\n"
"....6...11..\n"
"......4...2.\n"
"...2813.3...\n"
"17...2......\n") == 0);
free(board488433534);
board488433534 = NULL;
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );


char* board984868485 = gamma_board(board);
assert( board984868485 != NULL );
assert( strcmp(board984868485, 
"..5.......8.\n"
"............\n"
"..1.4..15...\n"
"....36.....1\n"
".85.5......3\n"
".....72.2...\n"
"..46........\n"
"4..14....6.5\n"
"..4......2..\n"
"3...5...2..8\n"
"....6...11..\n"
"......4...2.\n"
"...2813.3...\n"
"17...2......\n") == 0);
free(board984868485);
board984868485 = NULL;
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 124 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 11, 8) == 1 );


char* board907815666 = gamma_board(board);
assert( board907815666 != NULL );
assert( strcmp(board907815666, 
"5.5..6....8.\n"
"......34....\n"
"2.1.4..15...\n"
"....36.....1\n"
".8535.3..4.3\n"
"61...7262325\n"
"..46...5....\n"
"4..14....6.5\n"
"..47.....2..\n"
"3..752..22.8\n"
"....6.1.115.\n"
".1....4...2.\n"
"...2813.3...\n"
"17...2....8.\n") == 0);
free(board907815666);
board907815666 = NULL;
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 98 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_golden_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 8, 10) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );


char* board741991144 = gamma_board(board);
assert( board741991144 != NULL );
assert( strcmp(board741991144, 
"5.5..6....8.\n"
"......34.6..\n"
"2.1643.15...\n"
"....36..8.61\n"
".8535.3..4.3\n"
"61..17262325\n"
"..46...5....\n"
"4..14....6.5\n"
"..471....2..\n"
"3..752..22.8\n"
"....6.1.115.\n"
".1....4...2.\n"
"...2813.32..\n"
"17.5.25...8.\n") == 0);
free(board741991144);
board741991144 = NULL;
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );


char* board909920966 = gamma_board(board);
assert( board909920966 != NULL );
assert( strcmp(board909920966, 
"5.5..6....8.\n"
"......34.6..\n"
"2.1643.15...\n"
".7..36..8.61\n"
".8535.3..4.3\n"
"61..17262325\n"
".246...5....\n"
"4..14..3.6.5\n"
"..471....2..\n"
"3..752..22.8\n"
"....6.1.115.\n"
".1....42..2.\n"
"...2813532..\n"
"1765.25...8.\n") == 0);
free(board909920966);
board909920966 = NULL;
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );


char* board556434377 = gamma_board(board);
assert( board556434377 != NULL );
assert( strcmp(board556434377, 
"5.5..6....8.\n"
"...2..34.6..\n"
"2.1643.15...\n"
".7..36..8.61\n"
".8535.33.443\n"
"615.17262325\n"
".246...5....\n"
"4..14.53.6.5\n"
"..471..2.2..\n"
"3..752..22.8\n"
"....6.1.115.\n"
".1..6.42..26\n"
"...2813532..\n"
"1765.25...8.\n") == 0);
free(board556434377);
board556434377 = NULL;
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_free_fields(board, 7) == 75 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_free_fields(board, 8) == 69 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_move(board, 3, 11, 10) == 1 );


char* board957768249 = gamma_board(board);
assert( board957768249 != NULL );
assert( strcmp(board957768249, 
"5.5..6....8.\n"
"5.12..34.6.5\n"
"2.1643315.36\n"
"67..36.48.63\n"
".8535.33.443\n"
"615.17262325\n"
"5246...5....\n"
"4..14.53.665\n"
".4471.12.23.\n"
"3..752..24.8\n"
"5..26.1.115.\n"
".1.66.42..26\n"
"48.28135328.\n"
"1765825..38.\n") == 0);
free(board957768249);
board957768249 = NULL;
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 1, 11) == 1 );
assert( gamma_move(board, 8, 12, 10) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 11, 13) == 1 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 2) == 51 );


char* board249622195 = gamma_board(board);
assert( board249622195 != NULL );
assert( strcmp(board249622195, 
"5.5..6....87\n"
"5.12..3446.5\n"
"271643315.36\n"
"67.636.48.63\n"
".8535.33.443\n"
"615.17262325\n"
"5246...5...3\n"
"4..14.53.665\n"
".4471812.23.\n"
"3..752..2428\n"
"5..26.1.115.\n"
".1.66.42..26\n"
"48.28135328.\n"
"1765825..38.\n") == 0);
free(board249622195);
board249622195 = NULL;
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );


char* board415974034 = gamma_board(board);
assert( board415974034 != NULL );
assert( strcmp(board415974034, 
"5.5..6..2.87\n"
"5.12..3446.5\n"
"271643315.36\n"
"67.636.48.63\n"
".8535.33.443\n"
"615.17262325\n"
"5246...5...3\n"
"4..14.53.665\n"
".4471812.23.\n"
"3..752..2428\n"
"5..26.1.115.\n"
".1.66.42..26\n"
"48.28135325.\n"
"1765825..38.\n") == 0);
free(board415974034);
board415974034 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );


char* board782490585 = gamma_board(board);
assert( board782490585 != NULL );
assert( strcmp(board782490585, 
"5.5..6..2.87\n"
"5.12..3446.5\n"
"271643315.36\n"
"67.636.48.63\n"
".85355335443\n"
"615.17262325\n"
"5246...5...3\n"
"4..14.531665\n"
".4471812.23.\n"
"3..752422428\n"
"5..26.1.1153\n"
".1.66.42..26\n"
"48.28135325.\n"
"1765825..38.\n") == 0);
free(board782490585);
board782490585 = NULL;
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 6, 13) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_free_fields(board, 6) == 39 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 1, 12) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_free_fields(board, 8) == 34 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );


char* board360075947 = gamma_board(board);
assert( board360075947 != NULL );
assert( strcmp(board360075947, 
"5.5..68.2.87\n"
"57124.3446.5\n"
"271643315.36\n"
"67.636648.63\n"
".85355335443\n"
"615.17262325\n"
"5246...5...3\n"
"45614.531665\n"
".4471812.23.\n"
"3..752422428\n"
"5..26.111153\n"
".1866442..26\n"
"48.28135325.\n"
"17658251.38.\n") == 0);
free(board360075947);
board360075947 = NULL;
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 10, 9) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_golden_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_golden_move(board, 1, 10, 8) == 1 );
assert( gamma_free_fields(board, 2) == 32 );


char* board945298271 = gamma_board(board);
assert( board945298271 != NULL );
assert( strcmp(board945298271, 
"5.5..68.2.87\n"
"57124.3446.5\n"
"271673315.36\n"
"67.636648.63\n"
".85355335443\n"
"615.17262315\n"
"5246..25...3\n"
"45614.531665\n"
"74471812.23.\n"
"3..752422428\n"
"5..26.111153\n"
".1866442..26\n"
"48.28135325.\n"
"17658251.38.\n") == 0);
free(board945298271);
board945298271 = NULL;
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );


char* board550771540 = gamma_board(board);
assert( board550771540 != NULL );
assert( strcmp(board550771540, 
"5.5..68.2.87\n"
"57124.3446.5\n"
"271673315.36\n"
"675636648.63\n"
".85355335443\n"
"615.17262315\n"
"5246..25...3\n"
"45614.531665\n"
"74471812.23.\n"
"3..752422428\n"
"5..26.111153\n"
".1866442..26\n"
"48.28135325.\n"
"17658251.38.\n") == 0);
free(board550771540);
board550771540 = NULL;
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );


char* board668334969 = gamma_board(board);
assert( board668334969 != NULL );
assert( strcmp(board668334969, 
"5.5..68.2.87\n"
"57124.3446.5\n"
"271673315.36\n"
"675636648.63\n"
".85355335443\n"
"615.17262315\n"
"5246..25.2.3\n"
"456142531665\n"
"74471812.23.\n"
"37.752422428\n"
"5..26.111153\n"
".1866442..26\n"
"48.28135325.\n"
"17658251.38.\n") == 0);
free(board668334969);
board668334969 = NULL;
assert( gamma_move(board, 8, 11, 11) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );


char* board384972261 = gamma_board(board);
assert( board384972261 != NULL );
assert( strcmp(board384972261, 
"5.5..68.2.87\n"
"57124.3446.5\n"
"271673315.36\n"
"675636648.63\n"
".85355335443\n"
"615.17262315\n"
"5246..25.2.3\n"
"456142531665\n"
"74471812.23.\n"
"37.752422428\n"
"5..26.111153\n"
".1866442..26\n"
"48.28135325.\n"
"17658251.38.\n") == 0);
free(board384972261);
board384972261 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_golden_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );


char* board349567710 = gamma_board(board);
assert( board349567710 != NULL );
assert( strcmp(board349567710, 
"5.5..68.2.87\n"
"57124.3446.5\n"
"271673315.36\n"
"675636648.63\n"
".85355335443\n"
"615.17262315\n"
"5246..2562.3\n"
"456142531665\n"
"74471812.23.\n"
"37.752422428\n"
"5..26.111153\n"
"41866442..26\n"
"48528135325.\n"
"17658251.38.\n") == 0);
free(board349567710);
board349567710 = NULL;
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );


char* board876930657 = gamma_board(board);
assert( board876930657 != NULL );
assert( strcmp(board876930657, 
"5.5..6842187\n"
"57124.3446.5\n"
"271673315.36\n"
"675636648.63\n"
".85355335443\n"
"615.17262315\n"
"5246..2562.3\n"
"456142531665\n"
"74471812.23.\n"
"37.752422428\n"
"53.26.111153\n"
"41866442..26\n"
"48528135325.\n"
"17658251.38.\n") == 0);
free(board876930657);
board876930657 = NULL;
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_golden_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 10) == 1 );
assert( gamma_golden_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board478066534 = gamma_board(board);
assert( board478066534 != NULL );
assert( strcmp(board478066534, 
"5.5..6842187\n"
"57124.3446.5\n"
"271673315.36\n"
"275636648.63\n"
".85355335443\n"
"615.17262315\n"
"5246.62562.3\n"
"456142531665\n"
"74471812.23.\n"
"37.752422428\n"
"53.26.111153\n"
"41866442..26\n"
"48528135325.\n"
"17658251.38.\n") == 0);
free(board478066534);
board478066534 = NULL;
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 10, 9) == 0 );


gamma_delete(board);

    return 0;
}
