#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtMath>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
ui->setupUi(this);
connect(ui->btn_Division,&QPushButton::clicked,this,&MainWindow::opreator);
connect(ui->btn_Plus,&QPushButton::clicked,this,&MainWindow::opreator);
connect(ui->btn_Minus,&QPushButton::clicked,this,&MainWindow::opreator);
connect(ui->btn_Mutiply,&QPushButton::clicked,this,&MainWindow::opreator);
connect(ui->btn_One,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Two,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Three,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Four,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Five,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Six,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Seven,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Eight,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Nine,&QPushButton::clicked,this,&MainWindow::cal);
connect(ui->btn_Zero,&QPushButton::clicked,this,&MainWindow::cal);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::opreator(){
    count=count+1;
    QPushButton* btn = qobject_cast <QPushButton*> (sender());

    if(count>1){

        if(op=="/"){
            num3=num3/sum_in_memory;
        }
       else if(op=="*"){
                 many_opreator();
          num3=num3*sum_in_memory;
          qInfo()<<sum_in_memory;

       }
       else if(op=="+"){
                   many_opreator();
      num3=num3+sum_in_memory;

       }
       else if(op=="-"){
                 many_opreator();
           num3=num3-sum_in_memory;

       }
        qInfo()<<num3;
        sum_in_memory=0.0;
        n3=0;

        if(btn==ui->btn_Division){
            op="/";
            temp+="/";
        }
        else if(btn==ui->btn_Mutiply){
            op="*";
            temp+="*";
        }
        else if(btn==ui->btn_Plus){
            op="+";
            temp+="+";
        }
        else if(btn==ui->btn_Minus){
            op="-";
            temp+="-";
        }
    }
else{
  if(btn==ui->btn_Division){
      op="/";
      temp+="/";
  }
  else if(btn==ui->btn_Mutiply){
      op="*";
      temp+="*";
  }
  else if(btn==ui->btn_Plus){
      op="+";
      temp+="+";
  }
  else if(btn==ui->btn_Minus){
      op="-";
      temp+="-";
  }
}
  ui->label->setText(temp);

}

void MainWindow::cal(){

         QPushButton* btn = qobject_cast <QPushButton*> (sender());

    temp+=btn->text();

   if(count==0){
    n+=btn->text();
    num=n.toDouble();
    qInfo()<<num;
 }
else if(count>1){
    n3+=btn->text();
    sum_in_memory=n3.toDouble();
    qInfo()<<num3;

}
else{
           n2+=btn->text();
           num2=n2.toDouble();
           qInfo()<<num2;
}


 ui->label->setText(temp);
}



void MainWindow::on_equalto_clicked()
{



     if(op=="/"){

        answer=num/num2/num3;

    }
    else if(op=="*"){
              many_opreator();
        if(count>1){
        answer=num*num2*num3;
        }
        else{
            num3=1;
            answer=num*num2*num3;
        }
        opreator();


    }
    else if(op=="+"){
                many_opreator();
        answer=num+num2+num3;

    }
    else if(op=="-"){
              many_opreator();
        answer=num-num2-num3;

    }

    temp=QString::number(answer);
    ui->label->setText(temp);


}

void MainWindow::on_Clear_clicked()
{

 ui->label->clear();
 temp=0;
 count=0;
 num=0.0;
 num2=0.0;
sum_in_memory=0.0;
num3=0.0;
n3=0;
num_s=0;
n=0;
n2=0;

}
void MainWindow::many_opreator(){

    if(count>1){
        num3=num3+sum_in_memory;
        qInfo()<<num3;
        sum_in_memory=0.0;
        n3=0;

}
}


