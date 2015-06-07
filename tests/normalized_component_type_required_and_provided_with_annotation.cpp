// expect-compile-error RepeatedTypesError<fruit::Annotated<Annotation,X>,fruit::Annotated<Annotation,X>>|A type was specified more than once.
/*
 * Copyright 2014 Google Inc. All rights reserved.
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

#include <fruit/fruit.h>
#include "test_macros.h"

using fruit::Injector;
using fruit::Component;
using fruit::createComponent;

struct Annotation {};

struct X {
};

using XAnnot = fruit::Annotated<Annotation, X>;

fruit::NormalizedComponent<fruit::Required<XAnnot>, XAnnot> nc;