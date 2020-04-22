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
uuid: 944591203
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 14, 8, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board573729078 = gamma_board(board);
assert( board573729078 != NULL );
assert( strcmp(board573729078, 
"......\n"
"......\n"
"..1...\n"
"......\n"
"......\n"
"......\n"
"....1.\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board573729078);
board573729078 = NULL;
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_free_fields(board, 6) == 78 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_golden_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );


char* board248390611 = gamma_board(board);
assert( board248390611 != NULL );
assert( strcmp(board248390611, 
"......\n"
".1....\n"
"..1.6.\n"
".1....\n"
"...8..\n"
".....6\n"
"....1.\n"
".4....\n"
"...56.\n"
"37..5.\n"
"...4..\n"
"..3.4.\n"
".....5\n"
".4..6.\n") == 0);
free(board248390611);
board248390611 = NULL;
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );


char* board726192776 = gamma_board(board);
assert( board726192776 != NULL );
assert( strcmp(board726192776, 
"......\n"
".1....\n"
"..1.6.\n"
".1....\n"
"...88.\n"
"..1..6\n"
"....1.\n"
".4....\n"
"...568\n"
"37..5.\n"
"..14..\n"
"..3.4.\n"
".....5\n"
".4..6.\n") == 0);
free(board726192776);
board726192776 = NULL;
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );


char* board701593174 = gamma_board(board);
assert( board701593174 != NULL );
assert( strcmp(board701593174, 
"......\n"
".1....\n"
"..1.6.\n"
".1....\n"
"...88.\n"
"..1..6\n"
"4...1.\n"
".4....\n"
"...568\n"
"37..55\n"
"..14..\n"
"..3.4.\n"
".....5\n"
".4..6.\n") == 0);
free(board701593174);
board701593174 = NULL;
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );


char* board425958483 = gamma_board(board);
assert( board425958483 != NULL );
assert( strcmp(board425958483, 
"......\n"
".1....\n"
"..1.6.\n"
".1....\n"
"...88.\n"
"..1..6\n"
"4...1.\n"
".4..7.\n"
"...568\n"
"37..55\n"
"..14..\n"
"..3.4.\n"
".....5\n"
".4..6.\n") == 0);
free(board425958483);
board425958483 = NULL;
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );


char* board775961660 = gamma_board(board);
assert( board775961660 != NULL );
assert( strcmp(board775961660, 
"......\n"
".1....\n"
"..1.6.\n"
".1....\n"
"...88.\n"
"..1..6\n"
"4...1.\n"
".4..7.\n"
"...568\n"
"37..55\n"
".1148.\n"
"..3.4.\n"
".....5\n"
".4.86.\n") == 0);
free(board775961660);
board775961660 = NULL;
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_golden_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );


char* board445241936 = gamma_board(board);
assert( board445241936 != NULL );
assert( strcmp(board445241936, 
"......\n"
".1....\n"
"..1.6.\n"
".1....\n"
"...88.\n"
".81..6\n"
"4..71.\n"
".4..7.\n"
"...568\n"
"37..55\n"
".1148.\n"
"5.3.4.\n"
"..1..5\n"
".4.86.\n") == 0);
free(board445241936);
board445241936 = NULL;
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );


char* board127832821 = gamma_board(board);
assert( board127832821 != NULL );
assert( strcmp(board127832821, 
"......\n"
".1...7\n"
"..1.6.\n"
".1....\n"
"...88.\n"
".81..6\n"
"4..71.\n"
".47.7.\n"
"...568\n"
"37..55\n"
".1148.\n"
"5.3.4.\n"
"..1..5\n"
".4.86.\n") == 0);
free(board127832821);
board127832821 = NULL;
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_golden_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board838142139 = gamma_board(board);
assert( board838142139 != NULL );
assert( strcmp(board838142139, 
"......\n"
".1..37\n"
"..116.\n"
".1....\n"
"..888.\n"
".81..6\n"
"4..71.\n"
".4737.\n"
"...568\n"
"37..55\n"
"21188.\n"
"513.47\n"
"..1.75\n"
".4.865\n") == 0);
free(board838142139);
board838142139 = NULL;
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_golden_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board156239722 = gamma_board(board);
assert( board156239722 != NULL );
assert( strcmp(board156239722, 
".....1\n"
".1.337\n"
"..116.\n"
".1144.\n"
"8.8882\n"
".815.6\n"
"4.271.\n"
".4737.\n"
"...568\n"
"37..55\n"
"21188.\n"
"513.47\n"
"..1.75\n"
".4.865\n") == 0);
free(board156239722);
board156239722 = NULL;
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 5, 11) == 1 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board100821133 = gamma_board(board);
assert( board100821133 != NULL );
assert( strcmp(board100821133, 
".....1\n"
".1.337\n"
"..1167\n"
".11448\n"
"8.8882\n"
".81516\n"
"42271.\n"
".4737.\n"
"...568\n"
"37..55\n"
"21188.\n"
"513.47\n"
"..1.75\n"
"44.865\n") == 0);
free(board100821133);
board100821133 = NULL;
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_golden_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_golden_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );


char* board271372380 = gamma_board(board);
assert( board271372380 != NULL );
assert( strcmp(board271372380, 
"..2..1\n"
".1.337\n"
"..1167\n"
".11448\n"
"878882\n"
"181516\n"
"422712\n"
".47378\n"
"..2548\n"
"37..55\n"
"21188.\n"
"513.47\n"
".61275\n"
"44.865\n") == 0);
free(board271372380);
board271372380 = NULL;
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_golden_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_golden_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 13, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );


gamma_delete(board);

    return 0;
}
