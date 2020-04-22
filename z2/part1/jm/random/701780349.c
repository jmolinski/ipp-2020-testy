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
uuid: 701780349
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 14, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board433085333 = gamma_board(board);
assert( board433085333 != NULL );
assert( strcmp(board433085333, 
"....1.\n"
"531...\n"
"....4.\n"
"4.3...\n"
"..4...\n"
"...4.5\n"
"...24.\n"
"......\n"
"5213..\n"
".4.22.\n"
"..4...\n"
".3..5.\n"
".....3\n"
".51...\n") == 0);
free(board433085333);
board433085333 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board698282378 = gamma_board(board);
assert( board698282378 != NULL );
assert( strcmp(board698282378, 
"....1.\n"
"531...\n"
"....4.\n"
"4.3..3\n"
"..4...\n"
"..14.5\n"
"12.24.\n"
".5....\n"
"5213.5\n"
".4.22.\n"
".34...\n"
".3..5.\n"
".3...3\n"
"151...\n") == 0);
free(board698282378);
board698282378 = NULL;
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );


char* board441438023 = gamma_board(board);
assert( board441438023 != NULL );
assert( strcmp(board441438023, 
"....1.\n"
"531...\n"
"...44.\n"
"4.3..3\n"
"..4...\n"
"..14.5\n"
"12.24.\n"
".5....\n"
"521325\n"
".4.22.\n"
".34...\n"
".3..5.\n"
".3..23\n"
"151...\n") == 0);
free(board441438023);
board441438023 = NULL;
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_free_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );


char* board211978307 = gamma_board(board);
assert( board211978307 != NULL );
assert( strcmp(board211978307, 
"33.21.\n"
"531...\n"
"..144.\n"
"4.3..3\n"
"..4...\n"
"..14.5\n"
"122245\n"
".5.2..\n"
"521325\n"
"44.22.\n"
".34...\n"
".3.25.\n"
".3..23\n"
"151...\n") == 0);
free(board211978307);
board211978307 = NULL;
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );


char* board867962891 = gamma_board(board);
assert( board867962891 != NULL );
assert( strcmp(board867962891, 
"33.21.\n"
"531...\n"
"..144.\n"
"4.3..3\n"
"..4..2\n"
"..14.5\n"
"122245\n"
".5.2..\n"
"521325\n"
"44.22.\n"
".34...\n"
".3.255\n"
".3..23\n"
"151...\n") == 0);
free(board867962891);
board867962891 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );


char* board108494109 = gamma_board(board);
assert( board108494109 != NULL );
assert( strcmp(board108494109, 
"33.21.\n"
"531...\n"
"..144.\n"
"4.3..3\n"
"..4..2\n"
"..14.5\n"
"122245\n"
".5.2..\n"
"521325\n"
"44.22.\n"
".34...\n"
".3.255\n"
".3..23\n"
"151...\n") == 0);
free(board108494109);
board108494109 = NULL;
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );


char* board769579447 = gamma_board(board);
assert( board769579447 != NULL );
assert( strcmp(board769579447, 
"33.21.\n"
"531.4.\n"
"..144.\n"
"4.3..3\n"
"..4..2\n"
"..14.5\n"
"122245\n"
".5.2.3\n"
"521325\n"
"44.222\n"
".34...\n"
".3.255\n"
".3..23\n"
"151...\n") == 0);
free(board769579447);
board769579447 = NULL;
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );


char* board270746452 = gamma_board(board);
assert( board270746452 != NULL );
assert( strcmp(board270746452, 
"33.21.\n"
"531.4.\n"
"..144.\n"
"4.3..3\n"
"..4..2\n"
"..14.5\n"
"122245\n"
".5.2.3\n"
"521325\n"
"44.222\n"
".34...\n"
".3.255\n"
".3..23\n"
"151...\n") == 0);
free(board270746452);
board270746452 = NULL;
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
