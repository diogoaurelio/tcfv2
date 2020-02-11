cmake_minimum_required(VERSION 3.14)
project(tcf)

set(CMAKE_CXX_STANDARD 17)

add_executable(tcf main.cpp ${PROJECT_SOURCE_DIR}/gdpr/segment/Core.cpp ${PROJECT_SOURCE_DIR}/gdpr/segment/Core.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/Field.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/Field.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/Vendor.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/Vendor.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/Created.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/Created.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/LastUpdated.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/LastUpdated.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/CmpId.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/CmpId.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/CmpVersion.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/CmpVersion.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/ConsentScreen.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/ConsentScreen.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/ConsentLanguage.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/ConsentLanguage.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/VendorListVersion.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/VendorListVersion.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/TcfPolicyVersion.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/TcfPolicyVersion.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/IsServiceSpecific.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/IsServiceSpecific.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/UseNonStandardStacks.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/UseNonStandardStacks.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/SpecialFeatureOptIns.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/SpecialFeatureOptIns.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PurposesConsent.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PurposesConsent.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PurposesLITransparency.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PurposesLITransparency.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PurposeOneTreatment.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PurposeOneTreatment.h
        ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PublisherCC.cpp ${PROJECT_SOURCE_DIR}/gdpr/field/v2/PublisherCC.h

        )
