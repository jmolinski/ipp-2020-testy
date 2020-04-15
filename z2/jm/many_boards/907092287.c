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
uuid: 907092287
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


assert( gamma_move(board1, 1, 3, 2) == 1 );


char* board163967242 = gamma_board(board1);
assert( board163967242 != NULL );
assert( strcmp(board163967242, 
"....\n"
"...1\n"
"....\n"
"....\n") == 0);
free(board163967242);
board163967242 = NULL;
assert( gamma_move(board2, 1, 0, 3) == 1 );


char* board830785021 = gamma_board(board2);
assert( board830785021 != NULL );
assert( strcmp(board830785021, 
"1...\n"
"....\n"
"....\n"
"....\n") == 0);
free(board830785021);
board830785021 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 1 );


char* board133804565 = gamma_board(board3);
assert( board133804565 != NULL );
assert( strcmp(board133804565, 
"....\n"
"....\n"
"...1\n"
"....\n") == 0);
free(board133804565);
board133804565 = NULL;
assert( gamma_move(board1, 2, 0, 0) == 1 );
assert( gamma_move(board2, 2, 0, 1) == 1 );
assert( gamma_move(board3, 2, 1, 3) == 1 );
assert( gamma_move(board1, 3, 3, 3) == 1 );
assert( gamma_move(board2, 3, 3, 2) == 1 );
assert( gamma_move(board3, 3, 3, 2) == 1 );
assert( gamma_move(board1, 4, 3, 0) == 1 );
assert( gamma_move(board2, 4, 1, 1) == 1 );
assert( gamma_move(board3, 4, 2, 3) == 1 );
assert( gamma_move(board1, 1, 1, 2) == 1 );


char* board760989073 = gamma_board(board1);
assert( board760989073 != NULL );
assert( strcmp(board760989073, 
"...3\n"
".1.1\n"
"....\n"
"2..4\n") == 0);
free(board760989073);
board760989073 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 1 );


char* board628433150 = gamma_board(board2);
assert( board628433150 != NULL );
assert( strcmp(board628433150, 
"1..1\n"
"...3\n"
"24..\n"
"....\n") == 0);
free(board628433150);
board628433150 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 0 );


char* board690548472 = gamma_board(board3);
assert( board690548472 != NULL );
assert( strcmp(board690548472, 
".24.\n"
"...3\n"
"...1\n"
"....\n") == 0);
free(board690548472);
board690548472 = NULL;
assert( gamma_move(board1, 2, 1, 2) == 0 );
assert( gamma_move(board2, 2, 1, 3) == 1 );
assert( gamma_move(board3, 2, 0, 0) == 1 );
assert( gamma_move(board1, 3, 0, 3) == 1 );
assert( gamma_move(board2, 3, 2, 0) == 1 );
assert( gamma_move(board3, 3, 0, 0) == 0 );
assert( gamma_move(board1, 4, 1, 2) == 0 );
assert( gamma_move(board2, 4, 2, 3) == 1 );
assert( gamma_move(board3, 4, 3, 1) == 0 );
assert( gamma_move(board1, 1, 3, 3) == 0 );


char* board569735249 = gamma_board(board1);
assert( board569735249 != NULL );
assert( strcmp(board569735249, 
"3..3\n"
".1.1\n"
"....\n"
"2..4\n") == 0);
free(board569735249);
board569735249 = NULL;
assert( gamma_move(board2, 1, 0, 3) == 0 );


char* board459280767 = gamma_board(board2);
assert( board459280767 != NULL );
assert( strcmp(board459280767, 
"1241\n"
"...3\n"
"24..\n"
"..3.\n") == 0);
free(board459280767);
board459280767 = NULL;
assert( gamma_move(board3, 1, 0, 3) == 1 );


char* board852618851 = gamma_board(board3);
assert( board852618851 != NULL );
assert( strcmp(board852618851, 
"124.\n"
"...3\n"
"...1\n"
"2...\n") == 0);
free(board852618851);
board852618851 = NULL;
assert( gamma_move(board1, 2, 1, 3) == 1 );
assert( gamma_move(board2, 2, 2, 2) == 1 );
assert( gamma_move(board3, 2, 0, 1) == 1 );
assert( gamma_move(board1, 3, 3, 0) == 0 );
assert( gamma_move(board2, 3, 2, 1) == 1 );
assert( gamma_move(board3, 3, 2, 0) == 1 );
assert( gamma_move(board1, 4, 0, 2) == 1 );
assert( gamma_move(board2, 4, 3, 2) == 0 );
assert( gamma_move(board3, 4, 1, 2) == 1 );
assert( gamma_move(board1, 1, 0, 2) == 0 );


