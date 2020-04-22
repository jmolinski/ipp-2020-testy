#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_many_boards
uuid: 182828050
*/
/*
gamma_move + gamma_board, a few boards at the same time
*/
gamma_t* board1 = gamma_new(4, 4, 4, 16);
assert( board1 != NULL );


gamma_t* board2 = gamma_new(4, 4, 4, 16);
assert( board2 != NULL );


gamma_t* board3 = gamma_new(4, 4, 4, 16);
assert( board3 != NULL );


assert( gamma_move(board1, 1, 0, 0) == 1 );


char* board825448482 = gamma_board(board1);
assert( board825448482 != NULL );
assert( strcmp(board825448482, 
"....\n"
"....\n"
"....\n"
"1...\n") == 0);
free(board825448482);
board825448482 = NULL;
assert( gamma_move(board2, 1, 2, 2) == 1 );


char* board966610141 = gamma_board(board2);
assert( board966610141 != NULL );
assert( strcmp(board966610141, 
"....\n"
"..1.\n"
"....\n"
"....\n") == 0);
free(board966610141);
board966610141 = NULL;
assert( gamma_move(board3, 1, 2, 0) == 1 );


char* board511427896 = gamma_board(board3);
assert( board511427896 != NULL );
assert( strcmp(board511427896, 
"....\n"
"....\n"
"....\n"
"..1.\n") == 0);
free(board511427896);
board511427896 = NULL;
assert( gamma_move(board1, 2, 2, 0) == 1 );
assert( gamma_move(board2, 2, 1, 1) == 1 );
assert( gamma_move(board3, 2, 0, 3) == 1 );
assert( gamma_move(board1, 3, 1, 3) == 1 );
assert( gamma_move(board2, 3, 3, 3) == 1 );
assert( gamma_move(board3, 3, 1, 3) == 1 );
assert( gamma_move(board1, 4, 0, 0) == 0 );
assert( gamma_move(board2, 4, 2, 2) == 0 );
assert( gamma_move(board3, 4, 2, 0) == 0 );
assert( gamma_move(board1, 1, 0, 0) == 0 );


char* board298420519 = gamma_board(board1);
assert( board298420519 != NULL );
assert( strcmp(board298420519, 
".3..\n"
"....\n"
"....\n"
"1.2.\n") == 0);
free(board298420519);
board298420519 = NULL;
assert( gamma_move(board2, 1, 1, 1) == 0 );


char* board811051333 = gamma_board(board2);
assert( board811051333 != NULL );
assert( strcmp(board811051333, 
"...3\n"
"..1.\n"
".2..\n"
"....\n") == 0);
free(board811051333);
board811051333 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 1 );


char* board772771442 = gamma_board(board3);
assert( board772771442 != NULL );
assert( strcmp(board772771442, 
"23..\n"
"....\n"
"...1\n"
"..1.\n") == 0);
free(board772771442);
board772771442 = NULL;
assert( gamma_move(board1, 2, 3, 3) == 1 );
assert( gamma_move(board2, 2, 0, 0) == 1 );
assert( gamma_move(board3, 2, 3, 0) == 1 );
assert( gamma_move(board1, 3, 3, 0) == 1 );
assert( gamma_move(board2, 3, 2, 2) == 0 );
assert( gamma_move(board3, 3, 1, 2) == 1 );
assert( gamma_move(board1, 4, 0, 1) == 1 );
assert( gamma_move(board2, 4, 0, 3) == 1 );
assert( gamma_move(board3, 4, 1, 1) == 1 );
assert( gamma_move(board1, 1, 3, 0) == 0 );


char* board381222352 = gamma_board(board1);
assert( board381222352 != NULL );
assert( strcmp(board381222352, 
".3.2\n"
"....\n"
"4...\n"
"1.23\n") == 0);
free(board381222352);
board381222352 = NULL;
assert( gamma_move(board2, 1, 1, 0) == 1 );


char* board469700468 = gamma_board(board2);
assert( board469700468 != NULL );
assert( strcmp(board469700468, 
"4..3\n"
"..1.\n"
".2..\n"
"21..\n") == 0);
free(board469700468);
board469700468 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 0 );


char* board142866327 = gamma_board(board3);
assert( board142866327 != NULL );
assert( strcmp(board142866327, 
"23..\n"
".3..\n"
".4.1\n"
"..12\n") == 0);
free(board142866327);
board142866327 = NULL;
assert( gamma_move(board1, 2, 0, 1) == 0 );
assert( gamma_move(board2, 2, 1, 1) == 0 );
assert( gamma_move(board3, 2, 3, 2) == 1 );
assert( gamma_move(board1, 3, 1, 2) == 1 );
assert( gamma_move(board2, 3, 2, 1) == 1 );
assert( gamma_move(board3, 3, 3, 3) == 1 );
assert( gamma_move(board1, 4, 2, 2) == 1 );
assert( gamma_move(board2, 4, 1, 1) == 0 );
assert( gamma_move(board3, 4, 0, 0) == 1 );
assert( gamma_move(board1, 1, 1, 2) == 0 );


