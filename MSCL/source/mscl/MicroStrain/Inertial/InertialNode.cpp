/*******************************************************************************
Copyright(c) 2015-2020 Parker Hannifin Corp. All rights reserved.

MIT Licensed. See the included LICENSE.txt for a copy of the full MIT License.
*******************************************************************************/
#include "stdafx.h"
#include "InertialNode.h"

#include "mscl/Types.h"
#include "mscl/Communication/SerialConnection.h"
#include "mscl/MicroStrain/MIP/Commands/MIP_Commands.h"
#include "mscl/MicroStrain/MIP/MipNodeFeatures.h"
#include "mscl/MicroStrain/MIP/Packets/MipPacket.h"
#include "mscl/MicroStrain/MIP/MipNode_Impl.h"

#include <algorithm>


namespace mscl
{
    InertialNode::InertialNode(Connection connection) :
        m_impl(std::make_shared<MipNode_Impl>(connection))
    {
    }

    InertialNode::InertialNode(std::shared_ptr<MipNode_Impl> impl) :
        m_impl(impl)
    {
    }

    const MipNodeFeatures& InertialNode::features() const
    {
        return m_impl->features();
    }

    MipDataPackets InertialNode::getDataPackets(uint32 timeout, uint32 maxPackets)
    {
        MipDataPackets packets;
        m_impl->getDataPackets(packets, timeout, maxPackets);
        return packets;
    }

    GenericMipCmdResponse InertialNode::doCommand(GenericMipCommand::Response& response, const ByteStream& command, bool verifySupported) const
    {
        return m_impl->doCommand(response, command, verifySupported);
    }

    std::string InertialNode::deviceName(const std::string& serial)
    {
        //replace any unsupported sensorcloud characters
        std::string sensorcloudFilteredName = "inertial-" + serial;
        Utils::filterSensorcloudName(sensorcloudFilteredName);

        return sensorcloudFilteredName;
    }

    Connection& InertialNode::connection()
    {
        return m_impl->connection();
    }

    const Timestamp& InertialNode::lastCommunicationTime() const
    {
        return m_impl->lastCommunicationTime();
    }

    DeviceState InertialNode::lastDeviceState() const
    {
        return m_impl->lastDeviceState();
    }

    Version InertialNode::firmwareVersion() const
    {
        return m_impl->firmwareVersion();
    }

    InertialModels::NodeModel InertialNode::model() const
    {
        return InertialModels::nodeFromModelString(modelNumber());
    }

    std::string InertialNode::modelName() const
    {
        return m_impl->modelName();
    }

    std::string InertialNode::modelNumber() const
    {
        return m_impl->modelNumber();
    }

    std::string InertialNode::serialNumber() const
    {
        return m_impl->serialNumber();
    }

    std::string InertialNode::lotNumber() const
    {
        return m_impl->lotNumber();
    }

    std::string InertialNode::deviceOptions() const
    {
        return m_impl->deviceOptions();
    }

    uint32 InertialNode::totalPackets()
    {
        return m_impl->totalPackets();
    }

    void InertialNode::timeout(uint64 timeout)
    {
        m_impl->timeout(timeout);
    }

    uint64 InertialNode::timeout() const
    {
        return m_impl->timeout();
    }

    std::string InertialNode::name()
    {
        return deviceName(serialNumber());
    }

    bool InertialNode::ping()
    {
        return m_impl->ping();
    }

    void InertialNode::setToIdle()
    {
        m_impl->setToIdle();
    }

    bool InertialNode::cyclePower()
    {
        return m_impl->cyclePower();
    }

    void InertialNode::resume()
    {
        m_impl->resume();
    }

    void InertialNode::saveSettingsAsStartup(MipTypes::MipCommands cmdIds)
    {
        for (MipTypes::Command cmd : cmdIds)
        {
            m_impl->saveAsStartup(cmd);
        }
    }

    void InertialNode::saveSettingsAsStartup()
    {
        return m_impl->saveSettingsAsStartup();
    }

    void InertialNode::loadStartupSettings()
    {
        return m_impl->loadStartupSettings();
    }

    void InertialNode::loadFactoryDefaultSettings()
    {
        return m_impl->loadFactoryDefaultSettings();
    }

