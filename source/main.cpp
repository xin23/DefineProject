
#include "mainwindow.hpp"

#include <QApplication>   

//�ڴ�й©���
#define _CRTDBG_MAP_ALLOC
#include "stdlib.h"
#include "crtdbg.h"

inline void EnableMemLeakCheck()
{
  _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
}
#ifdef _DEBUG
#define new   new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

int main(int argc,char *argv[])
{
  EnableMemLeakCheck();
  //_CrtSetBreakAlloc(96430);

  QApplication app(argc,argv);
  MainWindow w;
  w.show();
  
  return app.exec();
}