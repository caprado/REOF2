void func_0010fe58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0010fe5c: addiu $sp, $sp, -0x20
    if (a0 >= 0) goto label_0x10fecc;                           // 0x0010fe70: bgez $a0, 0x10fecc
    v1 = -1;                                                    // 0x0010fe80: addiu $v1, $zero, -1
    v0 = -v0;                                                   // 0x0010fe88: negu $v0, $v0
    a2 = a2 & v1;                                               // 0x0010fe8c: and $a2, $a2, $v1
    v1 = -a0;                                                   // 0x0010fe94: negu $v1, $a0
    a0 = 0xffff << 16;                                          // 0x0010fe9c: lui $a0, 0xffff
    a2 = a2 | v0;                                               // 0x0010fea4: or $a2, $a2, $v0
    s0 = -1;                                                    // 0x0010fea8: addiu $s0, $zero, -1
    a2 = a2 & a0;                                               // 0x0010feb4: and $a2, $a2, $a0
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0010feb8: sltu $v0, $zero, $v0
    v1 = v1 - v0;                                               // 0x0010febc: subu $v1, $v1, $v0
    t0 = a2 | v1;                                               // 0x0010fec4: or $t0, $a2, $v1
label_0x10fecc:
    if (a0 >= 0) goto label_0x10ff20;                           // 0x0010fed0: bgez $a0, 0x10ff20
    a0 = -a0;                                                   // 0x0010fed4: negu $a0, $a0
    a1 = 0xffff << 16;                                          // 0x0010fee0: lui $a1, 0xffff
    v0 = -v0;                                                   // 0x0010fee8: negu $v0, $v0
    v1 = -1;                                                    // 0x0010feec: addiu $v1, $zero, -1
    a3 = a3 & v1;                                               // 0x0010fef8: and $a3, $a3, $v1
    a3 = a3 | v0;                                               // 0x0010ff00: or $a3, $a3, $v0
    a3 = a3 & a1;                                               // 0x0010ff0c: and $a3, $a3, $a1
    v1 = ((unsigned)0 < (unsigned)v1) ? 1 : 0;                  // 0x0010ff10: sltu $v1, $zero, $v1
    a0 = a0 - v1;                                               // 0x0010ff14: subu $a0, $a0, $v1
    a1 = a3 | a0;                                               // 0x0010ff1c: or $a1, $a3, $a0
label_0x10ff20:
    if (t1 != 0) goto label_0x110200;                           // 0x0010ff3c: bnez $t1, 0x110200
    v0 = ((unsigned)t2 < (unsigned)a3) ? 1 : 0;                 // 0x0010ff44: sltu $v0, $t2, $a3
    if (v0 == 0) goto label_0x10ffc8;                           // 0x0010ff48: beqz $v0, 0x10ffc8
    v0 = 0 | 0xffff;                                            // 0x0010ff4c: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x0010ff50: sltu $v0, $v0, $a3
    if (v0 != 0) goto label_0x10ff70;                           // 0x0010ff54: bnez $v0, 0x10ff70
    v0 = 0xff << 16;                                            // 0x0010ff58: lui $v0, 0xff
    v0 = ((unsigned)a3 < (unsigned)0x100) ? 1 : 0;              // 0x0010ff5c: sltiu $v0, $a3, 0x100
    a0 = 8;                                                     // 0x0010ff60: addiu $a0, $zero, 8
    goto label_0x10ff84;                                        // 0x0010ff64: b 0x10ff84
    if (v0 != 0) a0 = 0;                                        // 0x0010ff68: movn $a0, $zero, $v0
    /* nop */                                                   // 0x0010ff6c: nop 
label_0x10ff70:
    v1 = 0x18;                                                  // 0x0010ff70: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x0010ff74: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x0010ff78: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x0010ff7c: sltu $v0, $v0, $a3
    if (v0 != 0) a0 = v1;                                       // 0x0010ff80: movn $a0, $v1, $v0
