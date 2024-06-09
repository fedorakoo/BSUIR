#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "./textparagraph/textparagraph.h"
#include "./textarray/textarray.h"
#include "./textstruct/textstruct.h"
#include "./textstruct/laptop.h"
#include "./binstruct/binstruct.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    TextParagraph textParagraph;
    TextArray textArray;
    TextStruct textStruct;
    BinStruct binStruct;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    void showWarning(const QString &message);
    char getEditGrade();
    QString const SEPARATION_SIGN = " | ";
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
