
// Sinabro.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include "Sinabro.h"


// CSinabroApp:
// See Sinabro.cpp for the implementation of this class
//

class CSinabroApp : public CWinApp
{
public:
	CSinabroApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSinabroApp theApp;
extern Sinabro sinabro;