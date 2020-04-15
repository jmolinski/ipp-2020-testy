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
uuid: 715419338
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );


char* board722733003 = gamma_board(board);
assert( board722733003 != NULL );
assert( strcmp(board722733003, 
"..7.4.\n"
"..6...\n"
"...3..\n"
"......\n"
"......\n"
"27.33.\n"
"5.6...\n"
"..2...\n"
".3....\n"
"...14.\n"
".5.4..\n") == 0);
free(board722733003);
board722733003 = NULL;
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );
assert( gamma_free_fields(board, 7) == 45 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );


char* board380607238 = gamma_board(board);
assert( board380607238 != NULL );
assert( strcmp(board380607238, 
".57.44\n"
"..6...\n"
"...3..\n"
"....73\n"
"......\n"
"27533.\n"
"5.6...\n"
"..2...\n"
".3....\n"
".1.142\n"
".5.4..\n") == 0);
free(board380607238);
board380607238 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );


char* board228903719 = gamma_board(board);
assert( board228903719 != NULL );
assert( strcmp(board228903719, 
".57.44\n"
"..62..\n"
"...3.7\n"
"..3.73\n"
".1....\n"
"275333\n"
"5.6...\n"
"..2.6.\n"
".315..\n"
".15142\n"
"25.4.5\n") == 0);
free(board228903719);
board228903719 = NULL;
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );


char* board989316692 = gamma_board(board);
assert( board989316692 != NULL );
assert( strcmp(board989316692, 
".57.44\n"
".662..\n"
".263.7\n"
".43.73\n"
".1....\n"
"275333\n"
"5.6...\n"
"..276.\n"
".315..\n"
".15142\n"
"257475\n") == 0);
free(board989316692);
board989316692 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );


char* board952068266 = gamma_board(board);
assert( board952068266 != NULL );
assert( strcmp(board952068266, 
".57.44\n"
".662..\n"
".263.7\n"
".43.73\n"
".1....\n"
"275333\n"
"556...\n"
"..276.\n"
".316..\n"
"115142\n"
"257475\n") == 0);
free(board952068266);
board952068266 = NULL;
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_golden_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 20 );


char* board535418674 = gamma_board(board);
assert( board535418674 != NULL );
assert( strcmp(board535418674, 
".57.44\n"
".662..\n"
".263.7\n"
".43473\n"
".1....\n"
"275333\n"
"556.54\n"
"..276.\n"
".316..\n"
"115142\n"
"257475\n") == 0);
free(board535418674);
board535418674 = NULL;
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_golden_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );


char* board163563707 = gamma_board(board);
assert( board163563707 != NULL );
assert( strcmp(board163563707, 
".57.44\n"
".662..\n"
".26347\n"
".43473\n"
".1....\n"
"275333\n"
"556.54\n"
"2.276.\n"
".316..\n"
"115142\n"
"257475\n") == 0);
free(board163563707);
board163563707 = NULL;
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );


char* board819189890 = gamma_board(board);
assert( board819189890 != NULL );
assert( strcmp(board819189890, 
".57.44\n"
".662..\n"
".26347\n"
".43473\n"
"31....\n"
"275333\n"
"556.54\n"
"2.276.\n"
".316..\n"
"115142\n"
"257475\n") == 0);
free(board819189890);
board819189890 = NULL;
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );


char* board519141497 = gamma_board(board);
assert( board519141497 != NULL );
assert( strcmp(board519141497, 
".57.44\n"
".662..\n"
".26347\n"
".43473\n"
"31....\n"
"275333\n"
"556.54\n"
"2.276.\n"
".316..\n"
"115142\n"
"257475\n") == 0);
free(board519141497);
board519141497 = NULL;
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );


gamma_delete(board);

    return 0;
}
