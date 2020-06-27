#pragma once

#include <QObject>

/**
 * @brief The modbus packet definition base abstract class
 */
class QModbusPacketBase : public QObject
{
    Q_OBJECT
    Q_PROPERTY(quint8 Address READ Address WRITE setAddress NOTIFY onAddressChanged)
    Q_PROPERTY(
        quint8 FunctionCode READ FunctionCode WRITE setFunctionCode NOTIFY onFunctionCodeChanged)
    Q_PROPERTY(quint16 Checksum READ Checksum WRITE setChecksum)

private:
    quint8 m_byteAddress;
    quint8 m_byteFunctionCode;
    quint16 m_ushortChecksum;

public:
    /**
   * @brief QModbusPacketBase default constructor
   */
    QModbusPacketBase() {}

    /**
   * @brief ~QModbusPacketBase
   */
    virtual ~QModbusPacketBase() {}

    /**
   * @brief setAddress modbus address property settter
   * @param addr address value
   */
    void setAddress(quint8 addr);

    /**
   * @brief Address modbus address property getter
   * @return address value
   */
    quint8 Address() const;

    /**
   * @brief setFunctionCode modbus function code property setter
   * @param funcCode code value
   */
    void setFunctionCode(quint8 funcCode);

    /**
   * @brief FunctionCode modbus function code property getter
   * @return modbus function code value
   */
    quint8 FunctionCode() const;

    /**
   * @brief setChecksum modbus packet checksum property setter
   * @param checksum checksum value
   */
    void setChecksum(quint16 checksum);

    /**
   * @brief Checksum modbus packet checksum property getter
   * @return checksum value
   */
    quint16 Checksum() const;

signals:
    /**
   * @brief onAddressChanged modbus address changes notifier
   * @param value changed value
   */
    void onAddressChanged(quint8 value);

    /**
   * @brief onFunctionCodeChanged modbus function code changes notifier
   * @param value
   */
    void onFunctionCodeChanged(quint8 value);
};
