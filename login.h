#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT
    
public:
    explicit Login(QWidget* mainW, QWidget *parent = 0);
    ~Login();


public slots:
    void onEnter();

private slots:
    void on_login_clicked();

    void on_signin_clicked();

    void on_about_clicked();

    void on_exit_clicked();

private:
    Ui::Login *ui;

signals:
    void display(int);
    void closeW();
    void userLogin(QString);
};

#endif // LOGIN_H