char* board767121376 = gamma_board(board1);
assert( board767121376 != NULL );
assert( strcmp(board767121376, 
".3.2\n"
".34.\n"
"4...\n"
"1.23\n") == 0);
free(board767121376);
board767121376 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 0 );


char* board518435512 = gamma_board(board2);
assert( board518435512 != NULL );
assert( strcmp(board518435512, 
"4..3\n"
"..1.\n"
".23.\n"
"21..\n") == 0);
free(board518435512);
board518435512 = NULL;
assert( gamma_move(board3, 1, 1, 3) == 0 );


char* board231967765 = gamma_board(board3);
assert( board231967765 != NULL );
assert( strcmp(board231967765, 
"23.3\n"
".3.2\n"
".4.1\n"
"4.12\n") == 0);
free(board231967765);
board231967765 = NULL;
assert( gamma_move(board1, 2, 3, 2) == 1 );
assert( gamma_move(board2, 2, 0, 3) == 0 );
assert( gamma_move(board3, 2, 3, 1) == 0 );
assert( gamma_move(board1, 3, 1, 1) == 1 );
assert( gamma_move(board2, 3, 2, 0) == 1 );
assert( gamma_move(board3, 3, 1, 3) == 0 );
assert( gamma_move(board1, 4, 0, 3) == 1 );
assert( gamma_move(board2, 4, 2, 3) == 1 );
assert( gamma_move(board3, 4, 3, 2) == 0 );
assert( gamma_move(board1, 1, 1, 3) == 0 );


char* board540036807 = gamma_board(board1);
assert( board540036807 != NULL );
assert( strcmp(board540036807, 
"43.2\n"
".342\n"
"43..\n"
"1.23\n") == 0);
free(board540036807);
board540036807 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 0 );


char* board447946092 = gamma_board(board2);
assert( board447946092 != NULL );
assert( strcmp(board447946092, 
"4.43\n"
"..1.\n"
".23.\n"
"213.\n") == 0);
free(board447946092);
board447946092 = NULL;
assert( gamma_move(board3, 1, 1, 1) == 0 );


char* board373082508 = gamma_board(board3);
assert( board373082508 != NULL );
assert( strcmp(board373082508, 
"23.3\n"
".3.2\n"
".4.1\n"
"4.12\n") == 0);
free(board373082508);
board373082508 = NULL;
assert( gamma_move(board1, 2, 0, 0) == 0 );
assert( gamma_move(board2, 2, 2, 3) == 0 );
assert( gamma_move(board3, 2, 3, 0) == 0 );
assert( gamma_move(board1, 3, 0, 3) == 0 );
assert( gamma_move(board2, 3, 3, 3) == 0 );
assert( gamma_move(board3, 3, 3, 2) == 0 );
assert( gamma_move(board1, 4, 2, 1) == 1 );
assert( gamma_move(board2, 4, 2, 3) == 0 );
assert( gamma_move(board3, 4, 3, 2) == 0 );
assert( gamma_move(board1, 1, 1, 3) == 0 );


char* board390064945 = gamma_board(board1);
assert( board390064945 != NULL );
assert( strcmp(board390064945, 
"43.2\n"
".342\n"
"434.\n"
"1.23\n") == 0);
free(board390064945);
board390064945 = NULL;
assert( gamma_move(board2, 1, 3, 2) == 1 );


char* board923552650 = gamma_board(board2);
assert( board923552650 != NULL );
assert( strcmp(board923552650, 
"4.43\n"
"..11\n"
".23.\n"
"213.\n") == 0);
free(board923552650);
board923552650 = NULL;
assert( gamma_move(board3, 1, 2, 1) == 1 );


char* board995212870 = gamma_board(board3);
assert( board995212870 != NULL );
assert( strcmp(board995212870, 
"23.3\n"
".3.2\n"
".411\n"
"4.12\n") == 0);
free(board995212870);
board995212870 = NULL;
assert( gamma_move(board1, 2, 3, 1) == 1 );
assert( gamma_move(board2, 2, 3, 3) == 0 );
assert( gamma_move(board3, 2, 2, 1) == 0 );
assert( gamma_move(board1, 3, 2, 2) == 0 );
assert( gamma_move(board2, 3, 0, 0) == 0 );
assert( gamma_move(board3, 3, 0, 3) == 0 );
assert( gamma_move(board1, 4, 3, 3) == 0 );
assert( gamma_move(board2, 4, 2, 0) == 0 );
assert( gamma_move(board3, 4, 2, 0) == 0 );
assert( gamma_move(board1, 1, 3, 1) == 0 );