    void InertialNode::pollData(MipTypes::DataClass dataClass, const MipTypes::MipChannelFields& fields /*= MipTypes::MipChannelFields()*/)
    {
        m_impl->pollData(dataClass, fields);
    }

    MipCommandSet InertialNode::getConfigCommandBytes()
    {
        return m_impl->getConfigCommandBytes();
    }

    void InertialNode::sendCommandBytes(MipCommandSet& cmds)
    {
        m_impl->sendCommandBytes(cmds);
    }

    void InertialNode::sendCommandBytes(MipCommandBytes& cmd)
    {
        m_impl->sendCommandBytes(cmd);
    }

    uint16 InertialNode::getDataRateBase(MipTypes::DataClass dataClass)
    {
        return m_impl->getDataRateBase(dataClass);
    }

    MipChannels InertialNode::getActiveChannelFields(MipTypes::DataClass dataClass)
    {
        return m_impl->getMessageFormat(dataClass);
    }

    void InertialNode::setActiveChannelFields(MipTypes::DataClass dataClass, const MipChannels& channels)
    {
        m_impl->setMessageFormat(dataClass, channels);
    }

    void InertialNode::saveActiveChannelFields(MipTypes::DataClass dataClass)
    {
        m_impl->saveMessageFormat(dataClass);
    }

    void InertialNode::setFactoryStreamingChannels(InertialTypes::FactoryStreamingOption option)
    {
        m_impl->set(MipTypes::Command::CMD_FACTORY_STREAMING, {
            Value::UINT8(static_cast<uint8>(option)),
            Value::UINT8(0) });
    }

    uint8 InertialNode::getCommunicationMode()
    {
        return m_impl->getCommunicationMode();
    }

    void InertialNode::setCommunicationMode(uint8 communicationMode)
    {
        m_impl->setCommunicationMode(communicationMode);
    }

    bool InertialNode::isDataStreamEnabled(MipTypes::DataClass dataClass)
    {
        return m_impl->isDataStreamEnabled(dataClass);
    }

    void InertialNode::enableDataStream(MipTypes::DataClass dataClass, bool enable)
    {
        m_impl->enableDataStream(dataClass, enable);
    }

    void InertialNode::resetFilter()
    {
        m_impl->resetFilter();
    }

    bool InertialNode::getAltitudeAid()
    {
        return m_impl->getAltitudeAid();
    }

    void InertialNode::setAltitudeAid(bool enable)
    {
        m_impl->setAltitudeAid(enable);
    }

    bool InertialNode::getPitchRollAid()
    {
        return m_impl->getPitchRollAid();
    }

    void InertialNode::setPitchRollAid(bool enable)
    {
        m_impl->setPitchRollAid(enable);
    }

    ZUPTSettingsData InertialNode::getVelocityZUPT()
    {
        return m_impl->getVelocityZUPT();
    }

    void InertialNode::setVelocityZUPT(const ZUPTSettingsData& ZUPTSettings)
    {
        m_impl->setVelocityZUPT(ZUPTSettings);
    }

    ZUPTSettingsData InertialNode::getAngularRateZUPT()
    {
        return m_impl->getAngularRateZUPT();
    }

    void InertialNode::tareOrientation(const TareAxisValues& axisValue)
    {
        m_impl->tareOrientation(axisValue);
    }

    void InertialNode::setAngularRateZUPT(const ZUPTSettingsData& ZUPTSettings)
    {
        m_impl->setAngularRateZUPT(ZUPTSettings);
    }

    void InertialNode::cmdedVelZUPT()
    {
        m_impl->cmdedVelZUPT();
    }

    void InertialNode::cmdedAngRateZUPT()
    {
        m_impl->cmdedAngRateZUPT();
    }

    bool InertialNode::getAutoInitialization()
    {
        return m_impl->getAutoInitialization();
    }

    void InertialNode::setAutoInitialization(bool enable)
    {
        m_impl->setAutoInitialization(enable);
    }

    void InertialNode::setInitialAttitude(const EulerAngles& attitude)
    {
        m_impl->setInitialAttitude(attitude);
    }

    void InertialNode::setInitialHeading(float heading)
    {
        m_impl->setInitialHeading(heading);
    }

    FilterInitializationValues InertialNode::getInitialFilterConfiguration()
    {
        return m_impl->getInitialFilterConfiguration();
    }

