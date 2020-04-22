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
uuid: 484245741
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_golden_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board803110781 = gamma_board(board);
assert( board803110781 != NULL );
assert( strcmp(board803110781, 
"..26.2\n"
"......\n"
"......\n"
"21....\n"
".6...5\n"
"6334.1\n"
"2432.4\n"
"51.1..\n"
".3..1.\n"
"113.46\n"
"1556..\n") == 0);
free(board803110781);
board803110781 = NULL;
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );


char* board883813459 = gamma_board(board);
assert( board883813459 != NULL );
assert( strcmp(board883813459, 
".126.2\n"
"......\n"
"......\n"
"21....\n"
".6...5\n"
"6334.1\n"
"2432.4\n"
"51.1..\n"
".3..1.\n"
"113646\n"
"1556..\n") == 0);
free(board883813459);
board883813459 = NULL;
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board318645923 = gamma_board(board);
assert( board318645923 != NULL );
assert( strcmp(board318645923, 
".126.2\n"
"..5...\n"
"6.5...\n"
"21.4..\n"
".6...5\n"
"6334.1\n"
"2432.4\n"
"5161..\n"
".3.61.\n"
"113646\n"
"1556..\n") == 0);
free(board318645923);
board318645923 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );


char* board172293949 = gamma_board(board);
assert( board172293949 != NULL );
assert( strcmp(board172293949, 
".126.2\n"
"..5...\n"
"6.5...\n"
"21.4..\n"
".6..45\n"
"6334.1\n"
"2432.4\n"
"5161..\n"
".3.61.\n"
"113646\n"
"1556..\n") == 0);
free(board172293949);
board172293949 = NULL;
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );


char* board427968913 = gamma_board(board);
assert( board427968913 != NULL );
assert( strcmp(board427968913, 
".12622\n"
".25...\n"
"635..4\n"
"21.4.5\n"
".66.45\n"
"633421\n"
"243224\n"
"5461..\n"
"33.616\n"
"113646\n"
"155643\n") == 0);
free(board427968913);
board427968913 = NULL;
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );


char* board355989118 = gamma_board(board);
assert( board355989118 != NULL );
assert( strcmp(board355989118, 
".12622\n"
".25...\n"
"635..4\n"
"21.4.5\n"
".66.45\n"
"633421\n"
"243224\n"
"5461..\n"
"33.616\n"
"113646\n"
"155643\n") == 0);
free(board355989118);
board355989118 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 2) == 0 );


char* board688648661 = gamma_board(board);
assert( board688648661 != NULL );
assert( strcmp(board688648661, 
".12622\n"
"325...\n"
"635..4\n"
"21.455\n"
".66145\n"
"633421\n"
"243224\n"
"5461.2\n"
"333616\n"
"113646\n"
"155643\n") == 0);
free(board688648661);
board688648661 = NULL;
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );


gamma_delete(board);

    return 0;
}
