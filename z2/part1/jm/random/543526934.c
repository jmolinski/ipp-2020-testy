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
uuid: 543526934
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 15, 9, 14);
assert( board != NULL );


assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 9, 1, 10) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 5, 0, 14) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_free_fields(board, 9) == 81 );
assert( gamma_golden_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 13) == 1 );


char* board140410763 = gamma_board(board);
assert( board140410763 != NULL );
assert( strcmp(board140410763, 
"5......\n"
".3...31\n"
"1.3....\n"
"...2.37\n"
".9..2..\n"
".......\n"
"...2...\n"
"......1\n"
".5....6\n"
"...8895\n"
"..6...9\n"
".92.2..\n"
".73....\n"
"...2...\n"
"...1...\n") == 0);
free(board140410763);
board140410763 = NULL;
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_free_fields(board, 5) == 75 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_free_fields(board, 8) == 72 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 13) == 1 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_golden_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_free_fields(board, 9) == 60 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );


char* board489046359 = gamma_board(board);
assert( board489046359 != NULL );
assert( strcmp(board489046359, 
"5......\n"
"43.2.31\n"
"163....\n"
"..72437\n"
".9..2..\n"
"49.....\n"
"..7265.\n"
"......1\n"
"95..5.6\n"
"2.98895\n"
"7.65..9\n"
".92.2.2\n"
"273..85\n"
"27227..\n"
"6..1.6.\n") == 0);
free(board489046359);
board489046359 = NULL;
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );


char* board620554173 = gamma_board(board);
assert( board620554173 != NULL );
assert( strcmp(board620554173, 
"5......\n"
"43.2.31\n"
"163....\n"
"..72437\n"
".9..2..\n"
"49.....\n"
"..7265.\n"
".....31\n"
"95..5.6\n"
"2.98895\n"
"7465..9\n"
".92.2.2\n"
"273..85\n"
"27227..\n"
"6..1.6.\n") == 0);
free(board620554173);
board620554173 = NULL;
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 4, 14) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_golden_move(board, 8, 13, 6) == 0 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_free_fields(board, 9) == 47 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 5, 12) == 1 );


char* board587427074 = gamma_board(board);
assert( board587427074 != NULL );
assert( strcmp(board587427074, 
"5...7..\n"
"43.2.31\n"
"163..9.\n"
"..72437\n"
".9..2.5\n"
"49.....\n"
"..7265.\n"
"....131\n"
"95..5.6\n"
"2.98895\n"
"7465..9\n"
".92.2.2\n"
"273..85\n"
"27227..\n"
"6..1.6.\n") == 0);
free(board587427074);
board587427074 = NULL;
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );


char* board429356632 = gamma_board(board);
assert( board429356632 != NULL );
assert( strcmp(board429356632, 
"5...72.\n"
"43.2331\n"
"163.39.\n"
"4.72437\n"
".93.2.5\n"
"49..4..\n"
"..7265.\n"
"5...131\n"
"95..5.6\n"
"2.98895\n"
"74651.9\n"
".92.2.2\n"
"2733.85\n"
"27227.9\n"
"6..1.6.\n") == 0);
free(board429356632);
board429356632 = NULL;
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_golden_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 14, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 2, 7) == 1 );


char* board932018063 = gamma_board(board);
assert( board932018063 != NULL );
assert( strcmp(board932018063, 
"5...72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"..7265.\n"
"5.8.131\n"
"95..5.6\n"
"2.98895\n"
"74651.9\n"
".92.2.2\n"
"2733585\n"
"27227.9\n"
"61.1.6.\n") == 0);
free(board932018063);
board932018063 = NULL;
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_move(board, 1, 7, 1) == 0 );


char* board458845681 = gamma_board(board);
assert( board458845681 != NULL );
assert( strcmp(board458845681, 
"5...72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"..7265.\n"
"5.8.131\n"
"95..5.6\n"
"2.98895\n"
"74651.9\n"
".92.2.2\n"
"2733585\n"
"27227.9\n"
"61.1.6.\n") == 0);
free(board458845681);
board458845681 = NULL;
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );


char* board689550642 = gamma_board(board);
assert( board689550642 != NULL );
assert( strcmp(board689550642, 
"5...72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"3.7265.\n"
"518.131\n"
"95..5.6\n"
"9.98895\n"
"74651.9\n"
".92.2.2\n"
"2733585\n"
"27227.9\n"
"61.1.6.\n") == 0);
free(board689550642);
board689550642 = NULL;
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 14) == 1 );


char* board714926139 = gamma_board(board);
assert( board714926139 != NULL );
assert( strcmp(board714926139, 
"5.6.72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"3.7265.\n"
"518.131\n"
"95..5.6\n"
"9.98895\n"
"74651.9\n"
".9252.2\n"
"2733585\n"
"27227.9\n"
"61.1.6.\n") == 0);
free(board714926139);
board714926139 = NULL;
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );


char* board585948114 = gamma_board(board);
assert( board585948114 != NULL );
assert( strcmp(board585948114, 
"5.6.72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"3.7265.\n"
"518.131\n"
"95..5.6\n"
"9.98895\n"
"74651.9\n"
".9252.2\n"
"2733585\n"
"27227.9\n"
"61.1.6.\n") == 0);
free(board585948114);
board585948114 = NULL;
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_free_fields(board, 9) == 25 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );


char* board146898492 = gamma_board(board);
assert( board146898492 != NULL );
assert( strcmp(board146898492, 
"5.6.72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"3.7265.\n"
"518.131\n"
"95..5.6\n"
"9.98895\n"
"74651.9\n"
".9252.2\n"
"2733585\n"
"27227.9\n"
"61.1.6.\n") == 0);
free(board146898492);
board146898492 = NULL;
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_free_fields(board, 7) == 23 );


char* board925546019 = gamma_board(board);
assert( board925546019 != NULL );
assert( strcmp(board925546019, 
"5.6.72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"3.72655\n"
"518.131\n"
"95..5.6\n"
"9.98895\n"
"74651.9\n"
".9252.2\n"
"2733585\n"
"2722749\n"
"61.1.6.\n") == 0);
free(board925546019);
board925546019 = NULL;
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );


char* board384716444 = gamma_board(board);
assert( board384716444 != NULL );
assert( strcmp(board384716444, 
"5.6.72.\n"
"43.2331\n"
"1632391\n"
"4.72437\n"
".93.235\n"
"49..4..\n"
"3.72655\n"
"518.131\n"
"95..5.6\n"
"9.98895\n"
"74651.9\n"
".9252.2\n"
"2733585\n"
"2722749\n"
"61.1.6.\n") == 0);
free(board384716444);
board384716444 = NULL;
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_free_fields(board, 7) == 23 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );


gamma_delete(board);

    return 0;
}
