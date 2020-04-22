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
uuid: 276471852
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 8, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 3, 8) == 1 );
assert( gamma_move(board, 7, 6, 12) == 1 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_golden_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_free_fields(board, 3) == 108 );


char* board541542799 = gamma_board(board);
assert( board541542799 != NULL );
assert( strcmp(board541542799, 
".8....7....\n"
".....5.....\n"
"7..1.8....1\n"
".4.........\n"
"...7.8....1\n"
"..6....34..\n"
"...........\n"
"....2.3....\n"
".2353.6....\n"
".......2...\n"
".61714..1..\n"
"...3.4.....\n"
"2...62.56..\n") == 0);
free(board541542799);
board541542799 = NULL;
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_golden_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_free_fields(board, 7) == 74 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );


char* board998751844 = gamma_board(board);
assert( board998751844 != NULL );
assert( strcmp(board998751844, 
".8.5..7....\n"
".....5.....\n"
"7.51.8..2.1\n"
".47287...38\n"
"...76816851\n"
".36...5345.\n"
"....8.3...1\n"
"...32634...\n"
"62356.61227\n"
"...1.622...\n"
".61714561..\n"
"...3143...7\n"
"23..62.5647\n") == 0);
free(board998751844);
board998751844 = NULL;
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );


char* board675251604 = gamma_board(board);
assert( board675251604 != NULL );
assert( strcmp(board675251604, 
".8.5..7....\n"
"3....5....3\n"
"7.51.8..2.1\n"
".47287...38\n"
"...74816851\n"
".36...5345.\n"
"8...8.3...1\n"
"...32634...\n"
"62356.61227\n"
"...1.622...\n"
".61714561..\n"
"...3143...7\n"
"23..6245647\n") == 0);
free(board675251604);
board675251604 = NULL;
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_free_fields(board, 8) == 62 );
assert( gamma_move(board, 1, 10, 8) == 0 );


char* board765768343 = gamma_board(board);
assert( board765768343 != NULL );
assert( strcmp(board765768343, 
".8.5..7....\n"
"3....5....3\n"
"7.51.8..2.1\n"
".47287...38\n"
"...74816851\n"
"536...5345.\n"
"8...8.3...1\n"
"...32634...\n"
"62356.61227\n"
"7..1.622...\n"
".61714561..\n"
"...31436..7\n"
"23..6245647\n") == 0);
free(board765768343);
board765768343 = NULL;
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );


char* board235324267 = gamma_board(board);
assert( board235324267 != NULL );
assert( strcmp(board235324267, 
".865..7....\n"
"3....5..633\n"
"7.51.8..2.1\n"
".472876..38\n"
"...74816851\n"
"536...5345.\n"
"8...8.3...1\n"
"...32634...\n"
"62356.61227\n"
"7..1.622...\n"
".617145614.\n"
"...31436..7\n"
"23..6245647\n") == 0);
free(board235324267);
board235324267 = NULL;
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_free_fields(board, 8) == 55 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );


char* board368483947 = gamma_board(board);
assert( board368483947 != NULL );
assert( strcmp(board368483947, 
".865..7....\n"
"33...5..633\n"
"7.5138..2.1\n"
".472876..38\n"
"...74816851\n"
"536...53458\n"
"8...8.3...1\n"
"...32634...\n"
"62356.61227\n"
"7..1.622...\n"
".6171456144\n"
"1.331436..7\n"
"23..3245647\n") == 0);
free(board368483947);
board368483947 = NULL;
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 8, 9, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );


char* board638789066 = gamma_board(board);
assert( board638789066 != NULL );
assert( strcmp(board638789066, 
".865..7....\n"
"33...5..633\n"
"755138..2.1\n"
".472876..38\n"
"74.74816851\n"
"536...53458\n"
"8...8.3..81\n"
"...32634...\n"
"62356561227\n"
"7..1.622...\n"
".6171456144\n"
"1.331436..7\n"
"23..3245647\n") == 0);
free(board638789066);
board638789066 = NULL;
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );


char* board976063075 = gamma_board(board);
assert( board976063075 != NULL );
assert( strcmp(board976063075, 
".865..7....\n"
"33...5..633\n"
"755138..2.1\n"
".472876..38\n"
"74.74816851\n"
"536...53458\n"
"8...863..81\n"
"...32634...\n"
"62356561227\n"
"7..1.622...\n"
"26171456144\n"
"18331436..7\n"
"23..3245647\n") == 0);
free(board976063075);
board976063075 = NULL;
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board717449159 = gamma_board(board);
assert( board717449159 != NULL );
assert( strcmp(board717449159, 
".865..7....\n"
"33.4.5.3633\n"
"7551386.2.1\n"
".472876..38\n"
"74574816851\n"
"536...53458\n"
"8...863..81\n"
"...32634.3.\n"
"62356561227\n"
"78.1.622...\n"
"26171456144\n"
"18331436..7\n"
"23..3245647\n") == 0);
free(board717449159);
board717449159 = NULL;
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );


char* board674040730 = gamma_board(board);
assert( board674040730 != NULL );
assert( strcmp(board674040730, 
"5865..7..5.\n"
"33.4.513633\n"
"7551386.2.1\n"
".472876..38\n"
"74574816851\n"
"536...53458\n"
"8.8.8632.81\n"
"...32634.3.\n"
"62356561227\n"
"7811.622...\n"
"26171456144\n"
"18331436..7\n"
"23..3245647\n") == 0);
free(board674040730);
board674040730 = NULL;
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 10) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 12, 7) == 0 );
assert( gamma_golden_move(board, 8, 12, 6) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );


gamma_delete(board);

    return 0;
}
