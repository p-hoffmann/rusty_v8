/*
 * Temporal C Shim - Stub Implementations
 *
 * This file provides stub implementations of temporal_rs functions expected by V8.
 * These stubs allow the build to complete successfully during the Deno upgrade process.
 *
 * IMPORTANT: These are non-functional stubs. Full temporal support requires proper
 * integration with the ry_temporal_capi library.
 *
 * TODO: Replace with proper temporal_capi linking or rebuild V8 without temporal support
 */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

// Opaque types (matching temporal_capi)
typedef struct OwnedPartialZonedDateTime OwnedPartialZonedDateTime;
typedef struct OwnedRelativeTo OwnedRelativeTo;
typedef struct PlainMonthDay PlainMonthDay;
typedef struct PlainYearMonth PlainYearMonth;
typedef struct TimeZone TimeZone;
typedef struct ZonedDateTime ZonedDateTime;
typedef struct TemporalError TemporalError;
typedef struct I128Nanoseconds I128Nanoseconds;

// String view types (matching diplomat)
typedef struct {
    const char* data;
    size_t len;
} DiplomatStringView;

typedef struct {
    const uint16_t* data;
    size_t len;
} DiplomatString16View;

// Result types - simplified to avoid incomplete type errors
// These use uint8_t arrays to hold the error data without needing the full type definition
typedef struct {
    union {
        OwnedPartialZonedDateTime* ok;
        uint8_t err_data[8];  // Placeholder for error
    };
    bool is_ok;
} temporal_rs_OwnedPartialZonedDateTime_from_utf8_result;

typedef struct {
    union {
        OwnedPartialZonedDateTime* ok;
        uint8_t err_data[8];
    };
    bool is_ok;
} temporal_rs_OwnedPartialZonedDateTime_from_utf16_result;

typedef struct {
    union {
        OwnedRelativeTo* ok;
        uint8_t err_data[8];
    };
    bool is_ok;
} temporal_rs_OwnedRelativeTo_try_from_str_result;

typedef struct {
    union {
        ZonedDateTime* ok;
        uint8_t err_data[8];
    };
    bool is_ok;
} temporal_rs_ZonedDateTime_from_owned_partial_result;

typedef struct {
    union {
        I128Nanoseconds* ok;
        uint8_t err_data[8];
    };
    bool is_ok;
} temporal_rs_PlainMonthDay_epoch_ns_for_result;

typedef struct {
    union {
        I128Nanoseconds* ok;
        uint8_t err_data[8];
    };
    bool is_ok;
} temporal_rs_PlainYearMonth_epoch_ns_for_result;

// Stub implementations - these return errors/nulls to prevent crashes

void temporal_rs_OwnedPartialZonedDateTime_destroy(OwnedPartialZonedDateTime* self) {
    // Stub: no-op
    (void)self;
}

temporal_rs_OwnedPartialZonedDateTime_from_utf8_result
temporal_rs_OwnedPartialZonedDateTime_from_utf8(DiplomatStringView s) {
    (void)s;
    temporal_rs_OwnedPartialZonedDateTime_from_utf8_result result = {.is_ok = false};
    return result;
}

temporal_rs_OwnedPartialZonedDateTime_from_utf16_result
temporal_rs_OwnedPartialZonedDateTime_from_utf16(DiplomatString16View s) {
    (void)s;
    temporal_rs_OwnedPartialZonedDateTime_from_utf16_result result = {.is_ok = false};
    return result;
}

temporal_rs_OwnedRelativeTo_try_from_str_result
temporal_rs_OwnedRelativeTo_try_from_str(DiplomatStringView s) {
    (void)s;
    temporal_rs_OwnedRelativeTo_try_from_str_result result = {.is_ok = false};
    return result;
}

temporal_rs_PlainMonthDay_epoch_ns_for_result
temporal_rs_PlainMonthDay_epoch_ns_for(const PlainMonthDay* self, DiplomatStringView tz) {
    (void)self;
    (void)tz;
    temporal_rs_PlainMonthDay_epoch_ns_for_result result = {.is_ok = false};
    return result;
}

uint8_t temporal_rs_PlainMonthDay_iso_day(const PlainMonthDay* self) {
    (void)self;
    return 1;  // Default day
}

uint8_t temporal_rs_PlainMonthDay_iso_month(const PlainMonthDay* self) {
    (void)self;
    return 1;  // Default month
}

int32_t temporal_rs_PlainMonthDay_iso_year(const PlainMonthDay* self) {
    (void)self;
    return 1970;  // Default year
}

temporal_rs_PlainYearMonth_epoch_ns_for_result
temporal_rs_PlainYearMonth_epoch_ns_for(const PlainYearMonth* self, DiplomatStringView tz) {
    (void)self;
    (void)tz;
    temporal_rs_PlainYearMonth_epoch_ns_for_result result = {.is_ok = false};
    return result;
}

uint8_t temporal_rs_PlainYearMonth_iso_month(const PlainYearMonth* self) {
    (void)self;
    return 1;  // Default month
}

int32_t temporal_rs_PlainYearMonth_iso_year(const PlainYearMonth* self) {
    (void)self;
    return 1970;  // Default year
}

TimeZone* temporal_rs_TimeZone_clone(const TimeZone* self) {
    (void)self;
    return NULL;  // Stub: return null
}

void temporal_rs_TimeZone_destroy(TimeZone* self) {
    // Stub: no-op
    (void)self;
}

temporal_rs_ZonedDateTime_from_owned_partial_result
temporal_rs_ZonedDateTime_from_owned_partial(OwnedPartialZonedDateTime* partial) {
    (void)partial;
    temporal_rs_ZonedDateTime_from_owned_partial_result result = {.is_ok = false};
    return result;
}
