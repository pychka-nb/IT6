﻿
// IT6.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CIT6App:
// Сведения о реализации этого класса: IT6.cpp
//

class CIT6App : public CWinApp
{
public:
	CIT6App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CIT6App theApp;
