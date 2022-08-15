#ifndef SPLASHFORM_H
#define SPLASHFORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SplashForm; }
QT_END_NAMESPACE

class SplashForm : public QMainWindow
{
    Q_OBJECT

public:
    SplashForm(QWidget *parent = nullptr);
    ~SplashForm();

private:
    Ui::SplashForm *ui;
};
#endif // SPLASHFORM_H
