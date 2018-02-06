/*
 * Copyright 2018 CodiLime
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "ui/disasm/tab.h"

namespace veles {
namespace ui {
namespace disasm {

Tab::Tab() : IconAwareView("", "") {
  //  auto* dock_address_column = new DockWidget;
  //  dock_address_column->setWidget(&disasm_widget);
  //  addDockWidget(Qt::LeftDockWidgetArea, dock_address_column);
  setCentralWidget(&disasm_widget);
}

}  // namespace disasm
}  // namespace ui
}  // namespace veles