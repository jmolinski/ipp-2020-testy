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
uuid: 538266262
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 5, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board533067076 = gamma_board(board);
assert( board533067076 != NULL );
assert( strcmp(board533067076, 
"...1...\n"
"..1....\n"
".2.....\n"
".....4.\n"
".......\n"
"3......\n"
".3.....\n") == 0);
free(board533067076);
board533067076 = NULL;
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );


char* board567828155 = gamma_board(board);
assert( board567828155 != NULL );
assert( strcmp(board567828155, 
"...1.5.\n"
"2.1....\n"
".21....\n"
"....34.\n"
"....5..\n"
"32.1...\n"
".3...45\n") == 0);
free(board567828155);
board567828155 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );


char* board292825108 = gamma_board(board);
assert( board292825108 != NULL );
assert( strcmp(board292825108, 
"...1.5.\n"
"2.1....\n"
".21....\n"
"5...34.\n"
"....5..\n"
"32.1...\n"
".3...45\n") == 0);
free(board292825108);
board292825108 = NULL;
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );


char* board758596865 = gamma_board(board);
assert( board758596865 != NULL );
assert( strcmp(board758596865, 
".451.5.\n"
"2.12.4.\n"
".21.22.\n"
"5..134.\n"
"...15..\n"
"3211...\n"
"23..345\n") == 0);
free(board758596865);
board758596865 = NULL;
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );


char* board492977842 = gamma_board(board);
assert( board492977842 != NULL );
assert( strcmp(board492977842, 
".451354\n"
"2112343\n"
".21.225\n"
"5..1342\n"
"3351514\n"
"3211.4.\n"
"23.1345\n") == 0);
free(board492977842);
board492977842 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );


char* board779390889 = gamma_board(board);
assert( board779390889 != NULL );
assert( strcmp(board779390889, 
".451354\n"
"2112343\n"
".22.225\n"
"5..1342\n"
"3351514\n"
"3211.4.\n"
"23.1345\n") == 0);
free(board779390889);
board779390889 = NULL;
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
