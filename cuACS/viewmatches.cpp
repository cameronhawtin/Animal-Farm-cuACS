#include "viewmatches.h"
#include "ui_viewmatches.h"

ViewMatches::ViewMatches(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewMatches)
{
    ui->setupUi(this);
    gm = new GenerateMatches();
    gm->getAllScores();
}

ViewMatches::~ViewMatches()
{
    delete ui;
}