label_0x10ff84:
    v1 = (unsigned)a3 >> a0;                                    // 0x0010ff84: srlv $v1, $a3, $a0
    a1 = 0x20;                                                  // 0x0010ff88: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x0010ff8c: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010ff90: addu $v0, $v0, $v1
    v0 = g_00220b20;  // Global at 0x00220b20                   // 0x0010ff94: lbu $v0, 0xb20($v0)
    v0 = v0 + a0;                                               // 0x0010ff98: addu $v0, $v0, $a0
    t4 = a1 - v0;                                               // 0x0010ff9c: subu $t4, $a1, $v0
    if (t4 == 0) goto label_0x10ffbc;                           // 0x0010ffa0: beqz $t4, 0x10ffbc
    v0 = a1 - t4;                                               // 0x0010ffa4: subu $v0, $a1, $t4
    v1 = t2 << t4;                                              // 0x0010ffa8: sllv $v1, $t2, $t4
    v0 = (unsigned)t5 >> v0;                                    // 0x0010ffac: srlv $v0, $t5, $v0
    t5 = t5 << t4;                                              // 0x0010ffb0: sllv $t5, $t5, $t4
    t2 = v1 | v0;                                               // 0x0010ffb4: or $t2, $v1, $v0
    a3 = a3 << t4;                                              // 0x0010ffb8: sllv $a3, $a3, $t4
label_0x10ffbc:
    a2 = (unsigned)a3 >> 0x10;                                  // 0x0010ffbc: srl $a2, $a3, 0x10
    goto label_0x110128;                                        // 0x0010ffc0: b 0x110128
    t1 = a3 & 0xffff;                                           // 0x0010ffc4: andi $t1, $a3, 0xffff
label_0x10ffc8:
    if (a3 != 0) goto label_0x10fff0;                           // 0x0010ffc8: bnez $a3, 0x10fff0
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x0010ffcc: sltu $v0, $v0, $a3
    v0 = 1;                                                     // 0x0010ffd0: addiu $v0, $zero, 1
    /* beqzl $a3, 0x10ffdc */                                   // 0x0010ffd4: beqzl $a3, 0x10ffdc
    /* break (trap) */                                          // 0x0010ffd8: break 0, 7
    /* divide: v0 / t1 -> hi:lo */                              // 0x0010ffdc: divu $zero, $v0, $t1
    /* mflo $v0 */                                              // 0x0010ffe0
    v0 = 0 | 0xffff;                                            // 0x0010ffe8: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x0010ffec: sltu $v0, $v0, $a3
label_0x10fff0:
    if (v0 != 0) goto label_0x110008;                           // 0x0010fff0: bnez $v0, 0x110008
    v0 = 0xff << 16;                                            // 0x0010fff4: lui $v0, 0xff
    v0 = ((unsigned)a3 < (unsigned)0x100) ? 1 : 0;              // 0x0010fff8: sltiu $v0, $a3, 0x100
    a0 = 8;                                                     // 0x0010fffc: addiu $a0, $zero, 8
    goto label_0x11001c;                                        // 0x00110000: b 0x11001c
    if (v0 != 0) a0 = 0;                                        // 0x00110004: movn $a0, $zero, $v0
label_0x110008:
    v1 = 0x18;                                                  // 0x00110008: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x0011000c: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x00110010: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)a3) ? 1 : 0;                 // 0x00110014: sltu $v0, $v0, $a3
    if (v0 != 0) a0 = v1;                                       // 0x00110018: movn $a0, $v1, $v0