    void InertialNode::setInitialFilterConfiguration(FilterInitializationValues filterConfig)
    {
        m_impl->setInitialFilterConfiguration(filterConfig);
    }

    EulerAngles InertialNode::getSensorToVehicleRotation_eulerAngles()
    {
        return m_impl->getSensorToVehicleRotation();
    }

    void InertialNode::setSensorToVehicleRotation_eulerAngles(const EulerAngles& angles)
    {
        m_impl->setSensorToVehicleRotation(angles);
    }

    Matrix_3x3 InertialNode::getSensorToVehicleRotation_matrix()
    {
        return Matrix_3x3(m_impl->get(MipTypes::CMD_EF_SENS_VEHIC_FRAME_ROTATION_DCM));
    }

    void InertialNode::setSensorToVehicleRotation_matrix(const Matrix_3x3& dcm)
    {
        m_impl->set(MipTypes::CMD_EF_SENS_VEHIC_FRAME_ROTATION_DCM,
            dcm.asMipFieldValues());
    }

    Quaternion InertialNode::getSensorToVehicleRotation_quaternion()
    {
        return Quaternion(m_impl->get(MipTypes::CMD_EF_SENS_VEHIC_FRAME_ROTATION_QUAT));
    }

    void InertialNode::setSensorToVehicleRotation_quaternion(const Quaternion& rotation)
    {
        m_impl->set(MipTypes::CMD_EF_SENS_VEHIC_FRAME_ROTATION_QUAT,
            rotation.asMipFieldValues());
    }

    EulerAngles InertialNode::getSensorToVehicleTransform_eulerAngles()
    {
        MipFieldValues res = m_impl->get(MipTypes::CMD_EF_SENS_VEHIC_FRAME_TRANSFORM_EULER);
        return EulerAngles(res[0].as_float(), res[1].as_float(), res[2].as_float());
    }

    void InertialNode::setSensorToVehicleTransform_eulerAngles(const EulerAngles& ea)
    {
        MipFieldValues params = {
            Value::FLOAT(ea.roll()),
            Value::FLOAT(ea.pitch()),
            Value::FLOAT(ea.yaw())
        };
        m_impl->set(MipTypes::CMD_EF_SENS_VEHIC_FRAME_TRANSFORM_EULER, params);
    }

    Matrix_3x3 InertialNode::getSensorToVehicleTransform_matrix()
    {
        return Matrix_3x3(m_impl->get(MipTypes::CMD_EF_SENS_VEHIC_FRAME_TRANSFORM_DCM));
    }

    void InertialNode::setSensorToVehicleTransform_matrix(const Matrix_3x3& dcm)
    {
        m_impl->set(MipTypes::CMD_EF_SENS_VEHIC_FRAME_TRANSFORM_DCM,
            dcm.asMipFieldValues());
    }

    Quaternion InertialNode::getSensorToVehicleTransform_quaternion()
    {
        return Quaternion(m_impl->get(MipTypes::CMD_EF_SENS_VEHIC_FRAME_TRANSFORM_QUAT));
    }

    void InertialNode::setSensorToVehicleTransform_quaternion(const Quaternion& transformation)
    {
        m_impl->set(MipTypes::CMD_EF_SENS_VEHIC_FRAME_TRANSFORM_QUAT,
            transformation.asMipFieldValues());
    }

    PositionOffset InertialNode::getSensorToVehicleOffset()
    {
        return m_impl->getSensorToVehicleOffset();
    }

    void InertialNode::setSensorToVehicleOffset(const PositionOffset& offset)
    {
        m_impl->setSensorToVehicleOffset(offset);
    }

    PositionOffset InertialNode::getAntennaOffset()
    {
        return m_impl->getAntennaOffset();
    }

    void InertialNode::setAntennaOffset(const PositionOffset& offset)
    {
        m_impl->setAntennaOffset(offset);
    }

    bool InertialNode::getGNSSAssistedFixControl()
    {
        return m_impl->getGNSSAssistedFixControl();
    }

    void InertialNode::setGNSSAssistedFixControl(bool enableAssistedFix)
    {
        m_impl->setGNSSAssistedFixControl(enableAssistedFix);
    }

    TimeUpdate InertialNode::getGNSSAssistTimeUpdate()
    {
        return m_impl->getGNSSAssistTimeUpdate();
    }

