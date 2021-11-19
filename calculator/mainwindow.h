#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_equalto_clicked();

    void on_Clear_clicked();



    void on_label_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

public:
QString temp=0;
QString op=0;
double num=0.0;
double num2=0.0;
double answer=0.0;
QString num_s=0;
QString n2=0;
QString n=0;
QString n3=0;
double num3=0.0;
void many_opreator();
void opreator();
int count=0;
int c_count=0;
double sum_in_memory=0;
int equal_count=0;
int plus=0;
int minus=0;

void cal();};
#endif // MAINWINDOW_H