label_0x11001c:
    v1 = (unsigned)a3 >> a0;                                    // 0x0011001c: srlv $v1, $a3, $a0
    a1 = 0x20;                                                  // 0x00110020: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x00110024: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x00110028: addu $v0, $v0, $v1
    v0 = g_00220b20;  // Global at 0x00220b20                   // 0x0011002c: lbu $v0, 0xb20($v0)
    v0 = v0 + a0;                                               // 0x00110030: addu $v0, $v0, $a0
    t4 = a1 - v0;                                               // 0x00110034: subu $t4, $a1, $v0
    if (t4 != 0) goto label_0x110050;                           // 0x00110038: bnez $t4, 0x110050
    t7 = a1 - t4;                                               // 0x0011003c: subu $t7, $a1, $t4
    t2 = t2 - a3;                                               // 0x00110040: subu $t2, $t2, $a3
    a1 = (unsigned)a3 >> 0x10;                                  // 0x00110044: srl $a1, $a3, 0x10
    goto label_0x110120;                                        // 0x00110048: b 0x110120
    t6 = a3 & 0xffff;                                           // 0x0011004c: andi $t6, $a3, 0xffff
label_0x110050:
    v1 = t2 << t4;                                              // 0x00110050: sllv $v1, $t2, $t4
    v0 = (unsigned)t5 >> t7;                                    // 0x00110054: srlv $v0, $t5, $t7
    t5 = t5 << t4;                                              // 0x00110058: sllv $t5, $t5, $t4
    a0 = (unsigned)t2 >> t7;                                    // 0x0011005c: srlv $a0, $t2, $t7
    t2 = v1 | v0;                                               // 0x00110060: or $t2, $v1, $v0
    a3 = a3 << t4;                                              // 0x00110064: sllv $a3, $a3, $t4
    a1 = (unsigned)a3 >> 0x10;                                  // 0x00110068: srl $a1, $a3, 0x10
    /* divide: a0 / a1 -> hi:lo */                              // 0x0011006c: divu $zero, $a0, $a1
    a0 = (unsigned)t2 >> 0x10;                                  // 0x00110070: srl $a0, $t2, 0x10
    t6 = a3 & 0xffff;                                           // 0x00110074: andi $t6, $a3, 0xffff
    /* beqzl $t1, 0x110084 */                                   // 0x0011007c: beqzl $t1, 0x110084
    /* break (trap) */                                          // 0x00110080: break 0, 7
    /* mflo $v0 */                                              // 0x00110084
    /* mfhi $v1 */                                              // 0x00110088
    v1 = v1 << 0x10;                                            // 0x00110090: sll $v1, $v1, 0x10
    a2 = v1 | a0;                                               // 0x00110094: or $a2, $v1, $a0
    v0 = ((unsigned)a2 < (unsigned)t0) ? 1 : 0;                 // 0x00110098: sltu $v0, $a2, $t0
    if (v0 == 0) goto label_0x1100c8;                           // 0x0011009c: beqz $v0, 0x1100c8
    a2 = a2 + a3;                                               // 0x001100a4: addu $a2, $a2, $a3
    v0 = ((unsigned)a2 < (unsigned)a3) ? 1 : 0;                 // 0x001100a8: sltu $v0, $a2, $a3
    /* bnezl $v0, 0x1100cc */                                   // 0x001100ac: bnezl $v0, 0x1100cc
    a2 = a2 - t0;                                               // 0x001100b0: subu $a2, $a2, $t0
    v0 = ((unsigned)a2 < (unsigned)t0) ? 1 : 0;                 // 0x001100b4: sltu $v0, $a2, $t0
    v1 = a2 + a3;                                               // 0x001100b8: addu $v1, $a2, $a3
    v0 = v0 ^ 0;                                                // 0x001100bc: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x001100c0: movn $a2, $v1, $v0
    /* nop */                                                   // 0x001100c4: nop 
