//
//  ISPNotificationConsts.h
//  ISPLowEnergyManager
//
//  Created by Stephen M Moraco on 03/17/13.
//  Copyright (c) 2013 Iron Sheep Productions, LLC. All rights reserved.
//


//  BLEBluetoothManager Callbacks
#define kNOTIFICATION_DEVICE_SCAN_STARTED @"NOTIFICATION_DEVICE_SCAN_STARTED"
#define kNOTIFICATION_DEVICE_SCAN_STOPPED @"NOTIFICATION_DEVICE_SCAN_STOPPED"

#define kNOTIFICATION_ADD_BLE_DEVICE @"NOTIFICATION_ADD_BLE_DEVICE"
#define kNOTIFICATION_ALL_DEVICES_REMOVED @"NOTIFICATION_ALL_DEVICES_REMOVED"

#define kNOTIFICATION_CONNECT_BLE_DEVICE_SUCCESS @"NOTIFICATION_CONNECT_BLE_DEVICE_SUCCESS"
#define kNOTIFICATION_CONNECT_BLE_DEVICE_FAILURE @"NOTIFICATION_CONNECT_BLE_DEVICE_FAILURE"

#define kNOTIFICATION_DISCONNECT_BLE_DEVICE_SUCCESS @"NOTIFICATION_DISCONNECT_BLE_DEVICE_SUCCESS"
#define kNOTIFICATION_DISCONNECT_BLE_DEVICE_FAILURE @"NOTIFICATION_DISCONNECT_BLE_DEVICE_FAILURE"

#define kNOTIFICATION_DEVICE_SERVICES_DISCOVERED @"NOTIFICATION_DEVICE_SERVICES_DISCOVERED"
#define kNOTIFICATION_DEVICE_CHARACTERISTICS_DISCOVERED @"NOTIFICATION_DEVICE_CHARACTERISTICS_DISCOVERED"
#define kNOTIFICATION_DEVICE_CHARACTERISTIC_DESCRIPTORS_DISCOVERED @"NOTIFICATION_DEVICE_CHARACTERISTIC_DESCRIPTORS_DISCOVERED"

#define kNOTIFICATION_RADIO_POWERED_OFF @"NOTIFICATION_RADIO_POWERED_OFF"
#define kNOTIFICATION_BLE_NOT_AUTHORIZED @"NOTIFICATION_BLE_NOT_AUTHORIZED"
#define kNOTIFICATION_RADIO_STATE_UNKNOWN @"NOTIFICATION_RADIO_STATE_UNKNOWN"
#define kNOTIFICATION_RADIO_STATE_UNSUPPORTED @"NOTIFICATION_RADIO_STATE_UNSUPPORTED"


// CBPeripheralDelegate (via BLEBluetoothManager) Callbacks
#define kNOTIFICATION_DEVICE_UPDATED_NAME @"NOTIFICATION_DEVICE_UPDATED_NAME"
#define kNOTIFICATION_DEVICE_INVALIDATED_SERVICES @"NOTIFICATION_DEVICE_INVALIDATED_SERVICES"
#define kNOTIFICATION_DEVICE_UPDATED_RSSI @"NOTIFICATION_DEVICE_UPDATED_RSSI"
#define kNOTIFICATION_DEVICE_DISCOVERED_SERVICES @"NOTIFICATION_DEVICE_DISCOVERED_SERVICES"
#define kNOTIFICATION_DEVICE_DISCOVERED_INCLUDED_SERVICES @"NOTIFICATION_DEVICE_DISCOVERED_INCLUDED_SERVICES"
#define kNOTIFICATION_DEVICE_DISCOVERED_CHARACTERISTICS @"NOTIFICATION_DEVICE_DISCOVERED_CHARACTERISTICS"
#define kNOTIFICATION_DEVICE_UPDATED_CHARACTERISTIC_VALUE @"NOTIFICATION_DEVICE_UPDATED_CHARACTERISTIC_VALUE"
#define kNOTIFICATION_DEVICE_WROTE_CHARACTERISTIC_VALUE @"NOTIFICATION_DEVICE_WROTE_CHARACTERISTIC_VALUE"
#define kNOTIFICATION_DEVICE_DISCOVERED_CHARACTERISTIC_DESCRIPTORS @"NOTIFICATION_DEVICE_DISCOVERED_CHARACTERISTIC_DESCRIPTORS"
#define kNOTIFICATION_DEVICE_UPDATED_CHARACTERISTIC_NOTIF_STATE @"NOTIFICATION_DEVICE_UPDATED_CHARACTERISTIC_NOTIF_STATE"
#define kNOTIFICATION_DEVICE_UPDATED_DESCRIPTOR_VALUE @"NOTIFICATION_DEVICE_UPDATED_DESCRIPTOR_VALUE"
#define kNOTIFICATION_DEVICE_WROTE_DESCRIPTOR_VALUE @"NOTIFICATION_DEVICE_WROTE_DESCRIPTOR_VALUE"

// unused... for now...
#define kNOTIFICATION_READ_BLE_DEVICE_BUFFER @"NOTIFICATION_READ_BLE_DEVICE_BUFFER"
#define kNOTIFICATION_READ_BLE_DEVICE_BUFFER_SIZE @"NOTIFICATION_READ_BLE_DEVICE_BUFFER_SIZE"
#define kNOTIFICATION_CLEAR_BLE_DEVICE_BUFFER_SIZE @"NOTIFICATION_CLEAR_BLE_DEVICE_BUFFER_SIZE"
#define kNOTIFICATION_WRITE_BLE_DEVICE_BUFFER @"NOTIFICATION_WRITE_BLE_DEVICE_BUFFER"

#define kNOTIFICATION_BLE_DEVICE_CHARACTERISTIC_VALUE_READ @"NOTIFICATION_BLE_DEVICE_CHARACTERISTIC_VALUE_READ"
#define kNOTIFICATION_BLE_DEVICE_CHARACTERISTIC_VALUE_WRITTEN @"NOTIFICATION_BLE_DEVICE_CHARACTERISTIC_VALUE_WRITTEN"
