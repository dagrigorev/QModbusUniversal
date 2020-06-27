#include "ModbusBase.h"

quint8 QModbusPacketBase::Address() const
{
    return this->m_byteAddress;
}

void QModbusPacketBase::setAddress(quint8 addr)
{
    if (addr != m_byteAddress) {
        m_byteAddress = addr;
        emit onAddressChanged(m_byteAddress);
    }
}

quint8 QModbusPacketBase::FunctionCode() const
{
    return this->m_byteFunctionCode;
}

void QModbusPacketBase::setFunctionCode(quint8 funcCode)
{
    if (m_byteFunctionCode != funcCode) {
        m_byteFunctionCode = funcCode;
        emit onFunctionCodeChanged(m_byteFunctionCode);
    }
}

quint16 QModbusPacketBase::Checksum() const
{
    return m_ushortChecksum;
}

void QModbusPacketBase::setChecksum(quint16 checksum)
{
    if (m_ushortChecksum != checksum) {
        m_ushortChecksum = checksum;
    }
}
