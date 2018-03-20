#ifndef _HAP_H_
#define _HAP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#define HAP_ID_LENGTH       17
#define HAP_PINCODE_LENGTH  10

enum hap_accessory_category {
    HAP_ACCESSORY_CATEGORY_OTHER = 1,
    HAP_ACCESSORY_CATEGORY_BRIDGE,
    HAP_ACCESSORY_CATEGORY_FAN,
    HAP_ACCESSORY_CATEGORY_GARAGE,
    HAP_ACCESSORY_CATEGORY_LIGHTBULB,
    HAP_ACCESSORY_CATEGORY_DOOR_LOCK,
    HAP_ACCESSORY_CATEGORY_OUTLET,
    HAP_ACCESSORY_CATEGORY_SWITCH,
    HAP_ACCESSORY_CATEGORY_THERMOSTAT,
    HAP_ACCESSORY_CATEGORY_SENSOR,
    HAP_ACCESSORY_CATEGORY_SECURITY_SYSTEM,
    HAP_ACCESSORY_CATEGORY_DOOR,
    HAP_ACCESSORY_CATEGORY_WINDOW,
    HAP_ACCESSORY_CATEGORY_WINDOW_COVERING,
    HAP_ACCESSORY_CATEGORY_PROGRAMMABLE_SWITCH,
    HAP_ACCESSORY_CATEGORY_RANGE_EXTENDER,
    HAP_ACCESSORY_CATEGORY_IP_CAMERA,
    HAP_ACCESSORY_CATEGORY_VIDEO_DOOR_BEEL,
    HAP_ACCESSORY_CATEGORY_AIR_PURIFIER,
};

enum hap_service_type {
    HAP_SERVICE_ACCESSORY_INFORMATION = 0x3E,
    HAP_SERVICE_FAN = 0x40,
    HAP_SERVICE_GARAGE_DOOR_OPENER = 0x41,
    HAP_SERVICE_LIGHTBULB = 0x43,
    HAP_SERVICE_LOCK_MANAGEMENT = 0x44,
    HAP_SERVICE_LOCK_MECHANISM = 0x45,
    HAP_SERVICE_OUTLET = 0x47,
    HAP_SERVICE_SWITCHS = 0x49,
    HAP_SERVICE_THERMOSTAT = 0x4A,
    HAP_SERVICE_AIR_QUALITY_SENSOR = 0x8D,
    HAP_SERVICE_SECURITY_SYSTEM = 0x7E,
    HAP_SERVICE_CARBON_MONOXIDE_SENSOR = 0x7F,
    HAP_SERVICE_CONTACT_SENSOR = 0x80,
    HAP_SERVICE_DOOR = 0x81,
    HAP_SERVICE_HUMIDITY_SENSOR = 0x82,
    HAP_SERVICE_LEAK_SENSOR = 0x83,
    HAP_SERVICE_LIGHT_SENSOR = 0x84,
    HAP_SERVICE_MOTION_SENSOR = 0x85,
    HAP_SERVICE_OCCUPANCY_SENSOR = 0x86,
    HAP_SERVICE_SMOKE_SENSOR = 0x87,
    HAP_SERVICE_STATELESS_PROGRAMMABLE_SWITCH= 0x89,
    HAP_SERVICE_TEMPERATURE_SENSOR = 0x8A,
    HAP_SERVICE_WINDOW = 0x8B,
    HAP_SERVICE_WINDOW_COVERING = 0x8C,
    HAP_SERVICE_BATTERY_SERVICE = 0x96,
    HAP_SERVICE_CARBON_DIOXIDE_SENSOR = 0x97,
    HAP_SERVICE_CAMERA_RTP_STREAM_MANAGEMENT = 0x110,
    HAP_SERVICE_MICROPHONE = 0x112,
    HAP_SERVICE_SPEAKER = 0x113,
    HAP_SERVICE_DOORBELL = 0x121,
    HAP_SERVICE_FAN_V2 = 0xB7,
    HAP_SERVICE_SLAT = 0xB9,
    HAP_SERVICE_FILTER_MAINTENANCE = 0xBA,
    HAP_SERVICE_AIR_PURIFIER = 0xBB,
    HAP_SERVICE_SERVICE_LABEL = 0xCC,
};