char* board595654760 = gamma_board(board1);
assert( board595654760 != NULL );
assert( strcmp(board595654760, 
"43.2\n"
".342\n"
"4342\n"
"1.23\n") == 0);
free(board595654760);
board595654760 = NULL;
assert( gamma_move(board2, 1, 2, 3) == 0 );


char* board760443201 = gamma_board(board2);
assert( board760443201 != NULL );
assert( strcmp(board760443201, 
"4.43\n"
"..11\n"
".23.\n"
"213.\n") == 0);
free(board760443201);
board760443201 = NULL;
assert( gamma_move(board3, 1, 1, 3) == 0 );


char* board774580772 = gamma_board(board3);
assert( board774580772 != NULL );
assert( strcmp(board774580772, 
"23.3\n"
".3.2\n"
".411\n"
"4.12\n") == 0);
free(board774580772);
board774580772 = NULL;
assert( gamma_move(board1, 2, 0, 1) == 0 );
assert( gamma_move(board2, 2, 3, 0) == 1 );
assert( gamma_move(board3, 2, 1, 1) == 0 );
assert( gamma_move(board1, 3, 3, 1) == 0 );
assert( gamma_move(board2, 3, 3, 2) == 0 );
assert( gamma_move(board3, 3, 0, 3) == 0 );
assert( gamma_move(board1, 4, 3, 0) == 0 );
assert( gamma_move(board2, 4, 0, 0) == 0 );
assert( gamma_move(board3, 4, 1, 0) == 1 );
assert( gamma_move(board1, 1, 2, 3) == 1 );


char* board670579663 = gamma_board(board1);
assert( board670579663 != NULL );
assert( strcmp(board670579663, 
"4312\n"
".342\n"
"4342\n"
"1.23\n") == 0);
free(board670579663);
board670579663 = NULL;
assert( gamma_move(board2, 1, 0, 0) == 0 );


char* board428563288 = gamma_board(board2);
assert( board428563288 != NULL );
assert( strcmp(board428563288, 
"4.43\n"
"..11\n"
".23.\n"
"2132\n") == 0);
free(board428563288);
board428563288 = NULL;
assert( gamma_move(board3, 1, 3, 2) == 0 );


char* board622134519 = gamma_board(board3);
assert( board622134519 != NULL );
assert( strcmp(board622134519, 
"23.3\n"
".3.2\n"
".411\n"
"4412\n") == 0);
free(board622134519);
board622134519 = NULL;
assert( gamma_move(board1, 2, 3, 1) == 0 );
assert( gamma_move(board2, 2, 0, 1) == 1 );
assert( gamma_move(board3, 2, 1, 3) == 0 );
assert( gamma_move(board1, 3, 2, 1) == 0 );
assert( gamma_move(board2, 3, 2, 1) == 0 );
assert( gamma_move(board3, 3, 3, 3) == 0 );
assert( gamma_move(board1, 4, 1, 1) == 0 );
assert( gamma_move(board2, 4, 3, 3) == 0 );
assert( gamma_move(board3, 4, 0, 2) == 1 );
assert( gamma_move(board1, 1, 3, 0) == 0 );


char* board739744940 = gamma_board(board1);
assert( board739744940 != NULL );
assert( strcmp(board739744940, 
"4312\n"
".342\n"
"4342\n"
"1.23\n") == 0);
free(board739744940);
board739744940 = NULL;
assert( gamma_move(board2, 1, 1, 3) == 1 );


char* board908413822 = gamma_board(board2);
assert( board908413822 != NULL );
assert( strcmp(board908413822, 
"4143\n"
"..11\n"
"223.\n"
"2132\n") == 0);
free(board908413822);
board908413822 = NULL;
assert( gamma_move(board3, 1, 3, 3) == 0 );


char* board261628443 = gamma_board(board3);
assert( board261628443 != NULL );
assert( strcmp(board261628443, 
"23.3\n"
"43.2\n"
".411\n"
"4412\n") == 0);
free(board261628443);
board261628443 = NULL;
assert( gamma_move(board1, 2, 1, 1) == 0 );
assert( gamma_move(board2, 2, 1, 3) == 0 );
assert( gamma_move(board3, 2, 0, 1) == 1 );
assert( gamma_move(board1, 3, 2, 1) == 0 );
assert( gamma_move(board2, 3, 1, 3) == 0 );
assert( gamma_move(board3, 3, 1, 2) == 0 );
assert( gamma_move(board1, 4, 1, 0) == 1 );
assert( gamma_move(board2, 4, 3, 2) == 0 );
assert( gamma_move(board3, 4, 0, 1) == 0 );
assert( gamma_move(board1, 1, 1, 1) == 0 );


