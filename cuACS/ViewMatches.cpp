#include "ViewMatches.h"
#include "ui_viewmatches.h"

ViewMatches::ViewMatches(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewMatches)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(1030, 750));
    this->setWindowTitle("Matches");
    int id = QFontDatabase::addApplicationFont ( ":/fonts/EgyptienneRoman.ttf" );
    QFont egyptienne(QFontDatabase::applicationFontFamilies(id).at(0), 11);
    this->setFont(egyptienne);

    ui->viewMatchesListWidget->addItem("Generating Matches...");
    gm = new GenerateMatches();
    summary = new vector<string>();
    scores = gm->getAllScores();
    matches = gm->getMatches(scores);
    ui->viewMatchesListWidget->clear();
    populateUI(matches);
}

ViewMatches::~ViewMatches()
{
    delete gm;
    delete summary;
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

void ViewMatches::on_viewMatchesListWidget_currentRowChanged(int currentRow)
{
    summary->clear();
    QList<string> summaryList;
    ui->summaryListWidget->clear();
    gm->getScore(get<0>(matches.at(currentRow)), get<1>(matches.at(currentRow)), summary);
    if (summary->size() != 0) {
            //Make QList from vector
            summaryList.reserve(summary->size());
            std::copy(summary->begin(), summary->end(), std::back_inserter(summaryList));
    }
    for (int i = 0; i < summary->size(); i++){
        ui->summaryListWidget->addItem(QString::fromStdString(summaryList.at(i)));
    }
}
