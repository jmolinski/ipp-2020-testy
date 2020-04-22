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
uuid: 634924106
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 12, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );


char* board835727036 = gamma_board(board);
assert( board835727036 != NULL );
assert( strcmp(board835727036, 
"......\n"
"......\n"
"......\n"
".2.3..\n"
"......\n"
"......\n"
"......\n"
"4....1\n"
"......\n"
"......\n"
"..4...\n"
".....1\n") == 0);
free(board835727036);
board835727036 = NULL;
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_golden_move(board, 4, 8, 3) == 0 );


char* board206099675 = gamma_board(board);
assert( board206099675 != NULL );
assert( strcmp(board206099675, 
"......\n"
"......\n"
"......\n"
".2.3..\n"
"....4.\n"
"....7.\n"
"..5.51\n"
"4....1\n"
".8....\n"
"......\n"
"..49..\n"
".....1\n") == 0);
free(board206099675);
board206099675 = NULL;
assert( gamma_golden_possible(board, 5) == 1 );


char* board453537313 = gamma_board(board);
assert( board453537313 != NULL );
assert( strcmp(board453537313, 
"......\n"
"......\n"
"......\n"
".2.3..\n"
"....4.\n"
"....7.\n"
"..5.51\n"
"4....1\n"
".8....\n"
"......\n"
"..49..\n"
".....1\n") == 0);
free(board453537313);
board453537313 = NULL;
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_free_fields(board, 8) == 56 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );


char* board572033389 = gamma_board(board);
assert( board572033389 != NULL );
assert( strcmp(board572033389, 
"......\n"
"....9.\n"
"..7...\n"
".243..\n"
"....4.\n"
"4...7.\n"
"..5751\n"
"4....1\n"
".8....\n"
"......\n"
"..49..\n"
".6...1\n") == 0);
free(board572033389);
board572033389 = NULL;
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_free_fields(board, 7) == 52 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 36 );


char* board784673027 = gamma_board(board);
assert( board784673027 != NULL );
assert( strcmp(board784673027, 
".3....\n"
"8.7.9.\n"
"527.4.\n"
".243..\n"
"..1.4.\n"
"4...7.\n"
"..5751\n"
"4..261\n"
".851..\n"
"..883.\n"
".149..\n"
"965..1\n") == 0);
free(board784673027);
board784673027 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );


char* board534847433 = gamma_board(board);
assert( board534847433 != NULL );
assert( strcmp(board534847433, 
".3....\n"
"8.7.9.\n"
"527.4.\n"
".2436.\n"
"..134.\n"
"48..75\n"
".35751\n"
"4..261\n"
"8851..\n"
"..883.\n"
".149..\n"
"965..1\n") == 0);
free(board534847433);
board534847433 = NULL;
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board297412745 = gamma_board(board);
assert( board297412745 != NULL );
assert( strcmp(board297412745, 
".3....\n"
"8.7.9.\n"
"52784.\n"
".2436.\n"
"..134.\n"
"48..75\n"
".35751\n"
"4..261\n"
"88513.\n"
"..883.\n"
".149..\n"
"965..1\n") == 0);
free(board297412745);
board297412745 = NULL;
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );


char* board698477208 = gamma_board(board);
assert( board698477208 != NULL );
assert( strcmp(board698477208, 
".35.34\n"
"8.7.9.\n"
"52784.\n"
".2436.\n"
"..134.\n"
"48..75\n"
".35751\n"
"445261\n"
"825136\n"
"..883.\n"
".14977\n"
"965.11\n") == 0);
free(board698477208);
board698477208 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );


char* board964716417 = gamma_board(board);
assert( board964716417 != NULL );
assert( strcmp(board964716417, 
".35.34\n"
"8.7.9.\n"
"52784.\n"
".2436.\n"
"..134.\n"
"48..75\n"
".35751\n"
"445261\n"
"825136\n"
"..883.\n"
".14977\n"
"965.11\n") == 0);
free(board964716417);
board964716417 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 11, 0) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_free_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );


gamma_delete(board);

    return 0;
}
