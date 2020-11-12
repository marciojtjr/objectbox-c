// Code generated by ObjectBox; DO NOT EDIT.

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "flatcc/flatcc.h"
#include "flatcc/flatcc_builder.h"
#include "objectbox.h"

/// Internal function used in other generated functions to put (write) explicitly typed objects 
static obx_id c_test_obx_h_put_object(OBX_box* box, void* object,
                             bool (*to_flatbuffer)(flatcc_builder_t*, const void*, void**, size_t*), OBXPutMode mode);

/// Internal function used in other generated functions to get (read) explicitly typed objects
static void* c_test_obx_h_get_object(OBX_box* box, obx_id id, void* (*from_flatbuffer)(const void*, size_t));


typedef struct Bar {
    uint64_t id;
    char* text;
    uint64_t fooId;
    
} Bar;

enum Bar_ {
    Bar_ENTITY_ID = 1,
    Bar_PROP_ID_id = 1,
    Bar_PROP_ID_text = 2,
    Bar_PROP_ID_fooId = 3,
};

/// Write given object to the FlatBufferBuilder
static bool Bar_to_flatbuffer(flatcc_builder_t* B, const Bar* object, void** out_buffer, size_t* out_size);

/// Read an object from a valid FlatBuffer.
/// If the read object contains vectors or strings, those are allocated on heap and must be freed after use by calling Bar_free_pointers().
/// Thus, when calling this function multiple times on the same object, ensure to call Bar_free_pointers() before subsequent calls to avoid leaks. 
/// @returns true if the object was deserialized successfully or false on (allocation) error in which case any memory 
///          allocated by this function will also be freed before returning, allowing you to retry.
static bool Bar_from_flatbuffer(const void* data, size_t size, Bar* out_object);

/// Read an object from a valid FlatBuffer, allocating the object on heap. 
/// The object must be freed after use by calling Bar_free();
static Bar* Bar_new_from_flatbuffer(const void* data, size_t size);

/// Free memory allocated for vector and string properties, setting the freed pointers to NULL.  
static void Bar_free_pointers(Bar* object);

/// Free Bar* object pointer and all its property pointers (vectors and strings).
/// Equivalent to calling Bar_free_pointers() followed by free();
static void Bar_free(Bar* object);

typedef struct Foo {
    uint64_t id;
    char* text;
    
} Foo;

enum Foo_ {
    Foo_ENTITY_ID = 2,
    Foo_PROP_ID_id = 1,
    Foo_PROP_ID_text = 2,
};

/// Write given object to the FlatBufferBuilder
static bool Foo_to_flatbuffer(flatcc_builder_t* B, const Foo* object, void** out_buffer, size_t* out_size);

/// Read an object from a valid FlatBuffer.
/// If the read object contains vectors or strings, those are allocated on heap and must be freed after use by calling Foo_free_pointers().
/// Thus, when calling this function multiple times on the same object, ensure to call Foo_free_pointers() before subsequent calls to avoid leaks. 
/// @returns true if the object was deserialized successfully or false on (allocation) error in which case any memory 
///          allocated by this function will also be freed before returning, allowing you to retry.
static bool Foo_from_flatbuffer(const void* data, size_t size, Foo* out_object);

/// Read an object from a valid FlatBuffer, allocating the object on heap. 
/// The object must be freed after use by calling Foo_free();
static Foo* Foo_new_from_flatbuffer(const void* data, size_t size);

/// Free memory allocated for vector and string properties, setting the freed pointers to NULL.  
static void Foo_free_pointers(Foo* object);

/// Free Foo* object pointer and all its property pointers (vectors and strings).
/// Equivalent to calling Foo_free_pointers() followed by free();
static void Foo_free(Foo* object);

typedef struct Typeful {
    uint64_t id;
    int32_t int_;
    int8_t int8;
    int16_t int16;
    int32_t int32;
    int64_t int64;
    uint32_t uint;
    uint8_t uint8;
    uint16_t uint16;
    uint32_t uint32;
    uint64_t uint64;
    bool bool_;
    char* string;
    char** stringvector;
    size_t stringvector_len;
    int8_t byte;
    uint8_t ubyte;
    int8_t* bytevector;
    size_t bytevector_len;
    uint8_t* ubytevector;
    size_t ubytevector_len;
    float float32;
    double float64;
    float float_;
    double double_;
    
} Typeful;

