/*
Copyright (C) 2010-2017 Christopher Brochtrup

This file is part of Capture2Text.

Capture2Text is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Capture2Text is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Capture2Text.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QDesktopServices>
#include "AboutDialog.h"
#include "ui_AboutDialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    setWindowFlags(windowFlags()
                   & ~Qt::WindowContextHelpButtonHint
                   | Qt::WindowMinMaxButtonsHint);

    ui->setupUi(this);

    ui->labelVersion->setText(QCoreApplication::applicationVersion());
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_labelHomePageLink_linkActivated(const QString &)
{
    QDesktopServices::openUrl(QUrl("https://github.com/setsumi/Capture2TextPlus/"));
}

void AboutDialog::on_label_8_linkActivated(const QString &)
{
    QDesktopServices::openUrl(QUrl("https://github.com/setsumi/Capture2TextPlus/issues/"));
}
