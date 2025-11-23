/// Assigned identifiers for GATT services.
///
/// Can be converted to and from UUIDs.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, EnumString, Display)]
#[cfg_attr(feature = "serde", derive(serde::Serialize, serde::Deserialize))]
#[non_exhaustive]
pub enum Service {
    /// Generic Access
    ///
    /// Source: gss
    #[strum(serialize = "Generic Access")]
    GenericAccess,
    /// Alert Notification Service
    ///
    /// Source: gss
    #[strum(serialize = "Alert Notification Service")]
    AlertNotification,
    /// Automation IO
    ///
    /// Source: gss
    #[strum(serialize = "Automation IO")]
    AutomationIo,
    /// Battery Service
    ///
    /// Source: gss
    #[strum(serialize = "Battery Service")]
    BatteryService,
    /// Blood Pressure
    ///
    /// Source: gss
    #[strum(serialize = "Blood Pressure")]
    BloodPressure,
    /// Body Composition
    ///
    /// Source: gss
    #[strum(serialize = "Body Composition")]
    BodyComposition,
    /// Bond Management Service
    ///
    /// Source: gss
    #[strum(serialize = "Bond Management Service")]
    BondManagement,
    /// Continuous Glucose Monitoring
    ///
    /// Source: gss
    #[strum(serialize = "Continuous Glucose Monitoring")]
    ContinuousGlucoseMonitoring,
    /// Current Time Service
    ///
    /// Source: gss
    #[strum(serialize = "Current Time Service")]
    CurrentTime,
    /// Cycling Power
    ///
    /// Source: gss
    #[strum(serialize = "Cycling Power")]
    CyclingPower,
    /// Cycling Speed and Cadence
    ///
    /// Source: gss
    #[strum(serialize = "Cycling Speed and Cadence")]
    CyclingSpeedAndCadence,
    /// Device Information
    ///
    /// Source: gss
    #[strum(serialize = "Device Information")]
    DeviceInformation,
    /// Environmental Sensing
    ///
    /// Source: gss
    #[strum(serialize = "Environmental Sensing")]
    EnvironmentalSensing,
    /// Fitness Machine
    ///
    /// Source: gss
    #[strum(serialize = "Fitness Machine")]
    FitnessMachine,
    /// Generic Attribute
    ///
    /// Source: gss
    #[strum(serialize = "Generic Attribute")]
    GenericAttribute,
    /// Glucose
    ///
    /// Source: gss
    #[strum(serialize = "Glucose")]
    Glucose,
    /// Health Thermometer
    ///
    /// Source: gss
    #[strum(serialize = "Health Thermometer")]
    HealthThermometer,
    /// Heart Rate
    ///
    /// Source: gss
    #[strum(serialize = "Heart Rate")]
    HeartRate,
    /// HTTP Proxy
    ///
    /// Source: gss
    #[strum(serialize = "HTTP Proxy")]
    HttpProxy,
    /// Human Interface Device
    ///
    /// Source: gss
    #[strum(serialize = "Human Interface Device")]
    HumanInterfaceDevice,
    /// Immediate Alert
    ///
    /// Source: gss
    #[strum(serialize = "Immediate Alert")]
    ImmediateAlert,
    /// Indoor Positioning
    ///
    /// Source: gss
    #[strum(serialize = "Indoor Positioning")]
    IndoorPositioning,
    /// Insulin Delivery
    ///
    /// Source: gss
    #[strum(serialize = "Insulin Delivery")]
    InsulinDelivery,
    /// Internet Protocol Support Service
    ///
    /// Source: gss
    #[strum(serialize = "Internet Protocol Support Service")]
    InternetProtocolSupport,
    /// Link Loss
    ///
    /// Source: gss
    #[strum(serialize = "Link Loss")]
    LinkLoss,
    /// Location and Navigation
    ///
    /// Source: gss
    #[strum(serialize = "Location and Navigation")]
    LocationAndNavigation,
    /// Mesh Provisioning Service
    ///
    /// Source: gss
    #[strum(serialize = "Mesh Provisioning Service")]
    MeshProvisioning,
    /// Mesh Proxy Service
    ///
    /// Source: gss
    #[strum(serialize = "Mesh Proxy Service")]
    OrgBluetoothServiceMeshProxy,
    /// Next DST Change Service
    ///
    /// Source: gss
    #[strum(serialize = "Next DST Change Service")]
    NextDstChange,
    /// Object Transfer Service
    ///
    /// Source: gss
    #[strum(serialize = "Object Transfer Service")]
    ObjectTransfer,
    /// Phone Alert Status Service
    ///
    /// Source: gss
    #[strum(serialize = "Phone Alert Status Service")]
    PhoneAlertStatus,
    /// Pulse Oximeter Service
    ///
    /// Source: gss
    #[strum(serialize = "Pulse Oximeter Service")]
    PulseOximeter,
    /// Reconnection Configuration
    ///
    /// Source: gss
    #[strum(serialize = "Reconnection Configuration")]
    ReconnectionConfiguration,
    /// Reference Time Update Service
    ///
    /// Source: gss
    #[strum(serialize = "Reference Time Update Service")]
    ReferenceTimeUpdate,
    /// Running Speed and Cadence
    ///
    /// Source: gss
    #[strum(serialize = "Running Speed and Cadence")]
    RunningSpeedAndCadence,
    /// Scan Parameters
    ///
    /// Source: gss
    #[strum(serialize = "Scan Parameters")]
    ScanParameters,
    /// Transport Discovery
    ///
    /// Source: gss
    #[strum(serialize = "Transport Discovery")]
    TransportDiscovery,
    /// Tx Power
    ///
    /// Source: gss
    #[strum(serialize = "Tx Power")]
    TxPower,
    /// User Data
    ///
    /// Source: gss
    #[strum(serialize = "User Data")]
    UserData,
    /// Weight Scale
    ///
    /// Source: gss
    #[strum(serialize = "Weight Scale")]
    WeightScale,
    /// Signify Netherlands B.V. (formerly Phillips Lighting) Service
    ///
    /// Source: phillips-hue
    #[strum(serialize = "Signify Netherlands B.V. (formerly Phillips Lighting) Service")]
    ComPhillipsHueServiceSignifyNetherlands,
    /// Phillips Hue Light Control Service
    ///
    /// Source: phillips-hue
    #[strum(serialize = "Phillips Hue Light Control Service")]
    ComPhillipsHueServiceLightControl,
    /// Phillips Hue Light Information Service
    ///
    /// Source: phillips-hue
    #[strum(serialize = "Phillips Hue Light Information Service")]
    ComPhillipsHueServiceLightInformation,
    /// Phillips Hue Light Update Service
    ///
    /// Source: phillips-hue
    #[strum(serialize = "Phillips Hue Light Update Service")]
    ComPhillipsHueServiceLightUpdate,
    /// Apple Notification Center Service
    ///
    /// Source: apple
    #[strum(serialize = "Apple Notification Center Service")]
    ComAppleServiceNotificationCenter,
    /// Apple Media Service
    ///
    /// Source: apple
    #[strum(serialize = "Apple Media Service")]
    ComAppleServiceMedia,
    /// Apple Reserved Service
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Service")]
    ComAppleService7DFC6000,
    /// Apple Reserved Service 1
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Service 1")]
    ComAppleService7DFC7000,
    /// Apple Reserved Service 2
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Service 2")]
    ComAppleService7DFC8000,
    /// Apple Reserved Service 3
    ///
    /// Source: apple
    #[strum(serialize = "Apple Reserved Service 3")]
    ComAppleService7DFC9000,
    /// micro:bit Accelerometer Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Accelerometer Service")]
    OrgMicrobitServiceAccelerometer,
    /// micro:bit Magnetometer Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Magnetometer Service")]
    OrgMicrobitServiceMagnetometer,
    /// micro:bit Button Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Button Service")]
    OrgMicrobitServiceButton,
    /// micro:bit IO Pin Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit IO Pin Service")]
    OrgMicrobitServiceIoPin,
    /// micro:bit LED Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit LED Service")]
    OrgMicrobitServiceLed,
    /// micro:bit Event Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Event Service")]
    OrgMicrobitServiceEvent,
    /// micro:bit DFU Control Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit DFU Control Service")]
    OrgMicrobitServiceDfuControl,
    /// micro:bit Temperature Service
    ///
    /// Source: microbit
    #[strum(serialize = "micro:bit Temperature Service")]
    OrgMicrobitServiceTemperature,
    /// Thingy Configuration Service
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Configuration Service")]
    ComNordicsemiServiceThingyConfiguration,
    /// Thingy Weather Station Service
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Weather Station Service")]
    ComNordicsemiServiceThingyWeatherStation,
    /// Thingy UI Service
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy UI Service")]
    ComNordicsemiServiceThingyUi,
    /// Thingy Motion Service
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Motion Service")]
    ComNordicsemiServiceThingyMotion,
    /// Thingy Sound Service
    ///
    /// Source: nordic
    #[strum(serialize = "Thingy Sound Service")]
    ComNordicsemiServiceThingySound,
    /// Nordic LED and Button Service
    ///
    /// Source: nordic
    #[strum(serialize = "Nordic LED and Button Service")]
    ComNordicsemiServiceLedAndButton,
    /// Nordic UART Service
    ///
    /// Source: nordic
    #[strum(serialize = "Nordic UART Service")]
    ComNordicsemiServiceUart,
    /// Eddystone
    ///
    /// Source: google
    #[strum(serialize = "Eddystone")]
    ComGoogleServiceEddystone,
    /// Eddystone Configuration Service
    ///
    /// Source: google
    #[strum(serialize = "Eddystone Configuration Service")]
    ComGoogleServiceEddystoneConfiguration,
    /// Fast Pair Service
    ///
    /// Source: google
    #[strum(serialize = "Fast Pair Service")]
    ComGoogleServiceFastPair,
    /// Legacy DFU Service
    ///
    /// Source: nordic
    #[strum(serialize = "Legacy DFU Service")]
    ComNordicsemiServiceDfuLegacy,
    /// Secure DFU Service
    ///
    /// Source: nordic
    #[strum(serialize = "Secure DFU Service")]
    ComNordicsemiServiceDfuSecure,
    /// Experimental Buttonless DFU Service
    ///
    /// Source: nordic
    #[strum(serialize = "Experimental Buttonless DFU Service")]
    ComNordicsemiServiceDfuButtonlessExperimental,
    /// Edge Impulse Remote Management Service
    ///
    /// Source: nordic
    #[strum(serialize = "Edge Impulse Remote Management Service")]
    ComNordicsemiServiceEdgeImpulse,
    /// Exposure Notification Service
    ///
    /// Source: apple
    #[strum(serialize = "Exposure Notification Service")]
    ComAppleServiceContacttracing,
    /// SMP Service
    ///
    /// Source: apache
    #[strum(serialize = "SMP Service")]
    IoRuntimeMcumgrBleSmp,
    /// LEGO® Wireless Protocol v3 Hub Service
    ///
    /// Source: lego
    #[strum(serialize = "LEGO® Wireless Protocol v3 Hub Service")]
    ComLegoServiceLwp3Hub,
    /// LEGO® Wireless Protocol v3 Bootloader Service
    ///
    /// Source: lego
    #[strum(serialize = "LEGO® Wireless Protocol v3 Bootloader Service")]
    ComLegoServiceLwp3Bootloader,
    /// File Transfer Service by Adafruit
    ///
    /// Source: adafruit
    #[strum(serialize = "File Transfer Service by Adafruit")]
    ComAdafruitServiceFileTransfer,
    /// Adafruit Temperature Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Temperature Service")]
    ComAdafruitServiceTemperature,
    /// Adafruit Accelerometer Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Accelerometer Service")]
    ComAdafruitServiceAccelerometer,
    /// Adafruit Light Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Light Service")]
    ComAdafruitServiceLight,
    /// Adafruit Gyroscope Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Gyroscope Service")]
    ComAdafruitServiceGyroscope,
    /// Adafruit Magnetometer Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Magnetometer Service")]
    ComAdafruitServiceMagnetometer,
    /// Adafruit Button Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Button Service")]
    ComAdafruitServiceButton,
    /// Adafruit Humidity Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Humidity Service")]
    ComAdafruitServiceHumidity,
    /// Adafruit Barometric Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Barometric Service")]
    ComAdafruitServiceBarometric,
    /// Adafruit Addressable Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Addressable Service")]
    ComAdafruitServiceAddressablePixel,
    /// Adafruit Color Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Color Service")]
    ComAdafruitServiceColor,
    /// Adafruit Sound Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Sound Service")]
    ComAdafruitServiceSound,
    /// Adafruit Tone Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Tone Service")]
    ComAdafruitServiceTone,
    /// Adafruit Quaternion Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Quaternion Service")]
    ComAdafruitServiceQuaternion,
    /// Adafruit Proximity Service
    ///
    /// Source: adafruit
    #[strum(serialize = "Adafruit Proximity Service")]
    ComAdafruitServiceProximity,
    /// Texas Instruments Over-the-Air Download (OAD) Service
    ///
    /// Source: ti
    #[strum(serialize = "Texas Instruments Over-the-Air Download (OAD) Service")]
    ComTiServiceOad,
}
impl From<Service> for Uuid {
    fn from(s: Service) -> Uuid {
        match s {
            Service::GenericAccess => Uuid::from_u128(486777830563207177273236568880379),
            Service::AlertNotification => Uuid::from_u128(488124709325949671012326816036091),
            Service::AutomationIo => Uuid::from_u128(488441621976006728362700991837435),
            Service::BatteryService => Uuid::from_u128(487966253000921142337139728135419),
            Service::BloodPressure => Uuid::from_u128(488045481163435406674733272085755),
            Service::BodyComposition => Uuid::from_u128(488916990951092314388262255539451),
            Service::BondManagement => Uuid::from_u128(489154675438635107401042887390459),
            Service::ContinuousGlucoseMonitoring => Uuid::from_u128(489233903601149371738636431340795),
            Service::CurrentTime => Uuid::from_u128(487173971375778498961204288632059),
            Service::CyclingPower => Uuid::from_u128(488679306463549521375481623688443),
            Service::CyclingSpeedAndCadence => Uuid::from_u128(488520850138520992700294535787771),
            Service::DeviceInformation => Uuid::from_u128(487570112188349820649172008383739),
            Service::EnvironmentalSensing => Uuid::from_u128(488837762788578050050668711589115),
            Service::FitnessMachine => Uuid::from_u128(489788500738749222101791238993147),
            Service::GenericAttribute => Uuid::from_u128(486857058725721441610830112830715),
            Service::Glucose => Uuid::from_u128(487411655863321291973984920483067),
            Service::HealthThermometer => Uuid::from_u128(487490884025835556311578464433403),
            Service::HeartRate => Uuid::from_u128(487807796675892613661952640234747),
            Service::HttpProxy => Uuid::from_u128(489550816251206429089010607142139),
            Service::HumanInterfaceDevice => Uuid::from_u128(488203937488463935349920359986427),
            Service::ImmediateAlert => Uuid::from_u128(486936286888235705948423656781051),
            Service::IndoorPositioning => Uuid::from_u128(489392359926177900413823519241467),
            Service::InsulinDelivery => Uuid::from_u128(491373063989034508853662117999867),
            Service::InternetProtocolSupport => Uuid::from_u128(489313131763663636076229975291131),
            Service::LinkLoss => Uuid::from_u128(487015515050749970286017200731387),
            Service::LocationAndNavigation => Uuid::from_u128(488758534626063785713075167638779),
            Service::MeshProvisioning => Uuid::from_u128(489867728901263486439384782943483),
            Service::OrgBluetoothServiceMeshProxy => Uuid::from_u128(489946957063777750776978326893819),
            Service::NextDstChange => Uuid::from_u128(487332427700807027636391376532731),
            Service::ObjectTransfer => Uuid::from_u128(489709272576234957764197695042811),
            Service::PhoneAlertStatus => Uuid::from_u128(487887024838406877999546184185083),
            Service::PulseOximeter => Uuid::from_u128(489471588088692164751417063191803),
            Service::ReconnectionConfiguration => Uuid::from_u128(490026185226292015114571870844155),
            Service::ReferenceTimeUpdate => Uuid::from_u128(487253199538292763298797832582395),
            Service::RunningSpeedAndCadence => Uuid::from_u128(488362393813492464025107447887099),
            Service::ScanParameters => Uuid::from_u128(488283165650978199687513903936763),
            Service::TransportDiscovery => Uuid::from_u128(489630044413720693426604151092475),
            Service::TxPower => Uuid::from_u128(487094743213264234623610744681723),
            Service::UserData => Uuid::from_u128(488996219113606578725855799489787),
            Service::WeightScale => Uuid::from_u128(489075447276120843063449343440123),
            Service::ComPhillipsHueServiceSignifyNetherlands => Uuid::from_u128(5152920461840805339845007523919099),
            Service::ComPhillipsHueServiceLightControl => Uuid::from_u128(195626005536761401797853869124621982173),
            Service::ComPhillipsHueServiceLightInformation => Uuid::from_u128(487570112188349820649172008383739),
            Service::ComPhillipsHueServiceLightUpdate => Uuid::from_u128(245264528298932397745384898887868943322),
            Service::ComAppleServiceNotificationCenter => Uuid::from_u128(160867501820656945641302620286994940112),
            Service::ComAppleServiceMedia => Uuid::from_u128(183201436063971478084787883697046419676),
            Service::ComAppleService7DFC6000 => Uuid::from_u128(167463905431507033622986853235683808876),
            Service::ComAppleService7DFC7000 => Uuid::from_u128(167464229950060692049713636391704385132),
            Service::ComAppleService7DFC8000 => Uuid::from_u128(167464554468614350476440419547724961388),
            Service::ComAppleService7DFC9000 => Uuid::from_u128(167464878987168008903167202703745537644),
            Service::OrgMicrobitServiceAccelerometer => Uuid::from_u128(310193155190020191297876759949286025640),
            Service::OrgMicrobitServiceMagnetometer => Uuid::from_u128(310197932093622663837583287494683634088),
            Service::OrgMicrobitServiceButton => Uuid::from_u128(310196099863136358960512099197288163752),
            Service::OrgMicrobitServiceIoPin => Uuid::from_u128(310193381465652332036824927110808185256),
            Service::OrgMicrobitServiceLed => Uuid::from_u128(310197410217716182378391558820682770856),
            Service::OrgMicrobitServiceEvent => Uuid::from_u128(310196002016355653844055171170509498792),
            Service::OrgMicrobitServiceDfuControl => Uuid::from_u128(310196002095583816358319508764053449128),
            Service::OrgMicrobitServiceTemperature => Uuid::from_u128(310194974030947031264274894937753889192),
            Service::ComNordicsemiServiceThingyConfiguration => Uuid::from_u128(318225510196326714624506263147900043330),
            Service::ComNordicsemiServiceThingyWeatherStation => Uuid::from_u128(318225530478736318276176687095151329346),
            Service::ComNordicsemiServiceThingyUi => Uuid::from_u128(318225550761145921927847111042402615362),
            Service::ComNordicsemiServiceThingyMotion => Uuid::from_u128(318225571043555525579517534989653901378),
            Service::ComNordicsemiServiceThingySound => Uuid::from_u128(318225591325965129231187958936905187394),
            Service::ComNordicsemiServiceLedAndButton => Uuid::from_u128(428709180988268157776889569399075),
            Service::ComNordicsemiServiceUart => Uuid::from_u128(146547386670730129451085146327676144286),
            Service::ComGoogleServiceEddystone => Uuid::from_u128(5165200827030516312172006836221179),
            Service::ComGoogleServiceEddystoneConfiguration => Uuid::from_u128(217704995770774193098106250188032959125),
            Service::ComGoogleServiceFastPair => Uuid::from_u128(5155218078553719005635220298478843),
            Service::ComNordicsemiServiceDfuLegacy => Uuid::from_u128(429739147100953594165605640753443),
            Service::ComNordicsemiServiceDfuSecure => Uuid::from_u128(5158783345866860900826929776243963),
            Service::ComNordicsemiServiceDfuButtonlessExperimental => Uuid::from_u128(189082682554863065112978322078006176336),
            Service::ComNordicsemiServiceEdgeImpulse => Uuid::from_u128(301236294697082793848001028236739778680),
            Service::ComAppleServiceContacttracing => Uuid::from_u128(5140243955838523045830040491865339),
            Service::IoRuntimeMcumgrBleSmp => Uuid::from_u128(187856572481857706565383061790242417284),
            Service::ComLegoServiceLwp3Hub => Uuid::from_u128(448991590591919900258430858613027),
            Service::ComLegoServiceLwp3Bootloader => Uuid::from_u128(449150046916948428933617946513699),
            Service::ComAdafruitServiceFileTransfer => Uuid::from_u128(5166547705793258805911097083376891),
            Service::ComAdafruitServiceTemperature => Uuid::from_u128(230865115563853982491051482650143714488),
            Service::ComAdafruitServiceAccelerometer => Uuid::from_u128(230865135846263586142721906597395000504),
            Service::ComAdafruitServiceLight => Uuid::from_u128(230865156128673189794392330544646286520),
            Service::ComAdafruitServiceGyroscope => Uuid::from_u128(230865176411082793446062754491897572536),
            Service::ComAdafruitServiceMagnetometer => Uuid::from_u128(230865196693492397097733178439148858552),
            Service::ComAdafruitServiceButton => Uuid::from_u128(230865216975902000749403602386400144568),
            Service::ComAdafruitServiceHumidity => Uuid::from_u128(230865237258311604401074026333651430584),
            Service::ComAdafruitServiceBarometric => Uuid::from_u128(230865257540721208052744450280902716600),
            Service::ComAdafruitServiceAddressablePixel => Uuid::from_u128(230865277823130811704414874228154002616),
            Service::ComAdafruitServiceColor => Uuid::from_u128(230865298105540415356085298175405288632),
            Service::ComAdafruitServiceSound => Uuid::from_u128(230865318387950019007755722122656574648),
            Service::ComAdafruitServiceTone => Uuid::from_u128(230865338670359622659426146069907860664),
            Service::ComAdafruitServiceQuaternion => Uuid::from_u128(230865358952769226311096570017159146680),
            Service::ComAdafruitServiceProximity => Uuid::from_u128(230865379235178829962766993964410432696),
            Service::ComTiServiceOad => Uuid::from_u128(319019906215972108686435824422818414592),
        }
    }
}

