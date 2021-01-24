#include "textarea.h"
#include "ui_textarea.h"

namespace Authorium::ui
{

TextArea::TextArea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextArea)
{
    ui->setupUi(this);
}

TextArea::~TextArea()
{
    delete ui;
}

}
