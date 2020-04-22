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
uuid: 192030701
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );


char* board524343610 = gamma_board(board);
assert( board524343610 != NULL );
assert( strcmp(board524343610, 
"...2.1.\n"
"5..1.2.\n"
"5.11.51\n"
".5.3.5.\n"
"....43.\n"
".2..142\n"
"..2....\n") == 0);
free(board524343610);
board524343610 = NULL;
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );


char* board972426639 = gamma_board(board);
assert( board972426639 != NULL );
assert( strcmp(board972426639, 
".322315\n"
"5131.2.\n"
"5.11151\n"
".543.5.\n"
"5554432\n"
"4214142\n"
"..22.35\n") == 0);
free(board972426639);
board972426639 = NULL;
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board659490010 = gamma_board(board);
assert( board659490010 != NULL );
assert( strcmp(board659490010, 
".322315\n"
"5131.2.\n"
"5.11151\n"
".543.5.\n"
"5554432\n"
"4214142\n"
"..22.35\n") == 0);
free(board659490010);
board659490010 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );


char* board196183074 = gamma_board(board);
assert( board196183074 != NULL );
assert( strcmp(board196183074, 
".322315\n"
"5131.2.\n"
"5.11151\n"
".543.5.\n"
"5554432\n"
"4214142\n"
"2.22.35\n") == 0);
free(board196183074);
board196183074 = NULL;
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board611089830 = gamma_board(board);
assert( board611089830 != NULL );
assert( strcmp(board611089830, 
".322315\n"
"5131.2.\n"
"5411151\n"
"4543.5.\n"
"5554432\n"
"4214142\n"
"2.22.35\n") == 0);
free(board611089830);
board611089830 = NULL;
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_golden_move(board, 3, 1, 5) == 1 );


char* board389603534 = gamma_board(board);
assert( board389603534 != NULL );
assert( strcmp(board389603534, 
".322315\n"
"5331.2.\n"
"5411151\n"
"4543.5.\n"
"5554432\n"
"4214142\n"
"2.22.35\n") == 0);
free(board389603534);
board389603534 = NULL;
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
