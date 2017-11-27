#include "derivacion.h"
#include "ui_derivacion.h"

derivacion::derivacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::derivacion)
{
    ui->setupUi(this);
                                  // conexiones
connect(ui->metodo,SIGNAL(clicked()),this,SLOT(metodo()));
connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));
connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));
}

derivacion::~derivacion()
{
    delete ui;
}
double derivacion::funcion(double v)//ecuacion
{
    return
 ((-0.1*pow(v,4))-(0.15*pow(v,3))-(0.5*pow(v,2))-((0.25*v)+1.2));
}
double derivacion::funcion1(double v)
{                                //primera derivada

return (-(0.4*pow(v,3))-(0.45*pow(v,2))-(v)-(0.25));
}

double  derivacion::funcion2(double v)
{                                //segunda derivada
    return (-(1.2*pow(v,2))-(0.9*v)-(1));
}
double  derivacion::funcion3(double v)
{                               //tercera derivada
    return (-(2.4*v)-(0.9));
}
double  derivacion::funcion4(double v)
{                               //cuarta derivada
    return (-2.4);
}




void derivacion::metodo(){
                                //Cadenas de texto de uso temporal
    QString temp,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12,temp13,temp14,temp15,temp16,temp17,temp18,temp19,temp20,temp21,temp22,temp23,temp24,temp25;//texto
                               //devuelve el valor del SPINBOX
    double x_5=ui->X_5->value();
    double f_5=ui->F_5->value();

    double x_4=ui->X_4->value();
    double f_4=ui->F_4->value();

    double x_3=ui->X_3->value();
    double f_3=ui->F_3->value();

    double x_2=ui->X_2->value();
    double f_2=ui->F_2->value();

    double x_1=ui->X_1->value();
    double f_1=ui->F_1->value();

    double xi=ui->XI->value();
    double fi=ui->FI->value();

    double x1=ui->X1->value();
    double f1=ui->F1->value();

    double x2=ui->X2->value();
    double f2=ui->F2->value();

    double x3=ui->X3->value();
    double f3=ui->F3->value();

    double x4=ui->X4->value();
    double f4=ui->F4->value();

    double f5=ui->F5->value();
    double x5=ui->X5->value();

    double h=ui->h->value();

    double Fat1,Fat2,Fat3,Fat4;      // variables de función evaluadas hacia atras
    double Fc1,Fc2,Fc3,Fc4;          // variables de función evaluadas centrales
    double Fad1,Fad2,Fad3,Fad4;      //variables de función evaluadas hacia adelante

    double Eat1,Eat2,Eat3,Eat4;      //  variables de error hacia atrás
    double Ec1,Ec2,Ec3,Ec4;          //variables de error centrales
    double Ead1,Ead2,Ead3,Ead4;      //variables de error hacia adelante

    //variables derivadas
    double X=0;
    double X2=0;
    double X3=0;
    double X4=0;
   //evaluación de la derivada en xi
    X= (funcion1(xi));
    X2= (funcion2(xi));
    X3= (funcion3(xi));
    X4= (funcion4(xi));
                             //primera derivada
    //metodo hacia atras
    Fat1=((3*fi)-(4*f_1)+(f_2))/(2*h);
    Eat1=100*std::abs((Fat1-X)/Fat1);
    //metodo central
    Fc1=((-f2)+(8*(f1))-(8*(f_1))+(f_2))/(12*h);
    Ec1=100*std::abs((X-Fc1)/X);
    //metodo hacia adelante
    Fad1=((-f2)+(4*(f1))-(3*(fi)))/(2*h);
    Ead1=100*std::abs(( X-Fad1)/X);

                             //segunda derivada
    //método hacia atrás
    Fat2=((2*fi)-(5*f_1)+(4*f_2)-(f_3))/(h*h);
    Eat2=100*std::abs((Fat2-X2)/Fat2);
    //metodo central
    Fc2=((-f2)+(16*(f1))-(30*fi)+(16*f_1)-(f_2))/(12*(h*h));
    Ec2=100*std::abs((X2-Fc2)/X2);
    //metodo hacia adelante
    Fad2=((-f3)+(4*f2)-(5*f1)+(2*fi))/(h*h);
    Ead2=100*std::abs((X2-Fad2)/X2);


                             //tercera derivada
    //método hacia atrás
    Fat3=((5*fi)-(18*f_1)+(24*f_2)-(14*f_3)+(3*f_4))/(2*(h*h*h));
    Eat3=100*std::abs((Fat3-X3)/Fat3);
    //metodo central
    Fc3=((-f3)+(8*f2)-(13*f1)+(13*f_1)-(8*f_2)+(f_3))/(8*(h*h*h));
    Ec3=100*std::abs((X3-Fc3)/X3);
    //metodo hacia adelante
    Fad3=((-3*f3)+(14*f3)-(24*f2)+(18*f1)-(5*fi)/(2*(h*h*h)));
    Ead3=100*std::abs((X3-Fad3)/X3);


                             //fourth derivative
    //método hacia atrás
    Fat4=((3*fi)-(14*f_1)+(26*f_2)-(24*f_3)+(11*f_4)-(2*f_5))/(h*h*h*h);
    Eat4=100*std::abs((Fat4-X4)/Fat4);
    //metodo central
    Fc4=((-f3)+(12*f2)+(39*f1)+(56*fi)-(39*f_1)+(12*f_2)+(f_3))/(6*(h*h*h*h));
    Ec4=100*std::abs((X4-Fc4)/X4);
    //metodo hacia adelante
    Fad4=((-2*f5)+(11*f4)-(24*f3)+(26*f2)-(14*f1)+(3*fi))/(h*h*h*h);
    Ead4=100*std::abs((X4-Fad4)/X4);

//se muestra el texto en la interfaz
temp
            .append("\nPRIMERA DERIVADA\n")
                .append("\nDerivada trasera\n\n")
                    .append("f(x)'=").append(temp2.setNum(Fat1)).append("\t\nError=").append(temp3.setNum(Eat1))
                .append("\n\nDerivada centrada\n\n")
                    .append("f(x)'=").append(temp4.setNum(Fc1)).append("\t\nError=").append(temp5.setNum(Ec1))
                .append("\n\nDerivada delantera\n\n")
                    .append("f(x)'=").append(temp6.setNum(Fad1)).append("\t\nError=").append(temp7.setNum(Ead1))

           .append("\n\nSEGUNDA DERIVADA\n\n")
                .append("\nDerivada trasera\n\n")
                    .append("f(x)''=").append(temp8.setNum(Fat2)).append("\t\nError=").append(temp9.setNum(Eat2))
                .append("\n\nDerivada centrada\n\n")
                    .append("f(x)''=").append(temp10.setNum(Fc2)).append("\t\nError=").append(temp11.setNum(Ec2))
                .append("\n\nDerivada delantera\n\n")
                    .append("f(x)''=").append(temp12.setNum(Fad2)).append("\t\nError=").append(temp13.setNum(Ead2))

            .append("\n\nTERCERA DERIVADA\n\n")
                .append("\nDerivada trasera\n\n")
                    .append("f(x)'''=").append(temp14.setNum(Fat3)).append("\t\nError=").append(temp15.setNum(Eat3))
                .append("\n\nDerivada centrada\n\n")
                    .append("f(x)'''=").append(temp16.setNum(Fc3)).append("\t\nError=").append(temp17.setNum(Ec3))
                .append("\n\nDerivada delantera\n\n")
                    .append("f(x)'''=").append(temp18.setNum(Fad3)).append("\t\nError=").append(temp19.setNum(Ead3))

            .append("\n\nCUARTA DERIVADA\n\n")
                 .append("\nDerivada trasera\n\n")
                     .append("f(x)''''=").append(temp20.setNum(Fat4)).append("\t\nError=").append(temp21.setNum(Eat4))
                 .append("\n\nDerivada centrada\n\n")
                     .append("f(x)''''=").append(temp22.setNum(Fc4)).append("\t\nError=").append(temp23.setNum(Ec4))
                 .append("\n\nDerivada delantera\n\n")
                     .append("f(x)''''=").append(temp24.setNum(Fad4)).append("\t\nError=").append(temp25.setNum(Ead4));
    ui->texto->setText(temp);
}
void derivacion::borrar(){ //metodo borrar
    ui->X_5->setValue(0.0);   //el spinbox es borrado
    ui->X_4->setValue(0.0);
    ui->X_3->setValue(0.0);
    ui->X_2->setValue(0.0);
    ui->X_1->setValue(0.0);
    ui->XI->setValue(0.0);
    ui->X1->setValue(0.0);
    ui->X2->setValue(0.0);
    ui->X3->setValue(0.0);
    ui->X4->setValue(0.0);
    ui->X5->setValue(0.0);
    ui->F_5->setValue(0.0);
    ui->F_4->setValue(0.0);
    ui->F_3->setValue(0.0);
    ui->F_2->setValue(0.0);
    ui->F_1->setValue(0.0);
    ui->FI->setValue(0.0);
    ui->F1->setValue(0.0);
    ui->F2->setValue(0.0);
    ui->F3->setValue(0.0);
    ui->F4->setValue(0.0);
    ui->F5->setValue(0.0);
    ui->h->setValue(0.0);
    ui->texto->clear();       //el método y windowsw se borran
}


