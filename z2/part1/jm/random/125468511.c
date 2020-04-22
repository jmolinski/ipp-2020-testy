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
uuid: 125468511
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_free_fields(board, 9) == 60 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board179571712 = gamma_board(board);
assert( board179571712 != NULL );
assert( strcmp(board179571712, 
".......\n"
"....637\n"
".......\n"
".25....\n"
"3.4..7.\n"
".91....\n"
"9......\n"
".......\n"
".18...1\n"
"9.4...8\n") == 0);
free(board179571712);
board179571712 = NULL;
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_golden_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_free_fields(board, 9) == 46 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_golden_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_golden_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_free_fields(board, 7) == 23 );


char* board595768989 = gamma_board(board);
assert( board595768989 != NULL );
assert( strcmp(board595768989, 
"8.5....\n"
"8...637\n"
"1.9.98.\n"
".259966\n"
"344757.\n"
"79166..\n"
"93.2.73\n"
".57355.\n"
"418.4.8\n"
"9.479.8\n") == 0);
free(board595768989);
board595768989 = NULL;
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board331188326 = gamma_board(board);
assert( board331188326 != NULL );
assert( strcmp(board331188326, 
"835691.\n"
"8..8637\n"
"1.9.98.\n"
"8259966\n"
"3447574\n"
"79166..\n"
"93.2.73\n"
".57355.\n"
"418.428\n"
"9.479.8\n") == 0);
free(board331188326);
board331188326 = NULL;
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_golden_move(board, 3, 2, 4) == 1 );


char* board345550157 = gamma_board(board);
assert( board345550157 != NULL );
assert( strcmp(board345550157, 
"835691.\n"
"8.18637\n"
"1.9.98.\n"
"8259966\n"
"3447574\n"
"79366..\n"
"93.2.73\n"
".57355.\n"
"418.428\n"
"9.479.8\n") == 0);
free(board345550157);
board345550157 = NULL;
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_free_fields(board, 9) == 13 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );


char* board955261307 = gamma_board(board);
assert( board955261307 != NULL );
assert( strcmp(board955261307, 
"8356912\n"
"8.18637\n"
"1.9.98.\n"
"8259966\n"
"3447574\n"
"79366.6\n"
"93.2.73\n"
".57355.\n"
"418.428\n"
"9.479.8\n") == 0);
free(board955261307);
board955261307 = NULL;
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );


char* board530593296 = gamma_board(board);
assert( board530593296 != NULL );
assert( strcmp(board530593296, 
"8356912\n"
"8.18637\n"
"1.9.98.\n"
"8259966\n"
"3447574\n"
"79366.6\n"
"93.2673\n"
".57355.\n"
"418.428\n"
"9.479.8\n") == 0);
free(board530593296);
board530593296 = NULL;
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );


char* board425189081 = gamma_board(board);
assert( board425189081 != NULL );
assert( strcmp(board425189081, 
"8356912\n"
"8.18637\n"
"1.9.98.\n"
"8259966\n"
"3447574\n"
"79366.6\n"
"93.2673\n"
".57355.\n"
"418.428\n"
"9.479.8\n") == 0);
free(board425189081);
board425189081 = NULL;
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_free_fields(board, 9) == 9 );


char* board238180729 = gamma_board(board);
assert( board238180729 != NULL );
assert( strcmp(board238180729, 
"8356912\n"
"8118637\n"
"149.98.\n"
"8259966\n"
"3447574\n"
"79366.6\n"
"93.2673\n"
".57355.\n"
"418.428\n"
"9.479.8\n") == 0);
free(board238180729);
board238180729 = NULL;
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );


gamma_delete(board);

    return 0;
}