enum Typeful_ {
    Typeful_ENTITY_ID = 3,
    Typeful_PROP_ID_id = 1,
    Typeful_PROP_ID_int_ = 2,
    Typeful_PROP_ID_int8 = 3,
    Typeful_PROP_ID_int16 = 4,
    Typeful_PROP_ID_int32 = 5,
    Typeful_PROP_ID_int64 = 6,
    Typeful_PROP_ID_uint = 7,
    Typeful_PROP_ID_uint8 = 8,
    Typeful_PROP_ID_uint16 = 9,
    Typeful_PROP_ID_uint32 = 10,
    Typeful_PROP_ID_uint64 = 11,
    Typeful_PROP_ID_bool_ = 12,
    Typeful_PROP_ID_string = 13,
    Typeful_PROP_ID_stringvector = 14,
    Typeful_PROP_ID_byte = 15,
    Typeful_PROP_ID_ubyte = 16,
    Typeful_PROP_ID_bytevector = 17,
    Typeful_PROP_ID_ubytevector = 18,
    Typeful_PROP_ID_float32 = 19,
    Typeful_PROP_ID_float64 = 20,
    Typeful_PROP_ID_float_ = 21,
    Typeful_PROP_ID_double_ = 22,
};

/// Write given object to the FlatBufferBuilder
static bool Typeful_to_flatbuffer(flatcc_builder_t* B, const Typeful* object, void** out_buffer, size_t* out_size);

/// Read an object from a valid FlatBuffer.
/// If the read object contains vectors or strings, those are allocated on heap and must be freed after use by calling Typeful_free_pointers().
/// Thus, when calling this function multiple times on the same object, ensure to call Typeful_free_pointers() before subsequent calls to avoid leaks. 
/// @returns true if the object was deserialized successfully or false on (allocation) error in which case any memory 
///          allocated by this function will also be freed before returning, allowing you to retry.
static bool Typeful_from_flatbuffer(const void* data, size_t size, Typeful* out_object);

/// Read an object from a valid FlatBuffer, allocating the object on heap. 
/// The object must be freed after use by calling Typeful_free();
static Typeful* Typeful_new_from_flatbuffer(const void* data, size_t size);

/// Free memory allocated for vector and string properties, setting the freed pointers to NULL.  
static void Typeful_free_pointers(Typeful* object);

/// Free Typeful* object pointer and all its property pointers (vectors and strings).
/// Equivalent to calling Typeful_free_pointers() followed by free();
static void Typeful_free(Typeful* object);

static bool Bar_to_flatbuffer(flatcc_builder_t* B, const Bar* object, void** out_buffer, size_t* out_size) {
    assert(B);
    assert(object);
    assert(out_buffer);
    assert(out_size);

    flatcc_builder_reset(B);
    flatcc_builder_start_buffer(B, 0, 0, 0);
    
    flatcc_builder_ref_t offset_text = !object->text ? 0 : flatcc_builder_create_string_str(B, object->text);

    if (flatcc_builder_start_table(B, 3) != 0) return false;

    void* p;
    flatcc_builder_ref_t* _p;
    
    if (!(p = flatcc_builder_table_add(B, 0, 8, 8))) return false;
    flatbuffers_uint64_write_to_pe(p, object->id);
    
    if (offset_text) {
        if (!(_p = flatcc_builder_table_add_offset(B, 1))) return false;
        *_p = offset_text;
    }
    
    if (!(p = flatcc_builder_table_add(B, 2, 8, 8))) return false;
    flatbuffers_uint64_write_to_pe(p, object->fooId);
    
    flatcc_builder_ref_t ref;
    if (!(ref = flatcc_builder_end_table(B))) return false;
    if (!flatcc_builder_end_buffer(B, ref)) return false;
    return (*out_buffer = flatcc_builder_finalize_aligned_buffer(B, out_size)) != NULL;
}

