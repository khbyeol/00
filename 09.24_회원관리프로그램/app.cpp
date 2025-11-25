//app.c
#include "std.h"

void App::app_init()
{
	MyPrint::myprint_intro();
}

void App::app_run()
{

	while (true)
	{
		system("cls");
		ui.member_printall();
		switch (MyPrint::myprint_menu())
		{
		case '1':	ui.member_insert();		break;
		case '2':	ui.member_select();		break;
		case '3':	ui.member_update();		break;
		case '4':	ui.member_delete();		break;
		case '5':	return; //함수 종료
		}
		system("pause");
	}

}

void App::app_exit()
{
	MyPrint::myprint_ending();
}