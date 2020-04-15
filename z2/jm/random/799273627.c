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
uuid: 799273627
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 11, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_golden_move(board, 6, 4, 2) == 0 );


char* board116989309 = gamma_board(board);
assert( board116989309 != NULL );
assert( strcmp(board116989309, 
".....5.....\n"
"......1..2.\n"
"..3.......1\n"
"...........\n"
"...........\n"
"...........\n"
"..4........\n"
"...........\n"
"2....6.....\n"
"...........\n"
"......3....\n") == 0);
free(board116989309);
board116989309 = NULL;
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );


char* board573975913 = gamma_board(board);
assert( board573975913 != NULL );
assert( strcmp(board573975913, 
".....5....2\n"
"......1..2.\n"
".63.....4.1\n"
"...........\n"
"......6....\n"
".....3...2.\n"
"..4........\n"
"...........\n"
"2....6.....\n"
".5.........\n"
"......3.15.\n") == 0);
free(board573975913);
board573975913 = NULL;
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );


char* board997230964 = gamma_board(board);
assert( board997230964 != NULL );
assert( strcmp(board997230964, 
".....5....2\n"
"......1..2.\n"
".63.....4.1\n"
"...........\n"
"......6..2.\n"
".....3...2.\n"
"..41.......\n"
"...........\n"
"2....6.....\n"
".5..1......\n"
"......3.15.\n") == 0);
free(board997230964);
board997230964 = NULL;
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_free_fields(board, 4) == 92 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );


char* board930459237 = gamma_board(board);
assert( board930459237 != NULL );
assert( strcmp(board930459237, 
"5....5...32\n"
".6....1..2.\n"
"363.....4.1\n"
"...........\n"
"....4.6..2.\n"
".....3.1.2.\n"
".6412......\n"
"...3......6\n"
"2....6.....\n"
".5..1..41.4\n"
"......3.15.\n") == 0);
free(board930459237);
board930459237 = NULL;
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );


char* board179810920 = gamma_board(board);
assert( board179810920 != NULL );
assert( strcmp(board179810920, 
"5....5...32\n"
".6....1..2.\n"
"363.....4.1\n"
".......6...\n"
"....4.6..2.\n"
"..4.53.152.\n"
".64123.....\n"
"...3......6\n"
"2....6...2.\n"
".5..1..41.4\n"
"...4..3.15.\n") == 0);
free(board179810920);
board179810920 = NULL;
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );


char* board968669131 = gamma_board(board);
assert( board968669131 != NULL );
assert( strcmp(board968669131, 
"5....5...32\n"
".6....1..2.\n"
"363.....4.1\n"
".......6...\n"
"....4.6..2.\n"
"..4.53.152.\n"
".64123.....\n"
"...3......6\n"
"2....6...2.\n"
".5..1..41.4\n"
"...4..3.15.\n") == 0);
free(board968669131);
board968669131 = NULL;
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );


char* board156810649 = gamma_board(board);
assert( board156810649 != NULL );
assert( strcmp(board156810649, 
"5....55..32\n"
".6....1..2.\n"
"363.....4.1\n"
".......6...\n"
"....4.6..2.\n"
"..4553.152.\n"
".64123..5..\n"
"...3......6\n"
"2....6...2.\n"
".5..1.34144\n"
"...4..3.15.\n") == 0);
free(board156810649);
board156810649 = NULL;
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );


char* board208631035 = gamma_board(board);
assert( board208631035 != NULL );
assert( strcmp(board208631035, 
"5....55..32\n"
".6....1..2.\n"
"363.....421\n"
".......6...\n"
"....4.6..2.\n"
"..4553.152.\n"
".64123..5..\n"
"...3......6\n"
"2....6...2.\n"
".5..1.34144\n"
"...4..3.15.\n") == 0);
free(board208631035);
board208631035 = NULL;
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board654011405 = gamma_board(board);
assert( board654011405 != NULL );
assert( strcmp(board654011405, 
"5...555..32\n"
".6...11..2.\n"
"363.....421\n"
".......64..\n"
"....4.6..2.\n"
"..4553.152.\n"
".64123..5..\n"
"...3......6\n"
"2....63..2.\n"
".5..1.34144\n"
"...4..3.15.\n") == 0);
free(board654011405);
board654011405 = NULL;
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );


char* board329135521 = gamma_board(board);
assert( board329135521 != NULL );
assert( strcmp(board329135521, 
"5...555..32\n"
".6...11..2.\n"
"363.....421\n"
".......64..\n"
"....4.61.2.\n"
"..4553.152.\n"
".64123..5..\n"
"...3......6\n"
"2....63..2.\n"
".5..1.34144\n"
"...4..3.15.\n") == 0);
free(board329135521);
board329135521 = NULL;
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );


char* board107918703 = gamma_board(board);
assert( board107918703 != NULL );
assert( strcmp(board107918703, 
"5...555..32\n"
".6...15..2.\n"
"363.....421\n"
".......64..\n"
"....4.6152.\n"
"..4553.152.\n"
".64123..5..\n"
"..33.6....6\n"
"2....63..22\n"
".5.41.34144\n"
"...4.33.15.\n") == 0);
free(board107918703);
board107918703 = NULL;
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board595664213 = gamma_board(board);
assert( board595664213 != NULL );
assert( strcmp(board595664213, 
"5...555..32\n"
".6...15..2.\n"
"363..1..421\n"
".......64..\n"
"....4.6152.\n"
"..4553.152.\n"
".64123..52.\n"
"..33.6....6\n"
"25...63..22\n"
".5.41334144\n"
"...4.33.15.\n") == 0);
free(board595664213);
board595664213 = NULL;
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board878050686 = gamma_board(board);
assert( board878050686 != NULL );
assert( strcmp(board878050686, 
"5...555..32\n"
".6...15..2.\n"
"363..1..421\n"
".......64..\n"
"....4.6152.\n"
"..4553.152.\n"
".64123..52.\n"
"..33.6....6\n"
"25...63..22\n"
".5.41334144\n"
"...4.33.15.\n") == 0);
free(board878050686);
board878050686 = NULL;
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_golden_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_golden_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );


char* board713013094 = gamma_board(board);
assert( board713013094 != NULL );
assert( strcmp(board713013094, 
"5...555..32\n"
".6...15..2.\n"
"363..1..421\n"
".....1.64..\n"
"...44.6152.\n"
"..4553.152.\n"
".64123..522\n"
"..33.6....6\n"
"25...63..22\n"
".5.41334144\n"
"...4333.15.\n") == 0);
free(board713013094);
board713013094 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );


char* board153583469 = gamma_board(board);
assert( board153583469 != NULL );
assert( strcmp(board153583469, 
"5...555..32\n"
".63..15..2.\n"
"363..15.421\n"
".....1.64..\n"
"...44.6152.\n"
"..4553.152.\n"
".64123..522\n"
"..33.6....6\n"
"25...63..22\n"
"25.41334144\n"
"...4333.15.\n") == 0);
free(board153583469);
board153583469 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );


gamma_delete(board);

    return 0;
}