static bool Bar_from_flatbuffer(const void* data, size_t size, Bar* out_object) {
    assert(data);
    assert(size > 0);
    assert(out_object);

    const uint8_t* table = (const uint8_t*) data + __flatbuffers_uoffset_read_from_pe(data);
    assert(table);
    const flatbuffers_voffset_t* vt = (const flatbuffers_voffset_t*) (table - __flatbuffers_soffset_read_from_pe(table));
    flatbuffers_voffset_t vs = __flatbuffers_voffset_read_from_pe(vt);

    // variables reused when reading strings and vectors
    flatbuffers_voffset_t offset;
    const flatbuffers_uoffset_t* val;
    size_t len;

    out_object->id = (vs < sizeof(vt[0]) * (0 + 3)) ? 0 : flatbuffers_uint64_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 0 + 2));
    
    if ((offset = (vs < sizeof(vt[0]) * (1 + 3)) ? 0 : __flatbuffers_voffset_read_from_pe(vt + 1 + 2))) {
        val = (const flatbuffers_uoffset_t*)(table + offset + sizeof(flatbuffers_uoffset_t) + __flatbuffers_uoffset_read_from_pe(table + offset));
        len = (size_t) __flatbuffers_uoffset_read_from_pe(val - 1);
        out_object->text = (char*) malloc((len+1) * sizeof(char));
        if (out_object->text == NULL) {
            Bar_free_pointers(out_object);
            return false;
        }
        memcpy((void*)out_object->text, (const void*)val, len+1);
        
    } else {
        out_object->text = NULL;
    }
    
    out_object->fooId = (vs < sizeof(vt[0]) * (2 + 3)) ? 0 : flatbuffers_uint64_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 2 + 2));
    return true;
}

static Bar* Bar_new_from_flatbuffer(const void* data, size_t size) {
    Bar* object = (Bar*) malloc(sizeof(Bar));
    if (object) {
        if (!Bar_from_flatbuffer(data, size, object)) {
            free(object);
            object = NULL;
        }
    }
    return object;
}

static void Bar_free_pointers(Bar* object) {
    if (object == NULL) return;
    if (object->text) {
        free(object->text);
        object->text = NULL;
    }
    
}

static void Bar_free(Bar* object) {
    Bar_free_pointers(object);
    free(object);
}

/// Insert or update the given object in the database.
/// @param object (in & out) will be updated with a newly inserted ID if the one specified previously was zero. If an ID 
/// was already specified (non-zero), it will remain unchanged.
/// @return object ID from the object param (see object param docs) or a zero on error. If a zero was returned, you can
/// check obx_last_error_*() to get the error details. In an unlikely event that those functions return no error
/// code/message, the error occurred in FlatBuffers serialization, e.g. due to memory allocation issues.
static obx_id Bar_put(OBX_box* box, Bar* object) {
    obx_id id = c_test_obx_h_put_object(box, object,
                               (bool (*)(flatcc_builder_t*, const void*, void**, size_t*)) Bar_to_flatbuffer,
                               OBXPutMode_PUT);
    if (id != 0) {
        object->id = id;  // update the ID property on new objects for convenience
    }
    return id;
}

/// Read an object from the database, returning a pointer.
/// @return an object pointer or NULL if an object with the given ID doesn't exist or any other error occurred. You can
/// check obx_last_error_*() if NULL is returned to get the error details. In an unlikely event that those functions
/// return no error code/message, the error occurred in FlatBuffers serialization, e.g. due to memory allocation issues.
/// @note: The returned object must be freed after use by calling Bar_free();
static Bar* Bar_get(OBX_box* box, obx_id id) {
    return (Bar*) c_test_obx_h_get_object(box, id, (void* (*) (const void*, size_t)) Bar_new_from_flatbuffer);
}

static bool Foo_to_flatbuffer(flatcc_builder_t* B, const Foo* object, void** out_buffer, size_t* out_size) {
    assert(B);
    assert(object);
    assert(out_buffer);
    assert(out_size);

    flatcc_builder_reset(B);
    flatcc_builder_start_buffer(B, 0, 0, 0);
    
    flatcc_builder_ref_t offset_text = !object->text ? 0 : flatcc_builder_create_string_str(B, object->text);

    if (flatcc_builder_start_table(B, 2) != 0) return false;

    void* p;
    flatcc_builder_ref_t* _p;
    
    if (!(p = flatcc_builder_table_add(B, 0, 8, 8))) return false;
    flatbuffers_uint64_write_to_pe(p, object->id);
    
    if (offset_text) {
        if (!(_p = flatcc_builder_table_add_offset(B, 1))) return false;
        *_p = offset_text;
    }
    
    flatcc_builder_ref_t ref;
    if (!(ref = flatcc_builder_end_table(B))) return false;
    if (!flatcc_builder_end_buffer(B, ref)) return false;
    return (*out_buffer = flatcc_builder_finalize_aligned_buffer(B, out_size)) != NULL;
}

