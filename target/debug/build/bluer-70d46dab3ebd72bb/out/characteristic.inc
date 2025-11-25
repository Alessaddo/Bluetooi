/// Assigned identifiers for GATT characteristics.
///
/// Can be converted to and from UUIDs.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, EnumString, Display)]
#[cfg_attr(feature = "serde", derive(serde::Serialize, serde::Deserialize))]
#[non_exhaustive]
pub enum Characteristic {
    /// Aerobic Heart Rate Lower Limit
    ///
    /// Source: gss
    #[strum(serialize = "Aerobic Heart Rate Lower Limit")]
    AerobicHeartRateLowerLimit,
    /// Aerobic Heart Rate Upper Limit
    ///
    /// Source: gss
    #[strum(serialize = "Aerobic Heart Rate Upper Limit")]
    AerobicHeartRateUpperLimit,
    /// Aerobic Threshold
    ///
    /// Source: gss
    #[strum(serialize = "Aerobic Threshold")]
    AerobicThreshold,
    /// Age
    ///
    /// Source: gss
    #[strum(serialize = "Age")]
    Age,
    /// Aggregate
    ///
    /// Source: gss
    #[strum(serialize = "Aggregate")]
    Aggregate,
    /// Alert Category ID
    ///
    /// Source: gss
    #[strum(serialize = "Alert Category ID")]
    AlertCategoryId,
    /// Alert Category ID Bit Mask
    ///
    /// Source: gss
    #[strum(serialize = "Alert Category ID Bit Mask")]
    AlertCategoryIdBitMask,
    /// Alert Level
    ///
    /// Source: gss
    #[strum(serialize = "Alert Level")]
    AlertLevel,
    /// Alert Notification Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Alert Notification Control Point")]
    AlertNotificationControlPoint,
    /// Alert Status
    ///
    /// Source: gss
    #[strum(serialize = "Alert Status")]
    AlertStatus,
    /// Altitude
    ///
    /// Source: gss
    #[strum(serialize = "Altitude")]
    Altitude,
    /// Anaerobic Heart Rate Lower Limit
    ///
    /// Source: gss
    #[strum(serialize = "Anaerobic Heart Rate Lower Limit")]
    AnaerobicHeartRateLowerLimit,
    /// Anaerobic Heart Rate Upper Limit
    ///
    /// Source: gss
    #[strum(serialize = "Anaerobic Heart Rate Upper Limit")]
    AnaerobicHeartRateUpperLimit,
    /// Anaerobic Threshold
    ///
    /// Source: gss
    #[strum(serialize = "Anaerobic Threshold")]
    AnaerobicThreshold,
    /// Analog
    ///
    /// Source: gss
    #[strum(serialize = "Analog")]
    Analog,
    /// Analog Output
    ///
    /// Source: gss
    #[strum(serialize = "Analog Output")]
    AnalogOutput,
    /// Apparent Wind Direction
    ///
    /// Source: gss
    #[strum(serialize = "Apparent Wind Direction")]
    ApparentWindDirection,
    /// Apparent Wind Speed
    ///
    /// Source: gss
    #[strum(serialize = "Apparent Wind Speed")]
    ApparentWindSpeed,
    /// Appearance
    ///
    /// Source: gss
    #[strum(serialize = "Appearance")]
    GapAppearance,
    /// Barometric Pressure Trend
    ///
    /// Source: gss
    #[strum(serialize = "Barometric Pressure Trend")]
    BarometricPressureTrend,
    /// Battery Level
    ///
    /// Source: gss
    #[strum(serialize = "Battery Level")]
    BatteryLevel,
    /// Battery Level State
    ///
    /// Source: gss
    #[strum(serialize = "Battery Level State")]
    BatteryLevelState,
    /// Battery Power State
    ///
    /// Source: gss
    #[strum(serialize = "Battery Power State")]
    BatteryPowerState,
    /// Blood Pressure Feature
    ///
    /// Source: gss
    #[strum(serialize = "Blood Pressure Feature")]
    BloodPressureFeature,
    /// Blood Pressure Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Blood Pressure Measurement")]
    BloodPressureMeasurement,
    /// Body Composition Feature
    ///
    /// Source: gss
    #[strum(serialize = "Body Composition Feature")]
    BodyCompositionFeature,
    /// Body Composition Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Body Composition Measurement")]
    BodyCompositionMeasurement,
    /// Body Sensor Location
    ///
    /// Source: gss
    #[strum(serialize = "Body Sensor Location")]
    BodySensorLocation,
    /// Bond Management Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Bond Management Control Point")]
    BondManagementControlPoint,
    /// Bond Management Features
    ///
    /// Source: gss
    #[strum(serialize = "Bond Management Features")]
    BondManagementFeature,
    /// Boot Keyboard Input Report
    ///
    /// Source: gss
    #[strum(serialize = "Boot Keyboard Input Report")]
    BootKeyboardInputReport,
    /// Boot Keyboard Output Report
    ///
    /// Source: gss
    #[strum(serialize = "Boot Keyboard Output Report")]
    BootKeyboardOutputReport,
    /// Boot Mouse Input Report
    ///
    /// Source: gss
    #[strum(serialize = "Boot Mouse Input Report")]
    BootMouseInputReport,
    /// Central Address Resolution
    ///
    /// Source: gss
    #[strum(serialize = "Central Address Resolution")]
    GapCentralAddressResolution,
    /// CGM Feature
    ///
    /// Source: gss
    #[strum(serialize = "CGM Feature")]
    CgmFeature,
    /// CGM Measurement
    ///
    /// Source: gss
    #[strum(serialize = "CGM Measurement")]
    CgmMeasurement,
    /// CGM Session Run Time
    ///
    /// Source: gss
    #[strum(serialize = "CGM Session Run Time")]
    CgmSessionRunTime,
    /// CGM Session Start Time
    ///
    /// Source: gss
    #[strum(serialize = "CGM Session Start Time")]
    CgmSessionStartTime,
    /// CGM Specific Ops Control Point
    ///
    /// Source: gss
    #[strum(serialize = "CGM Specific Ops Control Point")]
    CgmSpecificOpsControlPoint,
    /// CGM Status
    ///
    /// Source: gss
    #[strum(serialize = "CGM Status")]
    CgmStatus,
    /// Cross Trainer Data
    ///
    /// Source: gss
    #[strum(serialize = "Cross Trainer Data")]
    CrossTrainerData,
    /// CSC Feature
    ///
    /// Source: gss
    #[strum(serialize = "CSC Feature")]
    CscFeature,
    /// CSC Measurement
    ///
    /// Source: gss
    #[strum(serialize = "CSC Measurement")]
    CscMeasurement,
    /// Current Time
    ///
    /// Source: gss
    #[strum(serialize = "Current Time")]
    CurrentTime,
    /// Cycling Power Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Cycling Power Control Point")]
    CyclingPowerControlPoint,
    /// Cycling Power Feature
    ///
    /// Source: gss
    #[strum(serialize = "Cycling Power Feature")]
    CyclingPowerFeature,
    /// Cycling Power Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Cycling Power Measurement")]
    CyclingPowerMeasurement,
    /// Cycling Power Vector
    ///
    /// Source: gss
    #[strum(serialize = "Cycling Power Vector")]
    CyclingPowerVector,
    /// Database Change Increment
    ///
    /// Source: gss
    #[strum(serialize = "Database Change Increment")]
    DatabaseChangeIncrement,
    /// Date of Birth
    ///
    /// Source: gss
    #[strum(serialize = "Date of Birth")]
    DateOfBirth,
    /// Date of Threshold Assessment
    ///
    /// Source: gss
    #[strum(serialize = "Date of Threshold Assessment")]
    DateOfThresholdAssessment,
    /// Date Time
    ///
    /// Source: gss
    #[strum(serialize = "Date Time")]
    DateTime,
    /// Date UTC
    ///
    /// Source: gss
    #[strum(serialize = "Date UTC")]
    DateUtc,
    /// Day Date Time
    ///
    /// Source: gss
    #[strum(serialize = "Day Date Time")]
    DayDateTime,
    /// Day of Week
    ///
    /// Source: gss
    #[strum(serialize = "Day of Week")]
    DayOfWeek,
    /// Descriptor Value Changed
    ///
    /// Source: gss
    #[strum(serialize = "Descriptor Value Changed")]
    DescriptorValueChanged,
    /// Device Name
    ///
    /// Source: gss
    #[strum(serialize = "Device Name")]
    GapDeviceName,
    /// Dew Point
    ///
    /// Source: gss
    #[strum(serialize = "Dew Point")]
    DewPoint,
    /// Digital
    ///
    /// Source: gss
    #[strum(serialize = "Digital")]
    Digital,
    /// Digital Output
    ///
    /// Source: gss
    #[strum(serialize = "Digital Output")]
    DigitalOutput,
    /// DST Offset
    ///
    /// Source: gss
    #[strum(serialize = "DST Offset")]
    DstOffset,
    /// Elevation
    ///
    /// Source: gss
    #[strum(serialize = "Elevation")]
    Elevation,
    /// Email Address
    ///
    /// Source: gss
    #[strum(serialize = "Email Address")]
    EmailAddress,
    /// Exact Time 100
    ///
    /// Source: gss
    #[strum(serialize = "Exact Time 100")]
    ExactTime100,
    /// Exact Time 256
    ///
    /// Source: gss
    #[strum(serialize = "Exact Time 256")]
    ExactTime256,
    /// Fat Burn Heart Rate Lower Limit
    ///
    /// Source: gss
    #[strum(serialize = "Fat Burn Heart Rate Lower Limit")]
    FatBurnHeartRateLowerLimit,
    /// Fat Burn Heart Rate Upper Limit
    ///
    /// Source: gss
    #[strum(serialize = "Fat Burn Heart Rate Upper Limit")]
    FatBurnHeartRateUpperLimit,
    /// Firmware Revision String
    ///
    /// Source: gss
    #[strum(serialize = "Firmware Revision String")]
    FirmwareRevisionString,
    /// First Name
    ///
    /// Source: gss
    #[strum(serialize = "First Name")]
    FirstName,
    /// Fitness Machine Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Fitness Machine Control Point")]
    FitnessMachineControlPoint,
    /// Fitness Machine Feature
    ///
    /// Source: gss
    #[strum(serialize = "Fitness Machine Feature")]
    FitnessMachineFeature,
    /// Fitness Machine Status
    ///
    /// Source: gss
    #[strum(serialize = "Fitness Machine Status")]
    FitnessMachineStatus,
    /// Five Zone Heart Rate Limits
    ///
    /// Source: gss
    #[strum(serialize = "Five Zone Heart Rate Limits")]
    FiveZoneHeartRateLimits,
    /// Floor Number
    ///
    /// Source: gss
    #[strum(serialize = "Floor Number")]
    FloorNumber,
    /// Gender
    ///
    /// Source: gss
    #[strum(serialize = "Gender")]
    Gender,
    /// Glucose Feature
    ///
    /// Source: gss
    #[strum(serialize = "Glucose Feature")]
    GlucoseFeature,
    /// Glucose Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Glucose Measurement")]
    GlucoseMeasurement,
    /// Glucose Measurement Context
    ///
    /// Source: gss
    #[strum(serialize = "Glucose Measurement Context")]
    GlucoseMeasurementContext,
    /// Gust Factor
    ///
    /// Source: gss
    #[strum(serialize = "Gust Factor")]
    GustFactor,
    /// Hardware Revision String
    ///
    /// Source: gss
    #[strum(serialize = "Hardware Revision String")]
    HardwareRevisionString,
    /// Heart Rate Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Heart Rate Control Point")]
    HeartRateControlPoint,
    /// Heart Rate Max
    ///
    /// Source: gss
    #[strum(serialize = "Heart Rate Max")]
    HeartRateMax,
    /// Heart Rate Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Heart Rate Measurement")]
    HeartRateMeasurement,
    /// Heat Index
    ///
    /// Source: gss
    #[strum(serialize = "Heat Index")]
    HeatIndex,
    /// Height
    ///
    /// Source: gss
    #[strum(serialize = "Height")]
    Height,
    /// HID Control Point
    ///
    /// Source: gss
    #[strum(serialize = "HID Control Point")]
    HidControlPoint,
    /// HID Information
    ///
    /// Source: gss
    #[strum(serialize = "HID Information")]
    HidInformation,
    /// Hip Circumference
    ///
    /// Source: gss
    #[strum(serialize = "Hip Circumference")]
    HipCircumference,
    /// HTTP Control Point
    ///
    /// Source: gss
    #[strum(serialize = "HTTP Control Point")]
    HttpControlPoint,
    /// HTTP Entity Body
    ///
    /// Source: gss
    #[strum(serialize = "HTTP Entity Body")]
    HttpEntityBody,
    /// HTTP Headers
    ///
    /// Source: gss
    #[strum(serialize = "HTTP Headers")]
    HttpHeaders,
    /// HTTP Status Code
    ///
    /// Source: gss
    #[strum(serialize = "HTTP Status Code")]
    HttpStatusCode,
    /// HTTPS Security
    ///
    /// Source: gss
    #[strum(serialize = "HTTPS Security")]
    HttpsSecurity,
    /// Humidity
    ///
    /// Source: gss
    #[strum(serialize = "Humidity")]
    Humidity,
    /// IDD Annunciation Status
    ///
    /// Source: gss
    #[strum(serialize = "IDD Annunciation Status")]
    IddAnnunciationStatus,
    /// IDD Command Control Point
    ///
    /// Source: gss
    #[strum(serialize = "IDD Command Control Point")]
    IddCommandControlPoint,
    /// IDD Command Data
    ///
    /// Source: gss
    #[strum(serialize = "IDD Command Data")]
    IddCommandData,
    /// IDD Features
    ///
    /// Source: gss
    #[strum(serialize = "IDD Features")]
    IddFeatures,
    /// IDD History Data
    ///
    /// Source: gss
    #[strum(serialize = "IDD History Data")]
    IddHistoryData,
    /// IDD Record Access Control Point
    ///
    /// Source: gss
    #[strum(serialize = "IDD Record Access Control Point")]
    IddRecordAccessControlPoint,
    /// IDD Status
    ///
    /// Source: gss
    #[strum(serialize = "IDD Status")]
    IddStatus,
    /// IDD Status Changed
    ///
    /// Source: gss
    #[strum(serialize = "IDD Status Changed")]
    IddStatusChanged,
    /// IDD Status Reader Control Point
    ///
    /// Source: gss
    #[strum(serialize = "IDD Status Reader Control Point")]
    IddStatusReaderControlPoint,
    /// Client Supported Features
    ///
    /// Source: gss
    #[strum(serialize = "Client Supported Features")]
    ClientSupportedFeatures,
    /// Database Hash
    ///
    /// Source: gss
    #[strum(serialize = "Database Hash")]
    DatabaseHash,
    /// IEEE 11073-20601 Regulatory Certification Data List
    ///
    /// Source: gss
    #[strum(serialize = "IEEE 11073-20601 Regulatory Certification Data List")]
    Ieee1107320601RegulatoryCertificationDataList,
    /// Indoor Bike Data
    ///
    /// Source: gss
    #[strum(serialize = "Indoor Bike Data")]
    IndoorBikeData,
    /// Indoor Positioning Configuration
    ///
    /// Source: gss
    #[strum(serialize = "Indoor Positioning Configuration")]
    IndoorPositioningConfiguration,
    /// Intermediate Cuff Pressure
    ///
    /// Source: gss
    #[strum(serialize = "Intermediate Cuff Pressure")]
    IntermediateCuffPressure,
    /// Intermediate Temperature
    ///
    /// Source: gss
    #[strum(serialize = "Intermediate Temperature")]
    IntermediateTemperature,
    /// Irradiance
    ///
    /// Source: gss
    #[strum(serialize = "Irradiance")]
    Irradiance,
    /// Language
    ///
    /// Source: gss
    #[strum(serialize = "Language")]
    Language,
    /// Last Name
    ///
    /// Source: gss
    #[strum(serialize = "Last Name")]
    LastName,
    /// Latitude
    ///
    /// Source: gss
    #[strum(serialize = "Latitude")]
    Latitude,
    /// LN Control Point
    ///
    /// Source: gss
    #[strum(serialize = "LN Control Point")]
    LnControlPoint,
    /// LN Feature
    ///
    /// Source: gss
    #[strum(serialize = "LN Feature")]
    LnFeature,
    /// Local East Coordinate
    ///
    /// Source: gss
    #[strum(serialize = "Local East Coordinate")]
    LocalEastCoordinate,
    /// Local North Coordinate
    ///
    /// Source: gss
    #[strum(serialize = "Local North Coordinate")]
    LocalNorthCoordinate,
    /// Local Time Information
    ///
    /// Source: gss
    #[strum(serialize = "Local Time Information")]
    LocalTimeInformation,
    /// Location and Speed Characteristic
    ///
    /// Source: gss
    #[strum(serialize = "Location and Speed Characteristic")]
    LocationAndSpeed,
    /// Location Name
    ///
    /// Source: gss
    #[strum(serialize = "Location Name")]
    LocationName,
    /// Longitude
    ///
    /// Source: gss
    #[strum(serialize = "Longitude")]
    Longitude,
    /// Magnetic Declination
    ///
    /// Source: gss
    #[strum(serialize = "Magnetic Declination")]
    MagneticDeclination,
    /// Magnetic Flux Density - 2D
    ///
    /// Source: gss
    #[strum(serialize = "Magnetic Flux Density - 2D")]
    MagneticFluxDensity2D,
    /// Magnetic Flux Density - 3D
    ///
    /// Source: gss
    #[strum(serialize = "Magnetic Flux Density - 3D")]
    MagneticFluxDensity3D,
    /// Manufacturer Name String
    ///
    /// Source: gss
    #[strum(serialize = "Manufacturer Name String")]
    ManufacturerNameString,
    /// Maximum Recommended Heart Rate
    ///
    /// Source: gss
    #[strum(serialize = "Maximum Recommended Heart Rate")]
    MaximumRecommendedHeartRate,
    /// Measurement Interval
    ///
    /// Source: gss
    #[strum(serialize = "Measurement Interval")]
    MeasurementInterval,
    /// Model Number String
    ///
    /// Source: gss
    #[strum(serialize = "Model Number String")]
    ModelNumberString,
    /// Navigation
    ///
    /// Source: gss
    #[strum(serialize = "Navigation")]
    Navigation,
    /// Network Availability
    ///
    /// Source: gss
    #[strum(serialize = "Network Availability")]
    NetworkAvailability,
    /// New Alert
    ///
    /// Source: gss
    #[strum(serialize = "New Alert")]
    NewAlert,
    /// Object Action Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Object Action Control Point")]
    ObjectActionControlPoint,
    /// Object Changed
    ///
    /// Source: gss
    #[strum(serialize = "Object Changed")]
    ObjectChanged,
    /// Object First-Created
    ///
    /// Source: gss
    #[strum(serialize = "Object First-Created")]
    ObjectFirstCreated,
    /// Object ID
    ///
    /// Source: gss
    #[strum(serialize = "Object ID")]
    ObjectId,
    /// Object Last-Modified
    ///
    /// Source: gss
    #[strum(serialize = "Object Last-Modified")]
    ObjectLastModified,
    /// Object List Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Object List Control Point")]
    ObjectListControlPoint,
    /// Object List Filter
    ///
    /// Source: gss
    #[strum(serialize = "Object List Filter")]
    ObjectListFilter,
    /// Object Name
    ///
    /// Source: gss
    #[strum(serialize = "Object Name")]
    ObjectName,
    /// Object Properties
    ///
    /// Source: gss
    #[strum(serialize = "Object Properties")]
    ObjectProperties,
    /// Object Size
    ///
    /// Source: gss
    #[strum(serialize = "Object Size")]
    ObjectSize,
    /// Object Type
    ///
    /// Source: gss
    #[strum(serialize = "Object Type")]
    ObjectType,
    /// OTS Feature
    ///
    /// Source: gss
    #[strum(serialize = "OTS Feature")]
    OtsFeature,
    /// Peripheral Preferred Connection Parameters
    ///
    /// Source: gss
    #[strum(serialize = "Peripheral Preferred Connection Parameters")]
    GapPeripheralPreferredConnectionParameters,
    /// Peripheral Privacy Flag
    ///
    /// Source: gss
    #[strum(serialize = "Peripheral Privacy Flag")]
    GapPeripheralPrivacyFlag,
    /// PLX Continuous Measurement Characteristic
    ///
    /// Source: gss
    #[strum(serialize = "PLX Continuous Measurement Characteristic")]
    PlxContinuousMeasurement,
    /// PLX Features
    ///
    /// Source: gss
    #[strum(serialize = "PLX Features")]
    PlxFeatures,
    /// PLX Spot-Check Measurement
    ///
    /// Source: gss
    #[strum(serialize = "PLX Spot-Check Measurement")]
    PlxSpotCheckMeasurement,
    /// PnP ID
    ///
    /// Source: gss
    #[strum(serialize = "PnP ID")]
    PnpId,
    /// Pollen Concentration
    ///
    /// Source: gss
    #[strum(serialize = "Pollen Concentration")]
    PollenConcentration,
    /// Position 2D
    ///
    /// Source: gss
    #[strum(serialize = "Position 2D")]
    Position2d,
    /// Position 3D
    ///
    /// Source: gss
    #[strum(serialize = "Position 3D")]
    Position3d,
    /// Position Quality
    ///
    /// Source: gss
    #[strum(serialize = "Position Quality")]
    PositionQuality,
    /// Pressure
    ///
    /// Source: gss
    #[strum(serialize = "Pressure")]
    Pressure,
    /// Protocol Mode
    ///
    /// Source: gss
    #[strum(serialize = "Protocol Mode")]
    ProtocolMode,
    /// Pulse Oximetry Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Pulse Oximetry Control Point")]
    PulseOximetryControlPoint,
    /// Rainfall
    ///
    /// Source: gss
    #[strum(serialize = "Rainfall")]
    Rainfall,
    /// RC Feature
    ///
    /// Source: gss
    #[strum(serialize = "RC Feature")]
    RcFeature,
    /// RC Settings
    ///
    /// Source: gss
    #[strum(serialize = "RC Settings")]
    RcSettings,
    /// Reconnection Address
    ///
    /// Source: gss
    #[strum(serialize = "Reconnection Address")]
    GapReconnectionAddress,
    /// Reconnection Configuration Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Reconnection Configuration Control Point")]
    ReconnectionConfigurationControlPoint,
    /// Record Access Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Record Access Control Point")]
    RecordAccessControlPoint,
    /// Reference Time Information
    ///
    /// Source: gss
    #[strum(serialize = "Reference Time Information")]
    ReferenceTimeInformation,
    /// Removable
    ///
    /// Source: gss
    #[strum(serialize = "Removable")]
    Removable,
    /// Report
    ///
    /// Source: gss
    #[strum(serialize = "Report")]
    Report,
    /// Report Map
    ///
    /// Source: gss
    #[strum(serialize = "Report Map")]
    ReportMap,
    /// Resolvable Private Address Only
    ///
    /// Source: gss
    #[strum(serialize = "Resolvable Private Address Only")]
    ResolvablePrivateAddressOnly,
    /// Resting Heart Rate
    ///
    /// Source: gss
    #[strum(serialize = "Resting Heart Rate")]
    RestingHeartRate,
    /// Ringer Control point
    ///
    /// Source: gss
    #[strum(serialize = "Ringer Control point")]
    RingerControlPoint,
    /// Ringer Setting
    ///
    /// Source: gss
    #[strum(serialize = "Ringer Setting")]
    RingerSetting,
    /// Rower Data
    ///
    /// Source: gss
    #[strum(serialize = "Rower Data")]
    RowerData,
    /// RSC Feature
    ///
    /// Source: gss
    #[strum(serialize = "RSC Feature")]
    RscFeature,
    /// RSC Measurement
    ///
    /// Source: gss
    #[strum(serialize = "RSC Measurement")]
    RscMeasurement,
    /// SC Control Point
    ///
    /// Source: gss
    #[strum(serialize = "SC Control Point")]
    ScControlPoint,
    /// Scan Interval Window
    ///
    /// Source: gss
    #[strum(serialize = "Scan Interval Window")]
    ScanIntervalWindow,
    /// Scan Refresh
    ///
    /// Source: gss
    #[strum(serialize = "Scan Refresh")]
    ScanRefresh,
    /// Scientific Temperature Celsius
    ///
    /// Source: gss
    #[strum(serialize = "Scientific Temperature Celsius")]
    ScientificTemperatureCelsius,
    /// Secondary Time Zone
    ///
    /// Source: gss
    #[strum(serialize = "Secondary Time Zone")]
    SecondaryTimeZone,
    /// Sensor Location
    ///
    /// Source: gss
    #[strum(serialize = "Sensor Location")]
    SensorLocation,
    /// Serial Number String
    ///
    /// Source: gss
    #[strum(serialize = "Serial Number String")]
    SerialNumberString,
    /// Service Changed
    ///
    /// Source: gss
    #[strum(serialize = "Service Changed")]
    GattServiceChanged,
    /// Service Required
    ///
    /// Source: gss
    #[strum(serialize = "Service Required")]
    ServiceRequired,
    /// Software Revision String
    ///
    /// Source: gss
    #[strum(serialize = "Software Revision String")]
    SoftwareRevisionString,
    /// Sport Type for Aerobic and Anaerobic Thresholds
    ///
    /// Source: gss
    #[strum(serialize = "Sport Type for Aerobic and Anaerobic Thresholds")]
    SportTypeForAerobicAndAnaerobicThresholds,
    /// Stair Climber Data
    ///
    /// Source: gss
    #[strum(serialize = "Stair Climber Data")]
    StairClimberData,
    /// Step Climber Data
    ///
    /// Source: gss
    #[strum(serialize = "Step Climber Data")]
    StepClimberData,
    /// String
    ///
    /// Source: gss
    #[strum(serialize = "String")]
    String,
    /// Supported Heart Rate Range
    ///
    /// Source: gss
    #[strum(serialize = "Supported Heart Rate Range")]
    SupportedHeartRateRange,
    /// Supported Inclination Range
    ///
    /// Source: gss
    #[strum(serialize = "Supported Inclination Range")]
    SupportedInclinationRange,
    /// Supported New Alert Category
    ///
    /// Source: gss
    #[strum(serialize = "Supported New Alert Category")]
    SupportedNewAlertCategory,
    /// Supported Power Range
    ///
    /// Source: gss
    #[strum(serialize = "Supported Power Range")]
    SupportedPowerRange,
    /// Supported Resistance Level Range
    ///
    /// Source: gss
    #[strum(serialize = "Supported Resistance Level Range")]
    SupportedResistanceLevelRange,
    /// Supported Speed Range
    ///
    /// Source: gss
    #[strum(serialize = "Supported Speed Range")]
    SupportedSpeedRange,
    /// Supported Unread Alert Category
    ///
    /// Source: gss
    #[strum(serialize = "Supported Unread Alert Category")]
    SupportedUnreadAlertCategory,
    /// System ID
    ///
    /// Source: gss
    #[strum(serialize = "System ID")]
    SystemId,
    /// TDS Control Point
    ///
    /// Source: gss
    #[strum(serialize = "TDS Control Point")]
    TdsControlPoint,
    /// Temperature
    ///
    /// Source: gss
    #[strum(serialize = "Temperature")]
    Temperature,
    /// Temperature Celsius
    ///
    /// Source: gss
    #[strum(serialize = "Temperature Celsius")]
    TemperatureCelsius,
    /// Temperature Fahrenheit
    ///
    /// Source: gss
    #[strum(serialize = "Temperature Fahrenheit")]
    TemperatureFahrenheit,
    /// Temperature Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Temperature Measurement")]
    TemperatureMeasurement,
    /// Temperature Type
    ///
    /// Source: gss
    #[strum(serialize = "Temperature Type")]
    TemperatureType,
    /// Three Zone Heart Rate Limits
    ///
    /// Source: gss
    #[strum(serialize = "Three Zone Heart Rate Limits")]
    ThreeZoneHeartRateLimits,
    /// Time Accuracy
    ///
    /// Source: gss
    #[strum(serialize = "Time Accuracy")]
    TimeAccuracy,
    /// Time Broadcast
    ///
    /// Source: gss
    #[strum(serialize = "Time Broadcast")]
    TimeBroadcast,
    /// Time Source
    ///
    /// Source: gss
    #[strum(serialize = "Time Source")]
    TimeSource,
    /// Time Update Control Point
    ///
    /// Source: gss
    #[strum(serialize = "Time Update Control Point")]
    TimeUpdateControlPoint,
    /// Time Update State
    ///
    /// Source: gss
    #[strum(serialize = "Time Update State")]
    TimeUpdateState,
    /// Time with DST
    ///
    /// Source: gss
    #[strum(serialize = "Time with DST")]
    TimeWithDst,
    /// Time Zone
    ///
    /// Source: gss
    #[strum(serialize = "Time Zone")]
    TimeZone,
    /// Training Status
    ///
    /// Source: gss
    #[strum(serialize = "Training Status")]
    TrainingStatus,
    /// Treadmill Data
    ///
    /// Source: gss
    #[strum(serialize = "Treadmill Data")]
    TreadmillData,
    /// True Wind Direction
    ///
    /// Source: gss
    #[strum(serialize = "True Wind Direction")]
    TrueWindDirection,
    /// True Wind Speed
    ///
    /// Source: gss
    #[strum(serialize = "True Wind Speed")]
    TrueWindSpeed,
    /// Two Zone Heart Rate Limit
    ///
    /// Source: gss
    #[strum(serialize = "Two Zone Heart Rate Limit")]
    TwoZoneHeartRateLimit,
    /// Tx Power Level
    ///
    /// Source: gss
    #[strum(serialize = "Tx Power Level")]
    TxPowerLevel,
    /// Uncertainty
    ///
    /// Source: gss
    #[strum(serialize = "Uncertainty")]
    Uncertainty,
    /// Unread Alert Status
    ///
    /// Source: gss
    #[strum(serialize = "Unread Alert Status")]
    UnreadAlertStatus,
    /// URI
    ///
    /// Source: gss
    #[strum(serialize = "URI")]
    Uri,
    /// User Control Point
    ///
    /// Source: gss
    #[strum(serialize = "User Control Point")]
    UserControlPoint,
    /// User Index
    ///
    /// Source: gss
    #[strum(serialize = "User Index")]
    UserIndex,
    /// UV Index
    ///
    /// Source: gss
    #[strum(serialize = "UV Index")]
    UvIndex,
    /// VO2 Max
    ///
    /// Source: gss
    #[strum(serialize = "VO2 Max")]
    Vo2Max,
    /// Waist Circumference
    ///
    /// Source: gss
    #[strum(serialize = "Waist Circumference")]
    WaistCircumference,
    /// Weight
    ///
    /// Source: gss
    #[strum(serialize = "Weight")]
    Weight,
    /// Weight Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Weight Measurement")]
    WeightMeasurement,
    /// Weight Scale Feature
    ///
    /// Source: gss
    #[strum(serialize = "Weight Scale Feature")]
    WeightScaleFeature,
    /// Wind Chill
    ///
    /// Source: gss
    #[strum(serialize = "Wind Chill")]
    WindChill,
    /// Blinky Button State
    ///
    /// Source: nordic
    #[strum(serialize = "Blinky Button State")]
    ComNordicsemiCharacteristicBlinkyButtonState,
    /// Blinky LED State
    ///
    /// Source: nordic
    #[strum(serialize = "Blinky LED State")]
    ComNordicsemiCharacteristicBlinkyLedState,
    /// Legacy DFU Control Point
    ///
    /// Source: nordic
    #[strum(serialize = "Legacy DFU Control Point")]
    ComNordicsemiCharacteristicDfuLegacyControlPoint,
    /// Legacy DFU Packet
    ///
    /// Source: nordic
    #[strum(serialize = "Legacy DFU Packet")]
    ComNordicsemiCharacteristicDfuLegacyPacket,
    /// Legacy DFU Version
    ///
    /// Source: nordic
    #[strum(serialize = "Legacy DFU Version")]
    ComNordicsemiCharacteristicDfuLegacyVersion,
    /// DFU Control Point
    ///
    /// Source: nordic
    #[strum(serialize = "DFU Control Point")]
    ComNordicsemiCharacteristicDfuSecureControlPoint,
    /// DFU Packet
    ///
    /// Source: nordic
    #[strum(serialize = "DFU Packet")]
    ComNordicsemiCharacteristicDfuSecurePacket,
    /// Buttonless DFU Without Bonds
    ///
    /// Source: nordic
    #[strum(serialize = "Buttonless DFU Without Bonds")]
    ComNordicsemiCharacteristicDfuButtonlessExperimentalWithoutBonds,
    /// Buttonless DFU With Bonds
    ///
    /// Source: nordic
    #[strum(serialize = "Buttonless DFU With Bonds")]
    ComNordicsemiCharacteristicDfuButtonlessExperimentalWithBonds,
    /// Experimental Buttonless DFU
    ///
    /// Source: nordic
    #[strum(serialize = "Experimental Buttonless DFU")]
    ComNordicsemiCharacteristicDfuButtonlessExperimental,
    /// SMP Characteristic
    ///
    /// Source: apache
    #[strum(serialize = "SMP Characteristic")]
    IoRuntimeMcumgrBleSmp,
    /// Phillips Hue Light On/Off Toggle
    ///
    /// Source: phillips-hue
    #[strum(serialize = "Phillips Hue Light On/Off Toggle")]
    ComPhillipsHueCharacteristicToggle,
    /// Phillips Hue Light Brightness Level
    ///
    /// Source: phillips-hue
    #[strum(serialize = "Phillips Hue Light Brightness Level")]
    ComPhillipsHueCharacteristicBrightness,
    /// Phillips Hue Light Color
    ///
    /// Source: phillips-hue
    #[strum(serialize = "Phillips Hue Light Color")]
    ComPhillipsHueCharacteristicColor,
    /// Thingy Device Name
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Device Name")]
    ComNordicsemiCharacteristicThingyDeviceName,
    /// Thingy Advertising Parameters
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Advertising Parameters")]
    ComNordicsemiCharacteristicThingyAdvertisingParam,
    /// Thingy Connection Parameters
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Connection Parameters")]
    ComNordicsemiCharacteristicThingyConnectionParam,
    /// Thingy Eddystone URL
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Eddystone URL")]
    ComNordicsemiCharacteristicThingyEddystoneUrl,
    /// Thingy Cloud Token
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Cloud Token")]
    ComNordicsemiCharacteristicThingyCloudToken,
    /// Thingy FW Version
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy FW Version")]
    ComNordicsemiCharacteristicThingyFwVersion,
    /// Thingy MTU Request
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy MTU Request")]
    ComNordicsemiCharacteristicThingyMtuRequest,
    /// Thingy Temperature
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Temperature")]
    ComNordicsemiCharacteristicThingyTemperature,
    /// Thingy Pressure
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Pressure")]
    ComNordicsemiCharacteristicThingyPressure,
    /// Thingy Humidity
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Humidity")]
    ComNordicsemiCharacteristicThingyHumidity,
    /// Thingy Air Quality
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Air Quality")]
    ComNordicsemiCharacteristicThingyGas,
    /// Thingy Color
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Color")]
    ComNordicsemiCharacteristicThingyColor,
    /// Thingy Configuration
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Configuration")]
    ComNordicsemiCharacteristicThingyConfiguration,
    /// Thingy LED State
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy LED State")]
    ComNordicsemiCharacteristicThingyLed,
    /// Thingy Button State
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Button State")]
    ComNordicsemiCharacteristicThingyButton,
    /// Thingy EXT Pin
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy EXT Pin")]
    ComNordicsemiCharacteristicThingyExtPin,
    /// Thingy Motion Config
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Motion Config")]
    ComNordicsemiCharacteristicThingyMotionConfig,
    /// Thingy Tap
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Tap")]
    ComNordicsemiCharacteristicThingyTap,
    /// Thingy Orientation
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Orientation")]
    ComNordicsemiCharacteristicThingyOrientation,
    /// Thingy Quaternion
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Quaternion")]
    ComNordicsemiCharacteristicThingyQuaternion,
    /// Thingy Pedometer
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Pedometer")]
    ComNordicsemiCharacteristicThingyPedometer,
    /// Thingy Raw Data
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Raw Data")]
    ComNordicsemiCharacteristicThingyRawData,
    /// Thingy Euler
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Euler")]
    ComNordicsemiCharacteristicThingyEuler,
    /// Thingy Rotation Matrix
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Rotation Matrix")]
    ComNordicsemiCharacteristicThingyRotationMatrix,
    /// Thingy Heading
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Heading")]
    ComNordicsemiCharacteristicThingyHeading,
    /// Thingy Gravity Vector
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Gravity Vector")]
    ComNordicsemiCharacteristicThingyGravityVector,
    /// Thingy Sound Config
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Sound Config")]
    ComNordicsemiCharacteristicThingySoundConfig,
    /// Thingy Speaker Data
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Speaker Data")]
    ComNordicsemiCharacteristicThingySpeakerData,
    /// Thingy Speaker Status
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Speaker Status")]
    ComNordicsemiCharacteristicThingySpeakerStatus,
    /// Thingy Microphone
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Microphone")]
    ComNordicsemiCharacteristicThingyMicrophone,
    /// UART RX Characteristic
    ///
    /// Source: nordic
    #[strum(serialize = "UART RX Characteristic")]
    ComNordicsemiCharacteristicUartRx,
    /// UART TX Characteristic
    ///
    /// Source: nordic
    #[strum(serialize = "UART TX Characteristic")]
    ComNordicsemiCharacteristicUartTx,
    /// Edge Impulse Remote Management RX Characteristic
    ///
    /// Source: nordic
    #[strum(serialize = "Edge Impulse Remote Management RX Characteristic")]
    ComNordicsemiCharacteristicEdgeImpulseUartRx,
    /// Edge Impulse Remote Management TX Characteristic
    ///
    /// Source: nordic
    #[strum(serialize = "Edge Impulse Remote Management TX Characteristic")]
    ComNordicsemiCharacteristicEdgeImpulseUartTx,
    /// Eddystone Capabilities
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Capabilities")]
    ComGoogleCharacteristicEddystoneCapabilities,
    /// Eddystone Active Slot
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Active Slot")]
    ComGoogleCharacteristicEddystoneActiveSlot,
    /// Eddystone Advertising Interval
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Advertising Interval")]
    ComGoogleCharacteristicEddystoneAdvertisingInterval,
    /// Eddystone Radio Tx Power
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Radio Tx Power")]
    ComGoogleCharacteristicEddystoneRadioTxPower,
    /// Eddystone (Advanced) Advertised Tx Power
    ///
    /// Source: google
    #[strum(serialize = "Eddystone (Advanced) Advertised Tx Power")]
    ComGoogleCharacteristicEddystoneAdvertisedTxPower,
    /// Eddystone Lock State
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Lock State")]
    ComGoogleCharacteristicEddystoneLockState,
    /// Eddystone Unlock
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Unlock")]
    ComGoogleCharacteristicEddystoneUnlock,
    /// Eddystone Public ECDH Key
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Public ECDH Key")]
    ComGoogleCharacteristicEddystoneKeyPublicEcdh,
    /// Eddystone EID Identity Key
    ///
    /// Source: google
    #[strum(serialize = "Eddystone EID Identity Key")]
    ComGoogleCharacteristicEddystoneKeyEidIdentity,
    /// Eddystone ADV Slot Data
    ///
    /// Source: google
    #[strum(serialize = "Eddystone ADV Slot Data")]
    ComGoogleCharacteristicEddystoneAdvSlotData,
    /// Eddystone Avanced Factory Reset
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Avanced Factory Reset")]
    ComGoogleCharacteristicEddystoneAdvancedFactoryReset,
    /// Eddystone (Advanced) Remain Connectable
    ///
    /// Source: google
    #[strum(serialize = "Eddystone (Advanced) Remain Connectable")]
    ComGoogleCharacteristicEddystoneRemainConnectable,
    /// Fast Pair Model ID
    ///
    /// Source: google
    #[strum(serialize = "Fast Pair Model ID")]
    ComGoogleServiceFastPairModelId,
    /// Fast Pair Key-based Pairing
    ///
    /// Source: google
    #[strum(serialize = "Fast Pair Key-based Pairing")]
    ComGoogleServiceFastPairKeyBasedPairing,
    /// Fast Pair Passkey
    ///
    /// Source: google
    #[strum(serialize = "Fast Pair Passkey")]
    ComGoogleServiceFastPairPasskey,
    /// Fast Pair Account Key
    ///
    /// Source: google
    #[strum(serialize = "Fast Pair Account Key")]
    ComGoogleServiceFastPairAccountKey,
    /// Fast Pair Data
    ///
    /// Source: google
    #[strum(serialize = "Fast Pair Data")]
    ComGoogleServiceFastPairData,
    /// Deprecated Fast Pair Model ID
    ///
    /// Source: google
    #[strum(serialize = "Deprecated Fast Pair Model ID")]
    ComGoogleServiceDeprecatedFastPairModelId,
    /// Deprecated Fast Pair Key-based Pairing
    ///
    /// Source: google
    #[strum(serialize = "Deprecated Fast Pair Key-based Pairing")]
    ComGoogleServiceDeprecatedFastPairKeyBasedPairing,
    /// Deprecated Fast Pair Passkey
    ///
    /// Source: google
    #[strum(serialize = "Deprecated Fast Pair Passkey")]
    ComGoogleServiceDeprecatedFastPairPasskey,
    /// Deprecated Fast Pair Account Key
    ///
    /// Source: google
    #[strum(serialize = "Deprecated Fast Pair Account Key")]
    ComGoogleServiceDeprecatedFastPairAccountKey,
    /// Deprecated Fast Pair Data
    ///
    /// Source: google
    #[strum(serialize = "Deprecated Fast Pair Data")]
    ComGoogleServiceDeprecatedFastPairData,
    /// Apple Notification Source
    ///
    /// Source: apple
    #[strum(serialize = "Apple Notification Source")]
    ComAppleCharacteristicNotificationSource,
    /// Apple Control Point
    ///
    /// Source: apple
    #[strum(serialize = "Apple Control Point")]
    ComAppleCharacteristicControlPoint,
    /// Apple Data Source
    ///
    /// Source: apple
    #[strum(serialize = "Apple Data Source")]
    ComAppleCharacteristicDataSource,
    /// Apple Remote Command
    ///
    /// Source: apple
    #[strum(serialize = "Apple Remote Command")]
    ComAppleCharacteristicMediaRemoteCommand,
    /// Apple Entity Update
    ///
    /// Source: apple
    #[strum(serialize = "Apple Entity Update")]
    ComAppleCharacteristicMediaEntityUpdate,
    /// Apple Entity Attribute
    ///
    /// Source: apple
    #[strum(serialize = "Apple Entity Attribute")]
    ComAppleCharacteristicMediaEntityAttribute,
    /// Apple Reserved Characteristic
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic")]
    ComAppleCharacteristic7DFC6001,
    /// Apple Reserved Characteristic 1
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 1")]
    ComAppleCharacteristic7DFC6002,
    /// Apple Reserved Characteristic 2
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 2")]
    ComAppleCharacteristic7DFC6003,
    /// Apple Reserved Characteristic 3
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 3")]
    ComAppleCharacteristic7DFC6004,
    /// Apple Reserved Characteristic 4
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 4")]
    ComAppleCharacteristic7DFC6005,
    /// Apple Reserved Characteristic 5
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 5")]
    ComAppleCharacteristic7DFC6101,
    /// Apple Reserved Characteristic 6
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 6")]
    ComAppleCharacteristic7DFC6102,
    /// Apple Reserved Characteristic 7
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 7")]
    ComAppleCharacteristic7DFC6103,
    /// Apple Reserved Characteristic 8
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 8")]
    ComAppleCharacteristic7DFC6104,
    /// Apple Reserved Characteristic 9
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 9")]
    ComAppleCharacteristic7DFC6105,
    /// Apple Reserved Characteristic 10
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 10")]
    ComAppleCharacteristic7DFC6106,
    /// Apple Reserved Characteristic 11
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 11")]
    ComAppleCharacteristic7DFC6107,
    /// Apple Reserved Characteristic 12
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 12")]
    ComAppleCharacteristic7DFC6108,
    /// Apple Reserved Characteristic 13
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 13")]
    ComAppleCharacteristic7DFC6201,
    /// Apple Reserved Characteristic 14
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 14")]
    ComAppleCharacteristic7DFC6202,
    /// Apple Reserved Characteristic 15
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 15")]
    ComAppleCharacteristic7DFC6203,
    /// Apple Reserved Characteristic 16
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 16")]
    ComAppleCharacteristic7DFC7003,
    /// Apple Reserved Characteristic 17
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 17")]
    ComAppleCharacteristic7DFC7004,
    /// Apple Reserved Characteristic 18
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 18")]
    ComAppleCharacteristic7DFC7005,
    /// Apple Reserved Characteristic 19
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 19")]
    ComAppleCharacteristic7DFC7006,
    /// Apple Reserved Characteristic 20
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 20")]
    ComAppleCharacteristic7DFC7007,
    /// Apple Reserved Characteristic 21
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 21")]
    ComAppleCharacteristic7DFC7008,
    /// Apple Reserved Characteristic 22
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 22")]
    ComAppleCharacteristic7DFC7009,
    /// Apple Reserved Characteristic 23
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 23")]
    ComAppleCharacteristic7DFC700A,
    /// Apple Reserved Characteristic 24
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 24")]
    ComAppleCharacteristic7DFC700B,
    /// Apple Reserved Characteristic 25
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 25")]
    ComAppleCharacteristic7DFC700C,
    /// Apple Reserved Characteristic 26
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 26")]
    ComAppleCharacteristic7DFC7103,
    /// Apple Reserved Characteristic 27
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 27")]
    ComAppleCharacteristic7DFC7104,
    /// Apple Reserved Characteristic 28
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 28")]
    ComAppleCharacteristic7DFC7105,
    /// Apple Reserved Characteristic 29
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 29")]
    ComAppleCharacteristic7DFC7106,
    /// Apple Reserved Characteristic 30
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 30")]
    ComAppleCharacteristic7DFC7107,
    /// Apple Reserved Characteristic 31
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 31")]
    ComAppleCharacteristic7DFC7108,
    /// Apple Reserved Characteristic 32
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 32")]
    ComAppleCharacteristic7DFC7109,
    /// Apple Reserved Characteristic 33
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 33")]
    ComAppleCharacteristic7DFC710B,
    /// Apple Reserved Characteristic 34
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 34")]
    ComAppleCharacteristic7DFC710C,
    /// Apple Reserved Characteristic 35
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 35")]
    ComAppleCharacteristic7DFC710D,
    /// Apple Reserved Characteristic 36
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 36")]
    ComAppleCharacteristic7DFC8004,
    /// Apple Reserved Characteristic 37
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Characteristic 37")]
    ComAppleCharacteristic7DFC9001,
    /// micro:bit Accelerometer Data
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Accelerometer Data")]
    OrgMicrobitCharacteristicAccelerometerData,
    /// micro:bit Accelerometer Period
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Accelerometer Period")]
    OrgMicrobitCharacteristicAccelerometerPeriod,
    /// micro:bit Magnetometer Data
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Magnetometer Data")]
    OrgMicrobitCharacteristicMagnetometerData,
    /// micro:bit Magnetometer Period
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Magnetometer Period")]
    OrgMicrobitCharacteristicMagnetometerPeriod,
    /// micro:bit Magnetometer Bearing
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Magnetometer Bearing")]
    OrgMicrobitCharacteristicMagnetometerBearing,
    /// micro:bit Button A State
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Button A State")]
    OrgMicrobitCharacteristicButtonAState,
    /// micro:bit Button B State
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Button B State")]
    OrgMicrobitCharacteristicButtonBState,
    /// micro:bit Pin Data
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Pin Data")]
    OrgMicrobitCharacteristicPinData,
    /// micro:bit Pin AD Configuration
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Pin AD Configuration")]
    OrgMicrobitCharacteristicPinAdConfiguration,
    /// micro:bit Pin I/O Configuration
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Pin I/O Configuration")]
    OrgMicrobitCharacteristicPinIoConfiguration,
    /// micro:bit PWM Control
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit PWM Control")]
    OrgMicrobitCharacteristicPwmControl,
    /// micro:bit LED Matrix State
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit LED Matrix State")]
    OrgMicrobitCharacteristicLedMatrixState,
    /// micro:bit LED Text
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit LED Text")]
    OrgMicrobitCharacteristicLedText,
    /// micro:bit Scrolling Delay
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Scrolling Delay")]
    OrgMicrobitCharacteristicScrollingDelay,
    /// micro:bit Requirements
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Requirements")]
    OrgMicrobitCharacteristicRequirements,
    /// micro:bit Event
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Event")]
    OrgMicrobitCharacteristicEvent,
    /// micro:bit Client Requirements
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Client Requirements")]
    OrgMicrobitCharacteristicClientRequirements,
    /// micro:bit Client Event
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Client Event")]
    OrgMicrobitCharacteristicClientEvent,
    /// micro:bit DFU Control
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit DFU Control")]
    OrgMicrobitCharacteristicDfuControl,
    /// micro:bit Temperature
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Temperature")]
    OrgMicrobitCharacteristicTemperature,
    /// micro:bit Temperature Period
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Temperature Period")]
    OrgMicrobitCharacteristicTemperaturePeriod,
    /// Mesh Provisioning Data In
    ///
    /// Source: gss
    #[strum(serialize = "Mesh Provisioning Data In")]
    MeshProvisioningDataIn,
    /// Mesh Provisioning Data Out
    ///
    /// Source: gss
    #[strum(serialize = "Mesh Provisioning Data Out")]
    MeshProvisioningDataOut,
    /// Mesh Proxy Data In
    ///
    /// Source: gss
    #[strum(serialize = "Mesh Proxy Data In")]
    MeshProxyDataIn,
    /// Mesh Proxy Data Out
    ///
    /// Source: gss
    #[strum(serialize = "Mesh Proxy Data Out")]
    MeshProxyDataOut,
    /// LEGO® Wireless Protocol v3 Hub Characteristic
    ///
    /// Source: lego
    #[strum(serialize = "LEGO® Wireless Protocol v3 Hub Characteristic")]
    ComLegoCharacteristicLwp3Hub,
    /// LEGO® Wireless Protocol v3 Bootloader Characteristic
    ///
    /// Source: lego
    #[strum(serialize = "LEGO® Wireless Protocol v3 Bootloader Characteristic")]
    ComLegoCharacteristicLwp3Bootloader,
    /// Adafruit Sensor Measurement Period
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Sensor Measurement Period")]
    ComAdafruitCharacteristicMeasurementPeriod,
    /// Adafruit Sensor Service Version
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Sensor Service Version")]
    ComAdafruitCharacteristicServiceVersion,
    /// Adafruit Temperature
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Temperature")]
    ComAdafruitCharacteristicTemperature,
    /// Adafruit Acceleration
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Acceleration")]
    ComAdafruitCharacteristicAcceleration,
    /// Adafruit Light Level
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Light Level")]
    ComAdafruitCharacteristicLightLevel,
    /// Adafruit Gyro
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Gyro")]
    ComAdafruitCharacteristicGyro,
    /// Adafruit Magnetic
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Magnetic")]
    ComAdafruitCharacteristicMagnetic,
    /// Adafruit Pressed
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Pressed")]
    ComAdafruitCharacteristicPressed,
    /// Adafruit Humidity
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Humidity")]
    ComAdafruitCharacteristicHumidity,
    /// Adafruit Pressure
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Pressure")]
    ComAdafruitCharacteristicPressure,
    /// Adafruit Pixel Pin
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Pixel Pin")]
    ComAdafruitCharacteristicPixelPin,
    /// Adafruit Pixel Pin Type
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Pixel Pin Type")]
    ComAdafruitCharacteristicPixelPinType,
    /// Adafruit Pixel Data
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Pixel Data")]
    ComAdafruitCharacteristicPixelData,
    /// Adafruit Pixel Buffer Size
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Pixel Buffer Size")]
    ComAdafruitCharacteristicPixelBufferSize,
    /// Adafruit Color
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Color")]
    ComAdafruitCharacteristicColor,
    /// Adafruit Sound Samples
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Sound Samples")]
    ComAdafruitCharacteristicSoundSamples,
    /// Adafruit Number of Channels
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Number of Channels")]
    ComAdafruitCharacteristicNumberOfChannels,
    /// Adafruit Tone
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Tone")]
    ComAdafruitCharacteristicTone,
    /// Adafruit Quaternions
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Quaternions")]
    ComAdafruitCharacteristicQuaternions,
    /// Adafruit Calibration In
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Calibration In")]
    ComAdafruitCharacteristicQuaternionCalibrationIn,
    /// Adafruit Calibration Out
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Calibration Out")]
    ComAdafruitCharacteristicQuaternionCalibrationOut,
    /// Adafruit Proximity
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Proximity")]
    ComAdafruitCharacteristicProximity,
    /// Adafruit Version
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Version")]
    ComAdafruitCharacteristicFileTransferVersion,
    /// Adafruit Raw TX/RX
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Raw TX/RX")]
    ComAdafruitCharacteristicFileTransferRaw,
    /// Texas Instruments Image Identify
    ///
    /// Source: ti
    #[strum(serialize = "Texas Instruments Image Identify")]
    ComTiCharacteristicImageIdentity,
    /// Texas Instruments Image Block
    ///
    /// Source: ti
    #[strum(serialize = "Texas Instruments Image Block")]
    ComTiCharacteristicImageBlock,
    /// Texas Instruments OAD Control
    ///
    /// Source: ti
    #[strum(serialize = "Texas Instruments OAD Control")]
    ComTiCharacteristicOadControl,
}
impl From<Characteristic> for Uuid {
    fn from(s: Characteristic) -> Uuid {
        match s {
            Characteristic::AerobicHeartRateLowerLimit => Uuid::from_u128(861843951905734551441073629771003),
            Characteristic::AerobicHeartRateUpperLimit => Uuid::from_u128(862319320880820137466634893473019),
            Characteristic::AerobicThreshold => Uuid::from_u128(861923180068248815778667173721339),
            Characteristic::Age => Uuid::from_u128(862002408230763080116260717671675),
            Characteristic::Aggregate => Uuid::from_u128(858991738055221035287706047558907),
            Characteristic::AlertCategoryId => Uuid::from_u128(857169490317392955523054536701179),
            Characteristic::AlertCategoryIdBitMask => Uuid::from_u128(857090262154878691185460992750843),
            Characteristic::AlertLevel => Uuid::from_u128(852336572404022830929848355730683),
            Characteristic::AlertNotificationControlPoint => Uuid::from_u128(857248718479907219860648080651515),
            Characteristic::AlertStatus => Uuid::from_u128(856852577667335898172680360899835),
            Characteristic::Altitude => Uuid::from_u128(866043044518990561333531459138811),
            Characteristic::AnaerobicHeartRateLowerLimit => Uuid::from_u128(862081636393277344453854261622011),
            Characteristic::AnaerobicHeartRateUpperLimit => Uuid::from_u128(862160864555791608791447805572347),
            Characteristic::AnaerobicThreshold => Uuid::from_u128(862240092718305873129041349522683),
            Characteristic::Analog => Uuid::from_u128(858833281730192506612518959658235),
            Characteristic::AnalogOutput => Uuid::from_u128(858912509892706770950112503608571),
            Characteristic::ApparentWindDirection => Uuid::from_u128(860972442118077643727544646317307),
            Characteristic::ApparentWindSpeed => Uuid::from_u128(860893213955563379389951102366971),
            Characteristic::GapAppearance => Uuid::from_u128(851940431591451509241880635979003),
            Characteristic::BarometricPressureTrend => Uuid::from_u128(864775393918762331932034755933435),
            Characteristic::BatteryLevel => Uuid::from_u128(853841907491793853344125690787067),
            Characteristic::BatteryLevelState => Uuid::from_u128(854000363816822382019312778687739),
            Characteristic::BatteryPowerState => Uuid::from_u128(853921135654308117681719234737403),
            Characteristic::BloodPressureFeature => Uuid::from_u128(857644859292478541548615800403195),
            Characteristic::BloodPressureMeasurement => Uuid::from_u128(856060296042193254796744921396475),
            Characteristic::BodyCompositionFeature => Uuid::from_u128(864141568618648217231286404330747),
            Characteristic::BodyCompositionMeasurement => Uuid::from_u128(864220796781162481568879948281083),
            Characteristic::BodySensorLocation => Uuid::from_u128(856297980529736047809525553247483),
            Characteristic::BondManagementControlPoint => Uuid::from_u128(864854622081276596269628299883771),
            Characteristic::BondManagementFeature => Uuid::from_u128(864933850243790860607221843834107),
            Characteristic::BootKeyboardInputReport => Uuid::from_u128(854554960954422232382467586340091),
            Characteristic::BootKeyboardOutputReport => Uuid::from_u128(855822611554650461783964289545467),
            Characteristic::BootMouseInputReport => Uuid::from_u128(855901839717164726121557833495803),
            Characteristic::GapCentralAddressResolution => Uuid::from_u128(865013078406305124944815387784443),
            Characteristic::CgmFeature => Uuid::from_u128(865171534731333653620002475685115),
            Characteristic::CgmMeasurement => Uuid::from_u128(865092306568819389282408931734779),
            Characteristic::CgmSessionRunTime => Uuid::from_u128(865409219218876446632783107536123),
            Characteristic::CgmSessionStartTime => Uuid::from_u128(865329991056362182295189563585787),
            Characteristic::CgmSpecificOpsControlPoint => Uuid::from_u128(865488447381390710970376651486459),
            Characteristic::CgmStatus => Uuid::from_u128(865250762893847917957596019635451),
            Characteristic::CrossTrainerData => Uuid::from_u128(868182204906875698448557145797883),
            Characteristic::CscFeature => Uuid::from_u128(859150194380249563962893135459579),
            Characteristic::CscMeasurement => Uuid::from_u128(859070966217735299625299591509243),
            Characteristic::CurrentTime => Uuid::from_u128(855268014417050611420809481893115),
            Characteristic::CyclingPowerControlPoint => Uuid::from_u128(859942476005392207338828574962939),
            Characteristic::CyclingPowerFeature => Uuid::from_u128(859863247842877943001235031012603),
            Characteristic::CyclingPowerMeasurement => Uuid::from_u128(859704791517849414326047943111931),
            Characteristic::CyclingPowerVector => Uuid::from_u128(859784019680363678663641487062267),
            Characteristic::DatabaseChangeIncrement => Uuid::from_u128(863983112293619688556099316430075),
            Characteristic::DateOfBirth => Uuid::from_u128(862398549043334401804228437423355),
            Characteristic::DateOfThresholdAssessment => Uuid::from_u128(862477777205848666141821981373691),
            Characteristic::DateTime => Uuid::from_u128(852495028729051359605035443631355),
            Characteristic::DateUtc => Uuid::from_u128(870638277944817892913957008258299),
            Characteristic::DayDateTime => Uuid::from_u128(852653485054079888280222531532027),
            Characteristic::DayOfWeek => Uuid::from_u128(852574256891565623942628987581691),
            Characteristic::DescriptorValueChanged => Uuid::from_u128(861764723743220287103480085820667),
            Characteristic::GapDeviceName => Uuid::from_u128(851861203428937244904287092028667),
            Characteristic::DewPoint => Uuid::from_u128(861606267418191758428292997919995),
            Characteristic::Digital => Uuid::from_u128(858674825405163977937331871757563),
            Characteristic::DigitalOutput => Uuid::from_u128(858754053567678242274925415707899),
            Characteristic::DstOffset => Uuid::from_u128(852891169541622681293003163383035),
            Characteristic::Elevation => Uuid::from_u128(860417844980477793364389838664955),
            Characteristic::EmailAddress => Uuid::from_u128(862557005368362930479415525324027),
            Characteristic::ExactTime100 => Uuid::from_u128(852732713216594152617816075482363),
            Characteristic::ExactTime256 => Uuid::from_u128(852811941379108416955409619432699),
            Characteristic::FatBurnHeartRateLowerLimit => Uuid::from_u128(862636233530877194817009069274363),
            Characteristic::FatBurnHeartRateUpperLimit => Uuid::from_u128(862715461693391459154602613224699),
            Characteristic::FirmwareRevisionString => Uuid::from_u128(854871873604479289732841762141435),
            Characteristic::FirstName => Uuid::from_u128(862794689855905723492196157175035),
            Characteristic::FitnessMachineControlPoint => Uuid::from_u128(869053714694532606162086129251579),
            Characteristic::FitnessMachineFeature => Uuid::from_u128(868023748581847169773370057897211),
            Characteristic::FitnessMachineStatus => Uuid::from_u128(869132942857046870499679673201915),
            Characteristic::FiveZoneHeartRateLimits => Uuid::from_u128(862873918018419987829789701125371),
            Characteristic::FloorNumber => Uuid::from_u128(865963816356476296995937915188475),
            Characteristic::Gender => Uuid::from_u128(862953146180934252167383245075707),
            Characteristic::GlucoseFeature => Uuid::from_u128(858278684592592656249364152005883),
            Characteristic::GlucoseMeasurement => Uuid::from_u128(853762679329279589006532146836731),
            Characteristic::GlucoseMeasurementContext => Uuid::from_u128(855981067879678990459151377446139),
            Characteristic::GustFactor => Uuid::from_u128(861051670280591908065138190267643),
            Characteristic::HardwareRevisionString => Uuid::from_u128(854951101766993554070435306091771),
            Characteristic::HeartRateControlPoint => Uuid::from_u128(856377208692250312147119097197819),
            Characteristic::HeartRateMax => Uuid::from_u128(863032374343448516504976789026043),
            Characteristic::HeartRateMeasurement => Uuid::from_u128(856218752367221783471932009297147),
            Characteristic::HeatIndex => Uuid::from_u128(861527039255677494090699453969659),
            Characteristic::Height => Uuid::from_u128(863111602505962780842570332976379),
            Characteristic::HidControlPoint => Uuid::from_u128(857882543780021334561396432254203),
            Characteristic::HidInformation => Uuid::from_u128(857724087454992805886209344353531),
            Characteristic::HipCircumference => Uuid::from_u128(863190830668477045180163876926715),
            Characteristic::HttpControlPoint => Uuid::from_u128(866597641656590411696686266791163),
            Characteristic::HttpEntityBody => Uuid::from_u128(866518413494076147359092722840827),
            Characteristic::HttpHeaders => Uuid::from_u128(866359957169047618683905634940155),
            Characteristic::HttpStatusCode => Uuid::from_u128(866439185331561883021499178890491),
            Characteristic::HttpsSecurity => Uuid::from_u128(866676869819104676034279810741499),
            Characteristic::Humidity => Uuid::from_u128(860655529468020586377170470515963),
            Characteristic::IddAnnunciationStatus => Uuid::from_u128(874837370558073902806414837626107),
            Characteristic::IddCommandControlPoint => Uuid::from_u128(875075055045616695819195469477115),
            Characteristic::IddCommandData => Uuid::from_u128(875154283208130960156789013427451),
            Characteristic::IddFeatures => Uuid::from_u128(874916598720588167144008381576443),
            Characteristic::IddHistoryData => Uuid::from_u128(875312739533159488831976101328123),
            Characteristic::IddRecordAccessControlPoint => Uuid::from_u128(875233511370645224494382557377787),
            Characteristic::IddStatus => Uuid::from_u128(874758142395559638468821293675771),
            Characteristic::IddStatusChanged => Uuid::from_u128(874678914233045374131227749725435),
            Characteristic::IddStatusReaderControlPoint => Uuid::from_u128(874995826883102431481601925526779),
            Characteristic::ClientSupportedFeatures => Uuid::from_u128(875391967695673753169569645278459),
            Characteristic::DatabaseHash => Uuid::from_u128(875471195858188017507163189228795),
            Characteristic::Ieee1107320601RegulatoryCertificationDataList => Uuid::from_u128(855188786254536347083215937942779),
            Characteristic::IndoorBikeData => Uuid::from_u128(868499117556932755798931321599227),
            Characteristic::IndoorPositioningConfiguration => Uuid::from_u128(865567675543904975307970195436795),
            Characteristic::IntermediateCuffPressure => Uuid::from_u128(856139524204707519134338465346811),
            Characteristic::IntermediateTemperature => Uuid::from_u128(854238048304365175032093410538747),
            Characteristic::Irradiance => Uuid::from_u128(861289354768134701077918822118651),
            Characteristic::Language => Uuid::from_u128(864696165756248067594441211983099),
            Characteristic::LastName => Uuid::from_u128(863270058830991309517757420877051),
            Characteristic::Latitude => Uuid::from_u128(865646903706419239645563739387131),
            Characteristic::LnControlPoint => Uuid::from_u128(860338616817963529026796294714619),
            Characteristic::LnFeature => Uuid::from_u128(860259388655449264689202750764283),
            Characteristic::LocalEastCoordinate => Uuid::from_u128(865884588193962032658344371238139),
            Characteristic::LocalNorthCoordinate => Uuid::from_u128(865805360031447768320750827287803),
            Characteristic::LocalTimeInformation => Uuid::from_u128(853049625866651209968190251283707),
            Characteristic::LocationAndSpeed => Uuid::from_u128(860021704167906471676422118913275),
            Characteristic::LocationName => Uuid::from_u128(866201500844019090008718547039483),
            Characteristic::Longitude => Uuid::from_u128(865726131868933503983157283337467),
            Characteristic::MagneticDeclination => Uuid::from_u128(855347242579564875758403025843451),
            Characteristic::MagneticFluxDensity2D => Uuid::from_u128(864537709431219538919254124082427),
            Characteristic::MagneticFluxDensity3D => Uuid::from_u128(864616937593733803256847668032763),
            Characteristic::ManufacturerNameString => Uuid::from_u128(855109558092022082745622393992443),
            Characteristic::MaximumRecommendedHeartRate => Uuid::from_u128(863349286993505573855350964827387),
            Characteristic::MeasurementInterval => Uuid::from_u128(854475732791907968044874042389755),
            Characteristic::ModelNumberString => Uuid::from_u128(854713417279450761057654674240763),
            Characteristic::Navigation => Uuid::from_u128(860100932330420736014015662863611),
            Characteristic::NetworkAvailability => Uuid::from_u128(856773349504821633835086816949499),
            Characteristic::NewAlert => Uuid::from_u128(857407174804935748535835168552187),
            Characteristic::ObjectActionControlPoint => Uuid::from_u128(867469151444247319410215250244859),
            Characteristic::ObjectChanged => Uuid::from_u128(867706835931790112422995882095867),
            Characteristic::ObjectFirstCreated => Uuid::from_u128(867152238794190262059841074443515),
            Characteristic::ObjectId => Uuid::from_u128(867310695119218790735028162344187),
            Characteristic::ObjectLastModified => Uuid::from_u128(867231466956704526397434618393851),
            Characteristic::ObjectListControlPoint => Uuid::from_u128(867548379606761583747808794195195),
            Characteristic::ObjectListFilter => Uuid::from_u128(867627607769275848085402338145531),
            Characteristic::ObjectName => Uuid::from_u128(866914554306647469047060442592507),
            Characteristic::ObjectProperties => Uuid::from_u128(867389923281733055072621706294523),
            Characteristic::ObjectSize => Uuid::from_u128(867073010631675997722247530493179),
            Characteristic::ObjectType => Uuid::from_u128(866993782469161733384653986542843),
            Characteristic::OtsFeature => Uuid::from_u128(866835326144133204709466898642171),
            Characteristic::GapPeripheralPreferredConnectionParameters => Uuid::from_u128(852178116078994302254661267830011),
            Characteristic::GapPeripheralPrivacyFlag => Uuid::from_u128(852019659753965773579474179929339),
            Characteristic::PlxContinuousMeasurement => Uuid::from_u128(859387878867792356975673767310587),
            Characteristic::PlxFeatures => Uuid::from_u128(859467107030306621313267311260923),
            Characteristic::PlxSpotCheckMeasurement => Uuid::from_u128(859308650705278092638080223360251),
            Characteristic::PnpId => Uuid::from_u128(858199456430078391911770608055547),
            Characteristic::PollenConcentration => Uuid::from_u128(861130898443106172402731734217979),
            Characteristic::Position2d => Uuid::from_u128(855584927067107668771183657694459),
            Characteristic::Position3d => Uuid::from_u128(855664155229621933108777201644795),
            Characteristic::PositionQuality => Uuid::from_u128(860180160492935000351609206813947),
            Characteristic::Pressure => Uuid::from_u128(860497073142992057701983382615291),
            Characteristic::ProtocolMode => Uuid::from_u128(858041000105049863236583520154875),
            Characteristic::PulseOximetryControlPoint => Uuid::from_u128(859625563355335149988454399161595),
            Characteristic::Rainfall => Uuid::from_u128(861368582930648965415512366068987),
            Characteristic::RcFeature => Uuid::from_u128(874441229745502581118447117874427),
            Characteristic::RcSettings => Uuid::from_u128(874520457908016845456040661824763),
            Characteristic::GapReconnectionAddress => Uuid::from_u128(852098887916480037917067723879675),
            Characteristic::ReconnectionConfigurationControlPoint => Uuid::from_u128(874599686070531109793634205775099),
            Characteristic::RecordAccessControlPoint => Uuid::from_u128(858357912755106920586957695956219),
            Characteristic::ReferenceTimeInformation => Uuid::from_u128(853445766679222531656157971035387),
            Characteristic::Removable => Uuid::from_u128(856456436854764576484712641148155),
            Characteristic::Report => Uuid::from_u128(857961771942535598898989976204539),
            Characteristic::ReportMap => Uuid::from_u128(857803315617507070223802888303867),
            Characteristic::ResolvablePrivateAddressOnly => Uuid::from_u128(867786064094304376760589426046203),
            Characteristic::RestingHeartRate => Uuid::from_u128(863428515156019838192944508777723),
            Characteristic::RingerControlPoint => Uuid::from_u128(856931805829850162510273904850171),
            Characteristic::RingerSetting => Uuid::from_u128(857011033992364426847867448800507),
            Characteristic::RowerData => Uuid::from_u128(868419889394418491461337777648891),
            Characteristic::RscFeature => Uuid::from_u128(858516369080135449262144783856891),
            Characteristic::RscMeasurement => Uuid::from_u128(858437140917621184924551239906555),
            Characteristic::ScControlPoint => Uuid::from_u128(858595597242649713599738327807227),
            Characteristic::ScanIntervalWindow => Uuid::from_u128(858120228267564127574177064105211),
            Characteristic::ScanRefresh => Uuid::from_u128(855743383392136197446370745595131),
            Characteristic::ScientificTemperatureCelsius => Uuid::from_u128(856614893179793105159899729048827),
            Characteristic::SecondaryTimeZone => Uuid::from_u128(853128854029165474305783795234043),
            Characteristic::SensorLocation => Uuid::from_u128(859229422542763828300486679409915),
            Characteristic::SerialNumberString => Uuid::from_u128(854792645441965025395248218191099),
            Characteristic::GattServiceChanged => Uuid::from_u128(852257344241508566592254811780347),
            Characteristic::ServiceRequired => Uuid::from_u128(856535665017278840822306185098491),
            Characteristic::SoftwareRevisionString => Uuid::from_u128(855030329929507818408028850042107),
            Characteristic::SportTypeForAerobicAndAnaerobicThresholds => Uuid::from_u128(863507743318534102530538052728059),
            Characteristic::StairClimberData => Uuid::from_u128(868340661231904227123744233698555),
            Characteristic::StepClimberData => Uuid::from_u128(868261433069389962786150689748219),
            Characteristic::String => Uuid::from_u128(856694121342307369497493272999163),
            Characteristic::SupportedHeartRateRange => Uuid::from_u128(868895258369504077486899041350907),
            Characteristic::SupportedInclinationRange => Uuid::from_u128(868736802044475548811711953450235),
            Characteristic::SupportedNewAlertCategory => Uuid::from_u128(857486402967450012873428712502523),
            Characteristic::SupportedPowerRange => Uuid::from_u128(868974486532018341824492585301243),
            Characteristic::SupportedResistanceLevelRange => Uuid::from_u128(868816030206989813149305497400571),
            Characteristic::SupportedSpeedRange => Uuid::from_u128(868657573881961284474118409499899),
            Characteristic::SupportedUnreadAlertCategory => Uuid::from_u128(857565631129964277211022256452859),
            Characteristic::SystemId => Uuid::from_u128(854634189116936496720061130290427),
            Characteristic::TdsControlPoint => Uuid::from_u128(866756097981618940371873354691835),
            Characteristic::Temperature => Uuid::from_u128(860576301305506322039576926565627),
            Characteristic::TemperatureCelsius => Uuid::from_u128(854317276466879439369686954489083),
            Characteristic::TemperatureFahrenheit => Uuid::from_u128(854396504629393703707280498439419),
            Characteristic::TemperatureMeasurement => Uuid::from_u128(854079591979336646356906322638075),
            Characteristic::TemperatureType => Uuid::from_u128(854158820141850910694499866588411),
            Characteristic::ThreeZoneHeartRateLimits => Uuid::from_u128(863586971481048366868131596678395),
            Characteristic::TimeAccuracy => Uuid::from_u128(853287310354194002980970883134715),
            Characteristic::TimeBroadcast => Uuid::from_u128(853524994841736795993751514985723),
            Characteristic::TimeSource => Uuid::from_u128(853366538516708267318564427085051),
            Characteristic::TimeUpdateControlPoint => Uuid::from_u128(853604223004251060331345058936059),
            Characteristic::TimeUpdateState => Uuid::from_u128(853683451166765324668938602886395),
            Characteristic::TimeWithDst => Uuid::from_u128(853208082191679738643377339184379),
            Characteristic::TimeZone => Uuid::from_u128(852970397704136945630596707333371),
            Characteristic::TrainingStatus => Uuid::from_u128(868578345719447020136524865549563),
            Characteristic::TreadmillData => Uuid::from_u128(868102976744361434110963601847547),
            Characteristic::TrueWindDirection => Uuid::from_u128(860813985793049115052357558416635),
            Characteristic::TrueWindSpeed => Uuid::from_u128(860734757630534850714764014466299),
            Characteristic::TwoZoneHeartRateLimit => Uuid::from_u128(863666199643562631205725140628731),
            Characteristic::TxPowerLevel => Uuid::from_u128(852415800566537095267441899681019),
            Characteristic::Uncertainty => Uuid::from_u128(866122272681504825671125003089147),
            Characteristic::UnreadAlertStatus => Uuid::from_u128(857327946642421484198241624601851),
            Characteristic::Uri => Uuid::from_u128(866280729006533354346312090989819),
            Characteristic::UserControlPoint => Uuid::from_u128(864458481268705274581660580132091),
            Characteristic::UserIndex => Uuid::from_u128(864062340456133952893692860380411),
            Characteristic::UvIndex => Uuid::from_u128(861210126605620436740325278168315),
            Characteristic::Vo2Max => Uuid::from_u128(863745427806076895543318684579067),
            Characteristic::WaistCircumference => Uuid::from_u128(863824655968591159880912228529403),
            Characteristic::Weight => Uuid::from_u128(863903884131105424218505772479739),
            Characteristic::WeightMeasurement => Uuid::from_u128(864300024943676745906473492231419),
            Characteristic::WeightScaleFeature => Uuid::from_u128(864379253106191010244067036181755),
            Characteristic::WindChill => Uuid::from_u128(861447811093163229753105910019323),
            Characteristic::ComNordicsemiCharacteristicBlinkyButtonState => Uuid::from_u128(428788409150782422114483113349411),
            Characteristic::ComNordicsemiCharacteristicBlinkyLedState => Uuid::from_u128(428867637313296686452076657299747),
            Characteristic::ComNordicsemiCharacteristicDfuLegacyControlPoint => Uuid::from_u128(429818375263467858503199184703779),
            Characteristic::ComNordicsemiCharacteristicDfuLegacyPacket => Uuid::from_u128(429897603425982122840792728654115),
            Characteristic::ComNordicsemiCharacteristicDfuLegacyVersion => Uuid::from_u128(430056059751010651515979816554787),
            Characteristic::ComNordicsemiCharacteristicDfuSecureControlPoint => Uuid::from_u128(189794027224482336498087000075109329488),
            Characteristic::ComNordicsemiCharacteristicDfuSecurePacket => Uuid::from_u128(189794027303710499012351337668653279824),
            Characteristic::ComNordicsemiCharacteristicDfuButtonlessExperimentalWithoutBonds => Uuid::from_u128(189794027382938661526615675262197230160),
            Characteristic::ComNordicsemiCharacteristicDfuButtonlessExperimentalWithBonds => Uuid::from_u128(189794027462166824040880012855741180496),
            Characteristic::ComNordicsemiCharacteristicDfuButtonlessExperimental => Uuid::from_u128(189082682554863065112978322078006176336),
            Characteristic::IoRuntimeMcumgrBleSmp => Uuid::from_u128(290012985872813345694579889415449574472),
            Characteristic::ComPhillipsHueCharacteristicToggle => Uuid::from_u128(195626005536763819649493098382971394525),
            Characteristic::ComPhillipsHueCharacteristicBrightness => Uuid::from_u128(195626005536765028575312713012146100701),
            Characteristic::ComPhillipsHueCharacteristicColor => Uuid::from_u128(195626005536767446426951942270495513053),
            Characteristic::ComNordicsemiCharacteristicThingyDeviceName => Uuid::from_u128(318225510275554877138770600741443993666),
            Characteristic::ComNordicsemiCharacteristicThingyAdvertisingParam => Uuid::from_u128(318225510354783039653034938334987944002),
            Characteristic::ComNordicsemiCharacteristicThingyConnectionParam => Uuid::from_u128(318225510513239364681563613522075844674),
            Characteristic::ComNordicsemiCharacteristicThingyEddystoneUrl => Uuid::from_u128(318225510592467527195827951115619795010),
            Characteristic::ComNordicsemiCharacteristicThingyCloudToken => Uuid::from_u128(318225510671695689710092288709163745346),
            Characteristic::ComNordicsemiCharacteristicThingyFwVersion => Uuid::from_u128(318225510750923852224356626302707695682),
            Characteristic::ComNordicsemiCharacteristicThingyMtuRequest => Uuid::from_u128(318225510830152014738620963896251646018),
            Characteristic::ComNordicsemiCharacteristicThingyTemperature => Uuid::from_u128(318225530557964480790441024688695279682),
            Characteristic::ComNordicsemiCharacteristicThingyPressure => Uuid::from_u128(318225530637192643304705362282239230018),
            Characteristic::ComNordicsemiCharacteristicThingyHumidity => Uuid::from_u128(318225530716420805818969699875783180354),
            Characteristic::ComNordicsemiCharacteristicThingyGas => Uuid::from_u128(318225530795648968333234037469327130690),
            Characteristic::ComNordicsemiCharacteristicThingyColor => Uuid::from_u128(318225530874877130847498375062871081026),
            Characteristic::ComNordicsemiCharacteristicThingyConfiguration => Uuid::from_u128(318225530954105293361762712656415031362),
            Characteristic::ComNordicsemiCharacteristicThingyLed => Uuid::from_u128(318225550840374084442111448635946565698),
            Characteristic::ComNordicsemiCharacteristicThingyButton => Uuid::from_u128(318225550919602246956375786229490516034),
            Characteristic::ComNordicsemiCharacteristicThingyExtPin => Uuid::from_u128(318225550998830409470640123823034466370),
            Characteristic::ComNordicsemiCharacteristicThingyMotionConfig => Uuid::from_u128(318225571122783688093781872583197851714),
            Characteristic::ComNordicsemiCharacteristicThingyTap => Uuid::from_u128(318225571202011850608046210176741802050),
            Characteristic::ComNordicsemiCharacteristicThingyOrientation => Uuid::from_u128(318225571281240013122310547770285752386),
            Characteristic::ComNordicsemiCharacteristicThingyQuaternion => Uuid::from_u128(318225571360468175636574885363829702722),
            Characteristic::ComNordicsemiCharacteristicThingyPedometer => Uuid::from_u128(318225571439696338150839222957373653058),
            Characteristic::ComNordicsemiCharacteristicThingyRawData => Uuid::from_u128(318225571518924500665103560550917603394),
            Characteristic::ComNordicsemiCharacteristicThingyEuler => Uuid::from_u128(318225571598152663179367898144461553730),
            Characteristic::ComNordicsemiCharacteristicThingyRotationMatrix => Uuid::from_u128(318225571677380825693632235738005504066),
            Characteristic::ComNordicsemiCharacteristicThingyHeading => Uuid::from_u128(318225571756608988207896573331549454402),
            Characteristic::ComNordicsemiCharacteristicThingyGravityVector => Uuid::from_u128(318225571835837150722160910925093404738),
            Characteristic::ComNordicsemiCharacteristicThingySoundConfig => Uuid::from_u128(318225591405193291745452296530449137730),
            Characteristic::ComNordicsemiCharacteristicThingySpeakerData => Uuid::from_u128(318225591484421454259716634123993088066),
            Characteristic::ComNordicsemiCharacteristicThingySpeakerStatus => Uuid::from_u128(318225591563649616773980971717537038402),
            Characteristic::ComNordicsemiCharacteristicThingyMicrophone => Uuid::from_u128(318225591642877779288245309311080988738),
            Characteristic::ComNordicsemiCharacteristicUartRx => Uuid::from_u128(146547386749958291965349483921220094622),
            Characteristic::ComNordicsemiCharacteristicUartTx => Uuid::from_u128(146547386829186454479613821514764044958),
            Characteristic::ComNordicsemiCharacteristicEdgeImpulseUartRx => Uuid::from_u128(301236294776310956362265365830283729016),
            Characteristic::ComNordicsemiCharacteristicEdgeImpulseUartTx => Uuid::from_u128(301236294855539118876529703423827679352),
            Characteristic::ComGoogleCharacteristicEddystoneCapabilities => Uuid::from_u128(217704995850002355612370587781576909461),
            Characteristic::ComGoogleCharacteristicEddystoneActiveSlot => Uuid::from_u128(217704995929230518126634925375120859797),
            Characteristic::ComGoogleCharacteristicEddystoneAdvertisingInterval => Uuid::from_u128(217704996008458680640899262968664810133),
            Characteristic::ComGoogleCharacteristicEddystoneRadioTxPower => Uuid::from_u128(217704996087686843155163600562208760469),
            Characteristic::ComGoogleCharacteristicEddystoneAdvertisedTxPower => Uuid::from_u128(217704996166915005669427938155752710805),
            Characteristic::ComGoogleCharacteristicEddystoneLockState => Uuid::from_u128(217704996246143168183692275749296661141),
            Characteristic::ComGoogleCharacteristicEddystoneUnlock => Uuid::from_u128(217704996325371330697956613342840611477),
            Characteristic::ComGoogleCharacteristicEddystoneKeyPublicEcdh => Uuid::from_u128(217704996404599493212220950936384561813),
            Characteristic::ComGoogleCharacteristicEddystoneKeyEidIdentity => Uuid::from_u128(217704996483827655726485288529928512149),
            Characteristic::ComGoogleCharacteristicEddystoneAdvSlotData => Uuid::from_u128(217704996563055818240749626123472462485),
            Characteristic::ComGoogleCharacteristicEddystoneAdvancedFactoryReset => Uuid::from_u128(217704996642283980755013963717016412821),
            Characteristic::ComGoogleCharacteristicEddystoneRemainConnectable => Uuid::from_u128(217704996721512143269278301310560363157),
            Characteristic::ComGoogleServiceFastPairModelId => Uuid::from_u128(337852741155819505200571447741491710954),
            Characteristic::ComGoogleServiceFastPairKeyBasedPairing => Uuid::from_u128(337852741235047667714835785335035661290),
            Characteristic::ComGoogleServiceFastPairPasskey => Uuid::from_u128(337852741314275830229100122928579611626),
            Characteristic::ComGoogleServiceFastPairAccountKey => Uuid::from_u128(337852741393503992743364460522123561962),
            Characteristic::ComGoogleServiceFastPairData => Uuid::from_u128(337852741472732155257628798115667512298),
            Characteristic::ComGoogleServiceDeprecatedFastPairModelId => Uuid::from_u128(369124009229524635946823802631419),
            Characteristic::ComGoogleServiceDeprecatedFastPairKeyBasedPairing => Uuid::from_u128(369203237392038900284417346581755),
            Characteristic::ComGoogleServiceDeprecatedFastPairPasskey => Uuid::from_u128(369282465554553164622010890532091),
            Characteristic::ComGoogleServiceDeprecatedFastPairAccountKey => Uuid::from_u128(369361693717067428959604434482427),
            Characteristic::ComGoogleServiceDeprecatedFastPairData => Uuid::from_u128(369440921879581693297197978432763),
            Characteristic::ComAppleCharacteristicNotificationSource => Uuid::from_u128(212339346173761294871635651610145856957),
            Characteristic::ComAppleCharacteristicControlPoint => Uuid::from_u128(140658529875394647186162792281628400089),
            Characteristic::ComAppleCharacteristicDataSource => Uuid::from_u128(46412783710248206207163303161298189307),
            Characteristic::ComAppleCharacteristicMediaRemoteCommand => Uuid::from_u128(206344510729435551843004140382231089602),
            Characteristic::ComAppleCharacteristicMediaEntityUpdate => Uuid::from_u128(63121045265177914360981490370795192578),
            Characteristic::ComAppleCharacteristicMediaEntityAttribute => Uuid::from_u128(264116311734748017726814081126149903831),
            Characteristic::ComAppleCharacteristic7DFC6001 => Uuid::from_u128(167463905510735196137251190829227759212),
            Characteristic::ComAppleCharacteristic7DFC6002 => Uuid::from_u128(167463905589963358651515528422771709548),
            Characteristic::ComAppleCharacteristic7DFC6003 => Uuid::from_u128(167463905669191521165779866016315659884),
            Characteristic::ComAppleCharacteristic7DFC6004 => Uuid::from_u128(167463905748419683680044203609859610220),
            Characteristic::ComAppleCharacteristic7DFC6005 => Uuid::from_u128(167463905827647846194308541203403560556),
            Characteristic::ComAppleCharacteristic7DFC6101 => Uuid::from_u128(167463925793144799788921614776479045228),
            Characteristic::ComAppleCharacteristic7DFC6102 => Uuid::from_u128(167463925872372962303185952370022995564),
            Characteristic::ComAppleCharacteristic7DFC6103 => Uuid::from_u128(167463925951601124817450289963566945900),
            Characteristic::ComAppleCharacteristic7DFC6104 => Uuid::from_u128(167463926030829287331714627557110896236),
            Characteristic::ComAppleCharacteristic7DFC6105 => Uuid::from_u128(167463926110057449845978965150654846572),
            Characteristic::ComAppleCharacteristic7DFC6106 => Uuid::from_u128(167463926189285612360243302744198796908),
            Characteristic::ComAppleCharacteristic7DFC6107 => Uuid::from_u128(167463926268513774874507640337742747244),
            Characteristic::ComAppleCharacteristic7DFC6108 => Uuid::from_u128(167463926347741937388771977931286697580),
            Characteristic::ComAppleCharacteristic7DFC6201 => Uuid::from_u128(167463946075554403440592038723730331244),
            Characteristic::ComAppleCharacteristic7DFC6202 => Uuid::from_u128(167463946154782565954856376317274281580),
            Characteristic::ComAppleCharacteristic7DFC6203 => Uuid::from_u128(167463946234010728469120713910818231916),
            Characteristic::ComAppleCharacteristic7DFC7003 => Uuid::from_u128(167464554706298838019233432328356812396),
            Characteristic::ComAppleCharacteristic7DFC7004 => Uuid::from_u128(167464230266973342106770986765880186476),
            Characteristic::ComAppleCharacteristic7DFC7005 => Uuid::from_u128(167464230346201504621035324359424136812),
            Characteristic::ComAppleCharacteristic7DFC7006 => Uuid::from_u128(167464230425429667135299661952968087148),
            Characteristic::ComAppleCharacteristic7DFC7007 => Uuid::from_u128(167464230504657829649563999546512037484),
            Characteristic::ComAppleCharacteristic7DFC7008 => Uuid::from_u128(167464230583885992163828337140055987820),
            Characteristic::ComAppleCharacteristic7DFC7009 => Uuid::from_u128(167464230663114154678092674733599938156),
            Characteristic::ComAppleCharacteristic7DFC700A => Uuid::from_u128(167464230742342317192357012327143888492),
            Characteristic::ComAppleCharacteristic7DFC700B => Uuid::from_u128(167464230821570479706621349920687838828),
            Characteristic::ComAppleCharacteristic7DFC700C => Uuid::from_u128(167464230900798642220885687514231789164),
            Characteristic::ComAppleCharacteristic7DFC7103 => Uuid::from_u128(167464250470154783244177073119587522156),
            Characteristic::ComAppleCharacteristic7DFC7104 => Uuid::from_u128(167464250549382945758441410713131472492),
            Characteristic::ComAppleCharacteristic7DFC7105 => Uuid::from_u128(167464250628611108272705748306675422828),
            Characteristic::ComAppleCharacteristic7DFC7106 => Uuid::from_u128(167464250707839270786970085900219373164),
            Characteristic::ComAppleCharacteristic7DFC7107 => Uuid::from_u128(167464250787067433301234423493763323500),
            Characteristic::ComAppleCharacteristic7DFC7108 => Uuid::from_u128(167464250866295595815498761087307273836),
            Characteristic::ComAppleCharacteristic7DFC7109 => Uuid::from_u128(167464250945523758329763098680851224172),
            Characteristic::ComAppleCharacteristic7DFC710B => Uuid::from_u128(167464251103980083358291773867939124844),
            Characteristic::ComAppleCharacteristic7DFC710C => Uuid::from_u128(167464251183208245872556111461483075180),
            Characteristic::ComAppleCharacteristic7DFC710D => Uuid::from_u128(167464251262436408386820449055027025516),
            Characteristic::ComAppleCharacteristic7DFC8004 => Uuid::from_u128(167464554785527000533497769921900762732),
            Characteristic::ComAppleCharacteristic7DFC9001 => Uuid::from_u128(167464879066396171417431540297289487980),
            Characteristic::OrgMicrobitCharacteristicAccelerometerData => Uuid::from_u128(310197109626067603259494728914935196072),
            Characteristic::OrgMicrobitCharacteristicAccelerometerPeriod => Uuid::from_u128(310198100374239844135036336182034147752),
            Characteristic::OrgMicrobitCharacteristicMagnetometerData => Uuid::from_u128(310198098868904756364013921904699091368),
            Characteristic::OrgMicrobitCharacteristicMagnetometerPeriod => Uuid::from_u128(310194151008794833086335973203197798824),
            Characteristic::OrgMicrobitCharacteristicMagnetometerBearing => Uuid::from_u128(310196070944857041254028877553746291112),
            Characteristic::OrgMicrobitCharacteristicButtonAState => Uuid::from_u128(310197439611364475170460806025488345512),
            Characteristic::OrgMicrobitCharacteristicButtonBState => Uuid::from_u128(310197439690592637684725143619032295848),
            Characteristic::OrgMicrobitCharacteristicPinData => Uuid::from_u128(310195866456969591937773548616810473896),
            Characteristic::OrgMicrobitCharacteristicPinAdConfiguration => Uuid::from_u128(310194803611169463081684731224716716456),
            Characteristic::OrgMicrobitCharacteristicPinIoConfiguration => Uuid::from_u128(310196779006945431234413951056030443944),
            Characteristic::OrgMicrobitCharacteristicPwmControl => Uuid::from_u128(310197390331447391298042822841151236520),
            Characteristic::OrgMicrobitCharacteristicLedMatrixState => Uuid::from_u128(310195510801748065405162091198017415592),
            Characteristic::OrgMicrobitCharacteristicLedText => Uuid::from_u128(310196007007729892242708439563778369960),
            Characteristic::OrgMicrobitCharacteristicScrollingDelay => Uuid::from_u128(310193273873807637665854475078123628968),
            Characteristic::OrgMicrobitCharacteristicRequirements => Uuid::from_u128(310196744621922900043691435457955998120),
            Characteristic::OrgMicrobitCharacteristicEvent => Uuid::from_u128(310196078550760642623405286533965523368),
            Characteristic::OrgMicrobitCharacteristicClientRequirements => Uuid::from_u128(310193732050271457656518778542788422056),
            Characteristic::OrgMicrobitCharacteristicClientEvent => Uuid::from_u128(310194710676534833849616733997662972328),
            Characteristic::OrgMicrobitCharacteristicDfuControl => Uuid::from_u128(310196002174811978872583846357597399464),
            Characteristic::OrgMicrobitCharacteristicTemperature => Uuid::from_u128(310195974207270611337272675836582930856),
            Characteristic::OrgMicrobitCharacteristicTemperaturePeriod => Uuid::from_u128(310193557193716788675125709591290030504),
            Characteristic::MeshProvisioningDataIn => Uuid::from_u128(869212171019561134837273217152251),
            Characteristic::MeshProvisioningDataOut => Uuid::from_u128(869291399182075399174866761102587),
            Characteristic::MeshProxyDataIn => Uuid::from_u128(869370627344589663512460305052923),
            Characteristic::MeshProxyDataOut => Uuid::from_u128(869449855507103927850053849003259),
            Characteristic::ComLegoCharacteristicLwp3Hub => Uuid::from_u128(449070818754434164596024402563363),
            Characteristic::ComLegoCharacteristicLwp3Bootloader => Uuid::from_u128(449229275079462693271211490464035),
            Characteristic::ComAdafruitCharacteristicMeasurementPeriod => Uuid::from_u128(230865095360672541353645396296436378808),
            Characteristic::ComAdafruitCharacteristicServiceVersion => Uuid::from_u128(230865095439900703867909733889980329144),
            Characteristic::ComAdafruitCharacteristicTemperature => Uuid::from_u128(230865115643082145005315820243687664824),
            Characteristic::ComAdafruitCharacteristicAcceleration => Uuid::from_u128(230865135925491748656986244190938950840),
            Characteristic::ComAdafruitCharacteristicLightLevel => Uuid::from_u128(230865156207901352308656668138190236856),
            Characteristic::ComAdafruitCharacteristicGyro => Uuid::from_u128(230865176490310955960327092085441522872),
            Characteristic::ComAdafruitCharacteristicMagnetic => Uuid::from_u128(230865196772720559611997516032692808888),
            Characteristic::ComAdafruitCharacteristicPressed => Uuid::from_u128(230865217055130163263667939979944094904),
            Characteristic::ComAdafruitCharacteristicHumidity => Uuid::from_u128(230865237337539766915338363927195380920),
            Characteristic::ComAdafruitCharacteristicPressure => Uuid::from_u128(230865257619949370567008787874446666936),
            Characteristic::ComAdafruitCharacteristicPixelPin => Uuid::from_u128(230865277902358974218679211821697952952),
            Characteristic::ComAdafruitCharacteristicPixelPinType => Uuid::from_u128(230865277981587136732943549415241903288),
            Characteristic::ComAdafruitCharacteristicPixelData => Uuid::from_u128(230865278060815299247207887008785853624),
            Characteristic::ComAdafruitCharacteristicPixelBufferSize => Uuid::from_u128(230865278140043461761472224602329803960),
            Characteristic::ComAdafruitCharacteristicColor => Uuid::from_u128(230865298184768577870349635768949238968),
            Characteristic::ComAdafruitCharacteristicSoundSamples => Uuid::from_u128(230865318467178181522020059716200524984),
            Characteristic::ComAdafruitCharacteristicNumberOfChannels => Uuid::from_u128(230865318546406344036284397309744475320),
            Characteristic::ComAdafruitCharacteristicTone => Uuid::from_u128(230865338749587785173690483663451811000),
            Characteristic::ComAdafruitCharacteristicQuaternions => Uuid::from_u128(230865359031997388825360907610703097016),
            Characteristic::ComAdafruitCharacteristicQuaternionCalibrationIn => Uuid::from_u128(230865359111225551339625245204247047352),
            Characteristic::ComAdafruitCharacteristicQuaternionCalibrationOut => Uuid::from_u128(230865359190453713853889582797790997688),
            Characteristic::ComAdafruitCharacteristicProximity => Uuid::from_u128(230865379314406992477031331557954383032),
            Characteristic::ComAdafruitCharacteristicFileTransferVersion => Uuid::from_u128(230865115525235044282361907647332377970),
            Characteristic::ComAdafruitCharacteristicFileTransferRaw => Uuid::from_u128(230865135807644647934032331594583663986),
            Characteristic::ComTiCharacteristicImageIdentity => Uuid::from_u128(319019906295200271200700162016362364928),
            Characteristic::ComTiCharacteristicImageBlock => Uuid::from_u128(319019906374428433714964499609906315264),
            Characteristic::ComTiCharacteristicOadControl => Uuid::from_u128(319019906612112921257757512390538166272),
        }
    }
}

