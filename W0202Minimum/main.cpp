#include <afxwin.h>
//CWinApp app;  

class MyApp : public CWinApp {
public:
	virtual BOOL InitInstance();
};

BOOL MyApp::InitInstance() {
	AfxMessageBox(L"파생 클래스의 InitInstance() 재정의");

	return TRUE;
}

MyApp app;