enum hap_characteristic_type {
    HAP_CHARACTER_ADMINISTRATOR_ONLY_ACCESS = 0x01,
    HAP_CHARACTER_AUDIO_FEEDBACK = 0x05,
    HAP_CHARACTER_BRIGHTNESS = 0x08,
    HAP_CHARACTER_COOLING_THRESHOLD_TEMPERATURE = 0x0D,
    HAP_CHARACTER_CURRENT_DOOR_STATE = 0x0E,
    HAP_CHARACTER_CURRENT_HEATING_COOLING_STATE = 0x0F,
    HAP_CHARACTER_CURRENT_RELATIVE_HUMIDITY = 0x10,
    HAP_CHARACTER_CURRENT_TEMPERATURE = 0x11,
    HAP_CHARACTER_FIRMWARE_REVISION = 0x52,
    HAP_CHARACTER_HARDWARE_REVISION = 0x53,
    HAP_CHARACTER_HEATING_THRESHOLD_TEMPERATURE = 0x12,
    HAP_CHARACTER_HUE = 0x13,
    HAP_CHARACTER_IDENTIFY = 0x14,
    HAP_CHARACTER_LOCK_CONTROL_POINT = 0x19,
    HAP_CHARACTER_LOCK_CURRENT_STATE = 0x1D,
    HAP_CHARACTER_LOCK_LAST_KNOWN_ACTION = 0x1C,
    HAP_CHARACTER_LOCK_MANAGEMENT_AUTO_SECURITY_TIMEOUT = 0x1A,
    HAP_CHARACTER_LOCK_TARGET_STATE = 0x1E,
    HAP_CHARACTER_LOGS = 0x1F,
    HAP_CHARACTER_MANUFACTURER = 0x20,
    HAP_CHARACTER_MODEL = 0x21,
    HAP_CHARACTER_MOTION_DETECTED = 0x22,
    HAP_CHARACTER_NAME = 0x23,
    HAP_CHARACTER_OBSTRUCTION_DETECTED = 0x24,
    HAP_CHARACTER_ON = 0x25,
    HAP_CHARACTER_POWER_STATE = 0x25,
    HAP_CHARACTER_OUTLET_IN_USE = 0x26,
    HAP_CHARACTER_ROTATION_DIRECTION = 0x28,
    HAP_CHARACTER_ROTATION_SPEED = 0x29,
    HAP_CHARACTER_SATURATION = 0x2F,
    HAP_CHARACTER_SERIAL_NUMBER = 0x30,
    HAP_CHARACTER_TARGET_DOORSTATE = 0x32,
    HAP_CHARACTER_TARGET_HEATING_COOLING_STATE = 0x33,
    HAP_CHARACTER_TARGET_RELATIVE_HUMIDITY = 0x34,
    HAP_CHARACTER_TARGET_TEMPERATURE = 0x35,
    HAP_CHARACTER_TEMPERATURE_DISPLAY_UNITS = 0x36,
    HAP_CHARACTER_VERSION = 0x37,
    HAP_CHARACTER_AIR_PARTICULATE_DENSITY = 0x64,
    HAP_CHARACTER_AIR_PARTICULATE_SIZE = 0x65,
    HAP_CHARACTER_SECURITY_SYSTEM_CURRENT_STATE = 0x66,
    HAP_CHARACTER_SECURITY_SYSTEM_TARGET_STATE = 0x67,
    HAP_CHARACTER_BATTERY_LEVER = 0x68,
    HAP_CHARACTER_CARBON_MONOXIDE_DETECTED = 0x69,
    HAP_CHARACTER_CONTACT_SENSOR_STATE = 0x6A,
    HAP_CHARACTER_CURRENT_AMBIENT_LIGHT_LEVEL = 0x6B,
    HAP_CHARACTER_CURRENT_HORIZONTAL_TILT_ANGLE = 0x6C,
    HAP_CHARACTER_CURRENT_POSITION = 0x6D,
    HAP_CHARACTER_CURRENT_VERTICAL_TILT_ANGLE = 0x6E,
    HAP_CHARACTER_HOLD_POSITION = 0x6F,
    HAP_CHARACTER_LEAK_DETECTED = 0x70,
    HAP_CHARACTER_OCCUPANCY_DETECTED = 0x71,
    HAP_CHARACTER_POSITION_STATE = 0x72,
    HAP_CHARACTER_PROGRAMMABLE_SWITCH_EVENT = 0x73,
    HAP_CHARACTER_STATUS_ACTIVE = 0x75,
    HAP_CHARACTER_SMOKE_DETECTED = 0x76,
    HAP_CHARACTER_STATUS_FAULT = 0x77,
    HAP_CHARACTER_STATUS_JAMMED = 0x78,
    HAP_CHARACTER_STATUS_LOW_BATTERY = 0x79,
    HAP_CHARACTER_STATUS_TAMPERED = 0x7A,
    HAP_CHARACTER_TARGET_HORIZONTAL_TILT_ANGLE = 0x7B,
    HAP_CHARACTER_TARGET_POSITION = 0x7C,
    HAP_CHARACTER_TARGET_VERTICAL_TILT_ANGLE = 0x7D,
    HAP_CHARACTER_SECURITY_SYSTEM_ALARM_TYPE = 0x8E,
    HAP_CHARACTER_CHARGING_STATE = 0x8F,
    HAP_CHARACTER_CARBON_MONOXIDE_LEVEL = 0x90,
    HAP_CHARACTER_CARBON_MONOXIDE_PEAK_LEVEL = 0x91,
    HAP_CHARACTER_CARBON_DIOXIDE_DETECTED = 0x92,
    HAP_CHARACTER_CARBON_DIOXIDE_LEVEL = 0x93,
    HAP_CHARACTER_CARBON_DIOXIDE_PEAK_LEVEL = 0x94,
    HAP_CHARACTER_AIR_QUALITY = 0x95,
    HAP_CHARACTER_STREAMING_STATUS = 0x120,
    HAP_CHARACTER_SUPPORTED_VIDEO_STREAMING_CONFIGURATION = 0x114,
    HAP_CHARACTER_SUPPORTED_AUDIO_STREAMING_CONFIGURATION = 0x115,
    HAP_CHARACTER_SUPPORTED_RTP_CONFIGURATION = 0x116,
    HAP_CHARACTER_SELECTED_RTP_STREAM_CONFIGURATION = 0x117,
    HAP_CHARACTER_SETUP_ENDPOINTS = 0x118,
    HAP_CHARACTER_VOLUME = 0x119,
    HAP_CHARACTER_MUTE = 0x11A,
    HAP_CHARACTER_NIGHT_VISION = 0x11B,
    HAP_CHARACTER_OPTICAL_ZOOM = 0x11C,
    HAP_CHARACTER_DIGITAL_ZOOM = 0x11D,
    HAP_CHARACTER_IMAGE_ROTATION = 0x11E,
    HAP_CHARACTER_IMAGE_MIRRORING = 0x11F,
    HAP_CHARACTER_ACCESSORY_FLAGS = 0xA6,
    HAP_CHARACTER_LOCK_PHYSICAL_CONTROLS = 0xA7,
    HAP_CHARACTER_CURRENT_AIR_PURIFIER_STATE = 0xA9,
    HAP_CHARACTER_CURRENT_SLAT_STATE = 0xAA,
    HAP_CHARACTER_SLAT_TYPE = 0xC0,
    HAP_CHARACTER_FILTER_LIFE_LEVEL = 0xAB,
    HAP_CHARACTER_FILTER_CHANGE_INDICATION = 0xAC,
    HAP_CHARACTER_RESET_FILTER_INDICATION = 0xAD,
    HAP_CHARACTER_TARGET_AIR_PURIFIER_STATE = 0xA8,
    HAP_CHARACTER_TARGET_FAN_STATE = 0xBF,
    HAP_CHARACTER_CURRENT_FAN_STATE = 0xAF,
    HAP_CHARACTER_ACTIVE = 0xB0,
    HAP_CHARACTER_SWING_MODE = 0xB6,
    HAP_CHARACTER_CURRENT_TILT_ANGLE = 0xC1,
    HAP_CHARACTER_TARGET_TILT_ANGLE = 0xC2,
    HAP_CHARACTER_OZONE_DENSITY = 0xC3,
    HAP_CHARACTER_NITROGEN_DIOXIDE_DENSITY = 0xC4,
    HAP_CHARACTER_SULPHUR_DIOXIDE_DENSITY = 0xC5,
    HAP_CHARACTER_PM2_5_DENSITY = 0xC6,
    HAP_CHARACTER_PM10_DENSITY = 0xC7,
    HAP_CHARACTER_VOC_DENSITY = 0xC8,
    HAP_CHARACTER_SERVICE_LABEL_INDEX = 0xCB,
    HAP_CHARACTER_SERVICE_LABEL_NAMESPACE = 0xCD,
    HAP_CHARACTER_COLOR_TEMPERATURE = 0xCE,
};

struct hap_characteristic {
    enum hap_characteristic_type type;
    void* value;

    void* callback_arg;
    void* (*read)(void* arg);
    void (*write)(void* arg, void* value, int value_len);
    void (*notification)(void* arg, void* ev_handle, bool enable);
};

typedef struct {
    void (*hap_object_init)(void* arg);
} hap_accessory_callback_t;

void* hap_attr_accessory_add(void* acc_instance);
void* hap_attr_service_and_characteristics_add(void* acc_instance, void* _attr_a,
        enum hap_service_type type, struct hap_characteristic* cs, int nr_cs);

void* hap_accessory_register(char* name, char* id, char* pincode, char* vendor, enum hap_accessory_category category,
                        int port, uint32_t config_number, void* callback_arg, hap_accessory_callback_t* callback);


void hap_init(void);

#ifdef __cplusplus
}
#endif

#endif //#ifndef _HAP_H_
