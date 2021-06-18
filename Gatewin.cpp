#include "Gatewin.h"
#include "slideredit.h"
#include <QtWidgets>

Gatewin::Gatewin():
    QWidget(nullptr)
{
    QFormLayout * mGatelayout = new QFormLayout();
    setLayout(mGatelayout);

    mSlidereditor = new SliderEdit();
    mGatelayout->addWidget(mSlidereditor);



}

Gatewin::~Gatewin()
{

}