impl TryFrom<Uuid> for Characteristic {
    type Error = Uuid;
    fn try_from(uuid: Uuid) -> Result<Self, Uuid> {
        #[allow(unreachable_patterns)]
        #[allow(clippy::match_overlapping_arm)]
        match uuid.as_u128() {
            861843951905734551441073629771003 => Ok(Self::AerobicHeartRateLowerLimit),
            862319320880820137466634893473019 => Ok(Self::AerobicHeartRateUpperLimit),
            861923180068248815778667173721339 => Ok(Self::AerobicThreshold),
            862002408230763080116260717671675 => Ok(Self::Age),
            858991738055221035287706047558907 => Ok(Self::Aggregate),
            857169490317392955523054536701179 => Ok(Self::AlertCategoryId),
            857090262154878691185460992750843 => Ok(Self::AlertCategoryIdBitMask),
            852336572404022830929848355730683 => Ok(Self::AlertLevel),
            857248718479907219860648080651515 => Ok(Self::AlertNotificationControlPoint),
            856852577667335898172680360899835 => Ok(Self::AlertStatus),
            866043044518990561333531459138811 => Ok(Self::Altitude),
            862081636393277344453854261622011 => Ok(Self::AnaerobicHeartRateLowerLimit),
            862160864555791608791447805572347 => Ok(Self::AnaerobicHeartRateUpperLimit),
            862240092718305873129041349522683 => Ok(Self::AnaerobicThreshold),
            858833281730192506612518959658235 => Ok(Self::Analog),
            858912509892706770950112503608571 => Ok(Self::AnalogOutput),
            860972442118077643727544646317307 => Ok(Self::ApparentWindDirection),
            860893213955563379389951102366971 => Ok(Self::ApparentWindSpeed),
            851940431591451509241880635979003 => Ok(Self::GapAppearance),
            864775393918762331932034755933435 => Ok(Self::BarometricPressureTrend),
            853841907491793853344125690787067 => Ok(Self::BatteryLevel),
            854000363816822382019312778687739 => Ok(Self::BatteryLevelState),
            853921135654308117681719234737403 => Ok(Self::BatteryPowerState),
            857644859292478541548615800403195 => Ok(Self::BloodPressureFeature),
            856060296042193254796744921396475 => Ok(Self::BloodPressureMeasurement),
            864141568618648217231286404330747 => Ok(Self::BodyCompositionFeature),
            864220796781162481568879948281083 => Ok(Self::BodyCompositionMeasurement),
            856297980529736047809525553247483 => Ok(Self::BodySensorLocation),
            864854622081276596269628299883771 => Ok(Self::BondManagementControlPoint),
            864933850243790860607221843834107 => Ok(Self::BondManagementFeature),
            854554960954422232382467586340091 => Ok(Self::BootKeyboardInputReport),
            855822611554650461783964289545467 => Ok(Self::BootKeyboardOutputReport),
            855901839717164726121557833495803 => Ok(Self::BootMouseInputReport),
            865013078406305124944815387784443 => Ok(Self::GapCentralAddressResolution),
            865171534731333653620002475685115 => Ok(Self::CgmFeature),
            865092306568819389282408931734779 => Ok(Self::CgmMeasurement),
            865409219218876446632783107536123 => Ok(Self::CgmSessionRunTime),
            865329991056362182295189563585787 => Ok(Self::CgmSessionStartTime),
            865488447381390710970376651486459 => Ok(Self::CgmSpecificOpsControlPoint),
            865250762893847917957596019635451 => Ok(Self::CgmStatus),
            868182204906875698448557145797883 => Ok(Self::CrossTrainerData),
            859150194380249563962893135459579 => Ok(Self::CscFeature),
            859070966217735299625299591509243 => Ok(Self::CscMeasurement),
            855268014417050611420809481893115 => Ok(Self::CurrentTime),
            859942476005392207338828574962939 => Ok(Self::CyclingPowerControlPoint),
            859863247842877943001235031012603 => Ok(Self::CyclingPowerFeature),
            859704791517849414326047943111931 => Ok(Self::CyclingPowerMeasurement),
            859784019680363678663641487062267 => Ok(Self::CyclingPowerVector),
            863983112293619688556099316430075 => Ok(Self::DatabaseChangeIncrement),
            862398549043334401804228437423355 => Ok(Self::DateOfBirth),
            862477777205848666141821981373691 => Ok(Self::DateOfThresholdAssessment),
            852495028729051359605035443631355 => Ok(Self::DateTime),
            870638277944817892913957008258299 => Ok(Self::DateUtc),
            852653485054079888280222531532027 => Ok(Self::DayDateTime),
            852574256891565623942628987581691 => Ok(Self::DayOfWeek),
            861764723743220287103480085820667 => Ok(Self::DescriptorValueChanged),
            851861203428937244904287092028667 => Ok(Self::GapDeviceName),
            861606267418191758428292997919995 => Ok(Self::DewPoint),
            858674825405163977937331871757563 => Ok(Self::Digital),
            858754053567678242274925415707899 => Ok(Self::DigitalOutput),
            852891169541622681293003163383035 => Ok(Self::DstOffset),
            860417844980477793364389838664955 => Ok(Self::Elevation),
            862557005368362930479415525324027 => Ok(Self::EmailAddress),
            852732713216594152617816075482363 => Ok(Self::ExactTime100),
            852811941379108416955409619432699 => Ok(Self::ExactTime256),
            862636233530877194817009069274363 => Ok(Self::FatBurnHeartRateLowerLimit),
            862715461693391459154602613224699 => Ok(Self::FatBurnHeartRateUpperLimit),
            854871873604479289732841762141435 => Ok(Self::FirmwareRevisionString),
            862794689855905723492196157175035 => Ok(Self::FirstName),
            869053714694532606162086129251579 => Ok(Self::FitnessMachineControlPoint),
            868023748581847169773370057897211 => Ok(Self::FitnessMachineFeature),
            869132942857046870499679673201915 => Ok(Self::FitnessMachineStatus),
            862873918018419987829789701125371 => Ok(Self::FiveZoneHeartRateLimits),
            865963816356476296995937915188475 => Ok(Self::FloorNumber),
            862953146180934252167383245075707 => Ok(Self::Gender),
            858278684592592656249364152005883 => Ok(Self::GlucoseFeature),
            853762679329279589006532146836731 => Ok(Self::GlucoseMeasurement),
            855981067879678990459151377446139 => Ok(Self::GlucoseMeasurementContext),
            861051670280591908065138190267643 => Ok(Self::GustFactor),
            854951101766993554070435306091771 => Ok(Self::HardwareRevisionString),
            856377208692250312147119097197819 => Ok(Self::HeartRateControlPoint),
            863032374343448516504976789026043 => Ok(Self::HeartRateMax),
            856218752367221783471932009297147 => Ok(Self::HeartRateMeasurement),
            861527039255677494090699453969659 => Ok(Self::HeatIndex),
            863111602505962780842570332976379 => Ok(Self::Height),
            857882543780021334561396432254203 => Ok(Self::HidControlPoint),
            857724087454992805886209344353531 => Ok(Self::HidInformation),
            863190830668477045180163876926715 => Ok(Self::HipCircumference),
            866597641656590411696686266791163 => Ok(Self::HttpControlPoint),
            866518413494076147359092722840827 => Ok(Self::HttpEntityBody),
            866359957169047618683905634940155 => Ok(Self::HttpHeaders),
            866439185331561883021499178890491 => Ok(Self::HttpStatusCode),
            866676869819104676034279810741499 => Ok(Self::HttpsSecurity),
            860655529468020586377170470515963 => Ok(Self::Humidity),
            874837370558073902806414837626107 => Ok(Self::IddAnnunciationStatus),
            875075055045616695819195469477115 => Ok(Self::IddCommandControlPoint),
            875154283208130960156789013427451 => Ok(Self::IddCommandData),
            874916598720588167144008381576443 => Ok(Self::IddFeatures),
            875312739533159488831976101328123 => Ok(Self::IddHistoryData),
            875233511370645224494382557377787 => Ok(Self::IddRecordAccessControlPoint),
            874758142395559638468821293675771 => Ok(Self::IddStatus),
            874678914233045374131227749725435 => Ok(Self::IddStatusChanged),
            874995826883102431481601925526779 => Ok(Self::IddStatusReaderControlPoint),
            875391967695673753169569645278459 => Ok(Self::ClientSupportedFeatures),
            875471195858188017507163189228795 => Ok(Self::DatabaseHash),
            855188786254536347083215937942779 => Ok(Self::Ieee1107320601RegulatoryCertificationDataList),
            868499117556932755798931321599227 => Ok(Self::IndoorBikeData),
            865567675543904975307970195436795 => Ok(Self::IndoorPositioningConfiguration),
            856139524204707519134338465346811 => Ok(Self::IntermediateCuffPressure),
            854238048304365175032093410538747 => Ok(Self::IntermediateTemperature),
            861289354768134701077918822118651 => Ok(Self::Irradiance),
            864696165756248067594441211983099 => Ok(Self::Language),
            863270058830991309517757420877051 => Ok(Self::LastName),
            865646903706419239645563739387131 => Ok(Self::Latitude),
            860338616817963529026796294714619 => Ok(Self::LnControlPoint),
            860259388655449264689202750764283 => Ok(Self::LnFeature),
            865884588193962032658344371238139 => Ok(Self::LocalEastCoordinate),
            865805360031447768320750827287803 => Ok(Self::LocalNorthCoordinate),
            853049625866651209968190251283707 => Ok(Self::LocalTimeInformation),
            860021704167906471676422118913275 => Ok(Self::LocationAndSpeed),
            866201500844019090008718547039483 => Ok(Self::LocationName),
            865726131868933503983157283337467 => Ok(Self::Longitude),
            855347242579564875758403025843451 => Ok(Self::MagneticDeclination),
            864537709431219538919254124082427 => Ok(Self::MagneticFluxDensity2D),
            864616937593733803256847668032763 => Ok(Self::MagneticFluxDensity3D),
            855109558092022082745622393992443 => Ok(Self::ManufacturerNameString),
            863349286993505573855350964827387 => Ok(Self::MaximumRecommendedHeartRate),
            854475732791907968044874042389755 => Ok(Self::MeasurementInterval),
            854713417279450761057654674240763 => Ok(Self::ModelNumberString),
            860100932330420736014015662863611 => Ok(Self::Navigation),
            856773349504821633835086816949499 => Ok(Self::NetworkAvailability),
            857407174804935748535835168552187 => Ok(Self::NewAlert),
            867469151444247319410215250244859 => Ok(Self::ObjectActionControlPoint),
            867706835931790112422995882095867 => Ok(Self::ObjectChanged),
            867152238794190262059841074443515 => Ok(Self::ObjectFirstCreated),
            867310695119218790735028162344187 => Ok(Self::ObjectId),
            867231466956704526397434618393851 => Ok(Self::ObjectLastModified),
            867548379606761583747808794195195 => Ok(Self::ObjectListControlPoint),
            867627607769275848085402338145531 => Ok(Self::ObjectListFilter),
            866914554306647469047060442592507 => Ok(Self::ObjectName),
            867389923281733055072621706294523 => Ok(Self::ObjectProperties),
            867073010631675997722247530493179 => Ok(Self::ObjectSize),
            866993782469161733384653986542843 => Ok(Self::ObjectType),
            866835326144133204709466898642171 => Ok(Self::OtsFeature),
            852178116078994302254661267830011 => Ok(Self::GapPeripheralPreferredConnectionParameters),
            852019659753965773579474179929339 => Ok(Self::GapPeripheralPrivacyFlag),
            859387878867792356975673767310587 => Ok(Self::PlxContinuousMeasurement),
            859467107030306621313267311260923 => Ok(Self::PlxFeatures),
            859308650705278092638080223360251 => Ok(Self::PlxSpotCheckMeasurement),
            858199456430078391911770608055547 => Ok(Self::PnpId),
            861130898443106172402731734217979 => Ok(Self::PollenConcentration),
            855584927067107668771183657694459 => Ok(Self::Position2d),
            855664155229621933108777201644795 => Ok(Self::Position3d),
            860180160492935000351609206813947 => Ok(Self::PositionQuality),
            860497073142992057701983382615291 => Ok(Self::Pressure),
            858041000105049863236583520154875 => Ok(Self::ProtocolMode),
            859625563355335149988454399161595 => Ok(Self::PulseOximetryControlPoint),
            861368582930648965415512366068987 => Ok(Self::Rainfall),
            874441229745502581118447117874427 => Ok(Self::RcFeature),
            874520457908016845456040661824763 => Ok(Self::RcSettings),
            852098887916480037917067723879675 => Ok(Self::GapReconnectionAddress),
            874599686070531109793634205775099 => Ok(Self::ReconnectionConfigurationControlPoint),
            858357912755106920586957695956219 => Ok(Self::RecordAccessControlPoint),
            853445766679222531656157971035387 => Ok(Self::ReferenceTimeInformation),
            856456436854764576484712641148155 => Ok(Self::Removable),
            857961771942535598898989976204539 => Ok(Self::Report),
            857803315617507070223802888303867 => Ok(Self::ReportMap),
            867786064094304376760589426046203 => Ok(Self::ResolvablePrivateAddressOnly),
            863428515156019838192944508777723 => Ok(Self::RestingHeartRate),
            856931805829850162510273904850171 => Ok(Self::RingerControlPoint),
            857011033992364426847867448800507 => Ok(Self::RingerSetting),
            868419889394418491461337777648891 => Ok(Self::RowerData),
            858516369080135449262144783856891 => Ok(Self::RscFeature),
            858437140917621184924551239906555 => Ok(Self::RscMeasurement),
            858595597242649713599738327807227 => Ok(Self::ScControlPoint),
            858120228267564127574177064105211 => Ok(Self::ScanIntervalWindow),
            855743383392136197446370745595131 => Ok(Self::ScanRefresh),
            856614893179793105159899729048827 => Ok(Self::ScientificTemperatureCelsius),
            853128854029165474305783795234043 => Ok(Self::SecondaryTimeZone),
            859229422542763828300486679409915 => Ok(Self::SensorLocation),
            854792645441965025395248218191099 => Ok(Self::SerialNumberString),
            852257344241508566592254811780347 => Ok(Self::GattServiceChanged),
            856535665017278840822306185098491 => Ok(Self::ServiceRequired),
            855030329929507818408028850042107 => Ok(Self::SoftwareRevisionString),
            863507743318534102530538052728059 => Ok(Self::SportTypeForAerobicAndAnaerobicThresholds),
            868340661231904227123744233698555 => Ok(Self::StairClimberData),
            868261433069389962786150689748219 => Ok(Self::StepClimberData),
            856694121342307369497493272999163 => Ok(Self::String),
            868895258369504077486899041350907 => Ok(Self::SupportedHeartRateRange),
            868736802044475548811711953450235 => Ok(Self::SupportedInclinationRange),
            857486402967450012873428712502523 => Ok(Self::SupportedNewAlertCategory),
            868974486532018341824492585301243 => Ok(Self::SupportedPowerRange),
            868816030206989813149305497400571 => Ok(Self::SupportedResistanceLevelRange),
            868657573881961284474118409499899 => Ok(Self::SupportedSpeedRange),
            857565631129964277211022256452859 => Ok(Self::SupportedUnreadAlertCategory),
            854634189116936496720061130290427 => Ok(Self::SystemId),
            866756097981618940371873354691835 => Ok(Self::TdsControlPoint),
            860576301305506322039576926565627 => Ok(Self::Temperature),
            854317276466879439369686954489083 => Ok(Self::TemperatureCelsius),
            854396504629393703707280498439419 => Ok(Self::TemperatureFahrenheit),
            854079591979336646356906322638075 => Ok(Self::TemperatureMeasurement),
            854158820141850910694499866588411 => Ok(Self::TemperatureType),
            863586971481048366868131596678395 => Ok(Self::ThreeZoneHeartRateLimits),
            853287310354194002980970883134715 => Ok(Self::TimeAccuracy),
            853524994841736795993751514985723 => Ok(Self::TimeBroadcast),
            853366538516708267318564427085051 => Ok(Self::TimeSource),
            853604223004251060331345058936059 => Ok(Self::TimeUpdateControlPoint),
            853683451166765324668938602886395 => Ok(Self::TimeUpdateState),
            853208082191679738643377339184379 => Ok(Self::TimeWithDst),
            852970397704136945630596707333371 => Ok(Self::TimeZone),
            868578345719447020136524865549563 => Ok(Self::TrainingStatus),
            868102976744361434110963601847547 => Ok(Self::TreadmillData),
            860813985793049115052357558416635 => Ok(Self::TrueWindDirection),
            860734757630534850714764014466299 => Ok(Self::TrueWindSpeed),
            863666199643562631205725140628731 => Ok(Self::TwoZoneHeartRateLimit),
            852415800566537095267441899681019 => Ok(Self::TxPowerLevel),
            866122272681504825671125003089147 => Ok(Self::Uncertainty),
            857327946642421484198241624601851 => Ok(Self::UnreadAlertStatus),
            866280729006533354346312090989819 => Ok(Self::Uri),
            864458481268705274581660580132091 => Ok(Self::UserControlPoint),
            864062340456133952893692860380411 => Ok(Self::UserIndex),
            861210126605620436740325278168315 => Ok(Self::UvIndex),
            863745427806076895543318684579067 => Ok(Self::Vo2Max),
            863824655968591159880912228529403 => Ok(Self::WaistCircumference),
            863903884131105424218505772479739 => Ok(Self::Weight),
            864300024943676745906473492231419 => Ok(Self::WeightMeasurement),
            864379253106191010244067036181755 => Ok(Self::WeightScaleFeature),
            861447811093163229753105910019323 => Ok(Self::WindChill),
            428788409150782422114483113349411 => Ok(Self::ComNordicsemiCharacteristicBlinkyButtonState),
            428867637313296686452076657299747 => Ok(Self::ComNordicsemiCharacteristicBlinkyLedState),
            429818375263467858503199184703779 => Ok(Self::ComNordicsemiCharacteristicDfuLegacyControlPoint),
            429897603425982122840792728654115 => Ok(Self::ComNordicsemiCharacteristicDfuLegacyPacket),
            430056059751010651515979816554787 => Ok(Self::ComNordicsemiCharacteristicDfuLegacyVersion),
            189794027224482336498087000075109329488 => Ok(Self::ComNordicsemiCharacteristicDfuSecureControlPoint),
            189794027303710499012351337668653279824 => Ok(Self::ComNordicsemiCharacteristicDfuSecurePacket),
            189794027382938661526615675262197230160 => Ok(Self::ComNordicsemiCharacteristicDfuButtonlessExperimentalWithoutBonds),
            189794027462166824040880012855741180496 => Ok(Self::ComNordicsemiCharacteristicDfuButtonlessExperimentalWithBonds),
            189082682554863065112978322078006176336 => Ok(Self::ComNordicsemiCharacteristicDfuButtonlessExperimental),
            290012985872813345694579889415449574472 => Ok(Self::IoRuntimeMcumgrBleSmp),
            195626005536763819649493098382971394525 => Ok(Self::ComPhillipsHueCharacteristicToggle),
            195626005536765028575312713012146100701 => Ok(Self::ComPhillipsHueCharacteristicBrightness),
            195626005536767446426951942270495513053 => Ok(Self::ComPhillipsHueCharacteristicColor),
            318225510275554877138770600741443993666 => Ok(Self::ComNordicsemiCharacteristicThingyDeviceName),
            318225510354783039653034938334987944002 => Ok(Self::ComNordicsemiCharacteristicThingyAdvertisingParam),
            318225510513239364681563613522075844674 => Ok(Self::ComNordicsemiCharacteristicThingyConnectionParam),
            318225510592467527195827951115619795010 => Ok(Self::ComNordicsemiCharacteristicThingyEddystoneUrl),
            318225510671695689710092288709163745346 => Ok(Self::ComNordicsemiCharacteristicThingyCloudToken),
            318225510750923852224356626302707695682 => Ok(Self::ComNordicsemiCharacteristicThingyFwVersion),
            318225510830152014738620963896251646018 => Ok(Self::ComNordicsemiCharacteristicThingyMtuRequest),
            318225530557964480790441024688695279682 => Ok(Self::ComNordicsemiCharacteristicThingyTemperature),
            318225530637192643304705362282239230018 => Ok(Self::ComNordicsemiCharacteristicThingyPressure),
            318225530716420805818969699875783180354 => Ok(Self::ComNordicsemiCharacteristicThingyHumidity),
            318225530795648968333234037469327130690 => Ok(Self::ComNordicsemiCharacteristicThingyGas),
            318225530874877130847498375062871081026 => Ok(Self::ComNordicsemiCharacteristicThingyColor),
            318225530954105293361762712656415031362 => Ok(Self::ComNordicsemiCharacteristicThingyConfiguration),
            318225550840374084442111448635946565698 => Ok(Self::ComNordicsemiCharacteristicThingyLed),
            318225550919602246956375786229490516034 => Ok(Self::ComNordicsemiCharacteristicThingyButton),
            318225550998830409470640123823034466370 => Ok(Self::ComNordicsemiCharacteristicThingyExtPin),
            318225571122783688093781872583197851714 => Ok(Self::ComNordicsemiCharacteristicThingyMotionConfig),
            318225571202011850608046210176741802050 => Ok(Self::ComNordicsemiCharacteristicThingyTap),
            318225571281240013122310547770285752386 => Ok(Self::ComNordicsemiCharacteristicThingyOrientation),
            318225571360468175636574885363829702722 => Ok(Self::ComNordicsemiCharacteristicThingyQuaternion),
            318225571439696338150839222957373653058 => Ok(Self::ComNordicsemiCharacteristicThingyPedometer),
            318225571518924500665103560550917603394 => Ok(Self::ComNordicsemiCharacteristicThingyRawData),
            318225571598152663179367898144461553730 => Ok(Self::ComNordicsemiCharacteristicThingyEuler),
            318225571677380825693632235738005504066 => Ok(Self::ComNordicsemiCharacteristicThingyRotationMatrix),
            318225571756608988207896573331549454402 => Ok(Self::ComNordicsemiCharacteristicThingyHeading),
            318225571835837150722160910925093404738 => Ok(Self::ComNordicsemiCharacteristicThingyGravityVector),
            318225591405193291745452296530449137730 => Ok(Self::ComNordicsemiCharacteristicThingySoundConfig),
            318225591484421454259716634123993088066 => Ok(Self::ComNordicsemiCharacteristicThingySpeakerData),
            318225591563649616773980971717537038402 => Ok(Self::ComNordicsemiCharacteristicThingySpeakerStatus),
            318225591642877779288245309311080988738 => Ok(Self::ComNordicsemiCharacteristicThingyMicrophone),
            146547386749958291965349483921220094622 => Ok(Self::ComNordicsemiCharacteristicUartRx),
            146547386829186454479613821514764044958 => Ok(Self::ComNordicsemiCharacteristicUartTx),
            301236294776310956362265365830283729016 => Ok(Self::ComNordicsemiCharacteristicEdgeImpulseUartRx),
            301236294855539118876529703423827679352 => Ok(Self::ComNordicsemiCharacteristicEdgeImpulseUartTx),
            217704995850002355612370587781576909461 => Ok(Self::ComGoogleCharacteristicEddystoneCapabilities),
            217704995929230518126634925375120859797 => Ok(Self::ComGoogleCharacteristicEddystoneActiveSlot),
            217704996008458680640899262968664810133 => Ok(Self::ComGoogleCharacteristicEddystoneAdvertisingInterval),
            217704996087686843155163600562208760469 => Ok(Self::ComGoogleCharacteristicEddystoneRadioTxPower),
            217704996166915005669427938155752710805 => Ok(Self::ComGoogleCharacteristicEddystoneAdvertisedTxPower),
            217704996246143168183692275749296661141 => Ok(Self::ComGoogleCharacteristicEddystoneLockState),
            217704996325371330697956613342840611477 => Ok(Self::ComGoogleCharacteristicEddystoneUnlock),
            217704996404599493212220950936384561813 => Ok(Self::ComGoogleCharacteristicEddystoneKeyPublicEcdh),
            217704996483827655726485288529928512149 => Ok(Self::ComGoogleCharacteristicEddystoneKeyEidIdentity),
            217704996563055818240749626123472462485 => Ok(Self::ComGoogleCharacteristicEddystoneAdvSlotData),
            217704996642283980755013963717016412821 => Ok(Self::ComGoogleCharacteristicEddystoneAdvancedFactoryReset),
            217704996721512143269278301310560363157 => Ok(Self::ComGoogleCharacteristicEddystoneRemainConnectable),
            337852741155819505200571447741491710954 => Ok(Self::ComGoogleServiceFastPairModelId),
            337852741235047667714835785335035661290 => Ok(Self::ComGoogleServiceFastPairKeyBasedPairing),
            337852741314275830229100122928579611626 => Ok(Self::ComGoogleServiceFastPairPasskey),
            337852741393503992743364460522123561962 => Ok(Self::ComGoogleServiceFastPairAccountKey),
            337852741472732155257628798115667512298 => Ok(Self::ComGoogleServiceFastPairData),
            369124009229524635946823802631419 => Ok(Self::ComGoogleServiceDeprecatedFastPairModelId),
            369203237392038900284417346581755 => Ok(Self::ComGoogleServiceDeprecatedFastPairKeyBasedPairing),
            369282465554553164622010890532091 => Ok(Self::ComGoogleServiceDeprecatedFastPairPasskey),
            369361693717067428959604434482427 => Ok(Self::ComGoogleServiceDeprecatedFastPairAccountKey),
            369440921879581693297197978432763 => Ok(Self::ComGoogleServiceDeprecatedFastPairData),
            212339346173761294871635651610145856957 => Ok(Self::ComAppleCharacteristicNotificationSource),
            140658529875394647186162792281628400089 => Ok(Self::ComAppleCharacteristicControlPoint),
            46412783710248206207163303161298189307 => Ok(Self::ComAppleCharacteristicDataSource),
            206344510729435551843004140382231089602 => Ok(Self::ComAppleCharacteristicMediaRemoteCommand),
            63121045265177914360981490370795192578 => Ok(Self::ComAppleCharacteristicMediaEntityUpdate),
            264116311734748017726814081126149903831 => Ok(Self::ComAppleCharacteristicMediaEntityAttribute),
            167463905510735196137251190829227759212 => Ok(Self::ComAppleCharacteristic7DFC6001),
            167463905589963358651515528422771709548 => Ok(Self::ComAppleCharacteristic7DFC6002),
            167463905669191521165779866016315659884 => Ok(Self::ComAppleCharacteristic7DFC6003),
            167463905748419683680044203609859610220 => Ok(Self::ComAppleCharacteristic7DFC6004),
            167463905827647846194308541203403560556 => Ok(Self::ComAppleCharacteristic7DFC6005),
            167463925793144799788921614776479045228 => Ok(Self::ComAppleCharacteristic7DFC6101),
            167463925872372962303185952370022995564 => Ok(Self::ComAppleCharacteristic7DFC6102),
            167463925951601124817450289963566945900 => Ok(Self::ComAppleCharacteristic7DFC6103),
            167463926030829287331714627557110896236 => Ok(Self::ComAppleCharacteristic7DFC6104),
            167463926110057449845978965150654846572 => Ok(Self::ComAppleCharacteristic7DFC6105),
            167463926189285612360243302744198796908 => Ok(Self::ComAppleCharacteristic7DFC6106),
            167463926268513774874507640337742747244 => Ok(Self::ComAppleCharacteristic7DFC6107),
            167463926347741937388771977931286697580 => Ok(Self::ComAppleCharacteristic7DFC6108),
            167463946075554403440592038723730331244 => Ok(Self::ComAppleCharacteristic7DFC6201),
            167463946154782565954856376317274281580 => Ok(Self::ComAppleCharacteristic7DFC6202),
            167463946234010728469120713910818231916 => Ok(Self::ComAppleCharacteristic7DFC6203),
            167464554706298838019233432328356812396 => Ok(Self::ComAppleCharacteristic7DFC7003),
            167464230266973342106770986765880186476 => Ok(Self::ComAppleCharacteristic7DFC7004),
            167464230346201504621035324359424136812 => Ok(Self::ComAppleCharacteristic7DFC7005),
            167464230425429667135299661952968087148 => Ok(Self::ComAppleCharacteristic7DFC7006),
            167464230504657829649563999546512037484 => Ok(Self::ComAppleCharacteristic7DFC7007),
            167464230583885992163828337140055987820 => Ok(Self::ComAppleCharacteristic7DFC7008),
            167464230663114154678092674733599938156 => Ok(Self::ComAppleCharacteristic7DFC7009),
            167464230742342317192357012327143888492 => Ok(Self::ComAppleCharacteristic7DFC700A),
            167464230821570479706621349920687838828 => Ok(Self::ComAppleCharacteristic7DFC700B),
            167464230900798642220885687514231789164 => Ok(Self::ComAppleCharacteristic7DFC700C),
            167464250470154783244177073119587522156 => Ok(Self::ComAppleCharacteristic7DFC7103),
            167464250549382945758441410713131472492 => Ok(Self::ComAppleCharacteristic7DFC7104),
            167464250628611108272705748306675422828 => Ok(Self::ComAppleCharacteristic7DFC7105),
            167464250707839270786970085900219373164 => Ok(Self::ComAppleCharacteristic7DFC7106),
            167464250787067433301234423493763323500 => Ok(Self::ComAppleCharacteristic7DFC7107),
            167464250866295595815498761087307273836 => Ok(Self::ComAppleCharacteristic7DFC7108),
            167464250945523758329763098680851224172 => Ok(Self::ComAppleCharacteristic7DFC7109),
            167464251103980083358291773867939124844 => Ok(Self::ComAppleCharacteristic7DFC710B),
            167464251183208245872556111461483075180 => Ok(Self::ComAppleCharacteristic7DFC710C),
            167464251262436408386820449055027025516 => Ok(Self::ComAppleCharacteristic7DFC710D),
            167464554785527000533497769921900762732 => Ok(Self::ComAppleCharacteristic7DFC8004),
            167464879066396171417431540297289487980 => Ok(Self::ComAppleCharacteristic7DFC9001),
            310197109626067603259494728914935196072 => Ok(Self::OrgMicrobitCharacteristicAccelerometerData),
            310198100374239844135036336182034147752 => Ok(Self::OrgMicrobitCharacteristicAccelerometerPeriod),
            310198098868904756364013921904699091368 => Ok(Self::OrgMicrobitCharacteristicMagnetometerData),
            310194151008794833086335973203197798824 => Ok(Self::OrgMicrobitCharacteristicMagnetometerPeriod),
            310196070944857041254028877553746291112 => Ok(Self::OrgMicrobitCharacteristicMagnetometerBearing),
            310197439611364475170460806025488345512 => Ok(Self::OrgMicrobitCharacteristicButtonAState),
            310197439690592637684725143619032295848 => Ok(Self::OrgMicrobitCharacteristicButtonBState),
            310195866456969591937773548616810473896 => Ok(Self::OrgMicrobitCharacteristicPinData),
            310194803611169463081684731224716716456 => Ok(Self::OrgMicrobitCharacteristicPinAdConfiguration),
            310196779006945431234413951056030443944 => Ok(Self::OrgMicrobitCharacteristicPinIoConfiguration),
            310197390331447391298042822841151236520 => Ok(Self::OrgMicrobitCharacteristicPwmControl),
            310195510801748065405162091198017415592 => Ok(Self::OrgMicrobitCharacteristicLedMatrixState),
            310196007007729892242708439563778369960 => Ok(Self::OrgMicrobitCharacteristicLedText),
            310193273873807637665854475078123628968 => Ok(Self::OrgMicrobitCharacteristicScrollingDelay),
            310196744621922900043691435457955998120 => Ok(Self::OrgMicrobitCharacteristicRequirements),
            310196078550760642623405286533965523368 => Ok(Self::OrgMicrobitCharacteristicEvent),
            310193732050271457656518778542788422056 => Ok(Self::OrgMicrobitCharacteristicClientRequirements),
            310194710676534833849616733997662972328 => Ok(Self::OrgMicrobitCharacteristicClientEvent),
            310196002174811978872583846357597399464 => Ok(Self::OrgMicrobitCharacteristicDfuControl),
            310195974207270611337272675836582930856 => Ok(Self::OrgMicrobitCharacteristicTemperature),
            310193557193716788675125709591290030504 => Ok(Self::OrgMicrobitCharacteristicTemperaturePeriod),
            869212171019561134837273217152251 => Ok(Self::MeshProvisioningDataIn),
            869291399182075399174866761102587 => Ok(Self::MeshProvisioningDataOut),
            869370627344589663512460305052923 => Ok(Self::MeshProxyDataIn),
            869449855507103927850053849003259 => Ok(Self::MeshProxyDataOut),
            449070818754434164596024402563363 => Ok(Self::ComLegoCharacteristicLwp3Hub),
            449229275079462693271211490464035 => Ok(Self::ComLegoCharacteristicLwp3Bootloader),
            230865095360672541353645396296436378808 => Ok(Self::ComAdafruitCharacteristicMeasurementPeriod),
            230865095439900703867909733889980329144 => Ok(Self::ComAdafruitCharacteristicServiceVersion),
            230865115643082145005315820243687664824 => Ok(Self::ComAdafruitCharacteristicTemperature),
            230865135925491748656986244190938950840 => Ok(Self::ComAdafruitCharacteristicAcceleration),
            230865156207901352308656668138190236856 => Ok(Self::ComAdafruitCharacteristicLightLevel),
            230865176490310955960327092085441522872 => Ok(Self::ComAdafruitCharacteristicGyro),
            230865196772720559611997516032692808888 => Ok(Self::ComAdafruitCharacteristicMagnetic),
            230865217055130163263667939979944094904 => Ok(Self::ComAdafruitCharacteristicPressed),
            230865237337539766915338363927195380920 => Ok(Self::ComAdafruitCharacteristicHumidity),
            230865257619949370567008787874446666936 => Ok(Self::ComAdafruitCharacteristicPressure),
            230865277902358974218679211821697952952 => Ok(Self::ComAdafruitCharacteristicPixelPin),
            230865277981587136732943549415241903288 => Ok(Self::ComAdafruitCharacteristicPixelPinType),
            230865278060815299247207887008785853624 => Ok(Self::ComAdafruitCharacteristicPixelData),
            230865278140043461761472224602329803960 => Ok(Self::ComAdafruitCharacteristicPixelBufferSize),
            230865298184768577870349635768949238968 => Ok(Self::ComAdafruitCharacteristicColor),
            230865318467178181522020059716200524984 => Ok(Self::ComAdafruitCharacteristicSoundSamples),
            230865318546406344036284397309744475320 => Ok(Self::ComAdafruitCharacteristicNumberOfChannels),
            230865338749587785173690483663451811000 => Ok(Self::ComAdafruitCharacteristicTone),
            230865359031997388825360907610703097016 => Ok(Self::ComAdafruitCharacteristicQuaternions),
            230865359111225551339625245204247047352 => Ok(Self::ComAdafruitCharacteristicQuaternionCalibrationIn),
            230865359190453713853889582797790997688 => Ok(Self::ComAdafruitCharacteristicQuaternionCalibrationOut),
            230865379314406992477031331557954383032 => Ok(Self::ComAdafruitCharacteristicProximity),
            230865115525235044282361907647332377970 => Ok(Self::ComAdafruitCharacteristicFileTransferVersion),
            230865135807644647934032331594583663986 => Ok(Self::ComAdafruitCharacteristicFileTransferRaw),
            319019906295200271200700162016362364928 => Ok(Self::ComTiCharacteristicImageIdentity),
            319019906374428433714964499609906315264 => Ok(Self::ComTiCharacteristicImageBlock),
            319019906612112921257757512390538166272 => Ok(Self::ComTiCharacteristicOadControl),
            _ => Err(uuid),
        }
    }
}

