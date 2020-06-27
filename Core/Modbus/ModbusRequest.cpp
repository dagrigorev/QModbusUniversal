#include "ModbusRequest.h"

quint16 QModbusRequestPacket::FirstAddress() const {
  return m_ushortFirstAddress;
}

void QModbusRequestPacket::setFirstAddress(quint16 firstAddress) {
  if (firstAddress != m_ushortFirstAddress) {
    m_ushortFirstAddress = firstAddress;
    emit onFirstAddressChanged(m_ushortFirstAddress);
  }
}

quint16 QModbusRequestPacket::Count() const { return m_ushortCount; }

void QModbusRequestPacket::setCount(quint16 count) {
  if (count != m_ushortCount) {
    m_ushortCount = count;
    emit onCountChanged(m_ushortCount);
  }
}
