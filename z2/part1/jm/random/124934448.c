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
uuid: 124934448
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );


char* board600370441 = gamma_board(board);
assert( board600370441 != NULL );
assert( strcmp(board600370441, 
".......\n"
".......\n"
".....6.\n"
"...51.6\n"
".......\n"
".......\n"
"...7.4.\n"
"...25.4\n"
".......\n") == 0);
free(board600370441);
board600370441 = NULL;
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );


char* board122152954 = gamma_board(board);
assert( board122152954 != NULL );
assert( strcmp(board122152954, 
".......\n"
".......\n"
".....6.\n"
"2..51.6\n"
".......\n"
".......\n"
"...7.4.\n"
"...25.4\n"
"..1...1\n") == 0);
free(board122152954);
board122152954 = NULL;
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );


char* board805645182 = gamma_board(board);
assert( board805645182 != NULL );
assert( strcmp(board805645182, 
".......\n"
".......\n"
".....6.\n"
"2..51.6\n"
"..6....\n"
".......\n"
"...7.4.\n"
"3..2564\n"
"..1...1\n") == 0);
free(board805645182);
board805645182 = NULL;
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board895680524 = gamma_board(board);
assert( board895680524 != NULL );
assert( strcmp(board895680524, 
"73.8...\n"
"5.15..2\n"
".1.5464\n"
"2..5176\n"
"7462..7\n"
"8..31..\n"
"7827343\n"
"3.72564\n"
"1.1...1\n") == 0);
free(board895680524);
board895680524 = NULL;
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_free_fields(board, 8) == 21 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );


char* board558433419 = gamma_board(board);
assert( board558433419 != NULL );
assert( strcmp(board558433419, 
"73.8...\n"
"5.15..2\n"
".1.5464\n"
"2..5176\n"
"7462..7\n"
"8.531..\n"
"7827343\n"
"3772564\n"
"1.1..71\n") == 0);
free(board558433419);
board558433419 = NULL;
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 18 );


char* board663819976 = gamma_board(board);
assert( board663819976 != NULL );
assert( strcmp(board663819976, 
"73.88..\n"
"5.15..2\n"
".1.5464\n"
"2..5176\n"
"7462..7\n"
"8.531..\n"
"7827343\n"
"3772564\n"
"1.1..71\n") == 0);
free(board663819976);
board663819976 = NULL;
assert( gamma_move(board, 1, 6, 0) == 0 );


char* board233014041 = gamma_board(board);
assert( board233014041 != NULL );
assert( strcmp(board233014041, 
"73.88..\n"
"5.15..2\n"
".1.5464\n"
"2..5176\n"
"7462..7\n"
"8.531..\n"
"7827343\n"
"3772564\n"
"1.1..71\n") == 0);
free(board233014041);
board233014041 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_free_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );


char* board127982618 = gamma_board(board);
assert( board127982618 != NULL );
assert( strcmp(board127982618, 
"73388..\n"
"57152.2\n"
"86.5464\n"
"2.65176\n"
"7462417\n"
"8.531..\n"
"7827343\n"
"3712564\n"
"1.15.71\n") == 0);
free(board127982618);
board127982618 = NULL;
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_free_fields(board, 7) == 3 );


char* board417366226 = gamma_board(board);
assert( board417366226 != NULL );
assert( strcmp(board417366226, 
"73388..\n"
"57152.2\n"
"86.5464\n"
"2.65176\n"
"7462417\n"
"8.5318.\n"
"7827343\n"
"3712564\n"
"1.15.71\n") == 0);
free(board417366226);
board417366226 = NULL;
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );


gamma_delete(board);

    return 0;
}
