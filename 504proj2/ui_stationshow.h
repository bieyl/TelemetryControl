/********************************************************************************
** Form generated from reading UI file 'stationshow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONSHOW_H
#define UI_STATIONSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StationShow
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox;

    void setupUi(QWidget *StationShow)
    {
        if (StationShow->objectName().isEmpty())
            StationShow->setObjectName(QString::fromUtf8("StationShow"));
        StationShow->resize(487, 164);
        horizontalLayout = new QHBoxLayout(StationShow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(StationShow);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(StationShow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label_3 = new QLabel(StationShow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(StationShow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        comboBox_2 = new QComboBox(StationShow);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox = new QCheckBox(StationShow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        retranslateUi(StationShow);

        QMetaObject::connectSlotsByName(StationShow);
    } // setupUi

    void retranslateUi(QWidget *StationShow)
    {
        StationShow->setWindowTitle(QApplication::translate("StationShow", "Form", nullptr));
        label->setText(QApplication::translate("StationShow", "\351\201\245\346\265\213\347\253\231\357\274\232", nullptr));
        label_3->setText(QApplication::translate("StationShow", "ip\357\274\232", nullptr));
        label_4->setText(QApplication::translate("StationShow", "\346\227\240", nullptr));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StationShow: public Ui_StationShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONSHOW_H
