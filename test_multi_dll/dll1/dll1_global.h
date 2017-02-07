#ifndef DLL1_GLOBAL_H
#define DLL1_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef DLL1_LIB
# define DLL1_EXPORT Q_DECL_EXPORT
#else
# define DLL1_EXPORT Q_DECL_IMPORT
#endif

#endif // DLL1_GLOBAL_H
