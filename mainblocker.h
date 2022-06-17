#ifndef MAINBLOCKER_H
#define MAINBLOCKER_H

#include <QMainWindow>
#include <QClipboard>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainBlocker; }
QT_END_NAMESPACE

class MainBlocker : public QMainWindow
{
    Q_OBJECT

public:
    MainBlocker(QWidget *parent = nullptr);
    ~MainBlocker();

    void generate_key();

    void block_function();

    void checkable();

private slots:
    void on_settingsBth_pressed();

    void on_copyBth_pressed();

    void on_registerBth_pressed();

private:
    Ui::MainBlocker *ui;
};
#endif // MAINBLOCKER_H
