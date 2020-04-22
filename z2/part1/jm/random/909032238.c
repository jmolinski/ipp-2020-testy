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
uuid: 909032238
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 8, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_free_fields(board, 7) == 77 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 64 );


char* board931077734 = gamma_board(board);
assert( board931077734 != NULL );
assert( strcmp(board931077734, 
"378...2..2..\n"
"....52......\n"
"45.16...36.7\n"
"4.3.4..5....\n"
"4..716...5..\n"
"......81....\n"
"..8.4.3.....\n"
"..6..36..7..\n") == 0);
free(board931077734);
board931077734 = NULL;
assert( gamma_move(board, 6, 10, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board445792422 = gamma_board(board);
assert( board445792422 != NULL );
assert( strcmp(board445792422, 
"378...2..2..\n"
"....52.2..61\n"
"45.16...36.7\n"
"413.4..5.5..\n"
"4..716...5..\n"
"......81....\n"
"..8.4.3.....\n"
"..63.36..7..\n") == 0);
free(board445792422);
board445792422 = NULL;
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );


char* board578644222 = gamma_board(board);
assert( board578644222 != NULL );
assert( strcmp(board578644222, 
"378...2..2..\n"
"....52.2..61\n"
"45.167..36.7\n"
"413.4..5.5..\n"
"4..716...5..\n"
"......81....\n"
"..8.4.3.....\n"
"..63.36..7..\n") == 0);
free(board578644222);
board578644222 = NULL;
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 54 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_free_fields(board, 7) == 53 );
assert( gamma_golden_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 4) == 1 );


char* board228871195 = gamma_board(board);
assert( board228871195 != NULL );
assert( strcmp(board228871195, 
"3783..2..2..\n"
".7..52.24.61\n"
"45.167..36.7\n"
"413.1..5.5..\n"
"4..716...5.8\n"
"......81....\n"
"..814.3.....\n"
".263.36..7..\n") == 0);
free(board228871195);
board228871195 = NULL;
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );


char* board115025062 = gamma_board(board);
assert( board115025062 != NULL );
assert( strcmp(board115025062, 
"3783.42..2..\n"
".7.552.24.61\n"
"45.167..36.7\n"
"413.1..5.5..\n"
"4..716...5.8\n"
"....6.81.3..\n"
".1814.3.6...\n"
".263.36.57..\n") == 0);
free(board115025062);
board115025062 = NULL;
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );


char* board145254820 = gamma_board(board);
assert( board145254820 != NULL );
assert( strcmp(board145254820, 
"3783742..2..\n"
".77552.24.61\n"
"4557672.36.7\n"
"413.1..5.5..\n"
"4..716.8.5.8\n"
"....6.81.3..\n"
".1814.3.6...\n"
".263.36.57..\n") == 0);
free(board145254820);
board145254820 = NULL;
assert( gamma_golden_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );


char* board835437212 = gamma_board(board);
assert( board835437212 != NULL );
assert( strcmp(board835437212, 
"3783742..2.3\n"
".77552.24.61\n"
"4557672.3657\n"
"413.1..5.5..\n"
"4..71678.5.8\n"
"....6.88.3..\n"
".1814.3.6...\n"
".263.36.57..\n") == 0);
free(board835437212);
board835437212 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board915029483 = gamma_board(board);
assert( board915029483 != NULL );
assert( strcmp(board915029483, 
"3783742..2.3\n"
".77552.24.61\n"
"4557672.3657\n"
"413.1..5.5..\n"
"4..71678.5.8\n"
"....6.88.3..\n"
".1814.3.6...\n"
".263.36457..\n") == 0);
free(board915029483);
board915029483 = NULL;
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 35 );


char* board600223634 = gamma_board(board);
assert( board600223634 != NULL );
assert( strcmp(board600223634, 
"3783742..2.3\n"
".77552.24.61\n"
"4557672.3657\n"
"413.1..5.5..\n"
"4..71678.5.8\n"
"....6.88.3..\n"
".1814.3.6...\n"
".263.36457..\n") == 0);
free(board600223634);
board600223634 = NULL;
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 6 );


