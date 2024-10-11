#ifndef Q_MAIN_WINDOW_T_H
#define Q_MAIN_WINDOW_T_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class q_main_window_t;
}
QT_END_NAMESPACE

class q_main_window_t : public QMainWindow
{
    Q_OBJECT

public:
    q_main_window_t(QWidget *parent = nullptr);
    ~q_main_window_t();

private:
    Ui::q_main_window_t *ui;
};
#endif // Q_MAIN_WINDOW_T_H
