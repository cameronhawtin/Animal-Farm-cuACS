#include "viewmatches.h"
#include "ui_viewmatches.h"

ViewMatches::ViewMatches(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewMatches)
{
    ui->setupUi(this);
    gm = new GenerateMatches();
    scores = gm->getAllScores();
    matches = gm->getMatches(scores);
    populateUI(matches);
}

ViewMatches::~ViewMatches()
{
    delete ui;
}

void ViewMatches::populateUI(vector <tuple <Human*, Animal*>>) {

}
