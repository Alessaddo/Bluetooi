/// Assigned identifiers for service classes and profiles.
///
/// Can be converted to and from UUIDs.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, EnumString, Display)]
#[cfg_attr(feature = "serde", derive(serde::Serialize, serde::Deserialize))]
#[non_exhaustive]
pub enum ServiceClass {
    /// SDP Server
    #[strum(serialize = "SDP Server")]
    SdpServer,
    /// Browse Group Descriptor
    #[strum(serialize = "Browse Group Descriptor")]
    BrowseGrpDesc,
    /// Public Browse Group
    #[strum(serialize = "Public Browse Group")]
    PublicBrowseGroup,
    /// Serial Port
    #[strum(serialize = "Serial Port")]
    SerialPort,
    /// LAN Access Using PPP
    #[strum(serialize = "LAN Access Using PPP")]
    LanAccess,
    /// Dialup Networking
    #[strum(serialize = "Dialup Networking")]
    DialupNet,
    /// IrMC Sync
    #[strum(serialize = "IrMC Sync")]
    IrmcSync,
    /// OBEX Object Push
    #[strum(serialize = "OBEX Object Push")]
    ObexObjpush,
    /// OBEX File Transfer
    #[strum(serialize = "OBEX File Transfer")]
    ObexFiletrans,
    /// IrMC Sync Command
    #[strum(serialize = "IrMC Sync Command")]
    IrmcSyncCmd,
    /// Headset
    #[strum(serialize = "Headset")]
    Headset,
    /// Cordless Telephony
    #[strum(serialize = "Cordless Telephony")]
    CordlessTelephony,
    /// Audio Source
    #[strum(serialize = "Audio Source")]
    AudioSource,
    /// Audio Sink
    #[strum(serialize = "Audio Sink")]
    AudioSink,
    /// AV Remote Target
    #[strum(serialize = "AV Remote Target")]
    AvRemoteTarget,
    /// Advanced Audio
    #[strum(serialize = "Advanced Audio")]
    AdvancedAudio,
    /// AV Remote
    #[strum(serialize = "AV Remote")]
    AvRemote,
    /// AV Remote Controller
    #[strum(serialize = "AV Remote Controller")]
    AvRemoteController,
    /// Intercom
    #[strum(serialize = "Intercom")]
    Intercom,
    /// Fax
    #[strum(serialize = "Fax")]
    Fax,
    /// Headset Audio Gateway
    #[strum(serialize = "Headset Audio Gateway")]
    HeadsetAgw,
    /// WAP
    #[strum(serialize = "WAP")]
    Wap,
    /// WAP Client
    #[strum(serialize = "WAP Client")]
    WapClient,
    /// PAN User
    #[strum(serialize = "PAN User")]
    Panu,
    /// Network Access Point
    #[strum(serialize = "Network Access Point")]
    Nap,
    /// PAN Group Network
    #[strum(serialize = "PAN Group Network")]
    Gn,
    /// Direct Printing
    #[strum(serialize = "Direct Printing")]
    DirectPrinting,
    /// Reference Printing
    #[strum(serialize = "Reference Printing")]
    ReferencePrinting,
    /// Imaging
    #[strum(serialize = "Imaging")]
    Imaging,
    /// Imaging Responder
    #[strum(serialize = "Imaging Responder")]
    ImagingResponder,
    /// Imaging Automatic Archive
    #[strum(serialize = "Imaging Automatic Archive")]
    ImagingArchive,
    /// Imaging Referenced Objects
    #[strum(serialize = "Imaging Referenced Objects")]
    ImagingRefobjs,
    /// Handsfree
    #[strum(serialize = "Handsfree")]
    Handsfree,
    /// Handsfree Audio Gateway
    #[strum(serialize = "Handsfree Audio Gateway")]
    HandsfreeAgw,
    /// Direct Printing Ref. Objects
    #[strum(serialize = "Direct Printing Ref. Objects")]
    DirectPrtRefobjs,
    /// Reflected UI
    #[strum(serialize = "Reflected UI")]
    ReflectedUi,
    /// Basic Printing
    #[strum(serialize = "Basic Printing")]
    BasicPrinting,
    /// Printing Status
    #[strum(serialize = "Printing Status")]
    PrintingStatus,
    /// Human Interface Device
    #[strum(serialize = "Human Interface Device")]
    Hid,
    /// Hardcopy Cable Replacement
    #[strum(serialize = "Hardcopy Cable Replacement")]
    Hcr,
    /// HCR Print
    #[strum(serialize = "HCR Print")]
    HcrPrint,
    /// HCR Scan
    #[strum(serialize = "HCR Scan")]
    HcrScan,
    /// Common ISDN Access
    #[strum(serialize = "Common ISDN Access")]
    Cip,
    /// Video Conferencing Gateway
    #[strum(serialize = "Video Conferencing Gateway")]
    VideoConfGw,
    /// UDI MT
    #[strum(serialize = "UDI MT")]
    UdiMt,
    /// UDI TA
    #[strum(serialize = "UDI TA")]
    UdiTa,
    /// Audio/Video
    #[strum(serialize = "Audio/Video")]
    Av,
    /// SIM Access
    #[strum(serialize = "SIM Access")]
    Sap,
    /// Phonebook Access - PCE
    #[strum(serialize = "Phonebook Access - PCE")]
    PbapPce,
    /// Phonebook Access - PSE
    #[strum(serialize = "Phonebook Access - PSE")]
    PbapPse,
    /// Phonebook Access
    #[strum(serialize = "Phonebook Access")]
    Pbap,
    /// Message Access - MAS
    #[strum(serialize = "Message Access - MAS")]
    MapMse,
    /// Message Access - MNS
    #[strum(serialize = "Message Access - MNS")]
    MapMce,
    /// Message Access
    #[strum(serialize = "Message Access")]
    Map,
    /// GNSS
    #[strum(serialize = "GNSS")]
    Gnss,
    /// GNSS Server
    #[strum(serialize = "GNSS Server")]
    GnssServer,
    /// MPS Profile
    #[strum(serialize = "MPS Profile")]
    MpsSc,
    /// MPS SC
    #[strum(serialize = "MPS SC")]
    Mps,
    /// PnP Information
    #[strum(serialize = "PnP Information")]
    PnpInfo,
    /// Generic Networking
    #[strum(serialize = "Generic Networking")]
    GenericNetworking,
    /// Generic File Transfer
    #[strum(serialize = "Generic File Transfer")]
    GenericFiletrans,
    /// Generic Audio
    #[strum(serialize = "Generic Audio")]
    GenericAudio,
    /// Generic Telephony
    #[strum(serialize = "Generic Telephony")]
    GenericTelephony,
    /// UPnP
    #[strum(serialize = "UPnP")]
    Upnp,
    /// UPnP IP
    #[strum(serialize = "UPnP IP")]
    UpnpIp,
    /// UPnP PAN
    #[strum(serialize = "UPnP PAN")]
    UpnpPan,
    /// UPnP LAP
    #[strum(serialize = "UPnP LAP")]
    UpnpLap,
    /// UPnP L2CAP
    #[strum(serialize = "UPnP L2CAP")]
    UpnpL2cap,
    /// Video Source
    #[strum(serialize = "Video Source")]
    VideoSource,
    /// Video Sink
    #[strum(serialize = "Video Sink")]
    VideoSink,
    /// Video Distribution
    #[strum(serialize = "Video Distribution")]
    VideoDistribution,
    /// HDP
    #[strum(serialize = "HDP")]
    Hdp,
    /// HDP Source
    #[strum(serialize = "HDP Source")]
    HdpSource,
    /// HDP Sink
    #[strum(serialize = "HDP Sink")]
    HdpSink,
    /// Generic Access
    #[strum(serialize = "Generic Access")]
    GenericAccess,
    /// Generic Attribute
    #[strum(serialize = "Generic Attribute")]
    GenericAttrib,
    /// Apple Agent
    #[strum(serialize = "Apple Agent")]
    AppleAgent,
}
impl From<ServiceClass> for Uuid {
    fn from(s: ServiceClass) -> Uuid {
        match s {
            ServiceClass::SdpServer => Uuid::from_u128(324518553733993813881658558592251),
            ServiceClass::BrowseGrpDesc => Uuid::from_u128(324597781896508078219252102542587),
            ServiceClass::PublicBrowseGroup => Uuid::from_u128(324677010059022342556845646492923),
            ServiceClass::SerialPort => Uuid::from_u128(344880191500159748643199353828603),
            ServiceClass::LanAccess => Uuid::from_u128(344959419662674012980792897778939),
            ServiceClass::DialupNet => Uuid::from_u128(345038647825188277318386441729275),
            ServiceClass::IrmcSync => Uuid::from_u128(345117875987702541655979985679611),
            ServiceClass::ObexObjpush => Uuid::from_u128(345197104150216805993573529629947),
            ServiceClass::ObexFiletrans => Uuid::from_u128(345276332312731070331167073580283),
            ServiceClass::IrmcSyncCmd => Uuid::from_u128(345355560475245334668760617530619),
            ServiceClass::Headset => Uuid::from_u128(345434788637759599006354161480955),
            ServiceClass::CordlessTelephony => Uuid::from_u128(345514016800273863343947705431291),
            ServiceClass::AudioSource => Uuid::from_u128(345593244962788127681541249381627),
            ServiceClass::AudioSink => Uuid::from_u128(345672473125302392019134793331963),
            ServiceClass::AvRemoteTarget => Uuid::from_u128(345751701287816656356728337282299),
            ServiceClass::AdvancedAudio => Uuid::from_u128(345830929450330920694321881232635),
            ServiceClass::AvRemote => Uuid::from_u128(345910157612845185031915425182971),
            ServiceClass::AvRemoteController => Uuid::from_u128(345989385775359449369508969133307),
            ServiceClass::Intercom => Uuid::from_u128(346068613937873713707102513083643),
            ServiceClass::Fax => Uuid::from_u128(346147842100387978044696057033979),
            ServiceClass::HeadsetAgw => Uuid::from_u128(346227070262902242382289600984315),
            ServiceClass::Wap => Uuid::from_u128(346306298425416506719883144934651),
            ServiceClass::WapClient => Uuid::from_u128(346385526587930771057476688884987),
            ServiceClass::Panu => Uuid::from_u128(346464754750445035395070232835323),
            ServiceClass::Nap => Uuid::from_u128(346543982912959299732663776785659),
            ServiceClass::Gn => Uuid::from_u128(346623211075473564070257320735995),
            ServiceClass::DirectPrinting => Uuid::from_u128(346702439237987828407850864686331),
            ServiceClass::ReferencePrinting => Uuid::from_u128(346781667400502092745444408636667),
            ServiceClass::Imaging => Uuid::from_u128(346860895563016357083037952587003),
            ServiceClass::ImagingResponder => Uuid::from_u128(346940123725530621420631496537339),
            ServiceClass::ImagingArchive => Uuid::from_u128(347019351888044885758225040487675),
            ServiceClass::ImagingRefobjs => Uuid::from_u128(347098580050559150095818584438011),
            ServiceClass::Handsfree => Uuid::from_u128(347177808213073414433412128388347),
            ServiceClass::HandsfreeAgw => Uuid::from_u128(347257036375587678771005672338683),
            ServiceClass::DirectPrtRefobjs => Uuid::from_u128(347336264538101943108599216289019),
            ServiceClass::ReflectedUi => Uuid::from_u128(347415492700616207446192760239355),
            ServiceClass::BasicPrinting => Uuid::from_u128(347494720863130471783786304189691),
            ServiceClass::PrintingStatus => Uuid::from_u128(347573949025644736121379848140027),
            ServiceClass::Hid => Uuid::from_u128(347653177188159000458973392090363),
            ServiceClass::Hcr => Uuid::from_u128(347732405350673264796566936040699),
            ServiceClass::HcrPrint => Uuid::from_u128(347811633513187529134160479991035),
            ServiceClass::HcrScan => Uuid::from_u128(347890861675701793471754023941371),
            ServiceClass::Cip => Uuid::from_u128(347970089838216057809347567891707),
            ServiceClass::VideoConfGw => Uuid::from_u128(348049318000730322146941111842043),
            ServiceClass::UdiMt => Uuid::from_u128(348128546163244586484534655792379),
            ServiceClass::UdiTa => Uuid::from_u128(348207774325758850822128199742715),
            ServiceClass::Av => Uuid::from_u128(348287002488273115159721743693051),
            ServiceClass::Sap => Uuid::from_u128(348366230650787379497315287643387),
            ServiceClass::PbapPce => Uuid::from_u128(348445458813301643834908831593723),
            ServiceClass::PbapPse => Uuid::from_u128(348524686975815908172502375544059),
            ServiceClass::Pbap => Uuid::from_u128(348603915138330172510095919494395),
            ServiceClass::MapMse => Uuid::from_u128(348762371463358701185283007395067),
            ServiceClass::MapMce => Uuid::from_u128(348841599625872965522876551345403),
            ServiceClass::Map => Uuid::from_u128(348920827788387229860470095295739),
            ServiceClass::Gnss => Uuid::from_u128(349000055950901494198063639246075),
            ServiceClass::GnssServer => Uuid::from_u128(349079284113415758535657183196411),
            ServiceClass::MpsSc => Uuid::from_u128(349396196763472815886031358997755),
            ServiceClass::Mps => Uuid::from_u128(349475424925987080223624902948091),
            ServiceClass::PnpInfo => Uuid::from_u128(365083372941297154729553061164283),
            ServiceClass::GenericNetworking => Uuid::from_u128(365162601103811419067146605114619),
            ServiceClass::GenericFiletrans => Uuid::from_u128(365241829266325683404740149064955),
            ServiceClass::GenericAudio => Uuid::from_u128(365321057428839947742333693015291),
            ServiceClass::GenericTelephony => Uuid::from_u128(365400285591354212079927236965627),
            ServiceClass::Upnp => Uuid::from_u128(365479513753868476417520780915963),
            ServiceClass::UpnpIp => Uuid::from_u128(365558741916382740755114324866299),
            ServiceClass::UpnpPan => Uuid::from_u128(385365782544948825153500312450299),
            ServiceClass::UpnpLap => Uuid::from_u128(385445010707463089491093856400635),
            ServiceClass::UpnpL2cap => Uuid::from_u128(385524238869977353828687400350971),
            ServiceClass::VideoSource => Uuid::from_u128(385603467032491618166280944301307),
            ServiceClass::VideoSink => Uuid::from_u128(385682695195005882503874488251643),
            ServiceClass::VideoDistribution => Uuid::from_u128(385761923357520146841468032201979),
            ServiceClass::Hdp => Uuid::from_u128(405648192148600495577447563736315),
            ServiceClass::HdpSource => Uuid::from_u128(405727420311114759915041107686651),
            ServiceClass::HdpSink => Uuid::from_u128(405806648473629024252634651636987),
            ServiceClass::GenericAccess => Uuid::from_u128(486777830563207177273236568880379),
            ServiceClass::GenericAttrib => Uuid::from_u128(486857058725721441610830112830715),
            ServiceClass::AppleAgent => Uuid::from_u128(670745623921328969165445621560571),
        }
    }
}

