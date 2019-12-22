
#include <stdio.h>
#include <windows.h>
#include <string.h>

														     void 
													       putFrame
												      (WORD wAttributes,
												           char* a);
											 	      void changeFrame
											      (int a, WORD wAttributes);int 
										   	    main(){HANDLE handle;  handle  = 
										                 GetStdHandle
									                 (STD_OUTPUT_HANDLE);
										   	      CONSOLE_CURSOR_INFO cursor
									         = { 100,FALSE };SetConsoleCursorInfo
													  (handle, &cursor);
											    int position = 1;int state
										 = 0;char a[][128] ={"1. White & Green",
								   "2. Red & Grey","3. White & Black","4. White & Blue"};
							printf("----------------------------------\n\n\n");      printf(
							"            Colors\n\n");putFrame(FOREGROUND_RED      |FOREGROUND_GREEN |
						                               FOREGROUND_BLUE  |
										       BACKGROUND_GREEN | BACKGROUND_INTENSITY,
								          *a); putFrame(FOREGROUND_INTENSITY | FOREGROUND_RED | 
							          BACKGROUND_BLUE | BACKGROUND_GREEN |     BACKGROUND_RED | 
						          BACKGROUND_GREEN |     BACKGROUND_RED,    *(a + 1));    putFrame
							 (FOREGROUND_INTENSITY |    FOREGROUND_RED |     FOREGROUND_GREEN | 
						FOREGROUND_BLUE, *(a + 2));  putFrame(FOREGROUND_RED |    FOREGROUND_GREEN | 
										     FOREGROUND_BLUE |BACKGROUND_BLUE, 
							                 *(a + 3));SetConsoleTextAttribute
									    (handle, 0);printf("\n\n");printf("       ");
								  SetConsoleTextAttribute(handle,      FOREGROUND_RED | 
						FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
	                 printf("This is a test text.");while (true){if (::GetAsyncKeyState(VK_UP) & 0x8000 
				&& position > 1 && state == 0){position--;state = 1;}if (::GetAsyncKeyState(VK_DOWN) & 0x8000 
			&& position < 4 && state == 0){position++;state = 1;}if (!(::GetAsyncKeyState(VK_UP) & 0x8000 && position)
										&& !(::GetAsyncKeyState(VK_DOWN) & 0x8000))
								  {state = 0;}if (position == 1 && state == 0) changeFrame
							(5,    FOREGROUND_RED |    FOREGROUND_GREEN |     FOREGROUND_BLUE |
						BACKGROUND_GREEN | BACKGROUND_INTENSITY);else if (position == 2 && state == 0)
					changeFrame(6, FOREGROUND_INTENSITY | FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | 
				BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_RED);else if (position == 3 && state == 0) changeFrame
											      (7, FOREGROUND_INTENSITY
									| FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
							else if (position == 4 && state == 0)changeFrame(8, FOREGROUND_RED | 
					    FOREGROUND_GREEN |    FOREGROUND_BLUE |      BACKGROUND_BLUE);}system("pause");}
			    void putFrame(WORD wAttributes, char a[]){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
			printf("        ");SetConsoleTextAttribute   (GetStdHandle(STD_OUTPUT_HANDLE),   wAttributes);printf("%s\n", a);}
											void changeFrame(int a, WORD wAttributes){
											COORD coord;coord.X = 6;coord.Y = 4;for (int 
											i = 0; i < 4; i++)           {coord.Y += 1;
											SetConsoleCursorPosition(    GetStdHandle(
											STD_OUTPUT_HANDLE), coord);SetConsoleTextAttribute
											(GetStdHandle(STD_OUTPUT_HANDLE), 0);
											printf("  ");}     coord.X = 6;coord.Y = a;
	                                         SetConsoleCursorPosition(GetStdHandle(
											STD_OUTPUT_HANDLE),                coord);
											SetConsoleTextAttribute(GetStdHandle
											(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY
											| FOREGROUND_RED |      FOREGROUND_GREEN | 
											FOREGROUND_BLUE);printf("->");coord.X = 7;
											coord.Y = 11;SetConsoleCursorPosition
											(GetStdHandle(STD_OUTPUT_HANDLE), coord);
											SetConsoleTextAttribute   (GetStdHandle(
											STD_OUTPUT_HANDLE), wAttributes);
											printf         ("This is a test text.");}