static bool Foo_from_flatbuffer(const void* data, size_t size, Foo* out_object) {
    assert(data);
    assert(size > 0);
    assert(out_object);

    const uint8_t* table = (const uint8_t*) data + __flatbuffers_uoffset_read_from_pe(data);
    assert(table);
    const flatbuffers_voffset_t* vt = (const flatbuffers_voffset_t*) (table - __flatbuffers_soffset_read_from_pe(table));
    flatbuffers_voffset_t vs = __flatbuffers_voffset_read_from_pe(vt);

    // variables reused when reading strings and vectors
    flatbuffers_voffset_t offset;
    const flatbuffers_uoffset_t* val;
    size_t len;

    out_object->id = (vs < sizeof(vt[0]) * (0 + 3)) ? 0 : flatbuffers_uint64_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 0 + 2));
    
    if ((offset = (vs < sizeof(vt[0]) * (1 + 3)) ? 0 : __flatbuffers_voffset_read_from_pe(vt + 1 + 2))) {
        val = (const flatbuffers_uoffset_t*)(table + offset + sizeof(flatbuffers_uoffset_t) + __flatbuffers_uoffset_read_from_pe(table + offset));
        len = (size_t) __flatbuffers_uoffset_read_from_pe(val - 1);
        out_object->text = (char*) malloc((len+1) * sizeof(char));
        if (out_object->text == NULL) {
            Foo_free_pointers(out_object);
            return false;
        }
        memcpy((void*)out_object->text, (const void*)val, len+1);
        
    } else {
        out_object->text = NULL;
    }
    
    return true;
}

static Foo* Foo_new_from_flatbuffer(const void* data, size_t size) {
    Foo* object = (Foo*) malloc(sizeof(Foo));
    if (object) {
        if (!Foo_from_flatbuffer(data, size, object)) {
            free(object);
            object = NULL;
        }
    }
    return object;
}

static void Foo_free_pointers(Foo* object) {
    if (object == NULL) return;
    if (object->text) {
        free(object->text);
        object->text = NULL;
    }
    
}

static void Foo_free(Foo* object) {
    Foo_free_pointers(object);
    free(object);
}

/// Insert or update the given object in the database.
/// @param object (in & out) will be updated with a newly inserted ID if the one specified previously was zero. If an ID 
/// was already specified (non-zero), it will remain unchanged.
/// @return object ID from the object param (see object param docs) or a zero on error. If a zero was returned, you can
/// check obx_last_error_*() to get the error details. In an unlikely event that those functions return no error
/// code/message, the error occurred in FlatBuffers serialization, e.g. due to memory allocation issues.
static obx_id Foo_put(OBX_box* box, Foo* object) {
    obx_id id = c_test_obx_h_put_object(box, object,
                               (bool (*)(flatcc_builder_t*, const void*, void**, size_t*)) Foo_to_flatbuffer,
                               OBXPutMode_PUT);
    if (id != 0) {
        object->id = id;  // update the ID property on new objects for convenience
    }
    return id;
}

/// Read an object from the database, returning a pointer.
/// @return an object pointer or NULL if an object with the given ID doesn't exist or any other error occurred. You can
/// check obx_last_error_*() if NULL is returned to get the error details. In an unlikely event that those functions
/// return no error code/message, the error occurred in FlatBuffers serialization, e.g. due to memory allocation issues.
/// @note: The returned object must be freed after use by calling Foo_free();
static Foo* Foo_get(OBX_box* box, obx_id id) {
    return (Foo*) c_test_obx_h_get_object(box, id, (void* (*) (const void*, size_t)) Foo_new_from_flatbuffer);
}

