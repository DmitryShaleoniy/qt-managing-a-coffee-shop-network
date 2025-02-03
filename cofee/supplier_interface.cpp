#include "supplier_interface.h"
#include "ui_supplier_interface.h"
#include <QWebEngineView>
#include <QDir>
#include <QDebug>
#include <QPalette>
#include <QPixmap>
//#include <QSqlQuery>

supplier_interface::supplier_interface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::supplier_interface)
    , model(new QSqlQueryModel(this))
{
    QWidget::setFixedSize(860, 610);
    QPalette m_pal;
    m_pal.setBrush(QPalette::Window, QBrush(QPixmap(QDir::currentPath() + "/title.png")));
    this->setPalette(m_pal);

    ui->setupUi(this);
    //ui->map_widget->load(QUrl("https://i3.wp.com/inbs.ru/wp-content/uploads/2021/09/autocargo.jpg?resize=768%2C768&ssl=1"));
    //ui->map_widget->load(QUrl("https://vkvideo.ru/video-52257710_456240348")); //http://www.youtube.com/embed/gUdHsp5rs5g?rel=0&start=0&autoplay=1
    //https://youtu.be/gUdHsp5rs5g?autoplay=1&mute=1
    //https://vkvideo.ru/video-52257710_456240348
    // dep="/default.html";
    // make_map(dep);
    //ui->map_widget->load(QUrl("https://www.artplast.ru/upload/medialibrary/bbc/pmoatfj3feeglmi5ev32fc0579cqr8qv.jpg"));
    ui->stackedWidget->setCurrentWidget(ui->page_6);
    QPixmap pm(QDir::currentPath() + "/cafe.jpg");

    ui->label->setPixmap(pm);
    ui->label->update();
    ui->stackedWidget->update();
}

void supplier_interface::make_login(QString login, QSqlDatabase m_db)
{
    this->db = m_db;
    this->u_login = login;
    query = new QSqlQuery(db);
    if (query->exec("SELECT name FROM \"Supplier\" WHERE login = \'" + u_login + "\' LIMIT 1")) {
        query->first();
        u_name = query->value(0).toString();
    }
    ui->nam_label->setText(u_name);
}

supplier_interface::~supplier_interface()
{
    delete ui;
    delete query;
}

void supplier_interface::on_delivery_button_clicked()
{
    if(dialog.exec()==QDialog::Accepted){
        dialog.sendQuery(dep, db, u_login);
    }
}

void supplier_interface::on_department_comboBox_currentTextChanged(const QString &cafe)
{
    if(ui->stackedWidget->currentWidget()!=ui->page_5){
        qDebug() << "current widget = page 5";
        ui->stackedWidget->setCurrentWidget(ui->page_5);
    }
    model -> setQuery("", db);
    qDebug() << cafe;
    if (cafe == "Lateshechka Solntsevo"){
        dep = "/ya_maps.html";
        make_map(dep);
        dep = cafe;
    }
    else if(cafe == "Lateshechka Korolev") {
        dep = "/ya_maps_korolev.html";
        make_map(dep);
        dep = cafe;
    }
    else if(cafe == "Lateshechka Pervomayskaya") {
        dep = "/ya_maps_pervomayskaya.html";
        make_map(dep);
        dep = cafe;
    }
    else if(cafe == "..."){
    }
    else{
        ui->map_widget->load(QUrl("https://psv4.userapi.com/s/v1/d/SBkXZaSOl_zS_hRN_V3uOXi4Tm58gILVLccTKqD3wUblQgodVWsgIZlewcm95yuW7tEXOHpoOwRbNWgIYlSUG4ug7kpmGj8LYejmU3_W9yVNlbAoQh4jMw/kruto.png"));
    }
    model -> setQuery("select * from warehouse where dep_name = '" + cafe + "' AND quantity < min_q", db);
    ui->tableView->setModel(model);
}

void supplier_interface::make_map(QString dep)
{
    htmlPath = QDir::currentPath() + dep;// "/ya_maps.html";
    htmlFile = new QFile(htmlPath);
    if (htmlFile->open(QIODevice::ReadOnly | QIODevice::Text)) {
        ui->map_widget->setHtml(htmlFile->readAll());
        htmlFile->close();
    }
    else {
        qDebug() << "Error opening HTML file:" << htmlPath;
    }
    delete htmlFile;
}
