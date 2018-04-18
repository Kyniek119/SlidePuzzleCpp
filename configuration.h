#ifndef CONFIUGRATION_H
#define CONFIUGRATION_H

#include <QImage>
#include <QUrl>

class Configuration
{
public:
    Configuration();
    void loadImage();
    QImage * getImage();
    void setSize(int newSize);
    int getSize();
    ~Configuration();
private:
    int size;
    QImage * image;
};

#endif // CONFIUGRATION_H
