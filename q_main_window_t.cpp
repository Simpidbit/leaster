#include "q_main_window_t.h"
#include "./ui_q_main_window_t.h"

q_main_window_t::q_main_window_t(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::q_main_window_t)
{
    ui->setupUi(this);
}

q_main_window_t::~q_main_window_t()
{
    delete ui;
}