char* board315883886 = gamma_board(board1);
assert( board315883886 != NULL );
assert( strcmp(board315883886, 
"32.3\n"
"41.1\n"
"....\n"
"2..4\n") == 0);
free(board315883886);
board315883886 = NULL;
assert( gamma_move(board2, 1, 1, 3) == 0 );


char* board275710612 = gamma_board(board2);
assert( board275710612 != NULL );
assert( strcmp(board275710612, 
"1241\n"
"..23\n"
"243.\n"
"..3.\n") == 0);
free(board275710612);
board275710612 = NULL;
assert( gamma_move(board3, 1, 1, 2) == 0 );


char* board243530051 = gamma_board(board3);
assert( board243530051 != NULL );
assert( strcmp(board243530051, 
"124.\n"
".4.3\n"
"2..1\n"
"2.3.\n") == 0);
free(board243530051);
board243530051 = NULL;
assert( gamma_move(board1, 2, 3, 1) == 1 );
assert( gamma_move(board2, 2, 2, 1) == 0 );
assert( gamma_move(board3, 2, 1, 1) == 1 );
assert( gamma_move(board1, 3, 3, 1) == 0 );
assert( gamma_move(board2, 3, 2, 1) == 0 );
assert( gamma_move(board3, 3, 3, 3) == 1 );
assert( gamma_move(board1, 4, 0, 2) == 0 );
assert( gamma_move(board2, 4, 0, 1) == 0 );
assert( gamma_move(board3, 4, 0, 0) == 0 );
assert( gamma_move(board1, 1, 0, 2) == 0 );


char* board811824919 = gamma_board(board1);
assert( board811824919 != NULL );
assert( strcmp(board811824919, 
"32.3\n"
"41.1\n"
"...2\n"
"2..4\n") == 0);
free(board811824919);
board811824919 = NULL;
assert( gamma_move(board2, 1, 0, 2) == 1 );


char* board230474014 = gamma_board(board2);
assert( board230474014 != NULL );
assert( strcmp(board230474014, 
"1241\n"
"1.23\n"
"243.\n"
"..3.\n") == 0);
free(board230474014);
board230474014 = NULL;
assert( gamma_move(board3, 1, 0, 1) == 0 );


char* board424319671 = gamma_board(board3);
assert( board424319671 != NULL );
assert( strcmp(board424319671, 
"1243\n"
".4.3\n"
"22.1\n"
"2.3.\n") == 0);
free(board424319671);
board424319671 = NULL;
assert( gamma_move(board1, 2, 2, 0) == 1 );
assert( gamma_move(board2, 2, 3, 2) == 0 );
assert( gamma_move(board3, 2, 0, 0) == 0 );
assert( gamma_move(board1, 3, 3, 1) == 0 );
assert( gamma_move(board2, 3, 3, 3) == 0 );
assert( gamma_move(board3, 3, 2, 0) == 0 );
assert( gamma_move(board1, 4, 1, 1) == 1 );
assert( gamma_move(board2, 4, 1, 3) == 0 );
assert( gamma_move(board3, 4, 0, 3) == 0 );
assert( gamma_move(board1, 1, 3, 0) == 0 );


char* board974988653 = gamma_board(board1);
assert( board974988653 != NULL );
assert( strcmp(board974988653, 
"32.3\n"
"41.1\n"
".4.2\n"
"2.24\n") == 0);
free(board974988653);
board974988653 = NULL;
assert( gamma_move(board2, 1, 3, 2) == 0 );


char* board330358868 = gamma_board(board2);
assert( board330358868 != NULL );
assert( strcmp(board330358868, 
"1241\n"
"1.23\n"
"243.\n"
"..3.\n") == 0);
free(board330358868);
board330358868 = NULL;
assert( gamma_move(board3, 1, 2, 0) == 0 );


char* board876766669 = gamma_board(board3);
assert( board876766669 != NULL );
assert( strcmp(board876766669, 
"1243\n"
".4.3\n"
"22.1\n"
"2.3.\n") == 0);
free(board876766669);
board876766669 = NULL;
assert( gamma_move(board1, 2, 2, 2) == 1 );
assert( gamma_move(board2, 2, 0, 0) == 1 );
assert( gamma_move(board3, 2, 2, 0) == 0 );
assert( gamma_move(board1, 3, 0, 2) == 0 );
assert( gamma_move(board2, 3, 1, 0) == 1 );
assert( gamma_move(board3, 3, 2, 2) == 1 );
assert( gamma_move(board1, 4, 3, 2) == 0 );
assert( gamma_move(board2, 4, 0, 3) == 0 );
assert( gamma_move(board3, 4, 1, 3) == 0 );
assert( gamma_move(board1, 1, 1, 3) == 0 );


