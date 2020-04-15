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
uuid: 597294745
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 14, 6, 15);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 154 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 10, 13) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_golden_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );


char* board738645317 = gamma_board(board);
assert( board738645317 != NULL );
assert( strcmp(board738645317, 
"......53..6\n"
"...........\n"
"...........\n"
"...6...3...\n"
"...........\n"
".5......2..\n"
"......2....\n"
".6......2.3\n"
"...1......4\n"
"1.3........\n"
"....5...3..\n"
".2.1......3\n"
"4........5.\n"
"..5....6...\n") == 0);
free(board738645317);
board738645317 = NULL;
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );


char* board653380066 = gamma_board(board);
assert( board653380066 != NULL );
assert( strcmp(board653380066, 
"......53..6\n"
"..4........\n"
"...........\n"
"4..6...3...\n"
"...........\n"
".5......2..\n"
"6.....2....\n"
".6......2.3\n"
"...1......4\n"
"1.3.55.....\n"
"....5...3..\n"
".2.1......3\n"
"4........5.\n"
"..5....6...\n") == 0);
free(board653380066);
board653380066 = NULL;
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_golden_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 104 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_free_fields(board, 2) == 101 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_free_fields(board, 3) == 100 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 3, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_golden_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_free_fields(board, 3) == 82 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_golden_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 13, 5) == 0 );


char* board467737228 = gamma_board(board);
assert( board467737228 != NULL );
assert( strcmp(board467737228, 
"6..3..53..6\n"
"554..6.....\n"
"4..1.2.1.2.\n"
"4.362..31.6\n"
"1.12....32.\n"
".5...2..2..\n"
"6.36..21..1\n"
".634..2.2.3\n"
"4361.526.34\n"
"123.556.426\n"
"...55.4633.\n"
".211..1.5.3\n"
"46.....455.\n"
"3.52...64..\n") == 0);
free(board467737228);
board467737228 = NULL;
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );


char* board361778336 = gamma_board(board);
assert( board361778336 != NULL );
assert( strcmp(board361778336, 
"6..3..53..6\n"
"554..6.....\n"
"4..1.2.1.2.\n"
"4.362..31.6\n"
"1.12....32.\n"
".5...2..2..\n"
"6.36..21..1\n"
".634..2.2.3\n"
"4361.526.34\n"
"123.556.426\n"
"...55.4633.\n"
".211..1.5.3\n"
"46.....455.\n"
"3.52...64..\n") == 0);
free(board361778336);
board361778336 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );


char* board146900091 = gamma_board(board);
assert( board146900091 != NULL );
assert( strcmp(board146900091, 
"6..3..53..6\n"
"554..6.....\n"
"4..1.2.1.2.\n"
"4.362..31.6\n"
"1.12...232.\n"
".5...2..2..\n"
"6.36..21..1\n"
".634..2.2.3\n"
"4361.526.34\n"
"123.556.426\n"
"...55.4633.\n"
".211..1.5.3\n"
"46.....455.\n"
"3.52...64..\n") == 0);
free(board146900091);
board146900091 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );


char* board835223756 = gamma_board(board);
assert( board835223756 != NULL );
assert( strcmp(board835223756, 
"6..3..53..6\n"
"554..6.....\n"
"4..1.2.1.2.\n"
"4.362..31.6\n"
"1112...232.\n"
".5...2..2..\n"
"6.36..21..1\n"
".634..2.2.3\n"
"4361.526.34\n"
"123.556.426\n"
".5.55.4633.\n"
".211..1.5.3\n"
"46.....455.\n"
"3.524..64..\n") == 0);
free(board835223756);
board835223756 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 13) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );


char* board562050561 = gamma_board(board);
assert( board562050561 != NULL );
assert( strcmp(board562050561, 
"6..3..535.6\n"
"554..6.....\n"
"4.61.2.1.2.\n"
"4.362..31.6\n"
"1112...232.\n"
".5...2..2..\n"
"6.36..21.11\n"
".634..2.2.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.5.3\n"
"46.....4555\n"
"3.524.264..\n") == 0);
free(board562050561);
board562050561 = NULL;
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_golden_move(board, 6, 12, 0) == 0 );


