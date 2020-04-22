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
uuid: 190122966
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(4, 9, 6, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );


char* board216199745 = gamma_board(board);
assert( board216199745 != NULL );
assert( strcmp(board216199745, 
"....\n"
"1...\n"
".33.\n"
"..2.\n"
"....\n"
".3..\n"
"..2.\n"
".4..\n"
".5..\n") == 0);
free(board216199745);
board216199745 = NULL;
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_golden_move(board, 1, 7, 0) == 0 );


char* board569360599 = gamma_board(board);
assert( board569360599 != NULL );
assert( strcmp(board569360599, 
"..4.\n"
"1..5\n"
"533.\n"
"..23\n"
"..4.\n"
".36.\n"
"..2.\n"
".46.\n"
"55..\n") == 0);
free(board569360599);
board569360599 = NULL;
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );


char* board233013974 = gamma_board(board);
assert( board233013974 != NULL );
assert( strcmp(board233013974, 
"..4.\n"
"1..5\n"
"533.\n"
"..23\n"
"..4.\n"
".36.\n"
"..2.\n"
".46.\n"
"55..\n") == 0);
free(board233013974);
board233013974 = NULL;
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );


char* board799351278 = gamma_board(board);
assert( board799351278 != NULL );
assert( strcmp(board799351278, 
"..4.\n"
"1..5\n"
"533.\n"
"..23\n"
"..4.\n"
".362\n"
"..26\n"
".46.\n"
"55.1\n") == 0);
free(board799351278);
board799351278 = NULL;
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_free_fields(board, 1) == 4 );


char* board390379745 = gamma_board(board);
assert( board390379745 != NULL );
assert( strcmp(board390379745, 
"..41\n"
"1.45\n"
"533.\n"
"..23\n"
"..4.\n"
".362\n"
"..26\n"
".46.\n"
"55.1\n") == 0);
free(board390379745);
board390379745 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );


char* board115000324 = gamma_board(board);
assert( board115000324 != NULL );
assert( strcmp(board115000324, 
"..41\n"
"1.45\n"
"533.\n"
"5323\n"
"..43\n"
".362\n"
"..26\n"
".46.\n"
"55.1\n") == 0);
free(board115000324);
board115000324 = NULL;


char* board441398915 = gamma_board(board);
assert( board441398915 != NULL );
assert( strcmp(board441398915, 
"..41\n"
"1.45\n"
"533.\n"
"5323\n"
"..43\n"
".362\n"
"..26\n"
".46.\n"
"55.1\n") == 0);
free(board441398915);
board441398915 = NULL;
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );


char* board530251350 = gamma_board(board);
assert( board530251350 != NULL );
assert( strcmp(board530251350, 
"..41\n"
"1.45\n"
"533.\n"
"5323\n"
"..43\n"
".362\n"
"..26\n"
".46.\n"
"55.1\n") == 0);
free(board530251350);
board530251350 = NULL;
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );


char* board338632050 = gamma_board(board);
assert( board338632050 != NULL );
assert( strcmp(board338632050, 
"..41\n"
"1.45\n"
"533.\n"
"5323\n"
"..43\n"
".362\n"
"..26\n"
".46.\n"
"55.1\n") == 0);
free(board338632050);
board338632050 = NULL;
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