label_0x1100c8:
    a2 = a2 - t0;                                               // 0x001100c8: subu $a2, $a2, $t0
    a0 = t2 & 0xffff;                                           // 0x001100cc: andi $a0, $t2, 0xffff
    /* divide: a2 / t1 -> hi:lo */                              // 0x001100d0: divu $zero, $a2, $t1
    /* beqzl $t1, 0x1100dc */                                   // 0x001100d4: beqzl $t1, 0x1100dc
    /* break (trap) */                                          // 0x001100d8: break 0, 7
    /* mflo $v0 */                                              // 0x001100dc
    /* mfhi $v1 */                                              // 0x001100e0
    v1 = v1 << 0x10;                                            // 0x001100e8: sll $v1, $v1, 0x10
    a0 = v1 | a0;                                               // 0x001100ec: or $a0, $v1, $a0
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x001100f0: sltu $v0, $a0, $t0
    if (v0 == 0) goto label_0x110120;                           // 0x001100f4: beqz $v0, 0x110120
    t2 = a0 - t0;                                               // 0x001100f8: subu $t2, $a0, $t0
    a0 = a0 + a3;                                               // 0x001100fc: addu $a0, $a0, $a3
    v0 = ((unsigned)a0 < (unsigned)a3) ? 1 : 0;                 // 0x00110100: sltu $v0, $a0, $a3
    if (v0 != 0) goto label_0x110120;                           // 0x00110104: bnez $v0, 0x110120
    t2 = a0 - t0;                                               // 0x00110108: subu $t2, $a0, $t0
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x0011010c: sltu $v0, $a0, $t0
    v1 = a0 + a3;                                               // 0x00110110: addu $v1, $a0, $a3
    v0 = v0 ^ 0;                                                // 0x00110114: xori $v0, $v0, 0
    if (v0 != 0) a0 = v1;                                       // 0x00110118: movn $a0, $v1, $v0
    t2 = a0 - t0;                                               // 0x0011011c: subu $t2, $a0, $t0
label_0x110120:
label_0x110128:
    /* divide: t2 / a2 -> hi:lo */                              // 0x00110128: divu $zero, $t2, $a2
    a0 = (unsigned)t5 >> 0x10;                                  // 0x0011012c: srl $a0, $t5, 0x10
    /* beqzl $a2, 0x110138 */                                   // 0x00110130: beqzl $a2, 0x110138
    /* break (trap) */                                          // 0x00110134: break 0, 7
    /* mflo $v0 */                                              // 0x00110138
    /* mfhi $v1 */                                              // 0x0011013c
    v1 = v1 << 0x10;                                            // 0x00110144: sll $v1, $v1, 0x10
    a1 = v1 | a0;                                               // 0x00110148: or $a1, $v1, $a0
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x0011014c: sltu $v0, $a1, $t0
    /* beqzl $v0, 0x11017c */                                   // 0x00110150: beqzl $v0, 0x11017c
    a1 = a1 - t0;                                               // 0x00110154: subu $a1, $a1, $t0
    a1 = a1 + a3;                                               // 0x00110158: addu $a1, $a1, $a3
    v0 = ((unsigned)a1 < (unsigned)a3) ? 1 : 0;                 // 0x0011015c: sltu $v0, $a1, $a3
    /* bnezl $v0, 0x11017c */                                   // 0x00110160: bnezl $v0, 0x11017c
    a1 = a1 - t0;                                               // 0x00110164: subu $a1, $a1, $t0
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x00110168: sltu $v0, $a1, $t0
    v1 = a1 + a3;                                               // 0x0011016c: addu $v1, $a1, $a3
    v0 = v0 ^ 0;                                                // 0x00110170: xori $v0, $v0, 0
    if (v0 != 0) a1 = v1;                                       // 0x00110174: movn $a1, $v1, $v0
    a1 = a1 - t0;                                               // 0x00110178: subu $a1, $a1, $t0
    a0 = t5 & 0xffff;                                           // 0x0011017c: andi $a0, $t5, 0xffff
    /* divide: a1 / a2 -> hi:lo */                              // 0x00110180: divu $zero, $a1, $a2
    /* beqzl $a2, 0x11018c */                                   // 0x00110184: beqzl $a2, 0x11018c
    /* break (trap) */                                          // 0x00110188: break 0, 7
    /* mflo $v0 */                                              // 0x0011018c
    /* mfhi $v1 */                                              // 0x00110190
    v1 = v1 << 0x10;                                            // 0x00110198: sll $v1, $v1, 0x10
    a0 = v1 | a0;                                               // 0x0011019c: or $a0, $v1, $a0
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x001101a0: sltu $v0, $a0, $t0
    if (v0 == 0) goto label_0x1101c8;                           // 0x001101a4: beqz $v0, 0x1101c8
    /* nop */                                                   // 0x001101a8: nop 
    a0 = a0 + a3;                                               // 0x001101ac: addu $a0, $a0, $a3
    v0 = ((unsigned)a0 < (unsigned)a3) ? 1 : 0;                 // 0x001101b0: sltu $v0, $a0, $a3
    if (v0 != 0) goto label_0x1101c8;                           // 0x001101b4: bnez $v0, 0x1101c8
    v0 = ((unsigned)a0 < (unsigned)t0) ? 1 : 0;                 // 0x001101b8: sltu $v0, $a0, $t0
    v1 = a0 + a3;                                               // 0x001101bc: addu $v1, $a0, $a3
    v0 = v0 ^ 0;                                                // 0x001101c0: xori $v0, $v0, 0
    if (v0 != 0) a0 = v1;                                       // 0x001101c4: movn $a0, $v1, $v0
