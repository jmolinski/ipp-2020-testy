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
uuid: 243224312
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );


char* board606905772 = gamma_board(board);
assert( board606905772 != NULL );
assert( strcmp(board606905772, 
"......2.\n"
"........\n"
"3.......\n"
"31..41..\n"
"42.43..1\n"
".....32.\n"
"44..4...\n"
"33..14..\n"
".......2\n"
"321234..\n"
"..1.13..\n") == 0);
free(board606905772);
board606905772 = NULL;
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 17 );


char* board419521367 = gamma_board(board);
assert( board419521367 != NULL );
assert( strcmp(board419521367, 
"......2.\n"
"2.......\n"
"3.......\n"
"31..41..\n"
"42.43..1\n"
".....32.\n"
"44..4...\n"
"33..14..\n"
".......2\n"
"321234..\n"
"3.1.13..\n") == 0);
free(board419521367);
board419521367 = NULL;
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );


char* board725327107 = gamma_board(board);
assert( board725327107 != NULL );
assert( strcmp(board725327107, 
"......2.\n"
"2.......\n"
"3.......\n"
"31..41..\n"
"42.43..1\n"
".....32.\n"
"44..4...\n"
"33..14..\n"
"...221.2\n"
"321234..\n"
"3.1.13..\n") == 0);
free(board725327107);
board725327107 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );


char* board698066789 = gamma_board(board);
assert( board698066789 != NULL );
assert( strcmp(board698066789, 
"......2.\n"
"2.......\n"
"333.....\n"
"31..41..\n"
"42243..1\n"
".....32.\n"
"444.4.2.\n"
"33..14..\n"
".2.221.2\n"
"321234..\n"
"3.1.13..\n") == 0);
free(board698066789);
board698066789 = NULL;
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );


char* board912720852 = gamma_board(board);
assert( board912720852 != NULL );
assert( strcmp(board912720852, 
"......2.\n"
"2.......\n"
"333.....\n"
"31..41..\n"
"42243..1\n"
".....32.\n"
"444.4.2.\n"
"333.14..\n"
".2.22112\n"
"321234..\n"
"3.1.13..\n") == 0);
free(board912720852);
board912720852 = NULL;
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_golden_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );


char* board618940796 = gamma_board(board);
assert( board618940796 != NULL );
assert( strcmp(board618940796, 
"......2.\n"
"2.......\n"
"333.....\n"
"31..41..\n"
"42243.11\n"
".....32.\n"
"444.4.2.\n"
"333.144.\n"
".2.22112\n"
"3212341.\n"
"321.13..\n") == 0);
free(board618940796);
board618940796 = NULL;
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );


char* board800599634 = gamma_board(board);
assert( board800599634 != NULL );
assert( strcmp(board800599634, 
"......2.\n"
"2.......\n"
"333.....\n"
"31..41..\n"
"42243.11\n"
".....32.\n"
"444.4.2.\n"
"333.144.\n"
".2.22112\n"
"3212341.\n"
"321.13..\n") == 0);
free(board800599634);
board800599634 = NULL;
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 10 );


char* board746695923 = gamma_board(board);
assert( board746695923 != NULL );
assert( strcmp(board746695923, 
"......2.\n"
"2.......\n"
"333.....\n"
"31..41..\n"
"42243.11\n"
".....322\n"
"444.4.2.\n"
"333.144.\n"
".2.22112\n"
"3212341.\n"
"321.13..\n") == 0);
free(board746695923);
board746695923 = NULL;
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );


char* board746392837 = gamma_board(board);
assert( board746392837 != NULL );
assert( strcmp(board746392837, 
".2...42.\n"
"22......\n"
"333.....\n"
"31..41..\n"
"42243.11\n"
"..4..322\n"
"444.442.\n"
"333.144.\n"
".2.22112\n"
"3212341.\n"
"321.13..\n") == 0);
free(board746392837);
board746392837 = NULL;
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );


gamma_delete(board);

    return 0;
}
