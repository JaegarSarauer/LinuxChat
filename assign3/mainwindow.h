#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define WINDOW_WELCOME      1
#define WINDOW_CHATSCREEN   2

#include <QMainWindow>
#include <QMessageBox>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int getWindowState();
    void successfulConnection();
    void Print(char *msg);
    void updateStatusMessage(const QString &msg);
    void changeWindowState(int welcomeScreen);
    ~MainWindow();


private slots:
    void OnSendReleased();
    void OnConnectReleased();
    void OnDisconnectReleased();


    void on_logChatCheck_stateChanged(int state);

private:
    Ui::MainWindow *ui;
    void SendData();
};

#endif // MAINWINDOW_H
