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
uuid: 567727236
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 2, 3);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );


char* board830238323 = gamma_board(board);
assert( board830238323 != NULL );
assert( strcmp(board830238323, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board830238323);
board830238323 = NULL;
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 7 );


char* board649997445 = gamma_board(board);
assert( board649997445 != NULL );
assert( strcmp(board649997445, 
".......\n"
".......\n"
"1......\n"
".......\n"
".......\n"
".12...2\n"
"2.1....\n") == 0);
free(board649997445);
board649997445 = NULL;
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board885482326 = gamma_board(board);
assert( board885482326 != NULL );
assert( strcmp(board885482326, 
".......\n"
".......\n"
"1......\n"
".......\n"
".......\n"
".122..2\n"
"2212...\n") == 0);
free(board885482326);
board885482326 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );


char* board344172394 = gamma_board(board);
assert( board344172394 != NULL );
assert( strcmp(board344172394, 
".......\n"
".......\n"
"1......\n"
".......\n"
"......2\n"
".122..2\n"
"2212...\n") == 0);
free(board344172394);
board344172394 = NULL;
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board663791310 = gamma_board(board);
assert( board663791310 != NULL );
assert( strcmp(board663791310, 
".......\n"
"11.....\n"
"1......\n"
"1......\n"
"..22..2\n"
".122..2\n"
"2212...\n") == 0);
free(board663791310);
board663791310 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );


char* board453514125 = gamma_board(board);
assert( board453514125 != NULL );
assert( strcmp(board453514125, 
"...2.1.\n"
"11.....\n"
"1..22.2\n"
"1.2.2..\n"
"..22222\n"
".222222\n"
"22122.2\n") == 0);
free(board453514125);
board453514125 = NULL;


gamma_delete(board);

    return 0;
}
