#include "counter.h"

Counter::Counter(QObject *parent) : QObject(parent)
{
    m_value = 0;
}

void Counter::setValue(int value)
{
    if (value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
}
