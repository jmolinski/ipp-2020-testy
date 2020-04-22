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
uuid: 389841437
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 8, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_free_fields(board, 5) == 93 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 13, 5) == 1 );
assert( gamma_free_fields(board, 7) == 90 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_free_fields(board, 6) == 74 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_free_fields(board, 7) == 72 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_free_fields(board, 7) == 60 );
assert( gamma_move(board, 8, 12, 2) == 1 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );


char* board836152228 = gamma_board(board);
assert( board836152228 != NULL );
assert( strcmp(board836152228, 
".4.15..7..35.3\n"
"1718.73..1.6.7\n"
".64..87.7..7..\n"
"5..782.27628..\n"
"1.637.6.4..381\n"
"..2268.227....\n"
"44..311.561.82\n") == 0);
free(board836152228);
board836152228 = NULL;
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 13, 4) == 1 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_golden_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );


char* board235830795 = gamma_board(board);
assert( board235830795 != NULL );
assert( strcmp(board235830795, 
".4.15.37..35.3\n"
"1718.73..1.6.7\n"
".64..87.7.37.7\n"
"57.782.2762863\n"
"1.637.6.4.3381\n"
"..2768.227.2..\n"
"44..311.561.82\n") == 0);
free(board235830795);
board235830795 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );


char* board918145539 = gamma_board(board);
assert( board918145539 != NULL );
assert( strcmp(board918145539, 
".4.15.37..35.3\n"
"1718.73..1.6.7\n"
".64.787.7.37.7\n"
"57.782.2762863\n"
"1.637.6.4.3381\n"
"..2768.227.2..\n"
"44..311.561.82\n") == 0);
free(board918145539);
board918145539 = NULL;
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );


char* board255489756 = gamma_board(board);
assert( board255489756 != NULL );
assert( strcmp(board255489756, 
".4.15.37..35.3\n"
"1718.73..1.6.7\n"
".64.787.7.37.7\n"
"57.782.2762863\n"
"1.637.6.4.3381\n"
"..2768.227.2..\n"
"44..311.561.82\n") == 0);
free(board255489756);
board255489756 = NULL;
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );


char* board578434628 = gamma_board(board);
assert( board578434628 != NULL );
assert( strcmp(board578434628, 
".4.15.37..35.3\n"
"1718.73..1.6.7\n"
".64.787.7.37.7\n"
"57.782.2762863\n"
"1.637.6.4.3381\n"
"..2768.227.2..\n"
"44..311.561.82\n") == 0);
free(board578434628);
board578434628 = NULL;
assert( gamma_move(board, 4, 5, 12) == 0 );


char* board775439258 = gamma_board(board);
assert( board775439258 != NULL );
assert( strcmp(board775439258, 
".4.15.37..35.3\n"
"1718.73..1.6.7\n"
".64.787.7.37.7\n"
"57.782.2762863\n"
"1.637.6.4.3381\n"
"..2768.227.2..\n"
"44..311.561.82\n") == 0);
free(board775439258);
board775439258 = NULL;
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );


char* board781718894 = gamma_board(board);
assert( board781718894 != NULL );
assert( strcmp(board781718894, 
".4.15.37.135.3\n"
"1718.73.21.6.7\n"
".64.787.7.37.7\n"
"57.782.2762863\n"
"1.63786.4.3381\n"
"..2768.227.2..\n"
"44..311.561.82\n") == 0);
free(board781718894);
board781718894 = NULL;
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_golden_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_golden_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 4, 6, 10) == 0 );


gamma_delete(board);

    return 0;
}
