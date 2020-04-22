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
uuid: 496850325
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 12, 8, 43);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 3) == 187 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 4, 15, 9) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 184 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );


char* board594847188 = gamma_board(board);
assert( board594847188 != NULL );
assert( strcmp(board594847188, 
"..........4.....\n"
"........3.......\n"
".4...........2.4\n"
"15....5.........\n"
"............1...\n"
".....678........\n"
"...6............\n"
".....3..........\n"
"................\n"
".....3..........\n"
".8...2..........\n"
"....2...........\n") == 0);
free(board594847188);
board594847188 = NULL;
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_move(board, 6, 15, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 3, 15) == 0 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_free_fields(board, 4) == 161 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_free_fields(board, 6) == 159 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_free_fields(board, 3) == 157 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 9, 7) == 1 );


char* board622342659 = gamma_board(board);
assert( board622342659 != NULL );
assert( strcmp(board622342659, 
"......1..14.....\n"
".2...5..3......6\n"
".4...5...7..22.4\n"
"15..4.5....6....\n"
".2.6.....8..1...\n"
".....678...4....\n"
"...6.4.8........\n"
".....3.5........\n"
".....6..........\n"
".6...37.8.......\n"
".8...2..........\n"
".2..2......3....\n") == 0);
free(board622342659);
board622342659 = NULL;
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 6, 14, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 5, 11) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_golden_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_free_fields(board, 2) == 138 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 15, 8) == 1 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_free_fields(board, 1) == 133 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_free_fields(board, 5) == 131 );
assert( gamma_golden_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board552510588 = gamma_board(board);
assert( board552510588 != NULL );
assert( strcmp(board552510588, 
"7....81..14...6.\n"
".2...5..3......6\n"
".4..551..73.22.4\n"
"15..4.5....6...5\n"
".2.6....58..1...\n"
".6.6.638...4....\n"
"...6.4886.......\n"
"...4.345........\n"
"1..7.6..1.23....\n"
"56...37.8.......\n"
".8...2..........\n"
"42..2......3....\n") == 0);
free(board552510588);
board552510588 = NULL;
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_golden_move(board, 6, 9, 6) == 0 );


char* board847723453 = gamma_board(board);
assert( board847723453 != NULL );
assert( strcmp(board847723453, 
"7....81..14...6.\n"
".2...5..3...3..6\n"
".4..551..73.22.4\n"
"15..4.5....6...5\n"
".2.6....58..1...\n"
".6.6.638...4....\n"
"...6.4886.......\n"
"...4.345........\n"
"1..756..1.23....\n"
"56.2.37.8..4....\n"
".8...2..........\n"
"42..2......3....\n") == 0);
free(board847723453);
board847723453 = NULL;
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, 15, 4) == 1 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_golden_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 1, 15, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );


char* board101466776 = gamma_board(board);
assert( board101466776 != NULL );
assert( strcmp(board101466776, 
"5....81..14...6.\n"
"52.615..34..3..6\n"
".4..551..73.22.4\n"
"15..4.58...6...5\n"
"22.6....58..1...\n"
".6.6.638...4....\n"
"...6.4886.......\n"
"...4.345...82..8\n"
"1..756..1.23.2..\n"
"56.2.3738..4...1\n"
".8...2..........\n"
"42..2......33...\n") == 0);
free(board101466776);
board101466776 = NULL;
assert( gamma_move(board, 6, 11, 15) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board518812461 = gamma_board(board);
assert( board518812461 != NULL );
assert( strcmp(board518812461, 
"5....81..14...6.\n"
"52.615..34..3..6\n"
".4..551..73.22.4\n"
"15..4.58...6...5\n"
"22.6....58..1...\n"
".6.6.638...4....\n"
"...6.4886.......\n"
"...4.345...82..8\n"
"1..756..1.23.2..\n"
"56.2.3738..4...1\n"
".8...2..........\n"
"42..2......33...\n") == 0);
free(board518812461);
board518812461 = NULL;
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 2) == 103 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 7, 14, 8) == 1 );
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_free_fields(board, 2) == 100 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 15, 0) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );


char* board463315083 = gamma_board(board);
assert( board463315083 != NULL );
assert( strcmp(board463315083, 
"5....81..14...6.\n"
"52.615..34..3..6\n"
"14..551..73.22.4\n"
"15..4.58...6..75\n"
"22.6....58..1...\n"
"16.6.638...4....\n"
"5..6.4886.......\n"
"...46345...82..8\n"
"1..756..1723.2..\n"
"56.2.3738..41..1\n"
"68.8.2.....4....\n"
"42..23..72.33..4\n") == 0);
free(board463315083);
board463315083 = NULL;
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_move(board, 7, 15, 7) == 1 );
assert( gamma_free_fields(board, 7) == 94 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 4, 15, 3) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );


char* board196784588 = gamma_board(board);
assert( board196784588 != NULL );
assert( strcmp(board196784588, 
"5....81..147..6.\n"
"52.615..34..33.6\n"
"14..551.173722.4\n"
"15..4.58...6..75\n"
"22.6....58..1..7\n"
"16.6.638...4....\n"
"56.634886.......\n"
"...46345...82..8\n"
"1..756..1723.2.4\n"
"56.2.3738..41..1\n"
"68.8.2.11..4....\n"
"42..23..72.33..4\n") == 0);
free(board196784588);
board196784588 = NULL;
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 14, 5) == 1 );
assert( gamma_golden_move(board, 8, 9, 10) == 1 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 15, 6) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 84 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 10, 14) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_move(board, 1, 11, 0) == 1 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_free_fields(board, 7) == 78 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 15, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_move(board, 8, 0, 14) == 0 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 13) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 1, 6, 10) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 15, 2) == 0 );
assert( gamma_move(board, 7, 15, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );


char* board760219834 = gamma_board(board);
assert( board760219834 != NULL );
assert( strcmp(board760219834, 
"5..3881..147..63\n"
"5216151738..33.6\n"
"14.3551.173722.4\n"
"15..4.585.56.575\n"
"22.6.7..58.11..7\n"
"16.666382..4...3\n"
"56.634886.....8.\n"
"...46345..782..8\n"
"18.756..1723.2.4\n"
"5662.37381141..1\n"
"68.8228115.4....\n"
"42..23..72.13..4\n") == 0);
free(board760219834);
board760219834 = NULL;
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 14, 7) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_golden_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 13, 5) == 1 );
assert( gamma_move(board, 8, 2, 11) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_golden_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 7, 5) == 0 );


char* board713976622 = gamma_board(board);
assert( board713976622 != NULL );
assert( strcmp(board713976622, 
"5.83881..147..63\n"
"5216151738..33.6\n"
"14.3551.173722.4\n"
"15..41585.56.575\n"
"22.6.75.58611.67\n"
"16.666382..4...3\n"
"56.634886.2..78.\n"
"...46345..782..8\n"
"18.756..172312.4\n"
"5662.37381141..1\n"
"68.8228115.4....\n"
"42..23..72.13..4\n") == 0);
free(board713976622);
board713976622 = NULL;
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 14, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_golden_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_golden_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 2, 15, 5) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 3, 13) == 0 );


char* board814724540 = gamma_board(board);
assert( board814724540 != NULL );
assert( strcmp(board814724540, 
"5.83881.3147..63\n"
"52161517382.33.6\n"
"1483551.173722.4\n"
"15..41685.56.575\n"
"22.6.75458611.67\n"
"16.666382..4...3\n"
"563634886.2.6782\n"
"...46345..782..8\n"
"18.756..17231284\n"
"5662737381141511\n"
"68.8228115.45...\n"
"42..23..72.13..4\n") == 0);
free(board814724540);
board814724540 = NULL;
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 15, 11) == 0 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 1, 10) == 0 );


char* board734461908 = gamma_board(board);
assert( board734461908 != NULL );
assert( strcmp(board734461908, 
"5.83881.3147..63\n"
"52161517382.33.6\n"
"1483551.173722.4\n"
"15..41685.56.575\n"
"22.6.75458611.67\n"
"16.666382..4...3\n"
"563634886.2.6782\n"
"...46345..782..8\n"
"18.756..17231284\n"
"5662737381141511\n"
"68.8228115.45...\n"
"42..23..72.13..4\n") == 0);
free(board734461908);
board734461908 = NULL;
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_free_fields(board, 8) == 43 );
assert( gamma_golden_move(board, 8, 5, 15) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_golden_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 1, 15) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 1, 15) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_golden_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_golden_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );


char* board382429442 = gamma_board(board);
assert( board382429442 != NULL );
assert( strcmp(board382429442, 
"2.83881.3147.263\n"
"52161517382.3356\n"
"1483551.173722.4\n"
"15..41685.56.575\n"
"22.6.75458611.67\n"
"16.666382..4...3\n"
"563634886.2.6782\n"
"...46345..782..8\n"
"183756..17231284\n"
"5662737381141511\n"
"68.8228115.45...\n"
"42..23.172.13..4\n") == 0);
free(board382429442);
board382429442 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_golden_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_free_fields(board, 6) == 39 );


char* board631462778 = gamma_board(board);
assert( board631462778 != NULL );
assert( strcmp(board631462778, 
"2.83881.3147.263\n"
"52161517382.3356\n"
"1483551.173722.4\n"
"15.641685.56.575\n"
"22.6.75458611.67\n"
"16.666382..4..63\n"
"563634886.2.6782\n"
"...46345..782..8\n"
"183756..17231284\n"
"5662737381141511\n"
"68.8228115.45...\n"
"42..23.172.13..4\n") == 0);
free(board631462778);
board631462778 = NULL;
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_golden_move(board, 5, 7, 7) == 0 );


char* board903173869 = gamma_board(board);
assert( board903173869 != NULL );
assert( strcmp(board903173869, 
"2.83881.3147.263\n"
"52161517382.3356\n"
"1483551.173722.4\n"
"15.641685456.575\n"
"22.6.75458611.67\n"
"16.666382..4..63\n"
"563634886.2.6782\n"
"...46345..782..8\n"
"183756..17231284\n"
"5662737381141511\n"
"68.8228115.45...\n"
"42..23.172.13..4\n") == 0);
free(board903173869);
board903173869 = NULL;
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 10, 11) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 15, 2) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_free_fields(board, 8) == 33 );


gamma_delete(board);

    return 0;
}