char* board979781974 = gamma_board(board1);
assert( board979781974 != NULL );
assert( strcmp(board979781974, 
"32.3\n"
"4121\n"
".4.2\n"
"2.24\n") == 0);
free(board979781974);
board979781974 = NULL;
assert( gamma_move(board2, 1, 0, 0) == 0 );


char* board387389382 = gamma_board(board2);
assert( board387389382 != NULL );
assert( strcmp(board387389382, 
"1241\n"
"1.23\n"
"243.\n"
"233.\n") == 0);
free(board387389382);
board387389382 = NULL;
assert( gamma_move(board3, 1, 2, 1) == 1 );


char* board694104653 = gamma_board(board3);
assert( board694104653 != NULL );
assert( strcmp(board694104653, 
"1243\n"
".433\n"
"2211\n"
"2.3.\n") == 0);
free(board694104653);
board694104653 = NULL;
assert( gamma_move(board1, 2, 0, 2) == 0 );
assert( gamma_move(board2, 2, 0, 1) == 0 );
assert( gamma_move(board3, 2, 2, 3) == 0 );
assert( gamma_move(board1, 3, 2, 2) == 0 );
assert( gamma_move(board2, 3, 1, 2) == 1 );
assert( gamma_move(board3, 3, 2, 3) == 0 );
assert( gamma_move(board1, 4, 2, 3) == 1 );
assert( gamma_move(board2, 4, 0, 1) == 0 );
assert( gamma_move(board3, 4, 0, 1) == 0 );
assert( gamma_move(board1, 1, 3, 3) == 0 );


char* board437012580 = gamma_board(board1);
assert( board437012580 != NULL );
assert( strcmp(board437012580, 
"3243\n"
"4121\n"
".4.2\n"
"2.24\n") == 0);
free(board437012580);
board437012580 = NULL;
assert( gamma_move(board2, 1, 1, 0) == 0 );


char* board922326841 = gamma_board(board2);
assert( board922326841 != NULL );
assert( strcmp(board922326841, 
"1241\n"
"1323\n"
"243.\n"
"233.\n") == 0);
free(board922326841);
board922326841 = NULL;
assert( gamma_move(board3, 1, 2, 2) == 0 );


char* board321202058 = gamma_board(board3);
assert( board321202058 != NULL );
assert( strcmp(board321202058, 
"1243\n"
".433\n"
"2211\n"
"2.3.\n") == 0);
free(board321202058);
board321202058 = NULL;
assert( gamma_move(board1, 2, 0, 0) == 0 );
assert( gamma_move(board2, 2, 3, 1) == 1 );
assert( gamma_move(board3, 2, 1, 1) == 0 );
assert( gamma_move(board1, 3, 0, 1) == 1 );
assert( gamma_move(board2, 3, 2, 3) == 0 );
assert( gamma_move(board3, 3, 1, 1) == 0 );
assert( gamma_move(board1, 4, 3, 0) == 0 );
assert( gamma_move(board2, 4, 0, 2) == 0 );
assert( gamma_move(board3, 4, 0, 3) == 0 );
assert( gamma_move(board1, 1, 0, 0) == 0 );


char* board678847786 = gamma_board(board1);
assert( board678847786 != NULL );
assert( strcmp(board678847786, 
"3243\n"
"4121\n"
"34.2\n"
"2.24\n") == 0);
free(board678847786);
board678847786 = NULL;
assert( gamma_move(board2, 1, 0, 2) == 0 );


char* board486294485 = gamma_board(board2);
assert( board486294485 != NULL );
assert( strcmp(board486294485, 
"1241\n"
"1323\n"
"2432\n"
"233.\n") == 0);
free(board486294485);
board486294485 = NULL;
assert( gamma_move(board3, 1, 1, 1) == 0 );


char* board952682602 = gamma_board(board3);
assert( board952682602 != NULL );
assert( strcmp(board952682602, 
"1243\n"
".433\n"
"2211\n"
"2.3.\n") == 0);
free(board952682602);
board952682602 = NULL;
assert( gamma_move(board1, 2, 3, 3) == 0 );
assert( gamma_move(board2, 2, 2, 3) == 0 );
assert( gamma_move(board3, 2, 3, 1) == 0 );
assert( gamma_move(board1, 3, 3, 2) == 0 );
assert( gamma_move(board2, 3, 2, 2) == 0 );
assert( gamma_move(board3, 3, 2, 1) == 0 );
assert( gamma_move(board1, 4, 2, 3) == 0 );
assert( gamma_move(board2, 4, 1, 3) == 0 );
assert( gamma_move(board3, 4, 3, 0) == 1 );
assert( gamma_move(board1, 1, 0, 3) == 0 );


