/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_XMLHttpRequestEventTargetBinding_h__
#define mozilla_dom_XMLHttpRequestEventTargetBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

class nsXHREventTarget;

namespace mozilla {
namespace dom {
namespace workers {

class XMLHttpRequestEventTarget;

} // namespace workers
} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::XMLHttpRequestEventTarget>
{
  enum
  {
    Depth = 1
  };
  typedef nsXHREventTarget NativeType;
};
template <>
struct PrototypeTraits<prototypes::id::XMLHttpRequestEventTarget_workers>
{
  enum
  {
    Depth = 1
  };
  typedef mozilla::dom::workers::XMLHttpRequestEventTarget NativeType;
};
template <>
struct PrototypeIDMap<nsXHREventTarget>
{
  enum
  {
    PrototypeID = prototypes::id::XMLHttpRequestEventTarget
  };
};
template <>
struct PrototypeIDMap<mozilla::dom::workers::XMLHttpRequestEventTarget>
{
  enum
  {
    PrototypeID = prototypes::id::XMLHttpRequestEventTarget_workers
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

namespace XMLHttpRequestEventTargetBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Heap<JSObject*>* protoAndIfaceArray);

  inline JS::Handle<JSObject*> GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return JS::NullPtr();
    }
    /* Check to see whether the interface objects are already installed */
    JS::Heap<JSObject*>* protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    if (!protoAndIfaceArray[prototypes::id::XMLHttpRequestEventTarget]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[prototypes::id::XMLHttpRequestEventTarget].address());
  }

} // namespace XMLHttpRequestEventTargetBinding



namespace XMLHttpRequestEventTargetBinding_workers {

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Heap<JSObject*>* protoAndIfaceArray);

  inline JS::Handle<JSObject*> GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return JS::NullPtr();
    }
    /* Check to see whether the interface objects are already installed */
    JS::Heap<JSObject*>* protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    if (!protoAndIfaceArray[prototypes::id::XMLHttpRequestEventTarget_workers]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[prototypes::id::XMLHttpRequestEventTarget_workers].address());
  }

} // namespace XMLHttpRequestEventTargetBinding_workers



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_XMLHttpRequestEventTargetBinding_h__