static bool Typeful_to_flatbuffer(flatcc_builder_t* B, const Typeful* object, void** out_buffer, size_t* out_size) {
    assert(B);
    assert(object);
    assert(out_buffer);
    assert(out_size);

    flatcc_builder_reset(B);
    flatcc_builder_start_buffer(B, 0, 0, 0);
    
    flatcc_builder_ref_t offset_string = !object->string ? 0 : flatcc_builder_create_string_str(B, object->string);
    flatcc_builder_ref_t offset_stringvector = 0;
    if (object->stringvector) {
        flatcc_builder_start_offset_vector(B);
        for (size_t i = 0; i < object->stringvector_len; i++) {
            flatcc_builder_ref_t ref = !object->stringvector[i] ? 0 : flatcc_builder_create_string_str(B, object->stringvector[i]);
            if (ref) flatcc_builder_offset_vector_push(B, ref);
        }
        offset_stringvector = flatcc_builder_end_offset_vector(B);
    }
    flatcc_builder_ref_t offset_bytevector = !object->bytevector ? 0 : flatcc_builder_create_vector(B, object->bytevector, object->bytevector_len, sizeof(int8_t), sizeof(int8_t), FLATBUFFERS_COUNT_MAX(sizeof(int8_t)));
    flatcc_builder_ref_t offset_ubytevector = !object->ubytevector ? 0 : flatcc_builder_create_vector(B, object->ubytevector, object->ubytevector_len, sizeof(uint8_t), sizeof(uint8_t), FLATBUFFERS_COUNT_MAX(sizeof(uint8_t)));

    if (flatcc_builder_start_table(B, 22) != 0) return false;

    void* p;
    flatcc_builder_ref_t* _p;
    
    if (!(p = flatcc_builder_table_add(B, 0, 8, 8))) return false;
    flatbuffers_uint64_write_to_pe(p, object->id);
    
    if (!(p = flatcc_builder_table_add(B, 1, 4, 4))) return false;
    flatbuffers_int32_write_to_pe(p, object->int_);
    
    if (!(p = flatcc_builder_table_add(B, 2, 1, 1))) return false;
    flatbuffers_int8_write_to_pe(p, object->int8);
    
    if (!(p = flatcc_builder_table_add(B, 3, 2, 2))) return false;
    flatbuffers_int16_write_to_pe(p, object->int16);
    
    if (!(p = flatcc_builder_table_add(B, 4, 4, 4))) return false;
    flatbuffers_int32_write_to_pe(p, object->int32);
    
    if (!(p = flatcc_builder_table_add(B, 5, 8, 8))) return false;
    flatbuffers_int64_write_to_pe(p, object->int64);
    
    if (!(p = flatcc_builder_table_add(B, 6, 4, 4))) return false;
    flatbuffers_uint32_write_to_pe(p, object->uint);
    
    if (!(p = flatcc_builder_table_add(B, 7, 1, 1))) return false;
    flatbuffers_uint8_write_to_pe(p, object->uint8);
    
    if (!(p = flatcc_builder_table_add(B, 8, 2, 2))) return false;
    flatbuffers_uint16_write_to_pe(p, object->uint16);
    
    if (!(p = flatcc_builder_table_add(B, 9, 4, 4))) return false;
    flatbuffers_uint32_write_to_pe(p, object->uint32);
    
    if (!(p = flatcc_builder_table_add(B, 10, 8, 8))) return false;
    flatbuffers_uint64_write_to_pe(p, object->uint64);
    
    if (!(p = flatcc_builder_table_add(B, 11, 1, 1))) return false;
    flatbuffers_bool_write_to_pe(p, object->bool_);
    
    if (offset_string) {
        if (!(_p = flatcc_builder_table_add_offset(B, 12))) return false;
        *_p = offset_string;
    }
    
    if (offset_stringvector) {
        if (!(_p = flatcc_builder_table_add_offset(B, 13))) return false;
        *_p = offset_stringvector;
    }
    
    if (!(p = flatcc_builder_table_add(B, 14, 1, 1))) return false;
    flatbuffers_int8_write_to_pe(p, object->byte);
    
    if (!(p = flatcc_builder_table_add(B, 15, 1, 1))) return false;
    flatbuffers_uint8_write_to_pe(p, object->ubyte);
    
    if (offset_bytevector) {
        if (!(_p = flatcc_builder_table_add_offset(B, 16))) return false;
        *_p = offset_bytevector;
    }
    
    if (offset_ubytevector) {
        if (!(_p = flatcc_builder_table_add_offset(B, 17))) return false;
        *_p = offset_ubytevector;
    }
    
    if (!(p = flatcc_builder_table_add(B, 18, 4, 4))) return false;
    flatbuffers_float_write_to_pe(p, object->float32);
    
    if (!(p = flatcc_builder_table_add(B, 19, 8, 8))) return false;
    flatbuffers_double_write_to_pe(p, object->float64);
    
    if (!(p = flatcc_builder_table_add(B, 20, 4, 4))) return false;
    flatbuffers_float_write_to_pe(p, object->float_);
    
    if (!(p = flatcc_builder_table_add(B, 21, 8, 8))) return false;
    flatbuffers_double_write_to_pe(p, object->double_);
    
    flatcc_builder_ref_t ref;
    if (!(ref = flatcc_builder_end_table(B))) return false;
    if (!flatcc_builder_end_buffer(B, ref)) return false;
    return (*out_buffer = flatcc_builder_finalize_aligned_buffer(B, out_size)) != NULL;
}

