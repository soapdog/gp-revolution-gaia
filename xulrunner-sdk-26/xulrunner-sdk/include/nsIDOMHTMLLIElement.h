/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/m-cen-l64-xr-ntly-000000000000/build/dom/interfaces/html/nsIDOMHTMLLIElement.idl
 */

#ifndef __gen_nsIDOMHTMLLIElement_h__
#define __gen_nsIDOMHTMLLIElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLLIElement */
#define NS_IDOMHTMLLIELEMENT_IID_STR "e2d41287-964c-472c-ba40-24dcdc9489c2"

#define NS_IDOMHTMLLIELEMENT_IID \
  {0xe2d41287, 0x964c, 0x472c, \
    { 0xba, 0x40, 0x24, 0xdc, 0xdc, 0x94, 0x89, 0xc2 }}

class NS_NO_VTABLE nsIDOMHTMLLIElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLLIELEMENT_IID)

  /* attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute long value; */
  NS_IMETHOD GetValue(int32_t *aValue) = 0;
  NS_IMETHOD SetValue(int32_t aValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLLIElement, NS_IDOMHTMLLIELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLLIELEMENT \
  NS_IMETHOD GetType(nsAString & aType); \
  NS_IMETHOD SetType(const nsAString & aType); \
  NS_IMETHOD GetValue(int32_t *aValue); \
  NS_IMETHOD SetValue(int32_t aValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLLIELEMENT(_to) \
  NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_IMETHOD GetValue(int32_t *aValue) { return _to GetValue(aValue); } \
  NS_IMETHOD SetValue(int32_t aValue) { return _to SetValue(aValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLLIELEMENT(_to) \
  NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_IMETHOD GetValue(int32_t *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD SetValue(int32_t aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLLIElement : public nsIDOMHTMLLIElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLLIELEMENT

  nsDOMHTMLLIElement();

private:
  ~nsDOMHTMLLIElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLLIElement, nsIDOMHTMLLIElement)

nsDOMHTMLLIElement::nsDOMHTMLLIElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLLIElement::~nsDOMHTMLLIElement()
{
  /* destructor code */
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLLIElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLLIElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long value; */
NS_IMETHODIMP nsDOMHTMLLIElement::GetValue(int32_t *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLLIElement::SetValue(int32_t aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLLIElement_h__ */
