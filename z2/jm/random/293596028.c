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
uuid: 293596028
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 14, 8, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_free_fields(board, 2) == 110 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_free_fields(board, 5) == 106 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );


char* board320886701 = gamma_board(board);
assert( board320886701 != NULL );
assert( strcmp(board320886701, 
"........\n"
".2......\n"
"........\n"
"........\n"
"...6....\n"
"........\n"
"........\n"
"..5.....\n"
"4.4.....\n"
"........\n"
"........\n"
"........\n"
"........\n"
".1....5.\n") == 0);
free(board320886701);
board320886701 = NULL;
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_free_fields(board, 8) == 104 );
assert( gamma_move(board, 1, 9, 0) == 0 );


char* board508524527 = gamma_board(board);
assert( board508524527 != NULL );
assert( strcmp(board508524527, 
"........\n"
".2......\n"
"........\n"
"........\n"
"...67...\n"
"........\n"
"........\n"
"..5.....\n"
"4.4.....\n"
"........\n"
"........\n"
"........\n"
"........\n"
".1....5.\n") == 0);
free(board508524527);
board508524527 = NULL;
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_golden_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_golden_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );


char* board846756906 = gamma_board(board);
assert( board846756906 != NULL );
assert( strcmp(board846756906, 
"........\n"
".2......\n"
"........\n"
"........\n"
"...67...\n"
"........\n"
".7...2..\n"
"..5.88..\n"
"44436...\n"
"8...7...\n"
"....2..4\n"
"........\n"
".3.....6\n"
".13.5.5.\n") == 0);
free(board846756906);
board846756906 = NULL;
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_free_fields(board, 8) == 89 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board469092684 = gamma_board(board);
assert( board469092684 != NULL );
assert( strcmp(board469092684, 
"........\n"
".2......\n"
"........\n"
"........\n"
"...67...\n"
"........\n"
".7...2..\n"
"..5.88..\n"
"44436...\n"
"8...7...\n"
"....2..4\n"
"........\n"
".3.....6\n"
".13.5.5.\n") == 0);
free(board469092684);
board469092684 = NULL;
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );


char* board260043336 = gamma_board(board);
assert( board260043336 != NULL );
assert( strcmp(board260043336, 
"........\n"
".2....1.\n"
"........\n"
"........\n"
"...67...\n"
"........\n"
".7...2..\n"
"..5.88..\n"
"44436...\n"
"8...7...\n"
"....2..4\n"
"........\n"
".3.....6\n"
".13.5.5.\n") == 0);
free(board260043336);
board260043336 = NULL;
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_free_fields(board, 7) == 85 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 84 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_free_fields(board, 7) == 79 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 78 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 76 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 3, 13) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 5) == 0 );


char* board644048978 = gamma_board(board);
assert( board644048978 != NULL );
assert( strcmp(board644048978, 
"...8....\n"
"72..3.1.\n"
"..4.....\n"
".....5..\n"
"...67...\n"
".3......\n"
".7...2..\n"
"..5.88..\n"
"44436...\n"
"8.3.73..\n"
"47.32..4\n"
"........\n"
".32.6..6\n"
"513.5.58\n") == 0);
free(board644048978);
board644048978 = NULL;
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );


char* board519987224 = gamma_board(board);
assert( board519987224 != NULL );
assert( strcmp(board519987224, 
"...8....\n"
"72..3.1.\n"
"8.4.....\n"
".....5..\n"
"...67...\n"
".3.....5\n"
".7...2..\n"
"..5788..\n"
"44436...\n"
"8.3.73..\n"
"47.32..4\n"
"........\n"
".32.6..6\n"
"513.5.58\n") == 0);
free(board519987224);
board519987224 = NULL;
assert( gamma_move(board, 5, 7, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_free_fields(board, 7) == 68 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_golden_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );


char* board652390569 = gamma_board(board);
assert( board652390569 != NULL );
assert( strcmp(board652390569, 
"...8..6.\n"
"72..3.15\n"
"8.4.....\n"
"..4..5..\n"
".7.67...\n"
"43...7.5\n"
".7.862..\n"
"..5788..\n"
"444368..\n"
"8.3573..\n"
"47.323.4\n"
"..4....5\n"
".32.6..6\n"
"513.5658\n") == 0);
free(board652390569);
board652390569 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_golden_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );


