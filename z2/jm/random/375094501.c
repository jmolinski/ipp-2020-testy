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
uuid: 375094501
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 5, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board240036350 = gamma_board(board);
assert( board240036350 != NULL );
assert( strcmp(board240036350, 
".1.113....\n"
"..........\n"
"........4.\n"
"...4..2...\n"
"......3...\n"
".5........\n"
"..........\n"
"..........\n"
".........3\n") == 0);
free(board240036350);
board240036350 = NULL;
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board305147928 = gamma_board(board);
assert( board305147928 != NULL );
assert( strcmp(board305147928, 
".1.113..2.\n"
"5.4....2..\n"
"...5.3.145\n"
".4.41.2.4.\n"
"351...3...\n"
"355.4...5.\n"
"..1..52...\n"
"..42......\n"
".1.......3\n") == 0);
free(board305147928);
board305147928 = NULL;
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );


char* board844598623 = gamma_board(board);
assert( board844598623 != NULL );
assert( strcmp(board844598623, 
".1.113.52.\n"
"5.4....2..\n"
"...5.3.145\n"
".4.41.2.41\n"
"351...3...\n"
"355.4...5.\n"
"..1..52...\n"
"..42.4....\n"
".1.......3\n") == 0);
free(board844598623);
board844598623 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board877176556 = gamma_board(board);
assert( board877176556 != NULL );
assert( strcmp(board877176556, 
".1.113.52.\n"
"5.4....2..\n"
"...5.3.145\n"
"34.41.2441\n"
"351...3...\n"
"355.4..15.\n"
"4.1..52...\n"
"..42.4....\n"
".11......3\n") == 0);
free(board877176556);
board877176556 = NULL;
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );


char* board714094448 = gamma_board(board);
assert( board714094448 != NULL );
assert( strcmp(board714094448, 
"11.113452.\n"
"5.4.2..25.\n"
"...5.3.145\n"
"34.4132441\n"
"351...3...\n"
"355.4..15.\n"
"4.1.352...\n"
".242.4.3..\n"
".11....4.3\n") == 0);
free(board714094448);
board714094448 = NULL;
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );


char* board315381066 = gamma_board(board);
assert( board315381066 != NULL );
assert( strcmp(board315381066, 
"11.113452.\n"
"5.422..25.\n"
"...5.3.145\n"
"34.4132441\n"
"3513..3...\n"
"355.41.15.\n"
"4.1.352...\n"
".242.4.3..\n"
".11....4.3\n") == 0);
free(board315381066);
board315381066 = NULL;
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_golden_move(board, 2, 1, 2) == 0 );


char* board170870990 = gamma_board(board);
assert( board170870990 != NULL );
assert( strcmp(board170870990, 
"11.113452.\n"
"5.422..25.\n"
"...533.145\n"
"34.4132441\n"
"3513..3...\n"
"355.41.15.\n"
"4.1.352...\n"
".242.433..\n"
"411.43.4.3\n") == 0);
free(board170870990);
board170870990 = NULL;
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board468107673 = gamma_board(board);
assert( board468107673 != NULL );
assert( strcmp(board468107673, 
"11.113452.\n"
"5.422..25.\n"
"...533.145\n"
"34.4132441\n"
"3513..3...\n"
"355.41.15.\n"
"4.1.352...\n"
".242.433..\n"
"411.43.4.3\n") == 0);
free(board468107673);
board468107673 = NULL;
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_golden_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );


char* board357897457 = gamma_board(board);
assert( board357897457 != NULL );
assert( strcmp(board357897457, 
"1151134525\n"
"5.4223.25.\n"
"...531.145\n"
"34.4132441\n"
"35134.3...\n"
"355241.15.\n"
"4.1.3521..\n"
".242.433..\n"
"411443.4.3\n") == 0);
free(board357897457);
board357897457 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board482855880 = gamma_board(board);
assert( board482855880 != NULL );
assert( strcmp(board482855880, 
"1151134525\n"
"5.4223.25.\n"
"1..531.145\n"
"34.4132441\n"
"3513423...\n"
"355241.154\n"
"4.1.3521..\n"
".242.433..\n"
"411443.4.3\n") == 0);
free(board482855880);
board482855880 = NULL;
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );


char* board693301714 = gamma_board(board);
assert( board693301714 != NULL );
assert( strcmp(board693301714, 
"1151134525\n"
"5.4223.25.\n"
"1..5313145\n"
"34.4132441\n"
"3513423.4.\n"
"355241.154\n"
"4.1.3521..\n"
".242.433..\n"
"411443.4.3\n") == 0);
free(board693301714);
board693301714 = NULL;
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );


char* board176996416 = gamma_board(board);
assert( board176996416 != NULL );
assert( strcmp(board176996416, 
"1151134525\n"
"5.4223.25.\n"
"1..5313145\n"
"34.4132441\n"
"3513423.4.\n"
"355241.154\n"
"4.1.3521..\n"
".242.433..\n"
"411443.4.3\n") == 0);
free(board176996416);
board176996416 = NULL;
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );


char* board686265507 = gamma_board(board);
assert( board686265507 != NULL );
assert( strcmp(board686265507, 
"1151134525\n"
"5.42231253\n"
"1..5313145\n"
"3444132441\n"
"3513423.4.\n"
"355241.154\n"
"4.1.3521..\n"
".242.433..\n"
"411443.443\n") == 0);
free(board686265507);
board686265507 = NULL;
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );


char* board271545912 = gamma_board(board);
assert( board271545912 != NULL );
assert( strcmp(board271545912, 
"1151134525\n"
"5.42231253\n"
"1..5313145\n"
"3444132441\n"
"3513423.4.\n"
"355241.154\n"
"4.1.3521..\n"
".242.433..\n"
"411443.443\n") == 0);
free(board271545912);
board271545912 = NULL;
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_golden_move(board, 5, 7, 3) == 1 );


gamma_delete(board);

    return 0;
}
