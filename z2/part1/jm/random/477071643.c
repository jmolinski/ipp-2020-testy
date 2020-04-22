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
uuid: 477071643
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );


char* board350721460 = gamma_board(board);
assert( board350721460 != NULL );
assert( strcmp(board350721460, 
"..17......\n"
"..53.....3\n"
".58.......\n"
"6.1.5..5..\n"
"..........\n"
"46....6...\n") == 0);
free(board350721460);
board350721460 = NULL;
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_free_fields(board, 2) == 33 );


char* board804634273 = gamma_board(board);
assert( board804634273 != NULL );
assert( strcmp(board804634273, 
"6.179.....\n"
"6.53.....3\n"
".58.79....\n"
"691.51.5..\n"
"88...1.3..\n"
"463...6..5\n") == 0);
free(board804634273);
board804634273 = NULL;
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board783126850 = gamma_board(board);
assert( board783126850 != NULL );
assert( strcmp(board783126850, 
"6.179.....\n"
"6.53.....3\n"
"858.79....\n"
"691.51.5.6\n"
"88.5.1.3..\n"
"463...6..5\n") == 0);
free(board783126850);
board783126850 = NULL;
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 5, 6) == 0 );


char* board605073641 = gamma_board(board);
assert( board605073641 != NULL );
assert( strcmp(board605073641, 
"6.179.....\n"
"6.53.....3\n"
"858.79..1.\n"
"691.51.5.6\n"
"88.5.1.3..\n"
"463...6..5\n") == 0);
free(board605073641);
board605073641 = NULL;
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );


char* board277086089 = gamma_board(board);
assert( board277086089 != NULL );
assert( strcmp(board277086089, 
"6.179.....\n"
"6.53.....3\n"
"858.79..1.\n"
"691.51.5.6\n"
"88.5.1.3..\n"
"463...6..5\n") == 0);
free(board277086089);
board277086089 = NULL;
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_golden_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_golden_move(board, 3, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_free_fields(board, 9) == 14 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_golden_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );


char* board188417999 = gamma_board(board);
assert( board188417999 != NULL );
assert( strcmp(board188417999, 
"6.139736.4\n"
"65535.5683\n"
"8586794.1.\n"
"69185165.6\n"
"88.53173.7\n"
"463...6.15\n") == 0);
free(board188417999);
board188417999 = NULL;
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board903054367 = gamma_board(board);
assert( board903054367 != NULL );
assert( strcmp(board903054367, 
"6.139736.4\n"
"65535.5683\n"
"8586794.1.\n"
"69185165.6\n"
"88.53173.7\n"
"463...6.15\n") == 0);
free(board903054367);
board903054367 = NULL;
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 12 );


gamma_delete(board);

    return 0;
}
