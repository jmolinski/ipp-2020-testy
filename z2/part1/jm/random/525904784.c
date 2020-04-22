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
uuid: 525904784
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board981768664 = gamma_board(board);
assert( board981768664 != NULL );
assert( strcmp(board981768664, 
".......2.\n"
"......2..\n"
"..34.....\n"
".........\n"
".........\n"
".........\n"
"..1...1..\n"
"4........\n") == 0);
free(board981768664);
board981768664 = NULL;
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );


char* board552035176 = gamma_board(board);
assert( board552035176 != NULL );
assert( strcmp(board552035176, 
"...5.2.2.\n"
"....22255\n"
".134.3...\n"
"51..5.3..\n"
"...26..43\n"
"3.45.....\n"
"..1...1.2\n"
"4.52.3416\n") == 0);
free(board552035176);
board552035176 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );


char* board680912526 = gamma_board(board);
assert( board680912526 != NULL );
assert( strcmp(board680912526, 
".35562426\n"
"..4422255\n"
".134.31.4\n"
"51155.3..\n"
"...262343\n"
"3.45.2.6.\n"
".415.31.2\n"
"1.52.3416\n") == 0);
free(board680912526);
board680912526 = NULL;
assert( gamma_move(board, 3, 8, 7) == 0 );


char* board108637815 = gamma_board(board);
assert( board108637815 != NULL );
assert( strcmp(board108637815, 
".35562426\n"
"..4422255\n"
".134.31.4\n"
"51155.3..\n"
"...262343\n"
"3.45.2.6.\n"
".415.31.2\n"
"1.52.3416\n") == 0);
free(board108637815);
board108637815 = NULL;
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );


char* board637970733 = gamma_board(board);
assert( board637970733 != NULL );
assert( strcmp(board637970733, 
"635562426\n"
".34422255\n"
".134.31.4\n"
"5115513..\n"
"...262343\n"
"3.45.2.6.\n"
".415.31.2\n"
"1.52.3416\n") == 0);
free(board637970733);
board637970733 = NULL;
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );


char* board349232435 = gamma_board(board);
assert( board349232435 != NULL );
assert( strcmp(board349232435, 
"635562426\n"
".34422255\n"
"5134.31.4\n"
"5115513..\n"
"...262343\n"
"3.45.2.6.\n"
".415.31.2\n"
"1.52.3416\n") == 0);
free(board349232435);
board349232435 = NULL;
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_free_fields(board, 2) == 16 );


char* board647696947 = gamma_board(board);
assert( board647696947 != NULL );
assert( strcmp(board647696947, 
"635562426\n"
".34422255\n"
"5134.31.4\n"
"5115513..\n"
"...262343\n"
"3.45.2.6.\n"
".415.31.2\n"
"1.5253416\n") == 0);
free(board647696947);
board647696947 = NULL;
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
