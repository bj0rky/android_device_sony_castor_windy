/*
 * Copyright (C) 2014, The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Data passed by the stock audio HAL, dumped from the kernel driver
static unsigned char eq_data[TYPE_MAX][190] = {
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0ec, 0x044, 0x07c, 0x0fb, 0x00c, 0x00b, 0x01d, 0x0e8, 0x0e9, 0x0c4, 0x030, 0x00b, 0x01d, 0x0e8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x076, 0x060, 0x07d, 0x026, 0x090, 0x03d, 0x02e, 0x0c8, 0x082, 0x0d9, 0x070, 0x040, 0x05a, 0x0dc, 0x003, 0x000, 0x000, 0x001, 0x0e7, 0x053, 0x0e0, 0x04c, 0x0ca, 0x0e0, 0x026, 0x0cb, 0x04c, 0x0b3, 0x035, 0x020, 0x031, 0x0e0, 0x0d0, 0x004, 0x000, 0x000, 0x002, 0x0f2, 0x04d, 0x066, 0x025, 0x0a9, 0x01e, 0x01a, 0x029, 0x022, 0x0bb, 0x096, 0x0a6, 0x032, 0x049, 0x0b2, 0x005, 0x000, 0x000, 0x001, 0x0ca, 0x004, 0x0b0, 0x073, 0x03d, 0x090, 0x037, 0x0d4, 0x08c, 0x08c, 0x0c2, 0x070, 0x03e, 0x026, 0x0c4, 0x006, 0x000, 0x000, 0x001, 0x0d6, 0x0c7, 0x0d8, 0x034, 0x09c, 0x014, 0x017, 0x0ff, 0x09c, 0x0cb, 0x063, 0x0ec, 0x051, 0x038, 0x08c, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x001, 0x0cb, 0x0ae, 0x028, 0x06f, 0x087, 0x094, 0x029, 0x0b3, 0x038, 0x090, 0x078, 0x06c, 0x04a, 0x09e, 0x0a0, 0x009, 0x000, 0x000, 0x001, 0x0c8, 0x069, 0x020, 0x073, 0x0e8, 0x0e0, 0x034, 0x051, 0x000, 0x08c, 0x017, 0x020, 0x043, 0x045, 0x0e0, 0x00a, 0x000, 0x000, 0x000, 0x0e4, 0x000, 0x000, 0x000, 0x000, 0x000, 0x02b, 0x0c2, 0x038, 0x057, 0x084, 0x078, 0x02b, 0x0c2, 0x038},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f5, 0x014, 0x07c, 0x0f2, 0x040, 0x013, 0x017, 0x0a8, 0x0d9, 0x0d0, 0x0b0, 0x013, 0x017, 0x0a8, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x02e, 0x038, 0x07c, 0x02b, 0x060, 0x03c, 0x05c, 0x070, 0x083, 0x0d4, 0x0a0, 0x040, 0x075, 0x058, 0x003, 0x000, 0x000, 0x001, 0x0d9, 0x040, 0x034, 0x055, 0x06e, 0x0d0, 0x030, 0x034, 0x008, 0x0aa, 0x091, 0x030, 0x036, 0x08b, 0x0c4, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0c8, 0x022, 0x054, 0x073, 0x05d, 0x094, 0x034, 0x0b3, 0x058, 0x08c, 0x0a2, 0x06c, 0x043, 0x02a, 0x050, 0x007, 0x000, 0x000, 0x000, 0x0e5, 0x011, 0x068, 0x061, 0x080, 0x078, 0x02f, 0x05d, 0x060, 0x09e, 0x07f, 0x088, 0x06b, 0x091, 0x030, 0x008, 0x000, 0x000, 0x001, 0x0ea, 0x019, 0x054, 0x03d, 0x0ec, 0x00c, 0x01e, 0x0f7, 0x0f0, 0x0a9, 0x06d, 0x044, 0x04f, 0x095, 0x068, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x0e3, 0x0f3, 0x0f8, 0x0f9, 0x0df, 0x0a8, 0x028, 0x08b, 0x018, 0x051, 0x016, 0x030, 0x028, 0x08b, 0x018},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0ec, 0x044, 0x07c, 0x0fb, 0x00c, 0x00b, 0x01d, 0x0e8, 0x0e9, 0x0c4, 0x030, 0x00b, 0x01d, 0x0e8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x076, 0x060, 0x07d, 0x026, 0x090, 0x03d, 0x02e, 0x0c8, 0x082, 0x0d9, 0x070, 0x040, 0x05a, 0x0dc, 0x003, 0x000, 0x000, 0x001, 0x0e7, 0x053, 0x0e0, 0x04c, 0x0ca, 0x0e0, 0x026, 0x0cb, 0x04c, 0x0b3, 0x035, 0x020, 0x031, 0x0e0, 0x0d0, 0x004, 0x000, 0x000, 0x002, 0x0f2, 0x04d, 0x066, 0x025, 0x0a9, 0x01e, 0x01a, 0x029, 0x022, 0x0bb, 0x096, 0x0a6, 0x032, 0x049, 0x0b2, 0x005, 0x000, 0x000, 0x001, 0x0ca, 0x004, 0x0b0, 0x073, 0x03d, 0x090, 0x037, 0x0d4, 0x08c, 0x08c, 0x0c2, 0x070, 0x03e, 0x026, 0x0c4, 0x006, 0x000, 0x000, 0x001, 0x0d6, 0x0c7, 0x0d8, 0x034, 0x09c, 0x014, 0x017, 0x0ff, 0x09c, 0x0cb, 0x063, 0x0ec, 0x051, 0x038, 0x08c, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x001, 0x0cb, 0x0ae, 0x028, 0x06f, 0x087, 0x094, 0x029, 0x0b3, 0x038, 0x090, 0x078, 0x06c, 0x04a, 0x09e, 0x0a0, 0x009, 0x000, 0x000, 0x001, 0x0c8, 0x069, 0x020, 0x073, 0x0e8, 0x0e0, 0x034, 0x051, 0x000, 0x08c, 0x017, 0x020, 0x043, 0x045, 0x0e0, 0x00a, 0x000, 0x000, 0x000, 0x0e4, 0x000, 0x000, 0x000, 0x000, 0x000, 0x02b, 0x0c2, 0x038, 0x057, 0x084, 0x078, 0x02b, 0x0c2, 0x038},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f5, 0x014, 0x07c, 0x0f2, 0x040, 0x013, 0x017, 0x0a8, 0x0d9, 0x0d0, 0x0b0, 0x013, 0x017, 0x0a8, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x02e, 0x038, 0x07c, 0x02b, 0x060, 0x03c, 0x05c, 0x070, 0x083, 0x0d4, 0x0a0, 0x040, 0x075, 0x058, 0x003, 0x000, 0x000, 0x001, 0x0d9, 0x040, 0x034, 0x055, 0x06e, 0x0d0, 0x030, 0x034, 0x008, 0x0aa, 0x091, 0x030, 0x036, 0x08b, 0x0c4, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0c8, 0x022, 0x054, 0x073, 0x05d, 0x094, 0x034, 0x0b3, 0x058, 0x08c, 0x0a2, 0x06c, 0x043, 0x02a, 0x050, 0x007, 0x000, 0x000, 0x000, 0x0e5, 0x011, 0x068, 0x061, 0x080, 0x078, 0x02f, 0x05d, 0x060, 0x09e, 0x07f, 0x088, 0x06b, 0x091, 0x030, 0x008, 0x000, 0x000, 0x001, 0x0ea, 0x019, 0x054, 0x03d, 0x0ec, 0x00c, 0x01e, 0x0f7, 0x0f0, 0x0a9, 0x06d, 0x044, 0x04f, 0x095, 0x068, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x0e3, 0x0f3, 0x0f8, 0x0f9, 0x0df, 0x0a8, 0x028, 0x08b, 0x018, 0x051, 0x016, 0x030, 0x028, 0x08b, 0x018},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0ec, 0x044, 0x07c, 0x0fb, 0x00c, 0x00b, 0x01d, 0x0e8, 0x0e9, 0x0c4, 0x030, 0x00b, 0x01d, 0x0e8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x076, 0x060, 0x07d, 0x026, 0x090, 0x03d, 0x02e, 0x0c8, 0x082, 0x0d9, 0x070, 0x040, 0x05a, 0x0dc, 0x003, 0x000, 0x000, 0x001, 0x0e7, 0x053, 0x0e0, 0x04c, 0x0ca, 0x0e0, 0x026, 0x0cb, 0x04c, 0x0b3, 0x035, 0x020, 0x031, 0x0e0, 0x0d0, 0x004, 0x000, 0x000, 0x002, 0x0f2, 0x04d, 0x066, 0x025, 0x0a9, 0x01e, 0x01a, 0x029, 0x022, 0x0bb, 0x096, 0x0a6, 0x032, 0x049, 0x0b2, 0x005, 0x000, 0x000, 0x001, 0x0ca, 0x004, 0x0b0, 0x073, 0x03d, 0x090, 0x037, 0x0d4, 0x08c, 0x08c, 0x0c2, 0x070, 0x03e, 0x026, 0x0c4, 0x006, 0x000, 0x000, 0x001, 0x0d6, 0x0c7, 0x0d8, 0x034, 0x09c, 0x014, 0x017, 0x0ff, 0x09c, 0x0cb, 0x063, 0x0ec, 0x051, 0x038, 0x08c, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x001, 0x0cb, 0x0ae, 0x028, 0x06f, 0x087, 0x094, 0x029, 0x0b3, 0x038, 0x090, 0x078, 0x06c, 0x04a, 0x09e, 0x0a0, 0x009, 0x000, 0x000, 0x001, 0x0c8, 0x069, 0x020, 0x073, 0x0e8, 0x0e0, 0x034, 0x051, 0x000, 0x08c, 0x017, 0x020, 0x043, 0x045, 0x0e0, 0x00a, 0x000, 0x000, 0x000, 0x0e4, 0x000, 0x000, 0x000, 0x000, 0x000, 0x02b, 0x0c2, 0x038, 0x057, 0x084, 0x078, 0x02b, 0x0c2, 0x038},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f5, 0x014, 0x07c, 0x0f2, 0x040, 0x013, 0x017, 0x0a8, 0x0d9, 0x0d0, 0x0b0, 0x013, 0x017, 0x0a8, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x02e, 0x038, 0x07c, 0x02b, 0x060, 0x03c, 0x05c, 0x070, 0x083, 0x0d4, 0x0a0, 0x040, 0x075, 0x058, 0x003, 0x000, 0x000, 0x001, 0x0d9, 0x040, 0x034, 0x055, 0x06e, 0x0d0, 0x030, 0x034, 0x008, 0x0aa, 0x091, 0x030, 0x036, 0x08b, 0x0c4, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0c8, 0x022, 0x054, 0x073, 0x05d, 0x094, 0x034, 0x0b3, 0x058, 0x08c, 0x0a2, 0x06c, 0x043, 0x02a, 0x050, 0x007, 0x000, 0x000, 0x000, 0x0e5, 0x011, 0x068, 0x061, 0x080, 0x078, 0x02f, 0x05d, 0x060, 0x09e, 0x07f, 0x088, 0x06b, 0x091, 0x030, 0x008, 0x000, 0x000, 0x001, 0x0ea, 0x019, 0x054, 0x03d, 0x0ec, 0x00c, 0x01e, 0x0f7, 0x0f0, 0x0a9, 0x06d, 0x044, 0x04f, 0x095, 0x068, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x0e3, 0x0f3, 0x0f8, 0x0f9, 0x0df, 0x0a8, 0x028, 0x08b, 0x018, 0x051, 0x016, 0x030, 0x028, 0x08b, 0x018},
{0x001, 0x000, 0x000, 0x001, 0x0c4, 0x07c, 0x0e4, 0x07b, 0x03f, 0x06c, 0x033, 0x0e7, 0x0d8, 0x098, 0x030, 0x050, 0x033, 0x0e7, 0x0d8, 0x002, 0x000, 0x000, 0x001, 0x0db, 0x07a, 0x034, 0x05c, 0x0de, 0x0ec, 0x001, 0x0e9, 0x0b8, 0x003, 0x0d3, 0x070, 0x001, 0x0e9, 0x0b8, 0x003, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000},
{0x001, 0x000, 0x000, 0x001, 0x0c4, 0x07c, 0x0e4, 0x07b, 0x03f, 0x06c, 0x033, 0x0e7, 0x0d8, 0x098, 0x030, 0x050, 0x033, 0x0e7, 0x0d8, 0x002, 0x000, 0x000, 0x001, 0x0db, 0x07a, 0x034, 0x05c, 0x0de, 0x0ec, 0x001, 0x0e9, 0x0b8, 0x003, 0x0d3, 0x070, 0x001, 0x0e9, 0x0b8, 0x003, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0ec, 0x044, 0x07c, 0x0fb, 0x00c, 0x00b, 0x01d, 0x0e8, 0x0e9, 0x0c4, 0x030, 0x00b, 0x01d, 0x0e8, 0x002, 0x000, 0x000, 0x001, 0x0c2, 0x076, 0x060, 0x07d, 0x026, 0x090, 0x03d, 0x02e, 0x0c8, 0x082, 0x0d9, 0x070, 0x040, 0x05a, 0x0dc, 0x003, 0x000, 0x000, 0x001, 0x0e7, 0x053, 0x0e0, 0x04c, 0x0ca, 0x0e0, 0x026, 0x0cb, 0x04c, 0x0b3, 0x035, 0x020, 0x031, 0x0e0, 0x0d0, 0x004, 0x000, 0x000, 0x002, 0x0f2, 0x04d, 0x066, 0x025, 0x0a9, 0x01e, 0x01a, 0x029, 0x022, 0x0bb, 0x096, 0x0a6, 0x032, 0x049, 0x0b2, 0x005, 0x000, 0x000, 0x001, 0x0ca, 0x004, 0x0b0, 0x073, 0x03d, 0x090, 0x037, 0x0d4, 0x08c, 0x08c, 0x0c2, 0x070, 0x03e, 0x026, 0x0c4, 0x006, 0x000, 0x000, 0x001, 0x0d6, 0x0c7, 0x0d8, 0x034, 0x09c, 0x014, 0x017, 0x0ff, 0x09c, 0x0cb, 0x063, 0x0ec, 0x051, 0x038, 0x08c, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x001, 0x0cb, 0x0ae, 0x028, 0x06f, 0x087, 0x094, 0x029, 0x0b3, 0x038, 0x090, 0x078, 0x06c, 0x04a, 0x09e, 0x0a0, 0x009, 0x000, 0x000, 0x001, 0x0c8, 0x069, 0x020, 0x073, 0x0e8, 0x0e0, 0x034, 0x051, 0x000, 0x08c, 0x017, 0x020, 0x043, 0x045, 0x0e0, 0x00a, 0x000, 0x000, 0x000, 0x0e4, 0x000, 0x000, 0x000, 0x000, 0x000, 0x02b, 0x0c2, 0x038, 0x057, 0x084, 0x078, 0x02b, 0x0c2, 0x038},
{0x001, 0x000, 0x000, 0x001, 0x0c2, 0x0f5, 0x014, 0x07c, 0x0f2, 0x040, 0x013, 0x017, 0x0a8, 0x0d9, 0x0d0, 0x0b0, 0x013, 0x017, 0x0a8, 0x002, 0x000, 0x000, 0x001, 0x0c3, 0x02e, 0x038, 0x07c, 0x02b, 0x060, 0x03c, 0x05c, 0x070, 0x083, 0x0d4, 0x0a0, 0x040, 0x075, 0x058, 0x003, 0x000, 0x000, 0x001, 0x0d9, 0x040, 0x034, 0x055, 0x06e, 0x0d0, 0x030, 0x034, 0x008, 0x0aa, 0x091, 0x030, 0x036, 0x08b, 0x0c4, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x001, 0x0c8, 0x022, 0x054, 0x073, 0x05d, 0x094, 0x034, 0x0b3, 0x058, 0x08c, 0x0a2, 0x06c, 0x043, 0x02a, 0x050, 0x007, 0x000, 0x000, 0x000, 0x0e5, 0x011, 0x068, 0x061, 0x080, 0x078, 0x02f, 0x05d, 0x060, 0x09e, 0x07f, 0x088, 0x06b, 0x091, 0x030, 0x008, 0x000, 0x000, 0x001, 0x0ea, 0x019, 0x054, 0x03d, 0x0ec, 0x00c, 0x01e, 0x0f7, 0x0f0, 0x0a9, 0x06d, 0x044, 0x04f, 0x095, 0x068, 0x009, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x00a, 0x000, 0x000, 0x000, 0x0e3, 0x0f3, 0x0f8, 0x0f9, 0x0df, 0x0a8, 0x028, 0x08b, 0x018, 0x051, 0x016, 0x030, 0x028, 0x08b, 0x018},
{0x001, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x002, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x003, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x004, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x005, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x006, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x007, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x008, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000, 0x009, 0x000, 0x000, 0x000, 0x0ea, 0x05a, 0x000, 0x0c6, 0x0bb, 0x068, 0x033, 0x0ba, 0x0a8, 0x067, 0x075, 0x048, 0x033, 0x0ba, 0x0a8, 0x00a, 0x000, 0x000, 0x000, 0x0e6, 0x044, 0x0b0, 0x00a, 0x00d, 0x0f8, 0x023, 0x0eb, 0x058, 0x047, 0x0d6, 0x0b0, 0x023, 0x0eb, 0x058}
};