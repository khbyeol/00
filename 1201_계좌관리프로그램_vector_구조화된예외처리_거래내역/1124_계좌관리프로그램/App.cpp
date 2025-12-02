//app.cpp
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
		ui.acc_printall();
		switch (MyPrint::myprint_menu())
		{
		case '1':	ui.acc_insert();		break;
		case '2':	ui.acc_select();		break;
		case '3':	ui.acc_update_input();	break;
		case '4':	ui.acc_update_output();	break;
		case '5':	ui.acc_delete();		break;
		case '6':	return; //함수 종료
		}
		system("pause");
	}
}

void App::app_exit()
{
	MyPrint::myprint_ending();
}