char* board510953153 = gamma_board(board);
assert( board510953153 != NULL );
assert( strcmp(board510953153, 
"...8..6.\n"
"72..3.15\n"
"8.4.....\n"
"..4..5..\n"
"67.67...\n"
"43...7.5\n"
".7.862.6\n"
"..5788.4\n"
"444368.5\n"
"8.3573..\n"
"475323.4\n"
"..4....5\n"
".32.6..6\n"
"513.5658\n") == 0);
free(board510953153);
board510953153 = NULL;
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );


char* board526872032 = gamma_board(board);
assert( board526872032 != NULL );
assert( strcmp(board526872032, 
"..68..6.\n"
"72..3.15\n"
"8.4.....\n"
"..4..5..\n"
"67.67...\n"
"436..7.5\n"
".7.862.6\n"
"2.5788.4\n"
"444368.5\n"
"8.3573..\n"
"475323.4\n"
"..4.41.5\n"
".32.6..6\n"
"513.5658\n") == 0);
free(board526872032);
board526872032 = NULL;
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_golden_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 8, 2, 12) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 39 );


char* board381426106 = gamma_board(board);
assert( board381426106 != NULL );
assert( strcmp(board381426106, 
"..687.61\n"
"728.3115\n"
"8.4.....\n"
"..4..5.2\n"
"67.67...\n"
"436..7.5\n"
".7.862.6\n"
"225788.4\n"
"444368.5\n"
"8.3573..\n"
"475323.4\n"
".34.41.5\n"
".32.6..6\n"
"513.5858\n") == 0);
free(board381426106);
board381426106 = NULL;
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 35 );
assert( gamma_move(board, 1, 6, 8) == 1 );


char* board410347244 = gamma_board(board);
assert( board410347244 != NULL );
assert( strcmp(board410347244, 
"..687.61\n"
"728.3115\n"
"8.4.....\n"
".24..5.2\n"
"67267...\n"
"436..715\n"
".7.862.6\n"
"225788.4\n"
"444368.5\n"
"8.3573..\n"
"475323.4\n"
".34.41.5\n"
".32.6466\n"
"513.5858\n") == 0);
free(board410347244);
board410347244 = NULL;
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_golden_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_free_fields(board, 6) == 33 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 8, 4, 13) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board799888458 = gamma_board(board);
assert( board799888458 != NULL );
assert( strcmp(board799888458, 
"..687.61\n"
"728.3115\n"
"8.4.....\n"
".24.85.2\n"
"672676.1\n"
"436..715\n"
".7.862.6\n"
"225788.4\n"
"444368.5\n"
"8.3573..\n"
"475323.4\n"
".34.41.5\n"
".32.6466\n"
"513.5858\n") == 0);
free(board799888458);
board799888458 = NULL;
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );


char* board217622842 = gamma_board(board);
assert( board217622842 != NULL );
assert( strcmp(board217622842, 
"..687.61\n"
"728.3115\n"
"8.4.....\n"
".24.85.2\n"
"672676.1\n"
"436..715\n"
".7.862.6\n"
"225788.4\n"
"444368.5\n"
"8.3573..\n"
"475323.4\n"
".34.41.5\n"
".32.6466\n"
"513.5858\n") == 0);
free(board217622842);
board217622842 = NULL;
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );


char* board409733644 = gamma_board(board);
assert( board409733644 != NULL );
assert( strcmp(board409733644, 
"..687.61\n"
"728.3115\n"
"8.4....7\n"
".24.85.2\n"
"672676.1\n"
"436..715\n"
".7.862.6\n"
"225788.4\n"
"444368.5\n"
"8.3573..\n"
"475323.4\n"
".34.41.5\n"
".3216466\n"
"513.5858\n") == 0);
free(board409733644);
board409733644 = NULL;
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );


gamma_delete(board);

    return 0;
}
