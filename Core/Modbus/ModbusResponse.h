#pragma once

#include "ModbusBase.h"
#include <QObject>

/**
 * @brief The QModbusResponsePacket modbus response packet implementation
 */
class QModbusResponsePacket : QModbusPacketBase {
  Q_OBJECT
  Q_PROPERTY(quint8 Data READ Data WRITE setData NOTIFY onDataChanged)
  Q_PROPERTY(quint16 DataCount READ DataCount WRITE setDataCount NOTIFY
                 onDataCountChanged)

private:
  quint16 m_ushortDataCount;
  quint16 m_byteData;

public:
  /**
   * @brief QModbusRequestPacket default constructor
   */
  QModbusResponsePacket() {}

  ~QModbusResponsePacket() {}

  /**
   * @brief Data modbus response data getter
   * @return some data
   */
  quint8 Data() const;

  /**
   * @brief setData modbus data setter
   * @param data value
   */
  void setData(quint8 data);

  /**
   * @brief DataCount transfer data count getter
   * @return
   */
  quint16 DataCount() const;

  /**
   * @brief setDataCount transfer data count setter
   * @param count data count
   */
  void setDataCount(quint16 count);

signals:
  /**
   * @brief onDataChanged modbus data changes notifier
   * @param value
   */
  void onDataChanged(quint8 value);

  /**
   * @brief onDataCountChanged transfer data count changes notifier
   * @param value
   */
  void onDataCountChanged(quint16 value);
};
