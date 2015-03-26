// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2015-01-14 17:53:03 UTC
//   on: 2015-03-12, 20:35:33 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 130
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_LOCALIZED_PROPERTY_H_
#define  GOOGLE_YOUTUBE_API_LOCALIZED_PROPERTY_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/language_tag.h"
#include "google/youtube_api/localized_string.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class LocalizedProperty : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LocalizedProperty* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LocalizedProperty(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LocalizedProperty(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LocalizedProperty();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LocalizedProperty</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LocalizedProperty");
  }

  /**
   * Determine if the '<code>default</code>' attribute was set.
   *
   * @return true if the '<code>default</code>' attribute was set.
   */
  bool has_default() const {
    return Storage().isMember("default");
  }

  /**
   * Clears the '<code>default</code>' attribute.
   */
  void clear_default() {
    MutableStorage()->removeMember("default");
  }


  /**
   * Get the value of the '<code>default</code>' attribute.
   */
  const StringPiece get_default() const {
    const Json::Value& v = Storage("default");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>default</code>' attribute.
   * @param[in] value The new value.
   */
  void set_default(const StringPiece& value) {
    *MutableStorage("default") = value.data();
  }

  /**
   * Determine if the '<code>defaultLanguage</code>' attribute was set.
   *
   * @return true if the '<code>defaultLanguage</code>' attribute was set.
   */
  bool has_default_language() const {
    return Storage().isMember("defaultLanguage");
  }

  /**
   * Clears the '<code>defaultLanguage</code>' attribute.
   */
  void clear_default_language() {
    MutableStorage()->removeMember("defaultLanguage");
  }


  /**
   * Get a reference to the value of the '<code>defaultLanguage</code>'
   * attribute.
   */
  const LanguageTag get_default_language() const {
     const Json::Value& storage = Storage("defaultLanguage");
    return client::JsonValueToCppValueHelper<LanguageTag >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>defaultLanguage</code>'
   * property.
   *
   * The language of the default property.
   *
   * @return The result can be modified to change the attribute value.
   */
  LanguageTag mutable_defaultLanguage() {
    Json::Value* storage = MutableStorage("defaultLanguage");
    return client::JsonValueToMutableCppValueHelper<LanguageTag >(storage);
  }

  /**
   * Determine if the '<code>localized</code>' attribute was set.
   *
   * @return true if the '<code>localized</code>' attribute was set.
   */
  bool has_localized() const {
    return Storage().isMember("localized");
  }

  /**
   * Clears the '<code>localized</code>' attribute.
   */
  void clear_localized() {
    MutableStorage()->removeMember("localized");
  }


  /**
   * Get a reference to the value of the '<code>localized</code>' attribute.
   */
  const client::JsonCppArray<LocalizedString > get_localized() const {
     const Json::Value& storage = Storage("localized");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<LocalizedString > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>localized</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<LocalizedString > mutable_localized() {
    Json::Value* storage = MutableStorage("localized");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<LocalizedString > >(storage);
  }

 private:
  void operator=(const LocalizedProperty&);
};  // LocalizedProperty
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LOCALIZED_PROPERTY_H_