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
uuid: 404971929
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 10, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );


char* board695034129 = gamma_board(board);
assert( board695034129 != NULL );
assert( strcmp(board695034129, 
"1.2..\n"
".8...\n"
"3.57.\n"
".52..\n"
".9..6\n"
"1..57\n"
"9...4\n"
".534.\n"
"3....\n"
"9....\n") == 0);
free(board695034129);
board695034129 = NULL;
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_free_fields(board, 1) == 25 );


char* board114521046 = gamma_board(board);
assert( board114521046 != NULL );
assert( strcmp(board114521046, 
"112..\n"
"48...\n"
"3.57.\n"
".52..\n"
".9..6\n"
"1.657\n"
"9...4\n"
".534.\n"
"38..5\n"
"9....\n") == 0);
free(board114521046);
board114521046 = NULL;
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );


char* board889233079 = gamma_board(board);
assert( board889233079 != NULL );
assert( strcmp(board889233079, 
"112..\n"
"48...\n"
"3.573\n"
".52..\n"
".9..6\n"
"1.657\n"
"9...4\n"
".534.\n"
"38..5\n"
"9....\n") == 0);
free(board889233079);
board889233079 = NULL;
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_golden_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_free_fields(board, 7) == 19 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );


char* board529598412 = gamma_board(board);
assert( board529598412 != NULL );
assert( strcmp(board529598412, 
"112..\n"
"484..\n"
"3.573\n"
".526.\n"
".9..6\n"
"1.657\n"
"9..54\n"
".5346\n"
"38.45\n"
"9.9..\n") == 0);
free(board529598412);
board529598412 = NULL;
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_free_fields(board, 8) == 16 );
assert( gamma_golden_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_golden_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board609636975 = gamma_board(board);
assert( board609636975 != NULL );
assert( strcmp(board609636975, 
"112..\n"
"4844.\n"
"36573\n"
"6526.\n"
".9..6\n"
"1.657\n"
"98454\n"
".5346\n"
"38.49\n"
"919..\n") == 0);
free(board609636975);
board609636975 = NULL;
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );


gamma_delete(board);

    return 0;
}