    void InertialNode::setGNSSAssistTimeUpdate(const TimeUpdate& timeUpdate)
    {
        m_impl->setGNSSAssistTimeUpdate(timeUpdate);
    }

    mscl::uint32 InertialNode::getGPSTimeUpdate(MipTypes::TimeFrame timeFrame)
    {
        switch (timeFrame)
        {
        case MipTypes::TIME_FRAME_WEEKS:
            return m_impl->getGPSTimeUpdateWeeks();
        case MipTypes::TIME_FRAME_SECONDS:
            return m_impl->getGPSTimeUpdateSeconds();
        default:
            throw Error_MipCmdFailed("InertialNode::getGPSTimeUpdate  Unknown timeframe");
        }
    }

    void InertialNode::setGPSTimeUpdate(MipTypes::TimeFrame timeFrame, mscl::uint32 time)
    {
        m_impl->setGPSTimeUpdate(timeFrame, time);
    }

    void InertialNode::setConstellationSettings(const ConstellationSettingsData& dataToUse)
    {
        m_impl->setConstellationSettings(dataToUse);
    }

    ConstellationSettingsData InertialNode::getConstellationSettings()
    {
        return m_impl->getConstellationSettings();
    }

    void InertialNode::setSBASSettings(const SBASSettingsData& dataToUse)
    {
        m_impl->setSBASSettings(dataToUse);
    }

    SBASSettingsData InertialNode::getSBASSettings()
    {
        return m_impl->getSBASSettings();
    }

    void InertialNode::setAccelerometerBias(const GeometricVector& biasVector)
    {
        m_impl->setAccelerometerBias(biasVector);
    }

    GeometricVector InertialNode::getAccelerometerBias()
    {
        return m_impl->getAccelerometerBias();
    }

    void InertialNode::setGyroBias(const GeometricVector& biasVector)
    {
        m_impl->setGyroBias(biasVector);
    }

    GeometricVector InertialNode::getGyroBias()
    {
        return m_impl->getGyroBias();
    }

    GeometricVector InertialNode::captureGyroBias(const uint16& samplingTime)
    {
        return m_impl->captureGyroBias(samplingTime);
    }

    void InertialNode::saveMagnetometerCaptureAutoCalibration()
    {
        m_impl->saveMagnetometerCaptureAutoCalibration();
    }

    void InertialNode::findMagnetometerCaptureAutoCalibration()
    {
        m_impl->findMagnetometerCaptureAutoCalibration();
    }

    void InertialNode::setMagnetometerSoftIronMatrix(const Matrix_3x3& matrix)
    {
        m_impl->setMagnetometerSoftIronMatrix(matrix);
    }

    Matrix_3x3 InertialNode::getMagnetometerSoftIronMatrix()
    {
        return m_impl->getMagnetometerSoftIronMatrix();
    }

    void InertialNode::setMagnetometerHardIronOffset(const GeometricVector& offsetVector)
    {
        m_impl->setMagnetometerHardIronOffset(offsetVector);
    }

    GeometricVector InertialNode::getMagnetometerHardIronOffset()
    {
        return m_impl->getMagnetometerHardIronOffset();
    }

    void InertialNode::setConingAndScullingEnable(bool enable)
    {
        m_impl->setConingAndScullingEnable(enable);
    }

    bool InertialNode::getConingAndScullingEnable()
    {
        return m_impl->getConingAndScullingEnable();
    }

    void InertialNode::setUARTBaudRate(uint32 baudRate, bool resetConnection)
    {
        m_impl->setUARTBaudRate(baudRate, resetConnection);
    }

    uint32 InertialNode::getUARTBaudRate()
    {
        return m_impl->getUARTBaudRate();
    }

    void InertialNode::setAdvancedLowPassFilterSettings(const AdvancedLowPassFilterConfig& data)
    {
        for (size_t i = 0; i < data.size(); i++)
        {
            m_impl->setAdvancedLowPassFilterSettings(data[i]);
        }
    }

    AdvancedLowPassFilterConfig InertialNode::getAdvancedLowPassFilterSettings(const MipTypes::MipChannelFields& dataDescriptors)
    {
        AdvancedLowPassFilterConfig data;
        for (size_t i = 0; i < dataDescriptors.size(); i++)
        {
            data.push_back(m_impl->getAdvancedLowPassFilterSettings(dataDescriptors[i]));
        }

        return data;
    }

