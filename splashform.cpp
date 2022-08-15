#include "splashform.h"
#include "ui_splashform.h"
#include <chrono>
#include <windows.h>

using namespace std;
SplashForm::SplashForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SplashForm)
{
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->setupUi(this);
}

SplashForm::~SplashForm()
{
    delete ui;
}

