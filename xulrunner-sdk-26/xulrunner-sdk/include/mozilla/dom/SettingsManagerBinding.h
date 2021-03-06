/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_SettingsManagerBinding_h__
#define mozilla_dom_SettingsManagerBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"
#include "nsDOMEventTargetHelper.h"

namespace mozilla {
namespace dom {

class DOMRequest;
class EventHandlerNonNull;
struct SettingChange;
class SettingChangeCallback;
class SettingsLock;
class SettingsManager;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::SettingsLock>
{
  enum
  {
    Depth = 0
  };
  typedef mozilla::dom::SettingsLock NativeType;
};
template <>
struct PrototypeTraits<prototypes::id::SettingsManager>
{
  enum
  {
    Depth = 1
  };
  typedef mozilla::dom::SettingsManager NativeType;
};
template <>
struct PrototypeIDMap<mozilla::dom::SettingsLock>
{
  enum
  {
    PrototypeID = prototypes::id::SettingsLock
  };
};
template <>
struct PrototypeIDMap<mozilla::dom::SettingsManager>
{
  enum
  {
    PrototypeID = prototypes::id::SettingsManager
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

struct SettingChange : public MainThreadDictionaryBase
{
  Optional<nsString > mSettingName;
  Optional<nsString > mSettingValue;

private:
  static bool initedIds;
  static jsid settingName_id;
  static jsid settingValue_id;

  SettingChange(const SettingChange&) MOZ_DELETE;

public:
  inline SettingChange()
  {
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

private:
  static bool
  InitIds(JSContext* cx);
};
struct SettingChangeInitializer : public SettingChange
{
  inline SettingChangeInitializer()
  {
    // Safe to pass a null context if we pass a null value
    Init(nullptr, JS::NullHandleValue);
  }
};


class SettingChangeCallback : public CallbackFunction
{
public:
  explicit inline SettingChangeCallback(JSObject* aCallback)
    : CallbackFunction(aCallback)
  {
  }

  explicit inline SettingChangeCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObj, const SettingChange& setting, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(CallbackPreserveColor(), aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObj));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisObjJS, setting, aRv);
  }

  inline void
  Call(const SettingChange& setting, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(CallbackPreserveColor(), aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::NullPtr(), setting, aRv);
  }

private:
  void Call(JSContext* cx, JS::Handle<JSObject*> aThisObj, const SettingChange& setting, ErrorResult& aRv);
};


namespace SettingsLockBinding {

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
    if (!protoAndIfaceArray[prototypes::id::SettingsLock]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[prototypes::id::SettingsLock].address());
  }

  inline JS::Handle<JSObject*> GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return JS::NullPtr();
    }
    /* Check to see whether the interface objects are already installed */
    JS::Heap<JSObject*>* protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    if (!protoAndIfaceArray[constructors::id::SettingsLock]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[constructors::id::SettingsLock].address());
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool* aEnabled);

  bool
  ConstructorEnabled(JSContext* /* unused */, JS::Handle<JSObject*> /* unused */);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::SettingsLock* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace SettingsLockBinding



namespace SettingsManagerBinding {

  JSObject*
  ConstructNavigatorObject(JSContext* aCx, JS::Handle<JSObject*> aObj);

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
    if (!protoAndIfaceArray[prototypes::id::SettingsManager]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[prototypes::id::SettingsManager].address());
  }

  inline JS::Handle<JSObject*> GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return JS::NullPtr();
    }
    /* Check to see whether the interface objects are already installed */
    JS::Heap<JSObject*>* protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    if (!protoAndIfaceArray[constructors::id::SettingsManager]) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
    }

    /*
     * The object might _still_ be null, but that's OK.
     *
     * Calling fromMarkedLocation() is safe because protoAndIfaceArray is
     * traced by TraceProtoAndIfaceCache() and its contents are never
     * changed after they have been set.
     */
    return JS::Handle<JSObject*>::fromMarkedLocation(protoAndIfaceArray[constructors::id::SettingsManager].address());
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool* aEnabled);

  bool
  ConstructorEnabled(JSContext* /* unused */, JS::Handle<JSObject*> /* unused */);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::SettingsManager* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace SettingsManagerBinding



class SettingsLockJSImpl : public CallbackInterface
{
public:
  explicit inline SettingsLockJSImpl(JSObject* aCallback)
    : CallbackInterface(aCallback)
  {
  }

  already_AddRefed<DOMRequest> Set(JS::Handle<JSObject*> settings, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);

  already_AddRefed<DOMRequest> Get(const nsAString& name, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);

  already_AddRefed<DOMRequest> Clear(ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);

  bool GetClosed(ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);
};


class SettingsLock MOZ_FINAL : public nsISupports,
                               public nsWrapperCache
{
public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(SettingsLock)

private:
  nsRefPtr<SettingsLockJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  SettingsLock(JS::Handle<JSObject*> aJSImplObject, nsPIDOMWindow* aParent);

  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  bool GetClosed(ErrorResult& aRv) const;

  // Mark this as resultNotAddRefed to return raw pointers
  already_AddRefed<DOMRequest> Set(JS::Handle<JSObject*> settings, ErrorResult& aRv);

  // Mark this as resultNotAddRefed to return raw pointers
  already_AddRefed<DOMRequest> Get(const nsAString& name, ErrorResult& aRv);

  // Mark this as resultNotAddRefed to return raw pointers
  already_AddRefed<DOMRequest> Clear(ErrorResult& aRv);

  static JSBool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


class SettingsManagerJSImpl : public CallbackInterface
{
public:
  explicit inline SettingsManagerJSImpl(JSObject* aCallback)
    : CallbackInterface(aCallback)
  {
  }

  already_AddRefed<SettingsLock> CreateLock(ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);

  void AddObserver(const nsAString& name, SettingChangeCallback& callback, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);

  void RemoveObserver(const nsAString& name, SettingChangeCallback& callback, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);

  already_AddRefed<EventHandlerNonNull> GetOnsettingchange(ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);

  void SetOnsettingchange(EventHandlerNonNull* arg, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions);
};


class SettingsManager MOZ_FINAL : public nsDOMEventTargetHelper
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_CLASS_INHERITED(SettingsManager, nsDOMEventTargetHelper)

private:
  nsRefPtr<SettingsManagerJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  SettingsManager(JS::Handle<JSObject*> aJSImplObject, nsPIDOMWindow* aParent);

  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  // Mark this as resultNotAddRefed to return raw pointers
  already_AddRefed<SettingsLock> CreateLock(ErrorResult& aRv);

  void AddObserver(const nsAString& name, SettingChangeCallback& callback, ErrorResult& aRv);

  void RemoveObserver(const nsAString& name, SettingChangeCallback& callback, ErrorResult& aRv);

  already_AddRefed<EventHandlerNonNull> GetOnsettingchange(ErrorResult& aRv) const;

  void SetOnsettingchange(EventHandlerNonNull* arg, ErrorResult& aRv);

  static JSBool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_SettingsManagerBinding_h__
