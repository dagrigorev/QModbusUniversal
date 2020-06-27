#include "ModbusResponse.h"

quint8 QModbusResponsePacket::Data() const { return m_byteData; }

void QModbusResponsePacket::setData(quint8 data) {
  if (data != m_byteData) {
    m_byteData = data;
    emit onDataChanged(m_byteData);
  }
}

quint16 QModbusResponsePacket::DataCount() const { return m_ushortDataCount; }

void QModbusResponsePacket::setDataCount(quint16 count) {
  if (count != m_ushortDataCount) {
    m_ushortDataCount = count;
    emit onDataCountChanged(m_ushortDataCount);
  }
}