    void InertialNode::setComplementaryFilterSettings(const ComplementaryFilterData& data)
    {
        m_impl->setComplementaryFilterSettings(data);
    }
    
    ComplementaryFilterData InertialNode::getComplementaryFilterSettings()
    {
        return m_impl->getComplementaryFilterSettings();
    }

    DeviceStatusData InertialNode::getBasicDeviceStatus()
    {
        return m_impl->getBasicDeviceStatus();
    }

    DeviceStatusData InertialNode::getDiagnosticDeviceStatus()
    {
        return m_impl->getDiagnosticDeviceStatus();
    }

    void InertialNode::sendRawRTCM_2_3Message(const RTCMMessage& theMessage)
    {
        m_impl->sendRawRTCM_2_3Message(theMessage);
    }

    void InertialNode::setVehicleDynamicsMode(const InertialTypes::VehicleModeType& mode)
    {
        m_impl->setVehicleDynamicsMode(mode);
    }

    InertialTypes::VehicleModeType InertialNode::getVehicleDynamicsMode()
    {
        return m_impl->getVehicleDynamicsMode();
    }

    void InertialNode::setEstimationControlFlags(const EstimationControlOptions& flags)
    {
        m_impl->setEstimationControlFlags(flags);
    }

    EstimationControlOptions InertialNode::getEstimationControlFlags()
    {
        return m_impl->getEstimationControlFlags();
    }

    void InertialNode::setInclinationSource(const GeographicSourceOptions& options)
    {
        m_impl->setInclinationSource(options);
    }

    GeographicSourceOptions InertialNode::getInclinationSource()
    {
        return m_impl->getInclinationSource();
    }

    void InertialNode::setDeclinationSource(const GeographicSourceOptions& options)
    {
        m_impl->setDeclinationSource(options);
    }

    GeographicSourceOptions InertialNode::getDeclinationSource()
    {
        return m_impl->getDeclinationSource();
    }

    void InertialNode::setMagneticFieldMagnitudeSource(const GeographicSourceOptions& options)
    {
        m_impl->setMagneticFieldMagnitudeSource(options);
    }

    GeographicSourceOptions InertialNode::getMagneticFieldMagnitudeSource()
    {
        return m_impl->getMagneticFieldMagnitudeSource();
    }

    void InertialNode::setGNSS_SourceControl(const InertialTypes::GNSS_Source& gnssSource)
    {
        m_impl->setGNSS_SourceControl(gnssSource);
    }

    InertialTypes::GNSS_Source InertialNode::getGNSS_SourceControl()
    {
        return m_impl->getGNSS_SourceControl();
    }

    void InertialNode::sendExternalGNSSUpdate(const ExternalGNSSUpdateData& gnssUpdateData)
    {
        m_impl->sendExternalGNSSUpdate(gnssUpdateData);
    }

    void InertialNode::setHeadingUpdateControl(const HeadingUpdateOptions& headingUpdateOptions)
    {
        m_impl->setHeadingUpdateControl(headingUpdateOptions);
    }

    HeadingUpdateOptions InertialNode::getHeadingUpdateControl()
    {
        return m_impl->getHeadingUpdateControl();
    }

    void InertialNode::setGravityErrorAdaptiveMeasurement(const AdaptiveMeasurementData& data)
    {
        m_impl->setAdaptiveMeasurement(MipTypes::Command::CMD_EF_GRAV_MAGNITUDE_ERR_ADAPT_MEASURE, data);
    }

    AdaptiveMeasurementData InertialNode::getGravityErrorAdaptiveMeasurement()
    {
        return m_impl->getAdaptiveMeasurement(MipTypes::Command::CMD_EF_GRAV_MAGNITUDE_ERR_ADAPT_MEASURE);
    }

    void InertialNode::setMagnetometerErrorAdaptiveMeasurement(const AdaptiveMeasurementData& data)
    {
        m_impl->setAdaptiveMeasurement(MipTypes::Command::CMD_EF_MAG_MAGNITUDE_ERR_ADAPT_MEASURE, data);
    }

    AdaptiveMeasurementData InertialNode::getMagnetometerErrorAdaptiveMeasurement()
    {
        return m_impl->getAdaptiveMeasurement(MipTypes::Command::CMD_EF_MAG_MAGNITUDE_ERR_ADAPT_MEASURE);
    }

