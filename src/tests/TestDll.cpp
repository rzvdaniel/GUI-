#define N_IMPLEMENTS TTestDll
//-------------------------------------------------------------------
//  TestDll.cpp
//  (C) 2003 R.Predescu
//-------------------------------------------------------------------
#include "tests/TestDll.h"
#include "guide/debug.h"

//-------------------------------------------------------------------
//  TTestDll()
//  22-Sep-2003   rzv   created
//-------------------------------------------------------------------
TTestDll::TTestDll()
{
}

//-------------------------------------------------------------------
//  ~TTestDll()
//  22-Sep-2003   rzv   created
//-------------------------------------------------------------------
TTestDll::~TTestDll()
{
}

//-------------------------------------------------------------------
//  Open()
//  22-Sep-2003   rzv   created
//-------------------------------------------------------------------
void TTestDll::Open(const char *name)
{
	TDll::Open(name);

	if(Image)
	{
		InitTest = (void (*) (void)) Symbol("InitTest");
		ExitTest = (void (*) (void)) Symbol("ExitTest");
	}

	InitTest();	
}

//-------------------------------------------------------------------
//  Close()
//  22-Sep-2003   rzv   created
//-------------------------------------------------------------------
void TTestDll::Close(void)
{
	ExitTest();

	TDll::Close();
}

//-------------------------------------------------------------------
//  EOF
//-------------------------------------------------------------------
