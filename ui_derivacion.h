/********************************************************************************
** Form generated from reading UI file 'derivacion.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DERIVACION_H
#define UI_DERIVACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_derivacion
{
public:
    QWidget *centralWidget;
    QLabel *label_26;
    QDoubleSpinBox *X_2;
    QLabel *label_10;
    QLabel *label_7;
    QDoubleSpinBox *F5;
    QLabel *label_5;
    QLabel *label_24;
    QLabel *label_8;
    QTextEdit *texto;
    QPushButton *borrar;
    QLabel *label;
    QDoubleSpinBox *F_3;
    QLabel *label_21;
    QPushButton *salir;
    QDoubleSpinBox *F3;
    QDoubleSpinBox *X1;
    QDoubleSpinBox *h;
    QLabel *label_16;
    QDoubleSpinBox *F_2;
    QDoubleSpinBox *FI;
    QLabel *label_25;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_2;
    QDoubleSpinBox *X4;
    QDoubleSpinBox *X_3;
    QDoubleSpinBox *X5;
    QLabel *label_19;
    QDoubleSpinBox *X_1;
    QLabel *label_17;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_18;
    QDoubleSpinBox *F4;
    QDoubleSpinBox *X2;
    QDoubleSpinBox *F_1;
    QPushButton *metodo;
    QDoubleSpinBox *F1;
    QDoubleSpinBox *X3;
    QDoubleSpinBox *F_4;
    QLabel *label_23;
    QLabel *label_20;
    QDoubleSpinBox *F2;
    QDoubleSpinBox *XI;
    QLabel *label_4;
    QLabel *label_15;
    QDoubleSpinBox *F_5;
    QLabel *label_9;
    QDoubleSpinBox *X_5;
    QDoubleSpinBox *X_4;
    QLabel *label_22;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *derivacion)
    {
        if (derivacion->objectName().isEmpty())
            derivacion->setObjectName(QStringLiteral("derivacion"));
        derivacion->resize(1001, 497);
        centralWidget = new QWidget(derivacion);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 80, 47, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_26->setFont(font);
        X_2 = new QDoubleSpinBox(centralWidget);
        X_2->setObjectName(QStringLiteral("X_2"));
        X_2->setGeometry(QRect(50, 170, 62, 22));
        X_2->setCursor(QCursor(Qt::IBeamCursor));
        X_2->setDecimals(5);
        X_2->setMinimum(-99.99);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 260, 47, 16));
        label_10->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 170, 47, 16));
        label_7->setFont(font);
        F5 = new QDoubleSpinBox(centralWidget);
        F5->setObjectName(QStringLiteral("F5"));
        F5->setGeometry(QRect(230, 380, 62, 22));
        F5->setCursor(QCursor(Qt::IBeamCursor));
        F5->setDecimals(5);
        F5->setMinimum(-99.99);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 230, 47, 16));
        label_5->setFont(font);
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 380, 47, 16));
        label_24->setFont(font);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 140, 47, 16));
        label_8->setFont(font);
        texto = new QTextEdit(centralWidget);
        texto->setObjectName(QStringLiteral("texto"));
        texto->setGeometry(QRect(380, 70, 601, 331));
        texto->setFont(font);
        borrar = new QPushButton(centralWidget);
        borrar->setObjectName(QStringLiteral("borrar"));
        borrar->setGeometry(QRect(590, 420, 75, 23));
        borrar->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 47, 13));
        label->setFont(font);
        F_3 = new QDoubleSpinBox(centralWidget);
        F_3->setObjectName(QStringLiteral("F_3"));
        F_3->setGeometry(QRect(230, 140, 62, 22));
        F_3->setCursor(QCursor(Qt::IBeamCursor));
        F_3->setDecimals(5);
        F_3->setMinimum(-99.99);
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(180, 230, 47, 16));
        label_21->setFont(font);
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(900, 420, 75, 23));
        salir->setFont(font);
        F3 = new QDoubleSpinBox(centralWidget);
        F3->setObjectName(QStringLiteral("F3"));
        F3->setGeometry(QRect(230, 320, 62, 22));
        F3->setCursor(QCursor(Qt::IBeamCursor));
        F3->setDecimals(5);
        F3->setMinimum(-99.99);
        X1 = new QDoubleSpinBox(centralWidget);
        X1->setObjectName(QStringLiteral("X1"));
        X1->setGeometry(QRect(50, 260, 62, 22));
        X1->setCursor(QCursor(Qt::IBeamCursor));
        X1->setDecimals(5);
        X1->setMinimum(-99.99);
        h = new QDoubleSpinBox(centralWidget);
        h->setObjectName(QStringLiteral("h"));
        h->setGeometry(QRect(440, 420, 62, 22));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(180, 140, 47, 16));
        label_16->setFont(font);
        F_2 = new QDoubleSpinBox(centralWidget);
        F_2->setObjectName(QStringLiteral("F_2"));
        F_2->setGeometry(QRect(230, 170, 62, 22));
        F_2->setCursor(QCursor(Qt::IBeamCursor));
        F_2->setDecimals(5);
        F_2->setMinimum(-99.99);
        FI = new QDoubleSpinBox(centralWidget);
        FI->setObjectName(QStringLiteral("FI"));
        FI->setGeometry(QRect(230, 230, 62, 22));
        FI->setCursor(QCursor(Qt::IBeamCursor));
        FI->setDecimals(5);
        FI->setMinimum(-99.99);
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(180, 80, 47, 16));
        label_25->setFont(font);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 290, 47, 16));
        label_11->setFont(font);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 350, 47, 16));
        label_13->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 50, 47, 13));
        label_2->setFont(font);
        X4 = new QDoubleSpinBox(centralWidget);
        X4->setObjectName(QStringLiteral("X4"));
        X4->setGeometry(QRect(50, 350, 62, 22));
        X4->setCursor(QCursor(Qt::IBeamCursor));
        X4->setDecimals(5);
        X4->setMinimum(-99.99);
        X_3 = new QDoubleSpinBox(centralWidget);
        X_3->setObjectName(QStringLiteral("X_3"));
        X_3->setGeometry(QRect(50, 140, 62, 22));
        X_3->setCursor(QCursor(Qt::IBeamCursor));
        X_3->setDecimals(5);
        X_3->setMinimum(-99.99);
        X5 = new QDoubleSpinBox(centralWidget);
        X5->setObjectName(QStringLiteral("X5"));
        X5->setGeometry(QRect(50, 380, 62, 22));
        X5->setCursor(QCursor(Qt::IBeamCursor));
        X5->setDecimals(5);
        X5->setMinimum(-99.99);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(180, 320, 47, 16));
        label_19->setFont(font);
        X_1 = new QDoubleSpinBox(centralWidget);
        X_1->setObjectName(QStringLiteral("X_1"));
        X_1->setGeometry(QRect(50, 200, 62, 22));
        X_1->setCursor(QCursor(Qt::IBeamCursor));
        X_1->setDecimals(5);
        X_1->setMinimum(-99.99);
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(180, 260, 47, 16));
        label_17->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 420, 41, 21));
        label_3->setFont(font);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(180, 200, 47, 16));
        label_14->setFont(font);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 320, 47, 16));
        label_12->setFont(font);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(180, 170, 47, 16));
        label_18->setFont(font);
        F4 = new QDoubleSpinBox(centralWidget);
        F4->setObjectName(QStringLiteral("F4"));
        F4->setGeometry(QRect(230, 350, 62, 22));
        F4->setCursor(QCursor(Qt::IBeamCursor));
        F4->setDecimals(5);
        F4->setMinimum(-99.99);
        X2 = new QDoubleSpinBox(centralWidget);
        X2->setObjectName(QStringLiteral("X2"));
        X2->setGeometry(QRect(50, 290, 62, 22));
        X2->setCursor(QCursor(Qt::IBeamCursor));
        X2->setDecimals(5);
        X2->setMinimum(-99.99);
        F_1 = new QDoubleSpinBox(centralWidget);
        F_1->setObjectName(QStringLiteral("F_1"));
        F_1->setGeometry(QRect(230, 200, 62, 22));
        F_1->setCursor(QCursor(Qt::IBeamCursor));
        F_1->setDecimals(5);
        F_1->setMinimum(-99.99);
        metodo = new QPushButton(centralWidget);
        metodo->setObjectName(QStringLiteral("metodo"));
        metodo->setGeometry(QRect(730, 420, 91, 23));
        metodo->setFont(font);
        F1 = new QDoubleSpinBox(centralWidget);
        F1->setObjectName(QStringLiteral("F1"));
        F1->setGeometry(QRect(230, 260, 62, 22));
        F1->setCursor(QCursor(Qt::IBeamCursor));
        F1->setDecimals(5);
        F1->setMinimum(-99.99);
        X3 = new QDoubleSpinBox(centralWidget);
        X3->setObjectName(QStringLiteral("X3"));
        X3->setGeometry(QRect(50, 320, 62, 22));
        X3->setCursor(QCursor(Qt::IBeamCursor));
        X3->setDecimals(5);
        X3->setMinimum(-99.99);
        F_4 = new QDoubleSpinBox(centralWidget);
        F_4->setObjectName(QStringLiteral("F_4"));
        F_4->setGeometry(QRect(230, 110, 62, 22));
        F_4->setCursor(QCursor(Qt::IBeamCursor));
        F_4->setDecimals(5);
        F_4->setMinimum(-99.99);
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(180, 380, 47, 16));
        label_23->setFont(font);
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(180, 290, 47, 16));
        label_20->setFont(font);
        F2 = new QDoubleSpinBox(centralWidget);
        F2->setObjectName(QStringLiteral("F2"));
        F2->setGeometry(QRect(230, 290, 62, 22));
        F2->setCursor(QCursor(Qt::IBeamCursor));
        F2->setDecimals(5);
        F2->setMinimum(-99.99);
        XI = new QDoubleSpinBox(centralWidget);
        XI->setObjectName(QStringLiteral("XI"));
        XI->setGeometry(QRect(50, 230, 62, 22));
        XI->setCursor(QCursor(Qt::IBeamCursor));
        XI->setDecimals(5);
        XI->setMinimum(-99.99);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 20, 421, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(180, 110, 47, 16));
        label_15->setFont(font);
        F_5 = new QDoubleSpinBox(centralWidget);
        F_5->setObjectName(QStringLiteral("F_5"));
        F_5->setGeometry(QRect(230, 80, 62, 22));
        F_5->setCursor(QCursor(Qt::IBeamCursor));
        F_5->setDecimals(5);
        F_5->setMinimum(-99.99);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 110, 47, 16));
        label_9->setFont(font);
        X_5 = new QDoubleSpinBox(centralWidget);
        X_5->setObjectName(QStringLiteral("X_5"));
        X_5->setGeometry(QRect(50, 80, 62, 22));
        X_5->setCursor(QCursor(Qt::IBeamCursor));
        X_5->setDecimals(5);
        X_5->setMinimum(-99.99);
        X_4 = new QDoubleSpinBox(centralWidget);
        X_4->setObjectName(QStringLiteral("X_4"));
        X_4->setGeometry(QRect(50, 110, 62, 22));
        X_4->setCursor(QCursor(Qt::IBeamCursor));
        X_4->setDecimals(5);
        X_4->setMinimum(-99.99);
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(180, 350, 47, 16));
        label_22->setFont(font);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 200, 47, 16));
        label_6->setFont(font);
        derivacion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(derivacion);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1001, 21));
        derivacion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(derivacion);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        derivacion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(derivacion);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        derivacion->setStatusBar(statusBar);

        retranslateUi(derivacion);

        QMetaObject::connectSlotsByName(derivacion);
    } // setupUi

    void retranslateUi(QMainWindow *derivacion)
    {
        derivacion->setWindowTitle(QApplication::translate("derivacion", "derivacion", Q_NULLPTR));
        label_26->setText(QApplication::translate("derivacion", "Xi-5", Q_NULLPTR));
        label_10->setText(QApplication::translate("derivacion", "Xi+1", Q_NULLPTR));
        label_7->setText(QApplication::translate("derivacion", "Xi-2", Q_NULLPTR));
        label_5->setText(QApplication::translate("derivacion", "Xi", Q_NULLPTR));
        label_24->setText(QApplication::translate("derivacion", "Xi+5", Q_NULLPTR));
        label_8->setText(QApplication::translate("derivacion", "Xi-3", Q_NULLPTR));
        borrar->setText(QApplication::translate("derivacion", "Borrar", Q_NULLPTR));
        label->setText(QApplication::translate("derivacion", "Xi", Q_NULLPTR));
        label_21->setText(QApplication::translate("derivacion", "Fxi", Q_NULLPTR));
        salir->setText(QApplication::translate("derivacion", "Salir", Q_NULLPTR));
        label_16->setText(QApplication::translate("derivacion", "Fxi-3", Q_NULLPTR));
        label_25->setText(QApplication::translate("derivacion", "Fxi-5", Q_NULLPTR));
        label_11->setText(QApplication::translate("derivacion", "Xi+2", Q_NULLPTR));
        label_13->setText(QApplication::translate("derivacion", "Xi+4", Q_NULLPTR));
        label_2->setText(QApplication::translate("derivacion", "F(xi)", Q_NULLPTR));
        label_19->setText(QApplication::translate("derivacion", "Fxi+3", Q_NULLPTR));
        label_17->setText(QApplication::translate("derivacion", "Fxi+1", Q_NULLPTR));
        label_3->setText(QApplication::translate("derivacion", "Error", Q_NULLPTR));
        label_14->setText(QApplication::translate("derivacion", "Fxi-1", Q_NULLPTR));
        label_12->setText(QApplication::translate("derivacion", "Xi+3", Q_NULLPTR));
        label_18->setText(QApplication::translate("derivacion", "Fxi-2", Q_NULLPTR));
        metodo->setText(QApplication::translate("derivacion", "Procesar", Q_NULLPTR));
        label_23->setText(QApplication::translate("derivacion", "Fxi+5", Q_NULLPTR));
        label_20->setText(QApplication::translate("derivacion", "Fxi+2", Q_NULLPTR));
        label_4->setText(QApplication::translate("derivacion", "<html><head/><body><p><span style=\" font-weight:600;\">METODO DIFERENCIACION NUMERICA</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("derivacion", "Fxi-4", Q_NULLPTR));
        label_9->setText(QApplication::translate("derivacion", "Xi-4", Q_NULLPTR));
        label_22->setText(QApplication::translate("derivacion", "Fxi+4", Q_NULLPTR));
        label_6->setText(QApplication::translate("derivacion", "Xi-1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class derivacion: public Ui_derivacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DERIVACION_H