label_0x1101c8:
    if (t9 == 0) goto label_0x11047c;                           // 0x001101c8: beqz $t9, 0x11047c
    t5 = a0 - t0;                                               // 0x001101cc: subu $t5, $a0, $t0
    v0 = (unsigned)t5 >> t4;                                    // 0x001101d0: srlv $v0, $t5, $t4
    v1 = -1;                                                    // 0x001101d4: addiu $v1, $zero, -1
    t3 = t3 & v1;                                               // 0x001101e0: and $t3, $t3, $v1
    v1 = 0xffff << 16;                                          // 0x001101e8: lui $v1, 0xffff
    t3 = t3 | v0;                                               // 0x001101f0: or $t3, $t3, $v0
    goto label_0x110478;                                        // 0x001101f4: b 0x110478
    t3 = t3 & v1;                                               // 0x001101f8: and $t3, $t3, $v1
    /* nop */                                                   // 0x001101fc: nop 
label_0x110200:
    v0 = ((unsigned)t2 < (unsigned)t1) ? 1 : 0;                 // 0x00110200: sltu $v0, $t2, $t1
    if (v0 == 0) goto label_0x110240;                           // 0x00110204: beqz $v0, 0x110240
    v0 = 0 | 0xffff;                                            // 0x00110208: ori $v0, $zero, 0xffff
    v1 = -1;                                                    // 0x0011020c: addiu $v1, $zero, -1
    t3 = t3 & v1;                                               // 0x0011021c: and $t3, $t3, $v1
    t3 = t3 | v0;                                               // 0x00110220: or $t3, $t3, $v0
    v1 = 0xffff << 16;                                          // 0x00110228: lui $v1, 0xffff
    t3 = t3 & v1;                                               // 0x00110230: and $t3, $t3, $v1
    t3 = t3 | v0;                                               // 0x00110234: or $t3, $t3, $v0
    goto label_0x11047c;                                        // 0x00110238: b 0x11047c
label_0x110240:
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x00110240: sltu $v0, $v0, $t1
    if (v0 != 0) goto label_0x110260;                           // 0x00110244: bnez $v0, 0x110260
    v0 = 0xff << 16;                                            // 0x00110248: lui $v0, 0xff
    v0 = ((unsigned)t1 < (unsigned)0x100) ? 1 : 0;              // 0x0011024c: sltiu $v0, $t1, 0x100
    a0 = 8;                                                     // 0x00110250: addiu $a0, $zero, 8
    goto label_0x110274;                                        // 0x00110254: b 0x110274
    if (v0 != 0) a0 = 0;                                        // 0x00110258: movn $a0, $zero, $v0
    /* nop */                                                   // 0x0011025c: nop 
label_0x110260:
    v1 = 0x18;                                                  // 0x00110260: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x00110264: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x00110268: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0011026c: sltu $v0, $v0, $t1
    if (v0 != 0) a0 = v1;                                       // 0x00110270: movn $a0, $v1, $v0
