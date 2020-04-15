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
uuid: 312095239
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 5, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );


char* board341682662 = gamma_board(board);
assert( board341682662 != NULL );
assert( strcmp(board341682662, 
".....1\n"
"....3.\n"
"....1.\n"
"......\n"
"......\n"
"5..3..\n"
".15...\n"
".145..\n"
".2....\n"
"...4..\n") == 0);
free(board341682662);
board341682662 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 1, 2) == 0 );


char* board862608805 = gamma_board(board);
assert( board862608805 != NULL );
assert( strcmp(board862608805, 
"...2.1\n"
"3..334\n"
"1...1.\n"
".431..\n"
"5..254\n"
"5333..\n"
".151..\n"
"3145.1\n"
".2..3.\n"
"5..41.\n") == 0);
free(board862608805);
board862608805 = NULL;
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_golden_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );


char* board276786187 = gamma_board(board);
assert( board276786187 != NULL );
assert( strcmp(board276786187, 
"...2.1\n"
"3..334\n"
"1...1.\n"
".431..\n"
"5..254\n"
"53333.\n"
".151..\n"
"3145.1\n"
".2..3.\n"
"5..41.\n") == 0);
free(board276786187);
board276786187 = NULL;
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 0, 1) == 1 );


char* board843253020 = gamma_board(board);
assert( board843253020 != NULL );
assert( strcmp(board843253020, 
"...2.1\n"
"3..334\n"
"1...1.\n"
".431..\n"
"5..254\n"
"53333.\n"
".151..\n"
"3145.1\n"
"12..3.\n"
"5..41.\n") == 0);
free(board843253020);
board843253020 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 26 );


char* board466118126 = gamma_board(board);
assert( board466118126 != NULL );
assert( strcmp(board466118126, 
"...2.1\n"
"3..334\n"
"1...1.\n"
".431..\n"
"5..254\n"
"53333.\n"
".151..\n"
"3145.1\n"
"12..3.\n"
"5..41.\n") == 0);
free(board466118126);
board466118126 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_golden_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );


char* board970098211 = gamma_board(board);
assert( board970098211 != NULL );
assert( strcmp(board970098211, 
"...2.1\n"
"3..334\n"
"1..11.\n"
"3431..\n"
"5..254\n"
"53333.\n"
".151..\n"
"3145.1\n"
"12..32\n"
"51.41.\n") == 0);
free(board970098211);
board970098211 = NULL;
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board255151952 = gamma_board(board);
assert( board255151952 != NULL );
assert( strcmp(board255151952, 
"...2.1\n"
"3..334\n"
"1..11.\n"
"3431..\n"
"5..254\n"
"53333.\n"
".151..\n"
"3145.1\n"
"12..32\n"
"51.41.\n") == 0);
free(board255151952);
board255151952 = NULL;
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );


char* board276188733 = gamma_board(board);
assert( board276188733 != NULL );
assert( strcmp(board276188733, 
".5.2.1\n"
"31.334\n"
"1..114\n"
"3431..\n"
"5..254\n"
"53333.\n"
".154.4\n"
"3145.1\n"
"12..32\n"
"51441.\n") == 0);
free(board276188733);
board276188733 = NULL;
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board893629381 = gamma_board(board);
assert( board893629381 != NULL );
assert( strcmp(board893629381, 
".5.2.1\n"
"31.334\n"
"11.114\n"
"3431.5\n"
"52.254\n"
"53333.\n"
".154.4\n"
"3145.1\n"
"12..32\n"
"51441.\n") == 0);
free(board893629381);
board893629381 = NULL;
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 12 );


char* board330022214 = gamma_board(board);
assert( board330022214 != NULL );
assert( strcmp(board330022214, 
".5.2.1\n"
"31.334\n"
"115114\n"
"3431.5\n"
"52.254\n"
"53333.\n"
".154.4\n"
"3145.1\n"
"12..32\n"
"514413\n") == 0);
free(board330022214);
board330022214 = NULL;


gamma_delete(board);

    return 0;
}
