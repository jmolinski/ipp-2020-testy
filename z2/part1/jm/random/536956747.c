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
uuid: 536956747
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 12, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 9, 4, 11) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );


char* board113272539 = gamma_board(board);
assert( board113272539 != NULL );
assert( strcmp(board113272539, 
"....95\n"
"......\n"
"......\n"
"......\n"
".7.3.6\n"
"......\n"
"......\n"
"......\n"
".3...1\n"
"......\n"
"6.....\n"
"...1..\n") == 0);
free(board113272539);
board113272539 = NULL;
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_free_fields(board, 8) == 57 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_golden_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );


char* board601925006 = gamma_board(board);
assert( board601925006 != NULL );
assert( strcmp(board601925006, 
"....95\n"
"9.....\n"
".....8\n"
"......\n"
"57.3.6\n"
".....7\n"
"......\n"
"58..2.\n"
".3.4.1\n"
"......\n"
"665...\n"
"..61..\n") == 0);
free(board601925006);
board601925006 = NULL;
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );


char* board714835103 = gamma_board(board);
assert( board714835103 != NULL );
assert( strcmp(board714835103, 
"....95\n"
"9.....\n"
".....8\n"
"......\n"
"57.3.6\n"
".....7\n"
".....5\n"
"58..2.\n"
".3.431\n"
"......\n"
"665...\n"
"..61..\n") == 0);
free(board714835103);
board714835103 = NULL;
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );


char* board838111769 = gamma_board(board);
assert( board838111769 != NULL );
assert( strcmp(board838111769, 
"....95\n"
"9.....\n"
"....58\n"
"..9896\n"
"57.3.6\n"
"4782.7\n"
"...2.5\n"
"584.27\n"
"33.431\n"
"7..2.8\n"
"665..4\n"
"8.61..\n") == 0);
free(board838111769);
board838111769 = NULL;
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 5, 1) == 0 );


char* board110738828 = gamma_board(board);
assert( board110738828 != NULL );
assert( strcmp(board110738828, 
"....95\n"
"9.....\n"
"....58\n"
"..9896\n"
"57.3.6\n"
"4782.7\n"
"...2.5\n"
"584927\n"
"33.431\n"
"7..2.8\n"
"6651.4\n"
"8.61..\n") == 0);
free(board110738828);
board110738828 = NULL;
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_golden_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );


char* board455745788 = gamma_board(board);
assert( board455745788 != NULL );
assert( strcmp(board455745788, 
".2.195\n"
"9.....\n"
"....58\n"
"..9896\n"
"57.3.6\n"
"4782.7\n"
".8.2.5\n"
"584927\n"
"93.431\n"
"7.92.8\n"
"6651.4\n"
"8.617.\n") == 0);
free(board455745788);
board455745788 = NULL;
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );


char* board910667268 = gamma_board(board);
assert( board910667268 != NULL );
assert( strcmp(board910667268, 
".2.195\n"
"98..29\n"
"....58\n"
"..9896\n"
"57.3.6\n"
"4782.7\n"
".8.2.5\n"
"584927\n"
"93.431\n"
"7.92.8\n"
"6651.4\n"
"8.617.\n") == 0);
free(board910667268);
board910667268 = NULL;
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_free_fields(board, 9) == 13 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board576962281 = gamma_board(board);
assert( board576962281 != NULL );
assert( strcmp(board576962281, 
"82.195\n"
"986.29\n"
"41..58\n"
".39896\n"
"57.3.6\n"
"4782.7\n"
"78.2.5\n"
"584927\n"
"93.431\n"
"7.9258\n"
"6651.4\n"
"866177\n") == 0);
free(board576962281);
board576962281 = NULL;
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_golden_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
