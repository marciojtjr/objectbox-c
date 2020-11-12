// Code generated by ObjectBox; DO NOT EDIT.

#include "tasklist.obx.hpp"

const obx::Property<Task, OBXPropertyType_Long> Task_::id(1);
const obx::Property<Task, OBXPropertyType_String> Task_::text(2);
const obx::Property<Task, OBXPropertyType_Date> Task_::date_created(3);
const obx::Property<Task, OBXPropertyType_Date> Task_::date_finished(4);

void Task_::toFlatBuffer(flatbuffers::FlatBufferBuilder& fbb, const Task& object) {
    fbb.Clear();
    auto offsettext = fbb.CreateString(object.text);
    flatbuffers::uoffset_t fbStart = fbb.StartTable();
    fbb.TrackField(4, fbb.PushElement<uint64_t>(object.id));
    fbb.AddOffset(6, offsettext);
    fbb.TrackField(8, fbb.PushElement<uint64_t>(object.date_created));
    fbb.TrackField(10, fbb.PushElement<uint64_t>(object.date_finished));
    flatbuffers::Offset<flatbuffers::Table> offset;
    offset.o = fbb.EndTable(fbStart);
    fbb.Finish(offset);
}

Task Task_::fromFlatBuffer(const void* data, size_t size) {
    Task object;
    fromFlatBuffer(data, size, object);
    return object;
}

std::unique_ptr<Task> Task_::newFromFlatBuffer(const void* data, size_t size) {
    auto object = std::unique_ptr<Task>(new Task());
    fromFlatBuffer(data, size, *object);
    return object;
}

void Task_::fromFlatBuffer(const void* data, size_t, Task& outObject) {
    const auto* table = flatbuffers::GetRoot<flatbuffers::Table>(data);
    assert(table);
    outObject.id = table->GetField<uint64_t>(4, 0);
    {
        auto* ptr = table->GetPointer<const flatbuffers::String*>(6);
        if (ptr) outObject.text.assign(ptr->c_str());
    }
    outObject.date_created = table->GetField<uint64_t>(8, 0);
    outObject.date_finished = table->GetField<uint64_t>(10, 0);
    
}

