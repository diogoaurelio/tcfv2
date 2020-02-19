cmake_minimum_required(VERSION 3.14)
project(tcf)

set(CMAKE_CXX_STANDARD 17)

add_executable(tcf main.cpp
        gdpr/TCString.cpp
        gdpr/StringUtils.h gdpr/StringUtils.cpp
        gdpr/TCModel.h gdpr/TCModel.cpp

        gdpr/segment/Core.cpp gdpr/segment/Core.h
        gdpr/segment/Segment.h

        gdpr/field/Field.h
        gdpr/field/Version.cpp gdpr/field/Version.h
        gdpr/field/Created.cpp gdpr/field/Created.h
        gdpr/field/LastUpdated.cpp gdpr/field/LastUpdated.h
        gdpr/field/CmpId.cpp gdpr/field/CmpId.h
        gdpr/field/CmpVersion.cpp gdpr/field/CmpVersion.h
        gdpr/field/ConsentScreen.cpp gdpr/field/ConsentScreen.h
        gdpr/field/ConsentLanguage.cpp gdpr/field/ConsentLanguage.h
        gdpr/field/VendorListVersion.cpp gdpr/field/VendorListVersion.h
        gdpr/field/TcfPolicyVersion.cpp gdpr/field/TcfPolicyVersion.h
        gdpr/field/IsServiceSpecific.cpp gdpr/field/IsServiceSpecific.h
        gdpr/field/UseNonStandardStacks.cpp gdpr/field/UseNonStandardStacks.h
        gdpr/field/SpecialFeatureOptIns.cpp gdpr/field/SpecialFeatureOptIns.h
        gdpr/field/PurposesConsent.cpp gdpr/field/PurposesConsent.h
        gdpr/field/PurposesLITransparency.cpp gdpr/field/PurposesLITransparency.h
        gdpr/field/PurposeOneTreatment.cpp gdpr/field/PurposeOneTreatment.h
        gdpr/field/PublisherCC.cpp gdpr/field/PublisherCC.h

        gdpr/encoder/FieldEncoder.h
        gdpr/encoder/IntegerEncoder.cpp gdpr/encoder/IntegerEncoder.cpp
        gdpr/encoder/BitParser.cpp gdpr/encoder/BitParser.h

        )
