#ifndef T_FORM1_H
#define T_FORM1_H
//-------------------------------------------------------------------
//  CLASS
//  TForm1
//
//  (C) 2004 R.Predescu
//-------------------------------------------------------------------
#ifndef T_FORM_H
#include "guide/form.h"
#endif

class TForm1 : public TForm
{

public:  
    TForm1();
    virtual ~TForm1();
	void Create(TComponent* AOwner, const TRect& Rect, bool HasCaption);
	
};

#endif 
