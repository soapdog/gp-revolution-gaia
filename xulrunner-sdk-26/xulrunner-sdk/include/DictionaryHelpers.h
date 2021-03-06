/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef _gen_mozilla_idl_dictionary_helpers_h_
#define _gen_mozilla_idl_dictionary_helpers_h_

#include "jsapi.h"
#include "nsError.h"
#include "nsString.h"
#include "nsCOMPtr.h"

#undef near


class nsIDOMBlob;

namespace mozilla {
namespace idl {

class GeoPositionOptions
{
public:
  GeoPositionOptions();
  ~GeoPositionOptions();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  bool enableHighAccuracy;
  int32_t maximumAge;
  int32_t timeout;
};

class DOMFileMetadataParameters
{
public:
  DOMFileMetadataParameters();
  ~DOMFileMetadataParameters();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  bool lastModified;
  bool size;
};

class CameraSize
{
public:
  CameraSize();
  ~CameraSize();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  uint32_t height;
  uint32_t width;
};

class CameraRegion
{
public:
  CameraRegion();
  ~CameraRegion();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  int32_t bottom;
  int32_t left;
  int32_t right;
  int32_t top;
  uint32_t weight;
};

class CameraPosition
{
public:
  CameraPosition();
  ~CameraPosition();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  double altitude;
  double latitude;
  double longitude;
  double timestamp;
};

class CameraRecorderOptions
{
public:
  CameraRecorderOptions();
  ~CameraRecorderOptions();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  nsString profile;
  int32_t rotation;
};

class CameraStartRecordingOptions
{
public:
  CameraStartRecordingOptions();
  ~CameraStartRecordingOptions();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  int64_t maxFileSizeBytes;
  int64_t maxVideoLengthMs;
  int32_t rotation;
};

class SmsThreadListItem
{
public:
  SmsThreadListItem();
  ~SmsThreadListItem();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  nsString body;
  uint64_t id;
  nsString senderOrReceiver;
  uint64_t timestamp;
  uint64_t unreadCount;
};

class MmsAttachment
{
public:
  MmsAttachment();
  ~MmsAttachment();

  // If aCx or aVal is null, NS_OK is returned and 
  // dictionary will use the default values. 
  nsresult Init(JSContext* aCx, const jsval* aVal);

  nsCOMPtr<nsIDOMBlob> content;
  nsString id;
  nsString location;
};

}
}
#endif
