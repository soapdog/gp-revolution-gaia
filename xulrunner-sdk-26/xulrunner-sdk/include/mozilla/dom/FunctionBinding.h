/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_FunctionBinding_h__
#define mozilla_dom_FunctionBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

namespace mozilla {
namespace dom {

class Function;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

class Function : public CallbackFunction
{
public:
  explicit inline Function(JSObject* aCallback)
    : CallbackFunction(aCallback)
  {
  }

  explicit inline Function(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline JS::Value
  Call(const T& thisObj, const nsTArray<JS::Value >& arguments, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(CallbackPreserveColor(), aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return JS::UndefinedValue();
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObj));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return JS::UndefinedValue();
    }
    return Call(s.GetContext(), thisObjJS, arguments, aRv);
  }

  inline JS::Value
  Call(const nsTArray<JS::Value >& arguments, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(CallbackPreserveColor(), aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return JS::UndefinedValue();
    }
    return Call(s.GetContext(), JS::NullPtr(), arguments, aRv);
  }

private:
  JS::Value Call(JSContext* cx, JS::Handle<JSObject*> aThisObj, const nsTArray<JS::Value >& arguments, ErrorResult& aRv);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_FunctionBinding_h__
