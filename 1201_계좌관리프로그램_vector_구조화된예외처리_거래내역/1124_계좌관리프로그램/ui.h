//ui.h
#pragma once

class Ui
{
private:
	AccountManager am;
public:
	Ui();
	~Ui();

public:
	void acc_insert();
	void acc_printall();
	void acc_select();
	void acc_update_input();
	void acc_update_output();
	void acc_delete();
};