#ifndef QTCONTROL
#define QTCONTROL

#include <QTextStream>

/* define this to forbit debug output qDebug() */
//#define QT_NO_DEBUG_OUTPUT

/* to make some console output.
 * usage:	qStdOut<<"a string";
 * note that it only one string allowed to catch.
 */
#define qStdOut QTextStream(stdout)

#endif // QTCONTROL

