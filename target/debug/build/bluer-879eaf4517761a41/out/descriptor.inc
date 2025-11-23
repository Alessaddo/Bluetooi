/// Assigned identifiers for GATT descriptors.
///
/// Can be converted to and from UUIDs.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, EnumString, Display)]
#[cfg_attr(feature = "serde", derive(serde::Serialize, serde::Deserialize))]
#[non_exhaustive]
pub enum Descriptor {
    /// Characteristic Extended Properties
    ///
    /// Source: gss
    #[strum(serialize = "Characteristic Extended Properties")]
    GattCharacteristicExtendedProperties,
    /// Characteristic User Descriptor
    ///
    /// Source: gss
    #[strum(serialize = "Characteristic User Descriptor")]
    GattCharacteristicUserDescription,
    /// Client Characteristic Configuration
    ///
    /// Source: gss
    #[strum(serialize = "Client Characteristic Configuration")]
    GattClientCharacteristicConfiguration,
    /// Server Characteristic Configuration
    ///
    /// Source: gss
    #[strum(serialize = "Server Characteristic Configuration")]
    GattServerCharacteristicConfiguration,
    /// Characteristic Presentation Format
    ///
    /// Source: gss
    #[strum(serialize = "Characteristic Presentation Format")]
    GattCharacteristicPresentationFormat,
    /// Characteristic Aggregate Format
    ///
    /// Source: gss
    #[strum(serialize = "Characteristic Aggregate Format")]
    GattCharacteristicAggregateFormat,
    /// Valid Range
    ///
    /// Source: gss
    #[strum(serialize = "Valid Range")]
    ValidRange,
    /// External Report Reference
    ///
    /// Source: gss
    #[strum(serialize = "External Report Reference")]
    ExternalReportReference,
    /// Report Reference
    ///
    /// Source: gss
    #[strum(serialize = "Report Reference")]
    ReportReference,
    /// Number of Digitals
    ///
    /// Source: gss
    #[strum(serialize = "Number of Digitals")]
    NumberOfDigitals,
    /// Value Trigger Setting
    ///
    /// Source: gss
    #[strum(serialize = "Value Trigger Setting")]
    ValueTriggerSetting,
    /// Environmental Sensing Configuration
    ///
    /// Source: gss
    #[strum(serialize = "Environmental Sensing Configuration")]
    EnvironmentalSensingConfiguration,
    /// Environmental Sensing Measurement
    ///
    /// Source: gss
    #[strum(serialize = "Environmental Sensing Measurement")]
    EnvironmentalSensingMeasurement,
    /// Environmental Sensing Trigger Setting
    ///
    /// Source: gss
    #[strum(serialize = "Environmental Sensing Trigger Setting")]
    EnvironmentalSensingTriggerSetting,
    /// Time Trigger Setting
    ///
    /// Source: gss
    #[strum(serialize = "Time Trigger Setting")]
    TimeTriggerSetting,
}
impl From<Descriptor> for Uuid {
    fn from(s: Descriptor) -> Uuid {
        match s {
            Descriptor::GattCharacteristicExtendedProperties => Uuid::from_u128(831578793825285574480339840742651),
            Descriptor::GattCharacteristicUserDescription => Uuid::from_u128(831658021987799838817933384692987),
            Descriptor::GattClientCharacteristicConfiguration => Uuid::from_u128(831737250150314103155526928643323),
            Descriptor::GattServerCharacteristicConfiguration => Uuid::from_u128(831816478312828367493120472593659),
            Descriptor::GattCharacteristicPresentationFormat => Uuid::from_u128(831895706475342631830714016543995),
            Descriptor::GattCharacteristicAggregateFormat => Uuid::from_u128(831974934637856896168307560494331),
            Descriptor::ValidRange => Uuid::from_u128(832054162800371160505901104444667),
            Descriptor::ExternalReportReference => Uuid::from_u128(832133390962885424843494648395003),
            Descriptor::ReportReference => Uuid::from_u128(832212619125399689181088192345339),
            Descriptor::NumberOfDigitals => Uuid::from_u128(832291847287913953518681736295675),
            Descriptor::ValueTriggerSetting => Uuid::from_u128(832371075450428217856275280246011),
            Descriptor::EnvironmentalSensingConfiguration => Uuid::from_u128(832450303612942482193868824196347),
            Descriptor::EnvironmentalSensingMeasurement => Uuid::from_u128(832529531775456746531462368146683),
            Descriptor::EnvironmentalSensingTriggerSetting => Uuid::from_u128(832608759937971010869055912097019),
            Descriptor::TimeTriggerSetting => Uuid::from_u128(832687988100485275206649456047355),
        }
    }
}

impl TryFrom<Uuid> for Descriptor {
    type Error = Uuid;
    fn try_from(uuid: Uuid) -> Result<Self, Uuid> {
        #[allow(unreachable_patterns)]
        #[allow(clippy::match_overlapping_arm)]
        match uuid.as_u128() {
            831578793825285574480339840742651 => Ok(Self::GattCharacteristicExtendedProperties),
            831658021987799838817933384692987 => Ok(Self::GattCharacteristicUserDescription),
            831737250150314103155526928643323 => Ok(Self::GattClientCharacteristicConfiguration),
            831816478312828367493120472593659 => Ok(Self::GattServerCharacteristicConfiguration),
            831895706475342631830714016543995 => Ok(Self::GattCharacteristicPresentationFormat),
            831974934637856896168307560494331 => Ok(Self::GattCharacteristicAggregateFormat),
            832054162800371160505901104444667 => Ok(Self::ValidRange),
            832133390962885424843494648395003 => Ok(Self::ExternalReportReference),
            832212619125399689181088192345339 => Ok(Self::ReportReference),
            832291847287913953518681736295675 => Ok(Self::NumberOfDigitals),
            832371075450428217856275280246011 => Ok(Self::ValueTriggerSetting),
            832450303612942482193868824196347 => Ok(Self::EnvironmentalSensingConfiguration),
            832529531775456746531462368146683 => Ok(Self::EnvironmentalSensingMeasurement),
            832608759937971010869055912097019 => Ok(Self::EnvironmentalSensingTriggerSetting),
            832687988100485275206649456047355 => Ok(Self::TimeTriggerSetting),
            _ => Err(uuid),
        }
    }
}

