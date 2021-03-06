/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGPathSegList.h"

#include "SVGPathSeg.h"
#include "SVGPathSegList.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegList);

/* Hash table */

static const HashTableValue JSSVGPathSegListTableValues[3] =
{
    { "numberOfItems", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegListNumberOfItems), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegListConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegListTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSSVGPathSegListTableValues, 0 };
#else
    { 4, 3, JSSVGPathSegListTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGPathSegListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegListConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGPathSegListConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGPathSegListConstructorTableValues, 0 };
#endif

class JSSVGPathSegListConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegListConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGPathSegListConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGPathSegListPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGPathSegListConstructor::s_info = { "SVGPathSegListConstructor", 0, &JSSVGPathSegListConstructorTable, 0 };

bool JSSVGPathSegListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegListConstructor, DOMObject>(exec, &JSSVGPathSegListConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegListConstructor, DOMObject>(exec, &JSSVGPathSegListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegListPrototypeTableValues[8] =
{
    { "clear", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPathSegListPrototypeFunctionClear), (intptr_t)0 },
    { "initialize", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPathSegListPrototypeFunctionInitialize), (intptr_t)1 },
    { "getItem", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPathSegListPrototypeFunctionGetItem), (intptr_t)1 },
    { "insertItemBefore", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPathSegListPrototypeFunctionInsertItemBefore), (intptr_t)2 },
    { "replaceItem", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPathSegListPrototypeFunctionReplaceItem), (intptr_t)2 },
    { "removeItem", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPathSegListPrototypeFunctionRemoveItem), (intptr_t)1 },
    { "appendItem", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGPathSegListPrototypeFunctionAppendItem), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGPathSegListPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 63, JSSVGPathSegListPrototypeTableValues, 0 };
#else
    { 18, 15, JSSVGPathSegListPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGPathSegListPrototype::s_info = { "SVGPathSegListPrototype", 0, &JSSVGPathSegListPrototypeTable, 0 };

JSObject* JSSVGPathSegListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegList>(exec, globalObject);
}

bool JSSVGPathSegListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPathSegListPrototypeTable, this, propertyName, slot);
}

bool JSSVGPathSegListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPathSegListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPathSegList::s_info = { "SVGPathSegList", 0, &JSSVGPathSegListTable, 0 };

JSSVGPathSegList::JSSVGPathSegList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegList> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGPathSegList::~JSSVGPathSegList()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGPathSegList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegListPrototype(JSSVGPathSegListPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGPathSegList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegList, Base>(exec, &JSSVGPathSegListTable, this, propertyName, slot);
}

bool JSSVGPathSegList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegList, Base>(exec, &JSSVGPathSegListTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegListNumberOfItems(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegList* castedThis = static_cast<JSSVGPathSegList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegList* imp = static_cast<SVGPathSegList*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->numberOfItems());
    return result;
}

JSValue jsSVGPathSegListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegList* domObject = static_cast<JSSVGPathSegList*>(asObject(slotBase));
    return JSSVGPathSegList::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGPathSegList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGPathSegListPrototypeFunctionClear(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(asObject(thisValue));
    return castedThisObj->clear(exec, args);
}

JSValue JSC_HOST_CALL jsSVGPathSegListPrototypeFunctionInitialize(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(asObject(thisValue));
    return castedThisObj->initialize(exec, args);
}

JSValue JSC_HOST_CALL jsSVGPathSegListPrototypeFunctionGetItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(asObject(thisValue));
    return castedThisObj->getItem(exec, args);
}

JSValue JSC_HOST_CALL jsSVGPathSegListPrototypeFunctionInsertItemBefore(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(asObject(thisValue));
    return castedThisObj->insertItemBefore(exec, args);
}

JSValue JSC_HOST_CALL jsSVGPathSegListPrototypeFunctionReplaceItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(asObject(thisValue));
    return castedThisObj->replaceItem(exec, args);
}

JSValue JSC_HOST_CALL jsSVGPathSegListPrototypeFunctionRemoveItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(asObject(thisValue));
    return castedThisObj->removeItem(exec, args);
}

JSValue JSC_HOST_CALL jsSVGPathSegListPrototypeFunctionAppendItem(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGPathSegList::s_info))
        return throwError(exec, TypeError);
    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(asObject(thisValue));
    return castedThisObj->appendItem(exec, args);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGPathSegList* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGPathSegList>(exec, globalObject, object, context);
}
SVGPathSegList* toSVGPathSegList(JSC::JSValue value)
{
    return value.inherits(&JSSVGPathSegList::s_info) ? static_cast<JSSVGPathSegList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