static bool Typeful_from_flatbuffer(const void* data, size_t size, Typeful* out_object) {
    assert(data);
    assert(size > 0);
    assert(out_object);

    const uint8_t* table = (const uint8_t*) data + __flatbuffers_uoffset_read_from_pe(data);
    assert(table);
    const flatbuffers_voffset_t* vt = (const flatbuffers_voffset_t*) (table - __flatbuffers_soffset_read_from_pe(table));
    flatbuffers_voffset_t vs = __flatbuffers_voffset_read_from_pe(vt);

    // variables reused when reading strings and vectors
    flatbuffers_voffset_t offset;
    const flatbuffers_uoffset_t* val;
    size_t len;

    out_object->id = (vs < sizeof(vt[0]) * (0 + 3)) ? 0 : flatbuffers_uint64_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 0 + 2));
    out_object->int_ = (vs < sizeof(vt[0]) * (1 + 3)) ? 0 : flatbuffers_int32_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 1 + 2));
    out_object->int8 = (vs < sizeof(vt[0]) * (2 + 3)) ? 0 : flatbuffers_int8_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 2 + 2));
    out_object->int16 = (vs < sizeof(vt[0]) * (3 + 3)) ? 0 : flatbuffers_int16_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 3 + 2));
    out_object->int32 = (vs < sizeof(vt[0]) * (4 + 3)) ? 0 : flatbuffers_int32_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 4 + 2));
    out_object->int64 = (vs < sizeof(vt[0]) * (5 + 3)) ? 0 : flatbuffers_int64_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 5 + 2));
    out_object->uint = (vs < sizeof(vt[0]) * (6 + 3)) ? 0 : flatbuffers_uint32_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 6 + 2));
    out_object->uint8 = (vs < sizeof(vt[0]) * (7 + 3)) ? 0 : flatbuffers_uint8_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 7 + 2));
    out_object->uint16 = (vs < sizeof(vt[0]) * (8 + 3)) ? 0 : flatbuffers_uint16_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 8 + 2));
    out_object->uint32 = (vs < sizeof(vt[0]) * (9 + 3)) ? 0 : flatbuffers_uint32_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 9 + 2));
    out_object->uint64 = (vs < sizeof(vt[0]) * (10 + 3)) ? 0 : flatbuffers_uint64_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 10 + 2));
    out_object->bool_ = (vs < sizeof(vt[0]) * (11 + 3)) ? 0 : flatbuffers_bool_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 11 + 2));
    
    if ((offset = (vs < sizeof(vt[0]) * (12 + 3)) ? 0 : __flatbuffers_voffset_read_from_pe(vt + 12 + 2))) {
        val = (const flatbuffers_uoffset_t*)(table + offset + sizeof(flatbuffers_uoffset_t) + __flatbuffers_uoffset_read_from_pe(table + offset));
        len = (size_t) __flatbuffers_uoffset_read_from_pe(val - 1);
        out_object->string = (char*) malloc((len+1) * sizeof(char));
        if (out_object->string == NULL) {
            Typeful_free_pointers(out_object);
            return false;
        }
        memcpy((void*)out_object->string, (const void*)val, len+1);
        
    } else {
        out_object->string = NULL;
    }
    
    
    if ((offset = (vs < sizeof(vt[0]) * (13 + 3)) ? 0 : __flatbuffers_voffset_read_from_pe(vt + 13 + 2))) {
        val = (const flatbuffers_uoffset_t*)(table + offset + sizeof(flatbuffers_uoffset_t) + __flatbuffers_uoffset_read_from_pe(table + offset));
        len = (size_t) __flatbuffers_uoffset_read_from_pe(val - 1);
        out_object->stringvector = (char**) malloc(len * sizeof(char*));
        if (out_object->stringvector == NULL) {
            Typeful_free_pointers(out_object);
            return false;
        }
        out_object->stringvector_len = len;
        for (size_t i = 0; i < len; i++, val++) {
            const uint8_t* str = (const uint8_t*) val + (size_t)__flatbuffers_uoffset_read_from_pe(val) + sizeof(val[0]);
            out_object->stringvector[i] = (char*) malloc((strlen((const char*)str) + 1) * sizeof(char));
            if (out_object->stringvector[i] == NULL) {
                out_object->stringvector_len = i; // only free() indexes before the current "i"
                Typeful_free_pointers(out_object);
                return false;
            }
            strcpy((char*)out_object->stringvector[i], (const char*)str);
        }
    } else {
        out_object->stringvector = NULL;
        out_object->stringvector_len = 0;
    }
    
    out_object->byte = (vs < sizeof(vt[0]) * (14 + 3)) ? 0 : flatbuffers_int8_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 14 + 2));
    out_object->ubyte = (vs < sizeof(vt[0]) * (15 + 3)) ? 0 : flatbuffers_uint8_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 15 + 2));
    
    if ((offset = (vs < sizeof(vt[0]) * (16 + 3)) ? 0 : __flatbuffers_voffset_read_from_pe(vt + 16 + 2))) {
        val = (const flatbuffers_uoffset_t*)(table + offset + sizeof(flatbuffers_uoffset_t) + __flatbuffers_uoffset_read_from_pe(table + offset));
        len = (size_t) __flatbuffers_uoffset_read_from_pe(val - 1);
        out_object->bytevector = (int8_t*) malloc(len * sizeof(int8_t));
        if (out_object->bytevector == NULL) {
            Typeful_free_pointers(out_object);
            return false;
        }
        out_object->bytevector_len = len;
        memcpy((void*)out_object->bytevector, (const void*)val, len);
        
    } else {
        out_object->bytevector = NULL;
        out_object->bytevector_len = 0;
    }
    
    
    if ((offset = (vs < sizeof(vt[0]) * (17 + 3)) ? 0 : __flatbuffers_voffset_read_from_pe(vt + 17 + 2))) {
        val = (const flatbuffers_uoffset_t*)(table + offset + sizeof(flatbuffers_uoffset_t) + __flatbuffers_uoffset_read_from_pe(table + offset));
        len = (size_t) __flatbuffers_uoffset_read_from_pe(val - 1);
        out_object->ubytevector = (uint8_t*) malloc(len * sizeof(uint8_t));
        if (out_object->ubytevector == NULL) {
            Typeful_free_pointers(out_object);
            return false;
        }
        out_object->ubytevector_len = len;
        memcpy((void*)out_object->ubytevector, (const void*)val, len);
        
    } else {
        out_object->ubytevector = NULL;
        out_object->ubytevector_len = 0;
    }
    
    out_object->float32 = (vs < sizeof(vt[0]) * (18 + 3)) ? 0.0f : flatbuffers_float_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 18 + 2));
    out_object->float64 = (vs < sizeof(vt[0]) * (19 + 3)) ? 0.0 : flatbuffers_double_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 19 + 2));
    out_object->float_ = (vs < sizeof(vt[0]) * (20 + 3)) ? 0.0f : flatbuffers_float_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 20 + 2));
    out_object->double_ = (vs < sizeof(vt[0]) * (21 + 3)) ? 0.0 : flatbuffers_double_read_from_pe(table + __flatbuffers_voffset_read_from_pe(vt + 21 + 2));
    return true;
}