char* board763772955 = gamma_board(board1);
assert( board763772955 != NULL );
assert( strcmp(board763772955, 
"3243\n"
"4121\n"
"34.2\n"
"2.24\n") == 0);
free(board763772955);
board763772955 = NULL;
assert( gamma_move(board2, 1, 1, 1) == 0 );


char* board987051843 = gamma_board(board2);
assert( board987051843 != NULL );
assert( strcmp(board987051843, 
"1241\n"
"1323\n"
"2432\n"
"233.\n") == 0);
free(board987051843);
board987051843 = NULL;
assert( gamma_move(board3, 1, 2, 3) == 0 );


char* board897809585 = gamma_board(board3);
assert( board897809585 != NULL );
assert( strcmp(board897809585, 
"1243\n"
".433\n"
"2211\n"
"2.34\n") == 0);
free(board897809585);
board897809585 = NULL;
assert( gamma_move(board1, 2, 1, 0) == 1 );
assert( gamma_move(board2, 2, 1, 0) == 0 );
assert( gamma_move(board3, 2, 0, 1) == 0 );
assert( gamma_move(board1, 3, 2, 0) == 0 );
assert( gamma_move(board2, 3, 1, 0) == 0 );
assert( gamma_move(board3, 3, 1, 2) == 0 );
assert( gamma_move(board1, 4, 2, 2) == 0 );
assert( gamma_move(board2, 4, 2, 3) == 0 );
assert( gamma_move(board3, 4, 1, 3) == 0 );
assert( gamma_move(board1, 1, 1, 2) == 0 );


char* board483051051 = gamma_board(board1);
assert( board483051051 != NULL );
assert( strcmp(board483051051, 
"3243\n"
"4121\n"
"34.2\n"
"2224\n") == 0);
free(board483051051);
board483051051 = NULL;
assert( gamma_move(board2, 1, 1, 2) == 0 );


char* board551036667 = gamma_board(board2);
assert( board551036667 != NULL );
assert( strcmp(board551036667, 
"1241\n"
"1323\n"
"2432\n"
"233.\n") == 0);
free(board551036667);
board551036667 = NULL;
assert( gamma_move(board3, 1, 2, 2) == 0 );


char* board356565404 = gamma_board(board3);
assert( board356565404 != NULL );
assert( strcmp(board356565404, 
"1243\n"
".433\n"
"2211\n"
"2.34\n") == 0);
free(board356565404);
board356565404 = NULL;
assert( gamma_move(board1, 2, 3, 3) == 0 );
assert( gamma_move(board2, 2, 3, 0) == 1 );
assert( gamma_move(board3, 2, 3, 3) == 0 );
assert( gamma_move(board1, 3, 0, 2) == 0 );
assert( gamma_move(board2, 3, 2, 0) == 0 );
assert( gamma_move(board3, 3, 1, 0) == 1 );
assert( gamma_move(board1, 4, 3, 3) == 0 );
assert( gamma_move(board2, 4, 1, 1) == 0 );
assert( gamma_move(board3, 4, 3, 0) == 0 );
assert( gamma_move(board1, 1, 0, 0) == 0 );


char* board450086263 = gamma_board(board1);
assert( board450086263 != NULL );
assert( strcmp(board450086263, 
"3243\n"
"4121\n"
"34.2\n"
"2224\n") == 0);
free(board450086263);
board450086263 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 0 );


char* board513709238 = gamma_board(board2);
assert( board513709238 != NULL );
assert( strcmp(board513709238, 
"1241\n"
"1323\n"
"2432\n"
"2332\n") == 0);
free(board513709238);
board513709238 = NULL;
assert( gamma_move(board3, 1, 3, 0) == 0 );


char* board878444568 = gamma_board(board3);
assert( board878444568 != NULL );
assert( strcmp(board878444568, 
"1243\n"
".433\n"
"2211\n"
"2334\n") == 0);
free(board878444568);
board878444568 = NULL;
assert( gamma_move(board1, 2, 1, 3) == 0 );
assert( gamma_move(board2, 2, 2, 2) == 0 );
assert( gamma_move(board3, 2, 2, 1) == 0 );
assert( gamma_move(board1, 3, 0, 1) == 0 );
assert( gamma_move(board2, 3, 0, 1) == 0 );
assert( gamma_move(board3, 3, 2, 1) == 0 );
assert( gamma_move(board1, 4, 1, 2) == 0 );
assert( gamma_move(board2, 4, 0, 0) == 0 );
assert( gamma_move(board3, 4, 3, 3) == 0 );


gamma_delete(board1);


gamma_delete(board3);


gamma_delete(board2);

    return 0;
}
