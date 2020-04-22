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
uuid: 194444562
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 5, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_move(board, 1, 8, 0) == 0 );


char* board640118006 = gamma_board(board);
assert( board640118006 != NULL );
assert( strcmp(board640118006, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".1....\n"
"......\n"
"......\n"
"......\n") == 0);
free(board640118006);
board640118006 = NULL;


char* board545303851 = gamma_board(board);
assert( board545303851 != NULL );
assert( strcmp(board545303851, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".1....\n"
"......\n"
"......\n"
"......\n") == 0);
free(board545303851);
board545303851 = NULL;
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board178663346 = gamma_board(board);
assert( board178663346 != NULL );
assert( strcmp(board178663346, 
"......\n"
"......\n"
"......\n"
"...4..\n"
"......\n"
"......\n"
"......\n"
".1....\n"
"......\n"
"......\n"
"..4...\n") == 0);
free(board178663346);
board178663346 = NULL;
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );


char* board989168943 = gamma_board(board);
assert( board989168943 != NULL );
assert( strcmp(board989168943, 
"......\n"
"......\n"
"......\n"
"...4..\n"
"......\n"
"......\n"
"....1.\n"
".1....\n"
"......\n"
"......\n"
"..4...\n") == 0);
free(board989168943);
board989168943 = NULL;
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );


char* board356781711 = gamma_board(board);
assert( board356781711 != NULL );
assert( strcmp(board356781711, 
".2....\n"
"2.....\n"
".3....\n"
"...4..\n"
"...2.5\n"
"..52.1\n"
"..211.\n"
".1.1.3\n"
"...4..\n"
"..3...\n"
"5.445.\n") == 0);
free(board356781711);
board356781711 = NULL;
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 0, 0) == 0 );


char* board182931170 = gamma_board(board);
assert( board182931170 != NULL );
assert( strcmp(board182931170, 
".2....\n"
"2.4.1.\n"
".3....\n"
"...4.2\n"
"...2.5\n"
"..52.1\n"
"..2115\n"
".1.1.3\n"
"...4..\n"
"..3.3.\n"
"55445.\n") == 0);
free(board182931170);
board182931170 = NULL;
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_golden_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board770587194 = gamma_board(board);
assert( board770587194 != NULL );
assert( strcmp(board770587194, 
".2....\n"
"2.4.1.\n"
"231...\n"
"...4.2\n"
"...2.5\n"
"..52.1\n"
"1.2115\n"
"51.1.3\n"
"..14..\n"
".23.3.\n"
"55445.\n") == 0);
free(board770587194);
board770587194 = NULL;
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_golden_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );


char* board831086298 = gamma_board(board);
assert( board831086298 != NULL );
assert( strcmp(board831086298, 
".23...\n"
"2.4.1.\n"
"2311.5\n"
"...4.2\n"
"...2.5\n"
"3.5231\n"
"1.2115\n"
"51.1.1\n"
"..24..\n"
".23.3.\n"
"55445.\n") == 0);
free(board831086298);
board831086298 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board935380989 = gamma_board(board);
assert( board935380989 != NULL );
assert( strcmp(board935380989, 
".23...\n"
"2.4.15\n"
"2311.5\n"
"...4.2\n"
"...2.5\n"
"3.5231\n"
"1.2115\n"
"515131\n"
"..24..\n"
".23.3.\n"
"55445.\n") == 0);
free(board935380989);
board935380989 = NULL;
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );


char* board197825679 = gamma_board(board);
assert( board197825679 != NULL );
assert( strcmp(board197825679, 
".23...\n"
"2.4.15\n"
"2311.5\n"
"...452\n"
"...2.5\n"
"3.5231\n"
"1.2115\n"
"515131\n"
"..24..\n"
".23.3.\n"
"55445.\n") == 0);
free(board197825679);
board197825679 = NULL;
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );


char* board201752785 = gamma_board(board);
assert( board201752785 != NULL );
assert( strcmp(board201752785, 
"223...\n"
"2.4.15\n"
"231155\n"
"...452\n"
"...2.5\n"
"355231\n"
"142115\n"
"515131\n"
"2.24..\n"
".23.3.\n"
"55445.\n") == 0);
free(board201752785);
board201752785 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_free_fields(board, 1) == 14 );


char* board288020757 = gamma_board(board);
assert( board288020757 != NULL );
assert( strcmp(board288020757, 
"223...\n"
"254.15\n"
"231155\n"
".24452\n"
"...245\n"
"355231\n"
"142115\n"
"515131\n"
"2.24..\n"
".2323.\n"
"55445.\n") == 0);
free(board288020757);
board288020757 = NULL;
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );


char* board134010350 = gamma_board(board);
assert( board134010350 != NULL );
assert( strcmp(board134010350, 
"223...\n"
"254315\n"
"231155\n"
".24452\n"
"...245\n"
"355231\n"
"142115\n"
"515131\n"
"2.242.\n"
".2323.\n"
"55445.\n") == 0);
free(board134010350);
board134010350 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
