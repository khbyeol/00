//ui.h
#pragma once

class Ui
{
private:
	membermanager mm;

public:
	Ui();
	~Ui();

public:
	void member_insert();
	void member_printall();
	void member_select();
	void member_update();
	void member_delete();
};

