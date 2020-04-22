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
uuid: 148074483
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 7, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_free_fields(board, 3) == 118 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );


char* board599691828 = gamma_board(board);
assert( board599691828 != NULL );
assert( strcmp(board599691828, 
"...2.......\n"
"..4........\n"
"...........\n"
"...........\n"
"........5..\n"
"......6....\n"
"....41.....\n"
"...........\n"
"...........\n"
".......25..\n"
"...........\n") == 0);
free(board599691828);
board599691828 = NULL;
assert( gamma_move(board, 1, 1, 7) == 1 );


char* board715949719 = gamma_board(board);
assert( board715949719 != NULL );
assert( strcmp(board715949719, 
"...2.......\n"
"..4........\n"
"...........\n"
".1.........\n"
"........5..\n"
"......6....\n"
"....41.....\n"
"...........\n"
"...........\n"
".......25..\n"
"...........\n") == 0);
free(board715949719);
board715949719 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );


char* board107198888 = gamma_board(board);
assert( board107198888 != NULL );
assert( strcmp(board107198888, 
"...2.......\n"
"..4........\n"
"..4........\n"
".1.........\n"
"........5.5\n"
".....66....\n"
"....41.....\n"
"...........\n"
"7..........\n"
".......25..\n"
"...........\n") == 0);
free(board107198888);
board107198888 = NULL;
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );


char* board613883771 = gamma_board(board);
assert( board613883771 != NULL );
assert( strcmp(board613883771, 
"...2.......\n"
"..4........\n"
"..4.....7..\n"
".1..3...7..\n"
".67.....5.5\n"
"..4.6666...\n"
"3...41.3.1.\n"
"3....6..22.\n"
"7.......5..\n"
".......25..\n"
".......55..\n") == 0);
free(board613883771);
board613883771 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );


char* board421800810 = gamma_board(board);
assert( board421800810 != NULL );
assert( strcmp(board421800810, 
"...2.......\n"
"..4........\n"
"..4.....77.\n"
".1..3...7..\n"
".67.....5.5\n"
"..4.6666...\n"
"3...41.3.1.\n"
"3....6..22.\n"
"7.......5..\n"
".......25..\n"
".......55..\n") == 0);
free(board421800810);
board421800810 = NULL;
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board520970381 = gamma_board(board);
assert( board520970381 != NULL );
assert( strcmp(board520970381, 
"...2.......\n"
"..4........\n"
"..4.....77.\n"
".1..3...7..\n"
".67.....5.5\n"
"..4.6666...\n"
"3...41.3.1.\n"
"3....6..22.\n"
"7.......5..\n"
".......25..\n"
".......55..\n") == 0);
free(board520970381);
board520970381 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_free_fields(board, 5) == 9 );


char* board700826649 = gamma_board(board);
assert( board700826649 != NULL );
assert( strcmp(board700826649, 
"..42.......\n"
"..4........\n"
"..4.3...777\n"
".1..3...7..\n"
".67...6.5.5\n"
"..4.66666..\n"
"3.4.41.3.1.\n"
"3....6.322.\n"
"7.......5..\n"
".......25..\n"
".......55..\n") == 0);
free(board700826649);
board700826649 = NULL;
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board470990656 = gamma_board(board);
assert( board470990656 != NULL );
assert( strcmp(board470990656, 
"..42.......\n"
"..4........\n"
".14.3...777\n"
".1..3...7..\n"
".67...6.5.5\n"
"..4.66666..\n"
"3.4.41.3.1.\n"
"3....6.322.\n"
"7.......5..\n"
".......25..\n"
".......55..\n") == 0);
free(board470990656);
board470990656 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );


char* board454798324 = gamma_board(board);
assert( board454798324 != NULL );
assert( strcmp(board454798324, 
"..42.......\n"
"..4........\n"
".14.3...777\n"
".1..3...7..\n"
".67...6.5.5\n"
"..4.66666..\n"
"3.4.41.3.1.\n"
"3....6.322.\n"
"7.......5..\n"
".......25..\n"
".......55..\n") == 0);
free(board454798324);
board454798324 = NULL;
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_golden_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_golden_move(board, 1, 1, 8) == 0 );


char* board665122122 = gamma_board(board);
assert( board665122122 != NULL );
assert( strcmp(board665122122, 
"..42.......\n"
"..4........\n"
".14.3...777\n"
".1..3...7..\n"
".67...6.5.5\n"
"..4.66666..\n"
"3.4.41.3.1.\n"
"3....6.322.\n"
"77......5..\n"
".......255.\n"
".......55..\n") == 0);
free(board665122122);
board665122122 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 9) == 0 );


char* board956875047 = gamma_board(board);
assert( board956875047 != NULL );
assert( strcmp(board956875047, 
"..42.......\n"
"..4........\n"
".14.3...777\n"
".17.3...7..\n"
".67...6.5.5\n"
"..4.66666..\n"
"3.4.41.3.1.\n"
"3....6.322.\n"
"77......5..\n"
".......255.\n"
".......55..\n") == 0);
free(board956875047);
board956875047 = NULL;
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board771060767 = gamma_board(board);
assert( board771060767 != NULL );
assert( strcmp(board771060767, 
"..42.......\n"
"..4........\n"
".14.3...777\n"
".17.3...7..\n"
".67...6.5.5\n"
"..4.66666..\n"
"3.4.41.3.1.\n"
"3....6.322.\n"
"77......5..\n"
".......2555\n"
".......55..\n") == 0);
free(board771060767);
board771060767 = NULL;
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );


char* board402827355 = gamma_board(board);
assert( board402827355 != NULL );
assert( strcmp(board402827355, 
"..42.......\n"
"..4........\n"
".14.3...777\n"
".17.3...7..\n"
".67...6.5.5\n"
"..4.66666..\n"
"3.4.41.3.1.\n"
"3....6.322.\n"
"77......5..\n"
".......2555\n"
".......55..\n") == 0);
free(board402827355);
board402827355 = NULL;
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_golden_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );


gamma_delete(board);

    return 0;
}
