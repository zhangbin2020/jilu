#ifndef DLL2_GLOBAL_H
#define DLL2_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef DLL2_LIB
# define DLL2_EXPORT Q_DECL_EXPORT
#else
# define DLL2_EXPORT Q_DECL_IMPORT
#endif

#endif // DLL2_GLOBAL_H
