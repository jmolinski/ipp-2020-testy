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
uuid: 205975013
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 63 );


char* board773356145 = gamma_board(board);
assert( board773356145 != NULL );
assert( strcmp(board773356145, 
"..7..76.15\n"
"...11.....\n"
"5.2...53.2\n"
"3.....463.\n"
".....3..2.\n"
".5........\n"
".3...11...\n"
"1.2.52..5.\n"
"1276.1.14.\n"
".46...2...\n") == 0);
free(board773356145);
board773356145 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board678791226 = gamma_board(board);
assert( board678791226 != NULL );
assert( strcmp(board678791226, 
"..7..76.15\n"
"...11.3...\n"
"572.6.53.2\n"
"36....463.\n"
".....3..2.\n"
".5...23126\n"
".3...11..2\n"
"172.52..5.\n"
"1276.1.14.\n"
"446.462...\n") == 0);
free(board678791226);
board678791226 = NULL;
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board622068551 = gamma_board(board);
assert( board622068551 != NULL );
assert( strcmp(board622068551, 
"..7..76.15\n"
"...11.3...\n"
"572.6.53.2\n"
"36....463.\n"
".....3..2.\n"
".5...23126\n"
".3...11..2\n"
"172.52..5.\n"
"1276.1.14.\n"
"446.462...\n") == 0);
free(board622068551);
board622068551 = NULL;
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_golden_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );


char* board182547881 = gamma_board(board);
assert( board182547881 != NULL );
assert( strcmp(board182547881, 
".77..76.15\n"
"...11.3...\n"
"572.6.53.2\n"
"36....463.\n"
".....36.2.\n"
".5...23126\n"
"43...11..2\n"
"172.525.5.\n"
"1276.1.14.\n"
"446.462.3.\n") == 0);
free(board182547881);
board182547881 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 15 );


char* board590941499 = gamma_board(board);
assert( board590941499 != NULL );
assert( strcmp(board590941499, 
".77..76.15\n"
"...11.3...\n"
"572.6.53.2\n"
"36....463.\n"
"..7..36.2.\n"
".5...23126\n"
"43...11..2\n"
"172.525.5.\n"
"1276.1.14.\n"
"446.462.3.\n") == 0);
free(board590941499);
board590941499 = NULL;
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );


char* board462579356 = gamma_board(board);
assert( board462579356 != NULL );
assert( strcmp(board462579356, 
"5774.76315\n"
"...11.3.7.\n"
"572.645332\n"
"36..6.463.\n"
"..73.36.2.\n"
".5.1123126\n"
"4321.117.2\n"
"172.525.5.\n"
"1276.1.14.\n"
"446.462.3.\n") == 0);
free(board462579356);
board462579356 = NULL;
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );


char* board284171998 = gamma_board(board);
assert( board284171998 != NULL );
assert( strcmp(board284171998, 
"5774576315\n"
"...11.3.7.\n"
"572.645332\n"
"36..64463.\n"
"..73.36.2.\n"
".5.1123126\n"
"43215117.2\n"
"172.525.5.\n"
"1276.1.14.\n"
"446.46223.\n") == 0);
free(board284171998);
board284171998 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );


char* board342586457 = gamma_board(board);
assert( board342586457 != NULL );
assert( strcmp(board342586457, 
"5774576315\n"
"...11.3.7.\n"
"572.645332\n"
"36.364463.\n"
"..73.36.2.\n"
".5.1123126\n"
"43215117.2\n"
"172.525.5.\n"
"1276.1.14.\n"
"446.46223.\n") == 0);
free(board342586457);
board342586457 = NULL;
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );


char* board943117229 = gamma_board(board);
assert( board943117229 != NULL );
assert( strcmp(board943117229, 
"5774576315\n"
"...11.3.7.\n"
"572.645332\n"
"36.364463.\n"
"..73.36.2.\n"
".5.1123126\n"
"43215117.2\n"
"172.525.5.\n"
"1276.1.14.\n"
"446.46223.\n") == 0);
free(board943117229);
board943117229 = NULL;
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );


char* board610199465 = gamma_board(board);
assert( board610199465 != NULL );
assert( strcmp(board610199465, 
"5774576315\n"
"1..11.3.7.\n"
"572.645332\n"
"36.364463.\n"
"..73.36.2.\n"
".5.1123126\n"
"43215117.2\n"
"172.525.5.\n"
"1276.1.14.\n"
"446.46223.\n") == 0);
free(board610199465);
board610199465 = NULL;
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_golden_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );


char* board537801009 = gamma_board(board);
assert( board537801009 != NULL );
assert( strcmp(board537801009, 
"5772576315\n"
"1..11.3.7.\n"
"572.645332\n"
"36.364463.\n"
"..73.36.2.\n"
".5.1123126\n"
"43215117.6\n"
"172.52515.\n"
"1276.1.14.\n"
"446.46723.\n") == 0);
free(board537801009);
board537801009 = NULL;
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 3) == 0 );


char* board441168417 = gamma_board(board);
assert( board441168417 != NULL );
assert( strcmp(board441168417, 
"5772576315\n"
"1..11.3.77\n"
"572.645332\n"
"36.364463.\n"
"..73.36.2.\n"
".5.1123126\n"
"43215117.6\n"
"172.52515.\n"
"1276.1.14.\n"
"446.46723.\n") == 0);
free(board441168417);
board441168417 = NULL;
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 22 );


gamma_delete(board);

    return 0;
}
