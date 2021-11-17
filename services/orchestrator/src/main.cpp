/* Copyright (c) Technoculture Research, 2021
 *
 * Project: Genotyper Firmware
 * Author: Satyam, Om Prakash Banerjee
 * Email: satyam@technoculture.io
 *
 * Basic peocedure
 * ===============
 *
 *    ┌────────────────────────┐
 *    │ COM Receive Callaback  │
 *    └─┬──────────────────────┘
 *      │
 *    ┌─▼────────────┐
 *    │ GCode Parser │
 *    └─┬────────────┘
 *      │
 *    ┌─▼─────────────┐
 *    │ Command Queue │
 *    └─┬─────────────┘
 *      │
 * ┌────┼───────────────────────────────────────────────┐
 * │    │                                               │
 * │  ┌─▼──────────────────────┐                        │
 * │  │ is command available ? │                        │
 * │  └─┬──────────────────────┘                        │
 * │    │                                               │
 * │  ┌─▼────────────────┐                              │
 * │  │ Process Commands │                              │
 * │  └─┬────────────────┴───┐    ┌─────────────────┐   │
 * │    │                    │    │  Motor Motions  │   │
 * │    │  Find Home         │    └───▲─────────────┘   │
 * │    │                    │        │                 │
 * │    │                    ├────────┘                 │
 * │    │  Goto position     │                          │
 * │    │                    │                          │
 * │    └────────────────────┘                          │
 * │                                                    │
 * └────────────────────────────────────────────────────┘
 */

#include "device.hpp"
#include "model.hpp"

void setup() {}

void loop() {
  // if(commands_available){
  //     process_command();
  // }
}
