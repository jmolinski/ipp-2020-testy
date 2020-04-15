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
uuid: 126110095
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 14, 8, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_free_fields(board, 7) == 92 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_golden_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_golden_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_golden_move(board, 7, 9, 5) == 0 );


char* board886238265 = gamma_board(board);
assert( board886238265 != NULL );
assert( strcmp(board886238265, 
".......\n"
"..3....\n"
"...4...\n"
".......\n"
".....4.\n"
".......\n"
".7.2...\n"
".......\n"
".7.....\n"
".51....\n"
"8......\n"
"...7...\n"
".8..5..\n"
"..2.1..\n") == 0);
free(board886238265);
board886238265 = NULL;
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_golden_move(board, 8, 4, 0) == 0 );


char* board719386101 = gamma_board(board);
assert( board719386101 != NULL );
assert( strcmp(board719386101, 
".......\n"
".83....\n"
"...48..\n"
"..4...1\n"
".....4.\n"
"...6...\n"
"17.2...\n"
"......3\n"
".741.56\n"
"351....\n"
"8......\n"
"..47...\n"
".8..5..\n"
"772.1..\n") == 0);
free(board719386101);
board719386101 = NULL;
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 1, 13) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_free_fields(board, 8) == 55 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );


char* board390677605 = gamma_board(board);
assert( board390677605 != NULL );
assert( strcmp(board390677605, 
"58.411.\n"
"183.7.4\n"
".3.48..\n"
".64..21\n"
".....41\n"
"..36...\n"
"1742.45\n"
"...73.3\n"
".741.56\n"
"351763.\n"
"8356...\n"
"..47...\n"
".578544\n"
"77211.2\n") == 0);
free(board390677605);
board390677605 = NULL;
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );


char* board102565995 = gamma_board(board);
assert( board102565995 != NULL );
assert( strcmp(board102565995, 
"58.411.\n"
"18347.4\n"
".3.48..\n"
".64..21\n"
".....41\n"
"..36...\n"
"1742.45\n"
"...73.3\n"
"3741.56\n"
"351763.\n"
"8356...\n"
"6.47...\n"
".578544\n"
"77211.2\n") == 0);
free(board102565995);
board102565995 = NULL;
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );


char* board525230405 = gamma_board(board);
assert( board525230405 != NULL );
assert( strcmp(board525230405, 
"58.411.\n"
"18347.4\n"
".3.48..\n"
".64..21\n"
".....41\n"
"..36...\n"
"1742.45\n"
"...73.3\n"
"3741.56\n"
"351763.\n"
"8356...\n"
"6.47...\n"
".578544\n"
"77211.2\n") == 0);
free(board525230405);
board525230405 = NULL;
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );


char* board318796443 = gamma_board(board);
assert( board318796443 != NULL );
assert( strcmp(board318796443, 
"58.411.\n"
"18347.4\n"
".3.48..\n"
".64..21\n"
".....41\n"
"..36...\n"
"1742.45\n"
"...73.3\n"
"3741.56\n"
"351763.\n"
"8356...\n"
"6.47...\n"
".578544\n"
"7721182\n") == 0);
free(board318796443);
board318796443 = NULL;
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_golden_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 8, 2, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board504404348 = gamma_board(board);
assert( board504404348 != NULL );
assert( strcmp(board504404348, 
"5884113\n"
"18347.4\n"
"73.48..\n"
"864..21\n"
"35.6.41\n"
"..36.7.\n"
"1742.45\n"
"...73.3\n"
"3741.56\n"
"351763.\n"
"8356..5\n"
"6.47...\n"
".578544\n"
"7721172\n") == 0);
free(board504404348);
board504404348 = NULL;
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );


char* board745057565 = gamma_board(board);
assert( board745057565 != NULL );
assert( strcmp(board745057565, 
"5884113\n"
"18347.4\n"
"73.48..\n"
"864..21\n"
"35.6.41\n"
"..36.7.\n"
"1742.45\n"
"...73.3\n"
"3741.56\n"
"351763.\n"
"8356..5\n"
"6.47...\n"
".578544\n"
"7721172\n") == 0);
free(board745057565);
board745057565 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_golden_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );


char* board183465605 = gamma_board(board);
assert( board183465605 != NULL );
assert( strcmp(board183465605, 
"5884113\n"
"18347.4\n"
"7324864\n"
"8645.21\n"
"3566241\n"
".33627.\n"
"1742.45\n"
"...73.3\n"
"3741656\n"
"351763.\n"
"8356..5\n"
"6.477.1\n"
".578544\n"
"7721172\n") == 0);
free(board183465605);
board183465605 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );


gamma_delete(board);

    return 0;
}