char* board491841792 = gamma_board(board1);
assert( board491841792 != NULL );
assert( strcmp(board491841792, 
"4312\n"
".342\n"
"4342\n"
"1423\n") == 0);
free(board491841792);
board491841792 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 0 );


char* board758977993 = gamma_board(board2);
assert( board758977993 != NULL );
assert( strcmp(board758977993, 
"4143\n"
"..11\n"
"223.\n"
"2132\n") == 0);
free(board758977993);
board758977993 = NULL;
assert( gamma_move(board3, 1, 2, 0) == 0 );


char* board686391489 = gamma_board(board3);
assert( board686391489 != NULL );
assert( strcmp(board686391489, 
"23.3\n"
"43.2\n"
"2411\n"
"4412\n") == 0);
free(board686391489);
board686391489 = NULL;
assert( gamma_move(board1, 2, 3, 0) == 0 );
assert( gamma_move(board2, 2, 1, 3) == 0 );
assert( gamma_move(board3, 2, 2, 0) == 0 );
assert( gamma_move(board1, 3, 3, 0) == 0 );
assert( gamma_move(board2, 3, 1, 0) == 0 );
assert( gamma_move(board3, 3, 1, 0) == 0 );
assert( gamma_move(board1, 4, 3, 3) == 0 );
assert( gamma_move(board2, 4, 1, 1) == 0 );
assert( gamma_move(board3, 4, 1, 0) == 0 );
assert( gamma_move(board1, 1, 2, 1) == 0 );


char* board856110863 = gamma_board(board1);
assert( board856110863 != NULL );
assert( strcmp(board856110863, 
"4312\n"
".342\n"
"4342\n"
"1423\n") == 0);
free(board856110863);
board856110863 = NULL;
assert( gamma_move(board2, 1, 0, 0) == 0 );


char* board406976512 = gamma_board(board2);
assert( board406976512 != NULL );
assert( strcmp(board406976512, 
"4143\n"
"..11\n"
"223.\n"
"2132\n") == 0);
free(board406976512);
board406976512 = NULL;
assert( gamma_move(board3, 1, 1, 2) == 0 );


char* board761551444 = gamma_board(board3);
assert( board761551444 != NULL );
assert( strcmp(board761551444, 
"23.3\n"
"43.2\n"
"2411\n"
"4412\n") == 0);
free(board761551444);
board761551444 = NULL;
assert( gamma_move(board1, 2, 3, 3) == 0 );
assert( gamma_move(board2, 2, 2, 2) == 0 );
assert( gamma_move(board3, 2, 2, 1) == 0 );
assert( gamma_move(board1, 3, 0, 2) == 1 );
assert( gamma_move(board2, 3, 0, 2) == 1 );
assert( gamma_move(board3, 3, 2, 0) == 0 );
assert( gamma_move(board1, 4, 0, 3) == 0 );
assert( gamma_move(board2, 4, 0, 2) == 0 );
assert( gamma_move(board3, 4, 0, 3) == 0 );
assert( gamma_move(board1, 1, 2, 2) == 0 );


char* board857699365 = gamma_board(board1);
assert( board857699365 != NULL );
assert( strcmp(board857699365, 
"4312\n"
"3342\n"
"4342\n"
"1423\n") == 0);
free(board857699365);
board857699365 = NULL;
assert( gamma_move(board2, 1, 3, 1) == 1 );


char* board595721239 = gamma_board(board2);
assert( board595721239 != NULL );
assert( strcmp(board595721239, 
"4143\n"
"3.11\n"
"2231\n"
"2132\n") == 0);
free(board595721239);
board595721239 = NULL;
assert( gamma_move(board3, 1, 1, 0) == 0 );


char* board177382953 = gamma_board(board3);
assert( board177382953 != NULL );
assert( strcmp(board177382953, 
"23.3\n"
"43.2\n"
"2411\n"
"4412\n") == 0);
free(board177382953);
board177382953 = NULL;
assert( gamma_move(board1, 2, 0, 0) == 0 );
assert( gamma_move(board2, 2, 1, 3) == 0 );
assert( gamma_move(board3, 2, 2, 3) == 1 );
assert( gamma_move(board1, 3, 0, 2) == 0 );
assert( gamma_move(board2, 3, 3, 2) == 0 );
assert( gamma_move(board3, 3, 3, 0) == 0 );
assert( gamma_move(board1, 4, 0, 3) == 0 );
assert( gamma_move(board2, 4, 0, 0) == 0 );
assert( gamma_move(board3, 4, 1, 1) == 0 );


gamma_delete(board1);


gamma_delete(board3);


gamma_delete(board2);

    return 0;
}