char* board617821080 = gamma_board(board);
assert( board617821080 != NULL );
assert( strcmp(board617821080, 
"37837427.2.3\n"
"677552.24.61\n"
"4557672.3657\n"
"433.1..5.5..\n"
"4..71678.5.8\n"
"...56.88.3..\n"
".1814.3.63..\n"
".263.36457..\n") == 0);
free(board617821080);
board617821080 = NULL;
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 8) == 30 );


char* board840614094 = gamma_board(board);
assert( board840614094 != NULL );
assert( strcmp(board840614094, 
"37837427.2.3\n"
"677552.24.61\n"
"4557672.3657\n"
"433.1.85.5..\n"
"4..71678.5.8\n"
"...56.88.3..\n"
".1814.3.63..\n"
".263.36457..\n") == 0);
free(board840614094);
board840614094 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_free_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_free_fields(board, 8) == 26 );


char* board259427321 = gamma_board(board);
assert( board259427321 != NULL );
assert( strcmp(board259427321, 
"3783742782.3\n"
"677552.24.61\n"
"4557672.3657\n"
"43351.85.5.5\n"
"4..7167825.8\n"
"...56.88.3..\n"
".1814.3.63..\n"
".263.36457..\n") == 0);
free(board259427321);
board259427321 = NULL;
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 9, 4) == 0 );


char* board446683580 = gamma_board(board);
assert( board446683580 != NULL );
assert( strcmp(board446683580, 
"3783742782.3\n"
"677552.24.61\n"
"4557672.3657\n"
"43351.85.5.5\n"
"4..7167825.8\n"
"...56.88.3..\n"
".1814.3.63..\n"
".263.36457..\n") == 0);
free(board446683580);
board446683580 = NULL;
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_golden_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );


char* board455561995 = gamma_board(board);
assert( board455561995 != NULL );
assert( strcmp(board455561995, 
"3783742782.3\n"
"677552.24.61\n"
"4557672.3657\n"
"43351.85.5.5\n"
"4..7167825.8\n"
"..456.88.3..\n"
".1814.3.63..\n"
".263.36457..\n") == 0);
free(board455561995);
board455561995 = NULL;
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 11 );


char* board943608525 = gamma_board(board);
assert( board943608525 != NULL );
assert( strcmp(board943608525, 
"3783742782.3\n"
"677552.24.61\n"
"4557672.3657\n"
"43351.85.5.5\n"
"4..7167825.8\n"
"..456.88.3..\n"
".1814.3.63..\n"
".263.36457..\n") == 0);
free(board943608525);
board943608525 = NULL;
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );


char* board574499088 = gamma_board(board);
assert( board574499088 != NULL );
assert( strcmp(board574499088, 
"3783742782.3\n"
"677552.24.61\n"
"4557672.3657\n"
"43351.85.5.5\n"
"4..7167825.8\n"
"..456.88.3..\n"
".1814.3.63..\n"
".263.36457..\n") == 0);
free(board574499088);
board574499088 = NULL;
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 22 );


char* board718200771 = gamma_board(board);
assert( board718200771 != NULL );
assert( strcmp(board718200771, 
"3783742782.3\n"
"677552.24.61\n"
"455767213657\n"
"43351.85.5.5\n"
"4..7167825.8\n"
"..456.88.3..\n"
"81814.3.638.\n"
".263.36457..\n") == 0);
free(board718200771);
board718200771 = NULL;
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_golden_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );


char* board943143266 = gamma_board(board);
assert( board943143266 != NULL );
assert( strcmp(board943143266, 
"378374278243\n"
"677552.24.61\n"
"455767213657\n"
"43351685.5.5\n"
"4..7127825.8\n"
"..456.88.34.\n"
"81814.3.638.\n"
".263.36457..\n") == 0);
free(board943143266);
board943143266 = NULL;
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
