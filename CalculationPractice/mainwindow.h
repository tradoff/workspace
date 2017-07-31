#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    /**
     * @brief setQuestion		reset the equation and show the new question.
     */
    void setQuestion();

private slots:
    void on_submitButton_clicked();

    void on_skipButton_clicked();

    void on_quitButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
