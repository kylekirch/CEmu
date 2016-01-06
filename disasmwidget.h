#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QPlainTextEdit>
#include <QObject>

QT_BEGIN_NAMESPACE
class QPaintEvent;
class QResizeEvent;
class QSize;
class QWidget;
QT_END_NAMESPACE

class DisasmWidget : public QPlainTextEdit
{
    Q_OBJECT

public:
    DisasmWidget(QWidget *parent = 0);

private slots:
    void highlightCurrentLine();
};


#endif