label_0x110274:
    v1 = (unsigned)t1 >> a0;                                    // 0x00110274: srlv $v1, $t1, $a0
    a1 = 0x20;                                                  // 0x00110278: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x0011027c: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x00110280: addu $v0, $v0, $v1
    v0 = g_00220b20;  // Global at 0x00220b20                   // 0x00110284: lbu $v0, 0xb20($v0)
    v0 = v0 + a0;                                               // 0x00110288: addu $v0, $v0, $a0
    t4 = a1 - v0;                                               // 0x0011028c: subu $t4, $a1, $v0
    if (t4 != 0) goto label_0x1102f8;                           // 0x00110290: bnez $t4, 0x1102f8
    t7 = a1 - t4;                                               // 0x00110294: subu $t7, $a1, $t4
    v0 = ((unsigned)t1 < (unsigned)t2) ? 1 : 0;                 // 0x00110298: sltu $v0, $t1, $t2
    if (v0 != 0) goto label_0x1102b0;                           // 0x0011029c: bnez $v0, 0x1102b0
    v0 = t5 - a3;                                               // 0x001102a0: subu $v0, $t5, $a3
    v0 = ((unsigned)t5 < (unsigned)a3) ? 1 : 0;                 // 0x001102a4: sltu $v0, $t5, $a3
    if (v0 != 0) goto label_0x1102c0;                           // 0x001102a8: bnez $v0, 0x1102c0
    v0 = t5 - a3;                                               // 0x001102ac: subu $v0, $t5, $a3
label_0x1102b0:
    a0 = t2 - t1;                                               // 0x001102b0: subu $a0, $t2, $t1
    v1 = ((unsigned)t5 < (unsigned)v0) ? 1 : 0;                 // 0x001102b4: sltu $v1, $t5, $v0
    t2 = a0 - v1;                                               // 0x001102bc: subu $t2, $a0, $v1
label_0x1102c0:
    if (t9 == 0) goto label_0x11047c;                           // 0x001102c0: beqz $t9, 0x11047c
    v1 = -1;                                                    // 0x001102c8: addiu $v1, $zero, -1
    t3 = t3 & v1;                                               // 0x001102d4: and $t3, $t3, $v1
    t3 = t3 | v0;                                               // 0x001102d8: or $t3, $t3, $v0
    v1 = 0xffff << 16;                                          // 0x001102e0: lui $v1, 0xffff
    t3 = t3 & v1;                                               // 0x001102e8: and $t3, $t3, $v1
    goto label_0x110478;                                        // 0x001102ec: b 0x110478
    t3 = t3 | v0;                                               // 0x001102f0: or $t3, $t3, $v0
    /* nop */                                                   // 0x001102f4: nop 
label_0x1102f8:
    a1 = t2 << t4;                                              // 0x001102f8: sllv $a1, $t2, $t4
    a0 = t1 << t4;                                              // 0x001102fc: sllv $a0, $t1, $t4
    v0 = (unsigned)a3 >> t7;                                    // 0x00110300: srlv $v0, $a3, $t7
    v1 = (unsigned)t5 >> t7;                                    // 0x00110304: srlv $v1, $t5, $t7
    t5 = t5 << t4;                                              // 0x00110308: sllv $t5, $t5, $t4
    t1 = a0 | v0;                                               // 0x0011030c: or $t1, $a0, $v0
    a0 = (unsigned)t2 >> t7;                                    // 0x00110310: srlv $a0, $t2, $t7
    a3 = a3 << t4;                                              // 0x00110314: sllv $a3, $a3, $t4
    t2 = a1 | v1;                                               // 0x00110318: or $t2, $a1, $v1
    a2 = (unsigned)t1 >> 0x10;                                  // 0x0011031c: srl $a2, $t1, 0x10
    /* divide: a0 / a2 -> hi:lo */                              // 0x00110320: divu $zero, $a0, $a2
    a0 = (unsigned)t2 >> 0x10;                                  // 0x00110324: srl $a0, $t2, 0x10
    a1 = t1 & 0xffff;                                           // 0x00110328: andi $a1, $t1, 0xffff
    /* beqzl $a2, 0x110334 */                                   // 0x0011032c: beqzl $a2, 0x110334
    /* break (trap) */                                          // 0x00110330: break 0, 7
    /* mflo $v0 */                                              // 0x00110334
    /* mfhi $v1 */                                              // 0x00110338
    v1 = v1 << 0x10;                                            // 0x00110340: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x00110348: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x0011034c: sltu $v0, $v1, $t0
    /* beqzl $v0, 0x110384 */                                   // 0x00110350: beqzl $v0, 0x110384
    v1 = v1 - t0;                                               // 0x00110354: subu $v1, $v1, $t0
    v1 = v1 + t1;                                               // 0x00110358: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0011035c: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x110380;                           // 0x00110360: bnez $v0, 0x110380
    t6 = t6 + -1;                                               // 0x00110364: addiu $t6, $t6, -1
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x00110368: sltu $v0, $v1, $t0
    /* beqzl $v0, 0x110384 */                                   // 0x0011036c: beqzl $v0, 0x110384
    v1 = v1 - t0;                                               // 0x00110370: subu $v1, $v1, $t0
    t6 = t6 + -1;                                               // 0x00110374: addiu $t6, $t6, -1
    v1 = v1 + t1;                                               // 0x00110378: addu $v1, $v1, $t1
    /* nop */                                                   // 0x0011037c: nop 