static Typeful* Typeful_new_from_flatbuffer(const void* data, size_t size) {
    Typeful* object = (Typeful*) malloc(sizeof(Typeful));
    if (object) {
        if (!Typeful_from_flatbuffer(data, size, object)) {
            free(object);
            object = NULL;
        }
    }
    return object;
}

static void Typeful_free_pointers(Typeful* object) {
    if (object == NULL) return;
    if (object->string) {
        free(object->string);
        object->string = NULL;
    }
    
    if (object->stringvector) {
        for (size_t i = 0; i < object->stringvector_len; i++) {
            if (object->stringvector[i]) free(object->stringvector[i]);
        }
        free(object->stringvector);
        object->stringvector = NULL;
        object->stringvector_len = 0;
    } else {
        assert(object->stringvector_len == 0);
    }
    
    if (object->bytevector) {
        free(object->bytevector);
        object->bytevector = NULL;
        object->bytevector_len = 0;
    } else {
        assert(object->bytevector_len == 0);
    }
    
    if (object->ubytevector) {
        free(object->ubytevector);
        object->ubytevector = NULL;
        object->ubytevector_len = 0;
    } else {
        assert(object->ubytevector_len == 0);
    }
    
}

static void Typeful_free(Typeful* object) {
    Typeful_free_pointers(object);
    free(object);
}

