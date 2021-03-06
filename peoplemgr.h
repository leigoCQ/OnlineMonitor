#ifndef PEOPLEMGR_H
#define PEOPLEMGR_H

#include <QDialog>

namespace Ui {
class PeopleMgr;
}

class MyMessageBox;

typedef struct {
    QString name;
    int auth;
} People;

//class PeopleMgr;

//typedef void (PeopleMgr::*chgMgr)(QString, int);

class PeopleMgr : public QDialog
{
    Q_OBJECT
    
public:
    explicit PeopleMgr(QWidget *control, QWidget *parent = 0);
    ~PeopleMgr();
    void dataUpdate();
protected:
    void changeRow1(QString, int);
    void changeRow2(QString, int);
    void changeRow3(QString, int);
    void changeRow4(QString, int);
    void changeMgr(int,QString,int);

private slots:
    void on_pgup_clicked();

    void on_pgdn_clicked();

    void on_del_1_clicked();

    void on_del_2_clicked();

    void on_del_3_clicked();

    void on_del_4_clicked();

    void on_save_clicked();

    void changeAuth1();
    void changeAuth2();
    void changeAuth3();
    void changeAuth4();

    void recvMsg(char*);

    void on_exit_clicked();

signals:
    void display(int);

protected:
    void keyReleaseEvent(QKeyEvent *);

private:
    Ui::PeopleMgr *ui;
    People p[4];
    int page;
    bool isTail;
    bool isHead;
    bool isChg_row1;
    bool isChg_row2;
    bool isChg_row3;
    bool isChg_row4;
    MyMessageBox* msg;
//    chgMgr chg[4];
};



#endif // PEOPLEMGR_H