char* board161499078 = gamma_board(board);
assert( board161499078 != NULL );
assert( strcmp(board161499078, 
"6..3..535.6\n"
"554..6.....\n"
"4.61.2.1.2.\n"
"4.362..31.6\n"
"1112...232.\n"
".5...2..2..\n"
"6.36..21311\n"
".634..2.2.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.5.3\n"
"461....4555\n"
"3.524.264..\n") == 0);
free(board161499078);
board161499078 = NULL;
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );


char* board429193713 = gamma_board(board);
assert( board429193713 != NULL );
assert( strcmp(board429193713, 
"6..3..535.6\n"
"554..66....\n"
"4.6112.1.2.\n"
"4.362..3116\n"
"1112..3232.\n"
".5...2..2..\n"
"6.36..21311\n"
".634..2.2.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.5.3\n"
"461....4555\n"
"3.524.264..\n") == 0);
free(board429193713);
board429193713 = NULL;
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );


char* board709439889 = gamma_board(board);
assert( board709439889 != NULL );
assert( strcmp(board709439889, 
"6..3..535.6\n"
"554..66....\n"
"4.6112.1.2.\n"
"4.362..3116\n"
"1112..3232.\n"
".5...2..2..\n"
"6.36..21311\n"
".634..2.2.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.513\n"
"461....4555\n"
"3.524.264..\n") == 0);
free(board709439889);
board709439889 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );


char* board896379394 = gamma_board(board);
assert( board896379394 != NULL );
assert( strcmp(board896379394, 
"6..3..535.6\n"
"554..66....\n"
"456112.1.2.\n"
"4.362..3116\n"
"1112..3232.\n"
".5...2..2..\n"
"6.36..21311\n"
".634..2.2.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.513\n"
"461....4555\n"
"3.524.264.5\n") == 0);
free(board896379394);
board896379394 = NULL;
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_golden_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );


char* board436082733 = gamma_board(board);
assert( board436082733 != NULL );
assert( strcmp(board436082733, 
"6..3..535.6\n"
"554..66....\n"
"456112.1.2.\n"
"4.362..3116\n"
"1112..3232.\n"
".5...2..2..\n"
"6.366.21311\n"
"5634.42.2.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.513\n"
"461....4555\n"
"3.524.264.5\n") == 0);
free(board436082733);
board436082733 = NULL;
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_golden_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );


char* board851535906 = gamma_board(board);
assert( board851535906 != NULL );
assert( strcmp(board851535906, 
"65.3..535.6\n"
"5546466..56\n"
"45611261121\n"
"4.362..3116\n"
"1122..3232.\n"
".5..52..2..\n"
"6.366.21311\n"
"5634.4212.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.513\n"
"461....4555\n"
"3.524.26415\n") == 0);
free(board851535906);
board851535906 = NULL;
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );


char* board835978080 = gamma_board(board);
assert( board835978080 != NULL );
assert( strcmp(board835978080, 
"65.3..535.6\n"
"5546466..56\n"
"45611261121\n"
"4.362..3116\n"
"1122..3232.\n"
".5..52..2..\n"
"6.366.21311\n"
"5634.4212.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.513\n"
"461....4555\n"
"3.524.26415\n") == 0);
free(board835978080);
board835978080 = NULL;
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_free_fields(board, 6) == 12 );


char* board814572380 = gamma_board(board);
assert( board814572380 != NULL );
assert( strcmp(board814572380, 
"65.3..535.6\n"
"5546466..56\n"
"45611261121\n"
"4.362..3116\n"
"1122..3232.\n"
".5..52..2..\n"
"6.366.21311\n"
"5634.4212.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.513\n"
"461....4555\n"
"3.524.26415\n") == 0);
free(board814572380);
board814572380 = NULL;
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );


char* board225951841 = gamma_board(board);
assert( board225951841 != NULL );
assert( strcmp(board225951841, 
"65.3..535.6\n"
"5546466..56\n"
"45611261121\n"
"41362..3116\n"
"1152..3232.\n"
".55.52..2..\n"
"6.366.21311\n"
"5634.4212.3\n"
"4361.526334\n"
"123.5566426\n"
".5.55.46334\n"
".211..1.513\n"
"461....4555\n"
"3.524.26415\n") == 0);
free(board225951841);
board225951841 = NULL;
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );


gamma_delete(board);

    return 0;
}
