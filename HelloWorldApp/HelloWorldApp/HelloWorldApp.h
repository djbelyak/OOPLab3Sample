
// HelloWorldApp.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CHelloWorldAppApp:
// О реализации данного класса см. HelloWorldApp.cpp
//

class CHelloWorldAppApp : public CWinApp
{
public:
	CHelloWorldAppApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CHelloWorldAppApp theApp;