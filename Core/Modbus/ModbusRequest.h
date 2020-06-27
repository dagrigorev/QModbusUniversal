#pragma once

#include "ModbusBase.h"
#include <QObject>

/**
 * @brief The QModbusRequestPacket modbus request packet implementation
 */
class QModbusRequestPacket : QModbusPacketBase {
  Q_OBJECT
  Q_PROPERTY(quint16 FirstAddress READ FirstAddress WRITE setFirstAddress NOTIFY
                 onFirstAddressChanged)
  Q_PROPERTY(quint16 Count READ Count WRITE setCount NOTIFY onCountChanged)

private:
  quint16 m_ushortFirstAddress;
  quint16 m_ushortCount;

public:
  /**
   * @brief QModbusRequestPacket default constructor
   */
  QModbusRequestPacket() {}

  ~QModbusRequestPacket() {}

  /**
   * @brief FirstAddress gets address of first flag or input
   * @return address value
   */
  quint16 FirstAddress() const;

  /**
   * @brief setFirstAddress first address setter
   * @param firstAddress address value
   */
  void setFirstAddress(quint16 firstAddress);

  /**
   * @brief Count gets count of flags or inputs
   * @return count value
   */
  quint16 Count() const;

  /**
   * @brief setCount flags or address count value setter
   * @param count
   */
  void setCount(quint16 count);

signals:
  /**
   * @brief onFirstAddressChanged address value changes notifier
   * @param value
   */
  void onFirstAddressChanged(quint16 value);

  /**
   * @brief onCountChanged count value changes notifier
   * @param value
   */
  void onCountChanged(quint16 value);
};
