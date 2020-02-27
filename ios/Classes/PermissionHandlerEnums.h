//
//  PermissionHandlerEnums.h
//  permission_handler
//
//  Created by Razvan Lung on 15/02/2019.
//

// ios: PermissionGroupCamera
// Info.plist: NSCameraUsageDescription
// dart: PermissionGroup.camera
#ifndef PERMISSION_CAMERA
    #define PERMISSION_CAMERA 1
#endif

// ios: PermissionGroupMicrophone
// Info.plist: NSMicrophoneUsageDescription
// dart: PermissionGroup.microphone
#ifndef PERMISSION_MICROPHONE
    #define PERMISSION_MICROPHONE 1
#endif

// ios: PermissionGroupPhotos
// Info.plist: NSPhotoLibraryUsageDescription
// dart: PermissionGroup.photos
#ifndef PERMISSION_PHOTOS
    #define PERMISSION_PHOTOS 1
#endif

// ios: [PermissionGroupLocation, PermissionGroupLocationAlways, PermissionGroupLocationWhenInUse]
// Info.plist: [NSLocationUsageDescription, NSLocationAlwaysAndWhenInUseUsageDescription, NSLocationWhenInUseUsageDescription]
// dart: [PermissionGroup.location, PermissionGroup.locationAlways, PermissionGroup.locationWhenInUse]
#ifndef PERMISSION_LOCATION
    #define PERMISSION_LOCATION 1
#endif

// ios: PermissionGroupNotification
// dart: PermissionGroup.notification
#ifndef PERMISSION_NOTIFICATIONS
    #define PERMISSION_NOTIFICATIONS 1
#endif

typedef NS_ENUM(int, PermissionGroup) {
    PermissionGroupCamera = 0,
    PermissionGroupLocation,
    PermissionGroupLocationAlways,
    PermissionGroupLocationWhenInUse,
    PermissionGroupNotification,
    PermissionGroupAccessMediaLocation,
    PermissionGroupUnknown,
};

typedef NS_ENUM(int, PermissionStatus) {
    PermissionStatusDenied = 0,
    PermissionStatusDisabled,
    PermissionStatusGranted,
    PermissionStatusRestricted,
    PermissionStatusUnknown,
};

typedef NS_ENUM(int, ServiceStatus) {
    ServiceStatusDisabled = 0,
    ServiceStatusEnabled,
    ServiceStatusNotApplicable,
    ServiceStatusUnknown,
};