/// Insert or update the given object in the database.
/// @param object (in & out) will be updated with a newly inserted ID if the one specified previously was zero. If an ID 
/// was already specified (non-zero), it will remain unchanged.
/// @return object ID from the object param (see object param docs) or a zero on error. If a zero was returned, you can
/// check obx_last_error_*() to get the error details. In an unlikely event that those functions return no error
/// code/message, the error occurred in FlatBuffers serialization, e.g. due to memory allocation issues.
static obx_id Typeful_put(OBX_box* box, Typeful* object) {
    obx_id id = c_test_obx_h_put_object(box, object,
                               (bool (*)(flatcc_builder_t*, const void*, void**, size_t*)) Typeful_to_flatbuffer,
                               OBXPutMode_PUT);
    if (id != 0) {
        object->id = id;  // update the ID property on new objects for convenience
    }
    return id;
}

/// Read an object from the database, returning a pointer.
/// @return an object pointer or NULL if an object with the given ID doesn't exist or any other error occurred. You can
/// check obx_last_error_*() if NULL is returned to get the error details. In an unlikely event that those functions
/// return no error code/message, the error occurred in FlatBuffers serialization, e.g. due to memory allocation issues.
/// @note: The returned object must be freed after use by calling Typeful_free();
static Typeful* Typeful_get(OBX_box* box, obx_id id) {
    return (Typeful*) c_test_obx_h_get_object(box, id, (void* (*) (const void*, size_t)) Typeful_new_from_flatbuffer);
}

static obx_id c_test_obx_h_put_object(OBX_box* box, void* object,
                             bool (*to_flatbuffer)(flatcc_builder_t*, const void*, void**, size_t*), OBXPutMode mode) {
    flatcc_builder_t builder;
    flatcc_builder_init(&builder);

    obx_id id = 0;
    size_t size = 0;
    void* buffer = NULL;
    if (!to_flatbuffer(&builder, object, &buffer, &size)) {
        obx_last_error_set(OBX_ERROR_STD_OTHER, 0, "FlatBuffer serialization failed");
    } else {
        id = obx_box_put_object4(box, buffer, size, mode);  // 0 on error
    }

    flatcc_builder_clear(&builder);
    if (buffer) flatcc_builder_aligned_free(buffer);

    return id;
}

static void* c_test_obx_h_get_object(OBX_box* box, obx_id id, void* (*from_flatbuffer)(const void*, size_t)) {
    // We need an explicit TX - read data lifecycle is bound to the open TX.
    OBX_txn* tx = obx_txn_read(obx_box_store(box));
    if (!tx) return NULL;

    void* result = NULL;
    const void* data;
    size_t size;
    if (obx_box_get(box, id, &data, &size) == OBX_SUCCESS) {
        result = from_flatbuffer(data, size);
        if (result == NULL) {
            obx_last_error_set(OBX_ERROR_STD_OTHER, 0, "FlatBuffer deserialization failed");
        }
    }

    obx_txn_close(tx);
    return result;
}