impl TryFrom<Uuid> for Service {
    type Error = Uuid;
    fn try_from(uuid: Uuid) -> Result<Self, Uuid> {
        #[allow(unreachable_patterns)]
        #[allow(clippy::match_overlapping_arm)]
        match uuid.as_u128() {
            486777830563207177273236568880379 => Ok(Self::GenericAccess),
            488124709325949671012326816036091 => Ok(Self::AlertNotification),
            488441621976006728362700991837435 => Ok(Self::AutomationIo),
            487966253000921142337139728135419 => Ok(Self::BatteryService),
            488045481163435406674733272085755 => Ok(Self::BloodPressure),
            488916990951092314388262255539451 => Ok(Self::BodyComposition),
            489154675438635107401042887390459 => Ok(Self::BondManagement),
            489233903601149371738636431340795 => Ok(Self::ContinuousGlucoseMonitoring),
            487173971375778498961204288632059 => Ok(Self::CurrentTime),
            488679306463549521375481623688443 => Ok(Self::CyclingPower),
            488520850138520992700294535787771 => Ok(Self::CyclingSpeedAndCadence),
            487570112188349820649172008383739 => Ok(Self::DeviceInformation),
            488837762788578050050668711589115 => Ok(Self::EnvironmentalSensing),
            489788500738749222101791238993147 => Ok(Self::FitnessMachine),
            486857058725721441610830112830715 => Ok(Self::GenericAttribute),
            487411655863321291973984920483067 => Ok(Self::Glucose),
            487490884025835556311578464433403 => Ok(Self::HealthThermometer),
            487807796675892613661952640234747 => Ok(Self::HeartRate),
            489550816251206429089010607142139 => Ok(Self::HttpProxy),
            488203937488463935349920359986427 => Ok(Self::HumanInterfaceDevice),
            486936286888235705948423656781051 => Ok(Self::ImmediateAlert),
            489392359926177900413823519241467 => Ok(Self::IndoorPositioning),
            491373063989034508853662117999867 => Ok(Self::InsulinDelivery),
            489313131763663636076229975291131 => Ok(Self::InternetProtocolSupport),
            487015515050749970286017200731387 => Ok(Self::LinkLoss),
            488758534626063785713075167638779 => Ok(Self::LocationAndNavigation),
            489867728901263486439384782943483 => Ok(Self::MeshProvisioning),
            489946957063777750776978326893819 => Ok(Self::OrgBluetoothServiceMeshProxy),
            487332427700807027636391376532731 => Ok(Self::NextDstChange),
            489709272576234957764197695042811 => Ok(Self::ObjectTransfer),
            487887024838406877999546184185083 => Ok(Self::PhoneAlertStatus),
            489471588088692164751417063191803 => Ok(Self::PulseOximeter),
            490026185226292015114571870844155 => Ok(Self::ReconnectionConfiguration),
            487253199538292763298797832582395 => Ok(Self::ReferenceTimeUpdate),
            488362393813492464025107447887099 => Ok(Self::RunningSpeedAndCadence),
            488283165650978199687513903936763 => Ok(Self::ScanParameters),
            489630044413720693426604151092475 => Ok(Self::TransportDiscovery),
            487094743213264234623610744681723 => Ok(Self::TxPower),
            488996219113606578725855799489787 => Ok(Self::UserData),
            489075447276120843063449343440123 => Ok(Self::WeightScale),
            5152920461840805339845007523919099 => Ok(Self::ComPhillipsHueServiceSignifyNetherlands),
            195626005536761401797853869124621982173 => Ok(Self::ComPhillipsHueServiceLightControl),
            487570112188349820649172008383739 => Ok(Self::ComPhillipsHueServiceLightInformation),
            245264528298932397745384898887868943322 => Ok(Self::ComPhillipsHueServiceLightUpdate),
            160867501820656945641302620286994940112 => Ok(Self::ComAppleServiceNotificationCenter),
            183201436063971478084787883697046419676 => Ok(Self::ComAppleServiceMedia),
            167463905431507033622986853235683808876 => Ok(Self::ComAppleService7DFC6000),
            167464229950060692049713636391704385132 => Ok(Self::ComAppleService7DFC7000),
            167464554468614350476440419547724961388 => Ok(Self::ComAppleService7DFC8000),
            167464878987168008903167202703745537644 => Ok(Self::ComAppleService7DFC9000),
            310193155190020191297876759949286025640 => Ok(Self::OrgMicrobitServiceAccelerometer),
            310197932093622663837583287494683634088 => Ok(Self::OrgMicrobitServiceMagnetometer),
            310196099863136358960512099197288163752 => Ok(Self::OrgMicrobitServiceButton),
            310193381465652332036824927110808185256 => Ok(Self::OrgMicrobitServiceIoPin),
            310197410217716182378391558820682770856 => Ok(Self::OrgMicrobitServiceLed),
            310196002016355653844055171170509498792 => Ok(Self::OrgMicrobitServiceEvent),
            310196002095583816358319508764053449128 => Ok(Self::OrgMicrobitServiceDfuControl),
            310194974030947031264274894937753889192 => Ok(Self::OrgMicrobitServiceTemperature),
            318225510196326714624506263147900043330 => Ok(Self::ComNordicsemiServiceThingyConfiguration),
            318225530478736318276176687095151329346 => Ok(Self::ComNordicsemiServiceThingyWeatherStation),
            318225550761145921927847111042402615362 => Ok(Self::ComNordicsemiServiceThingyUi),
            318225571043555525579517534989653901378 => Ok(Self::ComNordicsemiServiceThingyMotion),
            318225591325965129231187958936905187394 => Ok(Self::ComNordicsemiServiceThingySound),
            428709180988268157776889569399075 => Ok(Self::ComNordicsemiServiceLedAndButton),
            146547386670730129451085146327676144286 => Ok(Self::ComNordicsemiServiceUart),
            5165200827030516312172006836221179 => Ok(Self::ComGoogleServiceEddystone),
            217704995770774193098106250188032959125 => Ok(Self::ComGoogleServiceEddystoneConfiguration),
            5155218078553719005635220298478843 => Ok(Self::ComGoogleServiceFastPair),
            429739147100953594165605640753443 => Ok(Self::ComNordicsemiServiceDfuLegacy),
            5158783345866860900826929776243963 => Ok(Self::ComNordicsemiServiceDfuSecure),
            189082682554863065112978322078006176336 => Ok(Self::ComNordicsemiServiceDfuButtonlessExperimental),
            301236294697082793848001028236739778680 => Ok(Self::ComNordicsemiServiceEdgeImpulse),
            5140243955838523045830040491865339 => Ok(Self::ComAppleServiceContacttracing),
            187856572481857706565383061790242417284 => Ok(Self::IoRuntimeMcumgrBleSmp),
            448991590591919900258430858613027 => Ok(Self::ComLegoServiceLwp3Hub),
            449150046916948428933617946513699 => Ok(Self::ComLegoServiceLwp3Bootloader),
            5166547705793258805911097083376891 => Ok(Self::ComAdafruitServiceFileTransfer),
            230865115563853982491051482650143714488 => Ok(Self::ComAdafruitServiceTemperature),
            230865135846263586142721906597395000504 => Ok(Self::ComAdafruitServiceAccelerometer),
            230865156128673189794392330544646286520 => Ok(Self::ComAdafruitServiceLight),
            230865176411082793446062754491897572536 => Ok(Self::ComAdafruitServiceGyroscope),
            230865196693492397097733178439148858552 => Ok(Self::ComAdafruitServiceMagnetometer),
            230865216975902000749403602386400144568 => Ok(Self::ComAdafruitServiceButton),
            230865237258311604401074026333651430584 => Ok(Self::ComAdafruitServiceHumidity),
            230865257540721208052744450280902716600 => Ok(Self::ComAdafruitServiceBarometric),
            230865277823130811704414874228154002616 => Ok(Self::ComAdafruitServiceAddressablePixel),
            230865298105540415356085298175405288632 => Ok(Self::ComAdafruitServiceColor),
            230865318387950019007755722122656574648 => Ok(Self::ComAdafruitServiceSound),
            230865338670359622659426146069907860664 => Ok(Self::ComAdafruitServiceTone),
            230865358952769226311096570017159146680 => Ok(Self::ComAdafruitServiceQuaternion),
            230865379235178829962766993964410432696 => Ok(Self::ComAdafruitServiceProximity),
            319019906215972108686435824422818414592 => Ok(Self::ComTiServiceOad),
            _ => Err(uuid),
        }
    }
}

