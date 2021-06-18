#include "slideredit.h"

SliderEdit::SliderEdit(QWidget * parent):
    QLineEdit(parent)
{
    setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
}

SliderEdit::~SliderEdit()
{

}

void SliderEdit::mousePressEvent(QMouseEvent * eve)
{
    if (eve->button() == Qt::RightButton) {
        _isRightPressed = true;
        pressedPos = eve->globalPos();
    }

    QLineEdit::mousePressEvent(eve);
}

void SliderEdit::mouseMoveEvent(QMouseEvent * eve)
{

    if (_isRightPressed) {
        QPointF nowPos = eve->globalPos();
        double offVal = nowPos.x() - pressedPos.x();
        setText(QString::number(text().toDouble() + offVal * _moveStep,'f',2));
        pressedPos = nowPos;
        emit sig_valueDragged();
        return;
    }
    QLineEdit::mouseMoveEvent(eve);
}

void SliderEdit::mouseReleaseEvent(QMouseEvent * eve)
{
    if (_isRightPressed) {
        _isRightPressed = false;
    }
    QLineEdit::mouseReleaseEvent(eve);
}

void SliderEdit::SetMoveStep(double step)
{
    _moveStep = step;
}