impl TryFrom<Uuid> for ServiceClass {
    type Error = Uuid;
    fn try_from(uuid: Uuid) -> Result<Self, Uuid> {
        #[allow(unreachable_patterns)]
        #[allow(clippy::match_overlapping_arm)]
        match uuid.as_u128() {
            324518553733993813881658558592251 => Ok(Self::SdpServer),
            324597781896508078219252102542587 => Ok(Self::BrowseGrpDesc),
            324677010059022342556845646492923 => Ok(Self::PublicBrowseGroup),
            344880191500159748643199353828603 => Ok(Self::SerialPort),
            344959419662674012980792897778939 => Ok(Self::LanAccess),
            345038647825188277318386441729275 => Ok(Self::DialupNet),
            345117875987702541655979985679611 => Ok(Self::IrmcSync),
            345197104150216805993573529629947 => Ok(Self::ObexObjpush),
            345276332312731070331167073580283 => Ok(Self::ObexFiletrans),
            345355560475245334668760617530619 => Ok(Self::IrmcSyncCmd),
            345434788637759599006354161480955 => Ok(Self::Headset),
            345514016800273863343947705431291 => Ok(Self::CordlessTelephony),
            345593244962788127681541249381627 => Ok(Self::AudioSource),
            345672473125302392019134793331963 => Ok(Self::AudioSink),
            345751701287816656356728337282299 => Ok(Self::AvRemoteTarget),
            345830929450330920694321881232635 => Ok(Self::AdvancedAudio),
            345910157612845185031915425182971 => Ok(Self::AvRemote),
            345989385775359449369508969133307 => Ok(Self::AvRemoteController),
            346068613937873713707102513083643 => Ok(Self::Intercom),
            346147842100387978044696057033979 => Ok(Self::Fax),
            346227070262902242382289600984315 => Ok(Self::HeadsetAgw),
            346306298425416506719883144934651 => Ok(Self::Wap),
            346385526587930771057476688884987 => Ok(Self::WapClient),
            346464754750445035395070232835323 => Ok(Self::Panu),
            346543982912959299732663776785659 => Ok(Self::Nap),
            346623211075473564070257320735995 => Ok(Self::Gn),
            346702439237987828407850864686331 => Ok(Self::DirectPrinting),
            346781667400502092745444408636667 => Ok(Self::ReferencePrinting),
            346860895563016357083037952587003 => Ok(Self::Imaging),
            346940123725530621420631496537339 => Ok(Self::ImagingResponder),
            347019351888044885758225040487675 => Ok(Self::ImagingArchive),
            347098580050559150095818584438011 => Ok(Self::ImagingRefobjs),
            347177808213073414433412128388347 => Ok(Self::Handsfree),
            347257036375587678771005672338683 => Ok(Self::HandsfreeAgw),
            347336264538101943108599216289019 => Ok(Self::DirectPrtRefobjs),
            347415492700616207446192760239355 => Ok(Self::ReflectedUi),
            347494720863130471783786304189691 => Ok(Self::BasicPrinting),
            347573949025644736121379848140027 => Ok(Self::PrintingStatus),
            347653177188159000458973392090363 => Ok(Self::Hid),
            347732405350673264796566936040699 => Ok(Self::Hcr),
            347811633513187529134160479991035 => Ok(Self::HcrPrint),
            347890861675701793471754023941371 => Ok(Self::HcrScan),
            347970089838216057809347567891707 => Ok(Self::Cip),
            348049318000730322146941111842043 => Ok(Self::VideoConfGw),
            348128546163244586484534655792379 => Ok(Self::UdiMt),
            348207774325758850822128199742715 => Ok(Self::UdiTa),
            348287002488273115159721743693051 => Ok(Self::Av),
            348366230650787379497315287643387 => Ok(Self::Sap),
            348445458813301643834908831593723 => Ok(Self::PbapPce),
            348524686975815908172502375544059 => Ok(Self::PbapPse),
            348603915138330172510095919494395 => Ok(Self::Pbap),
            348762371463358701185283007395067 => Ok(Self::MapMse),
            348841599625872965522876551345403 => Ok(Self::MapMce),
            348920827788387229860470095295739 => Ok(Self::Map),
            349000055950901494198063639246075 => Ok(Self::Gnss),
            349079284113415758535657183196411 => Ok(Self::GnssServer),
            349396196763472815886031358997755 => Ok(Self::MpsSc),
            349475424925987080223624902948091 => Ok(Self::Mps),
            365083372941297154729553061164283 => Ok(Self::PnpInfo),
            365162601103811419067146605114619 => Ok(Self::GenericNetworking),
            365241829266325683404740149064955 => Ok(Self::GenericFiletrans),
            365321057428839947742333693015291 => Ok(Self::GenericAudio),
            365400285591354212079927236965627 => Ok(Self::GenericTelephony),
            365479513753868476417520780915963 => Ok(Self::Upnp),
            365558741916382740755114324866299 => Ok(Self::UpnpIp),
            385365782544948825153500312450299 => Ok(Self::UpnpPan),
            385445010707463089491093856400635 => Ok(Self::UpnpLap),
            385524238869977353828687400350971 => Ok(Self::UpnpL2cap),
            385603467032491618166280944301307 => Ok(Self::VideoSource),
            385682695195005882503874488251643 => Ok(Self::VideoSink),
            385761923357520146841468032201979 => Ok(Self::VideoDistribution),
            405648192148600495577447563736315 => Ok(Self::Hdp),
            405727420311114759915041107686651 => Ok(Self::HdpSource),
            405806648473629024252634651636987 => Ok(Self::HdpSink),
            486777830563207177273236568880379 => Ok(Self::GenericAccess),
            486857058725721441610830112830715 => Ok(Self::GenericAttrib),
            670745623921328969165445621560571 => Ok(Self::AppleAgent),
            _ => Err(uuid),
        }
    }
}