label_0x110380:
    v1 = v1 - t0;                                               // 0x00110380: subu $v1, $v1, $t0
    /* beqzl $a2, 0x11038c */                                   // 0x00110384: beqzl $a2, 0x11038c
    /* break (trap) */                                          // 0x00110388: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x0011038c: divu $zero, $v1, $a2
    a0 = t2 & 0xffff;                                           // 0x00110390: andi $a0, $t2, 0xffff
    /* mflo $v0 */                                              // 0x00110394
    /* mfhi $v1 */                                              // 0x00110398
    v1 = v1 << 0x10;                                            // 0x001103a0: sll $v1, $v1, 0x10
    a1 = v1 | a0;                                               // 0x001103a8: or $a1, $v1, $a0
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x001103ac: sltu $v0, $a1, $t0
    /* beqzl $v0, 0x1103e0 */                                   // 0x001103b0: beqzl $v0, 0x1103e0
    a1 = a1 - t0;                                               // 0x001103b4: subu $a1, $a1, $t0
    a1 = a1 + t1;                                               // 0x001103b8: addu $a1, $a1, $t1
    v0 = ((unsigned)a1 < (unsigned)t1) ? 1 : 0;                 // 0x001103bc: sltu $v0, $a1, $t1
    if (v0 != 0) goto label_0x1103dc;                           // 0x001103c0: bnez $v0, 0x1103dc
    a2 = a2 + -1;                                               // 0x001103c4: addiu $a2, $a2, -1
    v0 = ((unsigned)a1 < (unsigned)t0) ? 1 : 0;                 // 0x001103c8: sltu $v0, $a1, $t0
    /* beqzl $v0, 0x1103e0 */                                   // 0x001103cc: beqzl $v0, 0x1103e0
    a1 = a1 - t0;                                               // 0x001103d0: subu $a1, $a1, $t0
    a2 = a2 + -1;                                               // 0x001103d4: addiu $a2, $a2, -1
    a1 = a1 + t1;                                               // 0x001103d8: addu $a1, $a1, $t1