    void InertialNode::setMagDipAngleErrorAdaptiveMeasurement(const AdaptiveMeasurementData& data)
    {
        m_impl->setAdaptiveMeasurement(MipTypes::Command::CMD_EF_MAG_DIP_ANGLE_ERR_ADAPT_MEASURE, data);
    }

    AdaptiveMeasurementData InertialNode::getMagDipAngleErrorAdaptiveMeasurement()
    {
        return m_impl->getAdaptiveMeasurement(MipTypes::Command::CMD_EF_MAG_DIP_ANGLE_ERR_ADAPT_MEASURE);
    }

    void InertialNode::setMagNoiseStandardDeviation(const GeometricVector& data)
    {
        GeometricVectors collection;
        collection.push_back(data);
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_MAG_NOISE_STD_DEV, collection);
    }

    GeometricVector InertialNode::getMagNoiseStandardDeviation()
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_MAG_NOISE_STD_DEV)[0];
    }

    void InertialNode::setGravNoiseStandardDeviation(const GeometricVector& data)
    {
        GeometricVectors collection;
        collection.push_back(data);
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_GRAVITY_NOISE_STD_DEV, collection);
    }

    GeometricVector InertialNode::getGravNoiseStandardDeviation()
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_GRAVITY_NOISE_STD_DEV)[0];
    }

    void InertialNode::setAccelNoiseStandardDeviation(const GeometricVector& data)
    {
        GeometricVectors collection;
        collection.push_back(data);
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_ACCEL_WHT_NSE_STD_DEV, collection);
    }

    GeometricVector InertialNode::getAccelNoiseStandardDeviation()
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_ACCEL_WHT_NSE_STD_DEV)[0];
    }

    void InertialNode::setGyroNoiseStandardDeviation(const GeometricVector& data)
    {
        GeometricVectors collection;
        collection.push_back(data);
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_GYRO_WHT_NSE_STD_DEV, collection);
    }

    GeometricVector InertialNode::getGyroNoiseStandardDeviation()
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_GYRO_WHT_NSE_STD_DEV)[0];
    }

    void InertialNode::setPressureAltNoiseStandardDeviation(const float& data)
    {
        std::vector<float> collection;
        collection.push_back(data);
        m_impl->setFloats(MipTypes::Command::CMD_EF_PRESS_ALT_NOISE_STD_DEV, collection);
    }

    float InertialNode::getPressureAltNoiseStandardDeviation()
    {
        return m_impl->getFloats(MipTypes::Command::CMD_EF_PRESS_ALT_NOISE_STD_DEV)[0];
    }

    void InertialNode::setHardIronOffsetProcessNoise(const GeometricVector& data)
    {
        GeometricVectors collection;
        collection.push_back(data);
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_HARD_IRON_OFFSET_PROCESS_NOISE, collection);
    }

    GeometricVector InertialNode::getHardIronOffsetProcessNoise()
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_HARD_IRON_OFFSET_PROCESS_NOISE)[0];
    }

    void InertialNode::setAccelBiasModelParams(const GeometricVectors& data)
    {
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_ACCEL_BIAS_MODEL_PARAMS, data);
    }

    GeometricVectors InertialNode::getAccelBiasModelParams()
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_ACCEL_BIAS_MODEL_PARAMS);
    }

    void InertialNode::setGyroBiasModelParams(const GeometricVectors& data)
    {
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_GYRO_BIAS_MODEL_PARAMS, data);
    }

    GeometricVectors InertialNode::getGyroBiasModelParams()
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_GYRO_BIAS_MODEL_PARAMS);
    }

    void InertialNode::setSoftIronMatrixProcessNoise(const Matrix_3x3& data)
    {
        Matrix_3x3s collection;
        collection.push_back(data);
        m_impl->setMatrix3x3s(MipTypes::Command::CMD_EF_SOFT_IRON_OFFSET_PROCESS_NOISE, collection);
    }

    Matrix_3x3 InertialNode::getSoftIronMatrixProcessNoise()
    {
        return m_impl->getMatrix3x3s(MipTypes::Command::CMD_EF_SOFT_IRON_OFFSET_PROCESS_NOISE)[0];
    }

    void InertialNode::setFixedReferencePosition(const FixedReferencePositionData& data)
    {
        m_impl->setFixedReferencePosition(data);
    }

    FixedReferencePositionData InertialNode::getFixedReferencePosition()
    {
        return m_impl->getFixedReferencePosition();
    }

    void InertialNode::setGPSDynamicsMode(const InertialTypes::GPSDynamicsMode& data)
    {
        std::vector<uint8> collection;
        collection.push_back(static_cast<uint8>(data));
        m_impl->setUint8s(MipTypes::Command::CMD_GPS_DYNAMICS_MODE, collection);
    }

    InertialTypes::GPSDynamicsMode InertialNode::getGPSDynamicsMode() const
    {
        uint8 mode = m_impl->getUint8s(MipTypes::Command::CMD_GPS_DYNAMICS_MODE)[0];
        return static_cast<InertialTypes::GPSDynamicsMode>(mode);
    }

    void InertialNode::setDevicePowerState(const InertialTypes::DeviceSelector& device, const InertialTypes::PowerState& data)
    {
        std::vector<uint8> collection;
        collection.push_back(static_cast<uint8>(device));
        collection.push_back(static_cast<uint8>(data));
        m_impl->setUint8s(MipTypes::Command::CMD_POWER_STATES, collection);
    }

    InertialTypes::PowerState InertialNode::getDevicePowerState(const InertialTypes::DeviceSelector& device) const
    {
        std::vector<uint8> params;
        params.push_back(static_cast<uint8>(device));
        uint8 data = m_impl->getUint8s(MipTypes::Command::CMD_POWER_STATES, params)[1];
        return static_cast<InertialTypes::PowerState>(data);
    }

    void InertialNode::setDeviceStreamFormat(const InertialTypes::DeviceSelector& device, const InertialTypes::StreamFormat& data)
    {
        std::vector<uint8> collection;
        collection.push_back(static_cast<uint8>(device));
        collection.push_back(static_cast<uint8>(data));
        m_impl->setUint8s(MipTypes::Command::CMD_DATA_STREAM_FORMAT, collection);
    }

    InertialTypes::StreamFormat InertialNode::getDeviceStreamFormat(const InertialTypes::DeviceSelector& device) const
    {
        std::vector<uint8> params;
        params.push_back(static_cast<uint8>(device));
        uint8 data = m_impl->getUint8s(MipTypes::Command::CMD_DATA_STREAM_FORMAT, params)[1];
        return static_cast<InertialTypes::StreamFormat>(data);
    }

    void InertialNode::setSignalConditioningSettings(const SignalConditioningValues& data)
    {
        m_impl->setSignalConditioningSettings(data);
    }

    SignalConditioningValues InertialNode::getSignalConditioningSettings() const
    {
        return m_impl->getSignalConditioningSettings();
    }

    void InertialNode::setEnableDisableMeasurements(const EnableDisableMeasurements& data)
    {
        std::vector<uint16> collection;
        collection.push_back(data.measurementOptions);
        m_impl->setUint16s(MipTypes::Command::CMD_EF_ENABLE_DISABLE_MEASUREMENTS, collection);
    }

    EnableDisableMeasurements InertialNode::getEnableDisableMeasurements() const
    {
        EnableDisableMeasurements r;
        r.measurementOptions = m_impl->getUint16s(MipTypes::Command::CMD_EF_ENABLE_DISABLE_MEASUREMENTS)[0];
        return r;
    }

    void InertialNode::setGravityNoiseMinimum(const GeometricVector& data)
    {
        GeometricVectors collection;
        collection.push_back(data);
        m_impl->setGeometricVectors(MipTypes::Command::CMD_EF_GRAVITY_NOISE_MINIMUM, collection);
    }

    GeometricVector InertialNode::getGravityNoiseMinimum() const
    {
        return m_impl->getGeometricVectors(MipTypes::Command::CMD_EF_GRAVITY_NOISE_MINIMUM)[0];
    }

    void InertialNode::sendExternalHeadingUpdate(const HeadingData& headingData)
    {
        m_impl->sendExternalHeadingUpdate(headingData);
    }

    void InertialNode::sendExternalHeadingUpdate(const HeadingData& headingData, const TimeUpdate& timestamp)
    {
        m_impl->sendExternalHeadingUpdate(headingData, timestamp);
    }

    bool InertialNode::aidingMeasurementEnabled(InertialTypes::AidingMeasurementSource aidingSource) const
    {
        MipFieldValues data = m_impl->get(MipTypes::CMD_EF_AIDING_MEASUREMENT_ENABLE,
            { Value::UINT16(static_cast<uint16>(aidingSource)) });
        
        // command echoes aiding source and current enabled setting - only need to return enabled
        return data[1].as_bool();
    }

    void InertialNode::enableDisableAidingMeasurement(InertialTypes::AidingMeasurementSource aidingSource, bool enable)
    {
        m_impl->set(MipTypes::CMD_EF_AIDING_MEASUREMENT_ENABLE, {
            Value::UINT16(static_cast<uint16>(aidingSource)),
            Value::BOOL(enable) });
    }

    KinematicConstraints InertialNode::getKinematicConstraints() const
    {
        MipFieldValues data = m_impl->get(MipTypes::CMD_EF_KINEMATIC_CONSTRAINT);
        return KinematicConstraints(
            static_cast<InertialTypes::KinematicConstraint>(data[0].as_uint8()),  // acceleration
            static_cast<InertialTypes::KinematicConstraint>(data[1].as_uint8()),  // velocity
            static_cast<InertialTypes::KinematicConstraint>(data[2].as_uint8())); // angular rate
    }

    void InertialNode::setKinematicConstraints(KinematicConstraints constraintOptions)
    {
        m_impl->set(MipTypes::CMD_EF_KINEMATIC_CONSTRAINT, {
            Value::UINT8(static_cast<uint8>(constraintOptions.acceleration)),
            Value::UINT8(static_cast<uint8>(constraintOptions.velocity)),
            Value::UINT8(static_cast<uint8>(constraintOptions.angularRate)) });
    }

    AutoAdaptiveFilterOptions InertialNode::getAdaptiveFilterOptions() const
    {
        MipFieldValues data = m_impl->get(MipTypes::CMD_EF_ADAPTIVE_FILTER_OPTIONS);
        return AutoAdaptiveFilterOptions(
            static_cast<InertialTypes::AutoAdaptiveFilteringLevel>(data[0].as_uint8()),
            data[1].as_uint16());
    }

    void InertialNode::setAdaptiveFilterOptions(AutoAdaptiveFilterOptions options)
    {
        m_impl->set(MipTypes::CMD_EF_ADAPTIVE_FILTER_OPTIONS, {
            Value::UINT8(static_cast<uint8>(options.level)),
            Value::UINT16(options.timeLimit) });
    }

    PositionOffset InertialNode::getMultiAntennaOffset(uint8 receiverId) const
    {
        MipFieldValues data = m_impl->get(MipTypes::CMD_EF_MULTI_ANTENNA_OFFSET, {
            Value::UINT8(receiverId) });

        // skip data[0]: echoed receiver ID
        return PositionOffset(
            data[1].as_float(),  // x
            data[2].as_float(),  // y
            data[3].as_float()); // z
    }

    void InertialNode::setMultiAntennaOffset(uint8 receiverId, PositionOffset offset)
    {
        m_impl->set(MipTypes::CMD_EF_MULTI_ANTENNA_OFFSET, {
            Value::UINT8(receiverId),
            Value::FLOAT(offset.x()),
            Value::FLOAT(offset.y()),
            Value::FLOAT(offset.z()) });
    }

    InertialTypes::PpsInputOutput InertialNode::getPpsSource() const
    {
        MipFieldValues data = m_impl->get(MipTypes::CMD_PPS_SOURCE);
        return static_cast<InertialTypes::PpsInputOutput>(data[0].as_uint8());
    }

    void InertialNode::setPpsSource(InertialTypes::PpsInputOutput ppsSource)
    {
        m_impl->set(MipTypes::CMD_PPS_SOURCE, { Value::UINT8(static_cast<uint8>(ppsSource)) });
    }

    InertialTypes::PpsInputOutput InertialNode::getPpsOutput() const
    {
        MipFieldValues data = m_impl->get(MipTypes::CMD_PPS_OUTPUT);
        return static_cast<InertialTypes::PpsInputOutput>(data[0].as_uint8());
    }

    void InertialNode::setPpsOutput(InertialTypes::PpsInputOutput ppsOutput)
    {
        m_impl->set(MipTypes::CMD_PPS_OUTPUT, { Value::UINT8(static_cast<uint8>(ppsOutput)) });
    }
}
