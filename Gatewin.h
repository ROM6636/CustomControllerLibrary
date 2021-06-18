#ifndef GATEWIN_H
#define GATEWIN_H

#include <QWidget>

class SliderEdit;
class Gatewin:public QWidget
{
    Q_OBJECT
private:
    SliderEdit * mSlidereditor;
public:
    Gatewin();
    ~Gatewin();

};

#endif // GATEWIN_H
