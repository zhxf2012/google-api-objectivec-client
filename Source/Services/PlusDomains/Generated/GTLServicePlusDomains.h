/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLServicePlusDomains.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google+ Domains API (plusDomains/v1)
// Description:
//   Builds on top of the Google+ platform for Google Apps Domains.
// Documentation:
//   https://developers.google.com/+/domains/
// Classes:
//   GTLServicePlusDomains (0 custom class methods, 0 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLService.h"
#else
  #import "GTLService.h"
#endif

@interface GTLServicePlusDomains : GTLService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLQueryPlusDomains.h. The query can the be sent with GTLService's execute
// methods,
//
//   - (GTLServiceTicket *)executeQuery:(GTLQuery *)query
//                    completionHandler:(void (^)(GTLServiceTicket *ticket,
//                                                id object, NSError *error))handler;
// or
//   - (GTLServiceTicket *)executeQuery:(GTLQuery *)query
//                             delegate:(id)delegate
//                    didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLObject, determined by the query method executed.

@end
