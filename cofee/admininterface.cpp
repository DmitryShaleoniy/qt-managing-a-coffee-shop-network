#include "admininterface.h"
#include "ui_admininterface.h"
#include <QSqlError>
#include <QDataStream>
#include <QSqlDatabase>
#include <QTextEdit>
#include <QDebug>
#include <QStringListModel>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QVariant>
#include <QtSql/QSqlQueryModel>
#include <QShortcut>
#include <cafe_menagement.h>
#include <QPalette>

AdminInterface::AdminInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminInterface)
{

    //QPalette m_pal;
    //m_pal.setBrush(QPalette::Window, QBrush(QPixmap("./title.png")));
    //this->setPalette(m_pal);

    ui->setupUi(this);
    // shortcut = new QShortcut(this);
    // shortcut->setKey(Qt::CTRL | Qt::Key_Return);
    // connect(shortcut, SIGNAL(activated()), this, SLOT(on_pushButton_clicked()));
    db = QSqlDatabase::addDatabase("QPSQL");
    QString databaseName = "cofee";
    QString hostName     = "localhost";
    int     port         = 5432;
    QString userName     = "postgres";
    QString password     = "Asqw1245!";
    db.setDatabaseName(databaseName);
    db.setHostName    (hostName);
    db.setPort        (port   );
    db.setUserName    (userName);
    db.setPassword    (password);

    if(db.open()) {
        qDebug() << "opened";
        updateObjects();
    }
    else {
        qDebug() << db.lastError().text();
    }
}

AdminInterface::~AdminInterface()
{
    //delete shortcut;
    delete ui;
}

void AdminInterface::runQuery(QString p_command) {
    QString command = p_command.isEmpty() ? ui->commandEdit->toPlainText(): p_command;
    QSqlQueryModel *model = new QSqlQueryModel;
    model -> setQuery(command, db);
    ui->Table->setModel(model);

    if(!model->query().isActive()){
        ui->error_label->setText(model->lastError().text());
    }
    ui->commandEdit->setText("");
    //updateObjects();
}

void AdminInterface::updateObjects()
{
    QStringListModel *listModel = new QStringListModel();
    listModel->setHeaderData(0, Qt::Horizontal, QVariant("header"));
    QStringList tables;

    tables << db.tables(QSql::Tables)
           << db.tables(QSql::Views);

    listModel->setStringList(tables);

    ui->listView->setModel(listModel);
}

void AdminInterface::on_listView_doubleClicked(const QModelIndex &index)
{
    QString name = index.data().toString();
    if (name.isEmpty()) return;
    if(name == "Admin" || name == "Cashier" || name == "Supplier")
        runQuery("SELECT * FROM \"" + name + "\";");
    else runQuery("SELECT * FROM " + name + ";");
}

void AdminInterface::on_pushButton_clicked()
{
    runQuery();
}


void AdminInterface::on_employee_menagement_button_clicked()
{
    worker.show();
}


void AdminInterface::on_cafe_menagement_button_clicked()
{
    CafeMenagement.show();
}

