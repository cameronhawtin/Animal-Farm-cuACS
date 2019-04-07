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

void ViewMatches::populateUI(vector <tuple <Human*, Animal*>> matches) {

    for (int i=0; i<matches.size(); i++) {
        QString humanName = QString::fromStdString(get<0>(matches.at(i))->getName());
        QString humanID = QString::number(get<0>(matches.at(i))->getId());
        QString animalName = QString::fromStdString(get<1>(matches.at(i))->getName());
        QString animalID = QString::number(get<1>(matches.at(i))->getId());

        ui->viewMatchesListWidget->addItem(humanName + " (ID: " + humanID + ") matches with " + animalName + " (ID: " + animalID + ")");
    }
}
