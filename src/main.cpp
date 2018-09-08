#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>

int main ( int argv, char ** args )
{
    QApplication app( argv, args );

    QTextEdit textedit;
    textedit.show();

    return app.exec();
}
