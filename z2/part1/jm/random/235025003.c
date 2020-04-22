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
uuid: 235025003
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_golden_move(board, 1, 9, 3) == 0 );


char* board243310298 = gamma_board(board);
assert( board243310298 != NULL );
assert( strcmp(board243310298, 
"....1.\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".....1\n"
"......\n") == 0);
free(board243310298);
board243310298 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 1, 3) == 1 );


char* board315796560 = gamma_board(board);
assert( board315796560 != NULL );
assert( strcmp(board315796560, 
"....12\n"
"......\n"
"......\n"
"......\n"
"..2...\n"
"......\n"
"......\n"
".3....\n"
"......\n"
".....1\n"
"......\n") == 0);
free(board315796560);
board315796560 = NULL;
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );


char* board739523140 = gamma_board(board);
assert( board739523140 != NULL );
assert( strcmp(board739523140, 
"....12\n"
".....5\n"
"....3.\n"
"3.....\n"
"3.2..5\n"
"...44.\n"
"..225.\n"
".35..2\n"
"...1.1\n"
".1..41\n"
".....3\n") == 0);
free(board739523140);
board739523140 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_golden_move(board, 1, 6, 5) == 0 );


char* board419854764 = gamma_board(board);
assert( board419854764 != NULL );
assert( strcmp(board419854764, 
"....12\n"
".4...5\n"
".4..3.\n"
"3.....\n"
"3.2..5\n"
"...44.\n"
"..225.\n"
".35..2\n"
"...1.1\n"
".1..41\n"
".....3\n") == 0);
free(board419854764);
board419854764 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );


char* board984921793 = gamma_board(board);
assert( board984921793 != NULL );
assert( strcmp(board984921793, 
"....12\n"
".44..5\n"
".4..3.\n"
"3.....\n"
"3.2..5\n"
"...44.\n"
"..225.\n"
".352.2\n"
"..11.1\n"
".1..41\n"
".4...3\n") == 0);
free(board984921793);
board984921793 = NULL;
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board565630808 = gamma_board(board);
assert( board565630808 != NULL );
assert( strcmp(board565630808, 
"....12\n"
".44..5\n"
".4..3.\n"
"3.....\n"
"3.2..5\n"
"...445\n"
"..225.\n"
".352.2\n"
"..11.1\n"
".1..41\n"
".4...3\n") == 0);
free(board565630808);
board565630808 = NULL;
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_golden_move(board, 1, 8, 1) == 0 );


char* board218432823 = gamma_board(board);
assert( board218432823 != NULL );
assert( strcmp(board218432823, 
"....12\n"
".44..5\n"
".4..3.\n"
"33....\n"
"3.2..5\n"
"...445\n"
"..225.\n"
".352.2\n"
"..11.1\n"
".1.441\n"
".4...3\n") == 0);
free(board218432823);
board218432823 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board790596770 = gamma_board(board);
assert( board790596770 != NULL );
assert( strcmp(board790596770, 
"....12\n"
".44..5\n"
".4..3.\n"
"33....\n"
"3.2..5\n"
"...445\n"
"..225.\n"
".352.2\n"
"..11.1\n"
".1.441\n"
".4...3\n") == 0);
free(board790596770);
board790596770 = NULL;
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_free_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );


char* board671669032 = gamma_board(board);
assert( board671669032 != NULL );
assert( strcmp(board671669032, 
"....12\n"
".44..5\n"
".4..3.\n"
"33....\n"
"3.2..5\n"
"...445\n"
"..225.\n"
".35252\n"
"..11.1\n"
".1.441\n"
".4...3\n") == 0);
free(board671669032);
board671669032 = NULL;
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );


gamma_delete(board);

    return 0;
}
