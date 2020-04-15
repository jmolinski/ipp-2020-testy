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
uuid: 624623211
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 8, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_golden_move(board, 5, 0, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board599452833 = gamma_board(board);
assert( board599452833 != NULL );
assert( strcmp(board599452833, 
".2...3.\n"
"..6....\n"
".......\n"
"....2.5\n"
"5....6.\n"
".3.2.3.\n"
"4.12..8\n"
"....88.\n"
".....5.\n"
"55..1..\n") == 0);
free(board599452833);
board599452833 = NULL;
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );


char* board471849953 = gamma_board(board);
assert( board471849953 != NULL );
assert( strcmp(board471849953, 
".23..3.\n"
"..6.7..\n"
"..58..1\n"
".6..255\n"
"5....6.\n"
".3.2.3.\n"
"4.12..8\n"
"81..88.\n"
"...5.5.\n"
"55..1.7\n") == 0);
free(board471849953);
board471849953 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );


char* board257923719 = gamma_board(board);
assert( board257923719 != NULL );
assert( strcmp(board257923719, 
".23..3.\n"
"..6.7..\n"
"..58..1\n"
".65.255\n"
"5..8.6.\n"
".3.2.3.\n"
"4.12..8\n"
"81..882\n"
"...5.5.\n"
"55..1.7\n") == 0);
free(board257923719);
board257923719 = NULL;
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board765354273 = gamma_board(board);
assert( board765354273 != NULL );
assert( strcmp(board765354273, 
".23.33.\n"
"..6.7..\n"
"..58..1\n"
".65.255\n"
"54.8.6.\n"
".3.2.3.\n"
"4.12..8\n"
"81..882\n"
"...5.5.\n"
"55..1.7\n") == 0);
free(board765354273);
board765354273 = NULL;
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );


char* board595881776 = gamma_board(board);
assert( board595881776 != NULL );
assert( strcmp(board595881776, 
"223.33.\n"
"8.667..\n"
"5.58..1\n"
".65.255\n"
"54.8.6.\n"
"83.2834\n"
"4512..8\n"
"81..882\n"
".8.5.5.\n"
"55..177\n") == 0);
free(board595881776);
board595881776 = NULL;
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board519882583 = gamma_board(board);
assert( board519882583 != NULL );
assert( strcmp(board519882583, 
"223833.\n"
"8.667.5\n"
"5.58..1\n"
"465.255\n"
"54.8.6.\n"
"83.2834\n"
"4512..8\n"
"81..882\n"
".8.5.5.\n"
"55..177\n") == 0);
free(board519882583);
board519882583 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 12 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board922735208 = gamma_board(board);
assert( board922735208 != NULL );
assert( strcmp(board922735208, 
"223833.\n"
"8.667.5\n"
"5.58.71\n"
"465.255\n"
"54.8.6.\n"
"83.2834\n"
"4512..8\n"
"818.882\n"
".8.5.5.\n"
"55..177\n") == 0);
free(board922735208);
board922735208 = NULL;
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_golden_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );


char* board352040850 = gamma_board(board);
assert( board352040850 != NULL );
assert( strcmp(board352040850, 
"223833.\n"
"8.667.5\n"
"5.58.71\n"
"465.255\n"
"54.8.6.\n"
"83.2834\n"
"45125.8\n"
"818.882\n"
".8.6.5.\n"
"55..177\n") == 0);
free(board352040850);
board352040850 = NULL;
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );


char* board198020968 = gamma_board(board);
assert( board198020968 != NULL );
assert( strcmp(board198020968, 
"223833.\n"
"8.667.5\n"
"5.58.71\n"
"465.255\n"
"5488.6.\n"
"83.2834\n"
"45125.8\n"
"818.882\n"
".8.6.5.\n"
"55..177\n") == 0);
free(board198020968);
board198020968 = NULL;
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_free_fields(board, 8) == 16 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_golden_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_golden_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );


char* board813917027 = gamma_board(board);
assert( board813917027 != NULL );
assert( strcmp(board813917027, 
"223833.\n"
"8.66725\n"
"5.58.71\n"
"465.255\n"
"5488.6.\n"
"8382834\n"
"48125.8\n"
"818.882\n"
".8.6.5.\n"
"55..177\n") == 0);
free(board813917027);
board813917027 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