label_0x1103dc:
    a1 = a1 - t0;                                               // 0x001103dc: subu $a1, $a1, $t0
    v0 = t6 << 0x10;                                            // 0x001103e0: sll $v0, $t6, 0x10
    v0 = v0 | a2;                                               // 0x001103e4: or $v0, $v0, $a2
    /* multiply: a3 *  -> hi:lo */                              // 0x001103ec: multu $v0, $a3
    /* mfhi $a2 */                                              // 0x001103f0
    /* mflo $t0 */                                              // 0x001103f4
    v1 = ((unsigned)t2 < (unsigned)a2) ? 1 : 0;                 // 0x001103f8: sltu $v1, $t2, $a2
    if (v1 != 0) goto label_0x110418;                           // 0x001103fc: bnez $v1, 0x110418
    v0 = t0 - a3;                                               // 0x00110400: subu $v0, $t0, $a3
    if (a2 != t2) goto label_0x110428;                          // 0x00110404: bne $a2, $t2, 0x110428
    v0 = ((unsigned)t5 < (unsigned)t0) ? 1 : 0;                 // 0x00110408: sltu $v0, $t5, $t0
    if (v0 == 0) goto label_0x110428;                           // 0x0011040c: beqz $v0, 0x110428
    v0 = t0 - a3;                                               // 0x00110410: subu $v0, $t0, $a3
    /* nop */                                                   // 0x00110414: nop 
label_0x110418:
    a0 = a2 - t1;                                               // 0x00110418: subu $a0, $a2, $t1
    v1 = ((unsigned)t0 < (unsigned)v0) ? 1 : 0;                 // 0x0011041c: sltu $v1, $t0, $v0
    a2 = a0 - v1;                                               // 0x00110424: subu $a2, $a0, $v1
label_0x110428:
    if (t9 == 0) goto label_0x11047c;                           // 0x00110428: beqz $t9, 0x11047c
    a0 = t5 - t0;                                               // 0x0011042c: subu $a0, $t5, $t0
    a1 = a1 - a2;                                               // 0x00110430: subu $a1, $a1, $a2
    v1 = ((unsigned)t5 < (unsigned)a0) ? 1 : 0;                 // 0x00110434: sltu $v1, $t5, $a0
    t2 = a1 - v1;                                               // 0x00110438: subu $t2, $a1, $v1
    v0 = t2 << t7;                                              // 0x0011043c: sllv $v0, $t2, $t7
    v1 = -1;                                                    // 0x00110440: addiu $v1, $zero, -1
    a0 = (unsigned)a0 >> t4;                                    // 0x00110448: srlv $a0, $a0, $t4
    t3 = t3 & v1;                                               // 0x0011044c: and $t3, $t3, $v1
    v0 = v0 | a0;                                               // 0x00110450: or $v0, $v0, $a0
    a0 = 0xffff << 16;                                          // 0x00110454: lui $a0, 0xffff
    v1 = (unsigned)t2 >> t4;                                    // 0x00110460: srlv $v1, $t2, $t4
    t3 = t3 | v0;                                               // 0x0011046c: or $t3, $t3, $v0
    t3 = t3 & a0;                                               // 0x00110470: and $t3, $t3, $a0
    t3 = t3 | v1;                                               // 0x00110474: or $t3, $t3, $v1
label_0x110478:
label_0x11047c:
    if (s0 == 0) goto label_0x1104d8;                           // 0x0011047c: beqz $s0, 0x1104d8
    a0 = -1;                                                    // 0x00110484: addiu $a0, $zero, -1
    t8 = t8 & a0;                                               // 0x0011048c: and $t8, $t8, $a0
    v0 = -v0;                                                   // 0x0011049c: negu $v0, $v0
    v1 = -v1;                                                   // 0x001104a0: negu $v1, $v1
    t8 = t8 | v0;                                               // 0x001104ac: or $t8, $t8, $v0
    v0 = 0xffff << 16;                                          // 0x001104b0: lui $v0, 0xffff
    t8 = t8 & v0;                                               // 0x001104c0: and $t8, $t8, $v0
    a0 = ((unsigned)0 < (unsigned)a0) ? 1 : 0;                  // 0x001104c4: sltu $a0, $zero, $a0
    v1 = v1 - a0;                                               // 0x001104c8: subu $v1, $v1, $a0
    t8 = t8 | v1;                                               // 0x001104d0: or $t8, $t8, $v1
label_0x1104d8:
    return;                                                     // 0x001104e0: jr $ra
    sp = sp + 0x20;                                             // 0x001104e4: addiu $sp, $sp, 0x20
}