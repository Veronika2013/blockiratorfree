#include "mainblocker.h"
#include "ui_mainblocker.h"
#include <ctime>
#include <QFile>

void MainBlocker::generate_key(){
    srand(time(NULL));

    QString *mainarr = new QString[20];
    QString buff;

    QFile *file = new QFile("key.bkl");
    file->open(QFile::WriteOnly);


    int *arrintrand = new int[1000];
    QString *arrconvertint = new QString[1000];

    for(int i = 0; i < 1000; i++){
        arrintrand[i] = rand() % 1000;
        arrconvertint[i] = QString::number(arrintrand[i]);
    }


    char *mass = new char[26];
    for(int i = 0; i <26; i++) {
        mass[i] = rand()   %26+0x61;
    }

    for(int i = 0; i < 20; i = i+2){


        int j = rand() % 1;

        if(j == 0)
        {
            mainarr[i] = mass[rand() % 26];
            mainarr[i+1] = arrconvertint[rand() % 1000 ];

        }

    }

      QString array[20];

          for(int j = 0; j < 20; j++){

                  for(int i = 0 ; i < 20; i++){
                      buff.append(mainarr[i]);
                   }

              array[j] = buff;
      }
 file->write(array[0].toUtf8());
 file->close();

}

void MainBlocker::checkable(){

}

void MainBlocker::block_function(){

}
