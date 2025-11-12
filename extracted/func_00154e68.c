void func_00154e68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t3 = a0 + 0x128;                                            // 0x00154e68: addiu $t3, $a0, 0x128
    a0 = 3;                                                     // 0x00154e6c: addiu $a0, $zero, 3
    v1 = *(int32_t*)((t3) + 0x4f8);                             // 0x00154e70: lw $v1, 0x4f8($t3)
    *(uint32_t*)((t3) + 0x4dc) = a0;                            // 0x00154e78: sw $a0, 0x4dc($t3)
    v0 = -4;                                                    // 0x00154e7c: addiu $v0, $zero, -4
    v1 = v1 + 1;                                                // 0x00154e80: addiu $v1, $v1, 1
    t0 = t4 & v0;                                               // 0x00154e84: and $t0, $t4, $v0
    *(uint32_t*)((t3) + 0x4f8) = v1;                            // 0x00154e88: sw $v1, 0x4f8($t3)
    v0 = t4 - t0;                                               // 0x00154e8c: subu $v0, $t4, $t0
    t2 = v0 << 3;                                               // 0x00154e90: sll $t2, $v0, 3
    t1 = *(int8_t*)(t0);                                        // 0x00154e94: lb $t1, 0($t0)
    t0 = t0 + 1;                                                // 0x00154e98: addiu $t0, $t0, 1
    v1 = *(uint8_t*)(t0);                                       // 0x00154e9c: lbu $v1, 0($t0)
    t0 = t0 + 1;                                                // 0x00154ea0: addiu $t0, $t0, 1
    a0 = *(uint8_t*)(t0);                                       // 0x00154ea4: lbu $a0, 0($t0)
    t0 = t0 + 1;                                                // 0x00154ea8: addiu $t0, $t0, 1
    a1 = *(uint8_t*)(t0);                                       // 0x00154eac: lbu $a1, 0($t0)
    t0 = t0 + 1;                                                // 0x00154eb0: addiu $t0, $t0, 1
    a3 = *(int8_t*)(t0);                                        // 0x00154eb4: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00154eb8: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00154ebc: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00154ec0: addiu $t0, $t0, 1
    t1 = t1 << 8;                                               // 0x00154ec4: sll $t1, $t1, 8
    a3 = a3 << 8;                                               // 0x00154ec8: sll $a3, $a3, 8
    t1 = t1 | v1;                                               // 0x00154ecc: or $t1, $t1, $v1
    v1 = *(uint8_t*)(t0);                                       // 0x00154ed0: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00154ed4: or $a3, $a3, $v0
    t1 = t1 << 8;                                               // 0x00154ed8: sll $t1, $t1, 8
    t0 = t0 + 1;                                                // 0x00154edc: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00154ee0: sll $a3, $a3, 8
    t1 = t1 | a0;                                               // 0x00154ee4: or $t1, $t1, $a0
    v0 = *(uint8_t*)(t0);                                       // 0x00154ee8: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00154eec: or $a3, $a3, $v1
    t1 = t1 << 8;                                               // 0x00154ef0: sll $t1, $t1, 8
    a3 = a3 << 8;                                               // 0x00154ef4: sll $a3, $a3, 8
    t1 = t1 | a1;                                               // 0x00154ef8: or $t1, $t1, $a1
    t0 = t0 + 1;                                                // 0x00154efc: addiu $t0, $t0, 1
    a3 = a3 | v0;                                               // 0x00154f00: or $a3, $a3, $v0
    if (t2 == 0) goto label_0x154f28;                           // 0x00154f04: beqz $t2, 0x154f28
    t1 = t1 << t2;                                              // 0x00154f08: sllv $t1, $t1, $t2
    v0 = -t2;                                                   // 0x00154f0c: negu $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x00154f10: srlv $v0, $a3, $v0
    v0 = t1 | v0;                                               // 0x00154f14: or $v0, $t1, $v0
    t1 = a3 << t2;                                              // 0x00154f18: sllv $t1, $a3, $t2
    goto label_0x154f30;                                        // 0x00154f1c: b 0x154f30
    *(uint32_t*)((t3) + 0xd8) = v0;                             // 0x00154f20: sw $v0, 0xd8($t3)
    /* nop */                                                   // 0x00154f24: nop 
label_0x154f28:
    *(uint32_t*)((t3) + 0xd8) = t1;                             // 0x00154f28: sw $t1, 0xd8($t3)
label_0x154f30:
    a3 = *(int8_t*)(t0);                                        // 0x00154f30: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00154f34: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00154f38: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00154f3c: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00154f40: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00154f44: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00154f48: or $a3, $a3, $v0
    v0 = (t2 < 0x16) ? 1 : 0;                                   // 0x00154f4c: slti $v0, $t2, 0x16
    t0 = t0 + 1;                                                // 0x00154f50: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00154f54: sll $a3, $a3, 8
    a0 = *(uint8_t*)(t0);                                       // 0x00154f58: lbu $a0, 0($t0)
    t0 = t0 + 1;                                                // 0x00154f5c: addiu $t0, $t0, 1
    a3 = a3 | v1;                                               // 0x00154f60: or $a3, $a3, $v1
    a3 = a3 << 8;                                               // 0x00154f64: sll $a3, $a3, 8
    if (v0 != 0) goto label_0x154fe0;                           // 0x00154f68: bnez $v0, 0x154fe0
    a3 = a3 | a0;                                               // 0x00154f6c: or $a3, $a3, $a0
    t2 = t2 + -0x16;                                            // 0x00154f70: addiu $t2, $t2, -0x16
    if (t2 == 0) goto label_0x154f98;                           // 0x00154f74: beqz $t2, 0x154f98
    v0 = 0xa;                                                   // 0x00154f78: addiu $v0, $zero, 0xa
    v0 = v0 - t2;                                               // 0x00154f7c: subu $v0, $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x00154f80: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x00154f84: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x16;                                  // 0x00154f88: srl $v1, $t1, 0x16
    t1 = a3 << t2;                                              // 0x00154f8c: sllv $t1, $a3, $t2
    goto label_0x154fa4;                                        // 0x00154f90: b 0x154fa4
    *(uint32_t*)((t3) + 0xdc) = v1;                             // 0x00154f94: sw $v1, 0xdc($t3)
label_0x154f98:
    v0 = (unsigned)t1 >> 0x16;                                  // 0x00154f98: srl $v0, $t1, 0x16
    *(uint32_t*)((t3) + 0xdc) = v0;                             // 0x00154fa0: sw $v0, 0xdc($t3)
label_0x154fa4:
    a3 = *(int8_t*)(t0);                                        // 0x00154fa4: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00154fa8: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00154fac: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00154fb0: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00154fb4: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00154fb8: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00154fbc: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00154fc0: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00154fc4: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00154fc8: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00154fcc: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00154fd0: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00154fd4: sll $a3, $a3, 8
    goto label_0x154ff0;                                        // 0x00154fd8: b 0x154ff0
    a3 = a3 | v0;                                               // 0x00154fdc: or $a3, $a3, $v0
label_0x154fe0:
    v0 = (unsigned)t1 >> 0x16;                                  // 0x00154fe0: srl $v0, $t1, 0x16
    t1 = t1 << 0xa;                                             // 0x00154fe4: sll $t1, $t1, 0xa
    *(uint32_t*)((t3) + 0xdc) = v0;                             // 0x00154fe8: sw $v0, 0xdc($t3)
    t2 = t2 + 0xa;                                              // 0x00154fec: addiu $t2, $t2, 0xa
label_0x154ff0:
    v0 = (t2 < 0x1d) ? 1 : 0;                                   // 0x00154ff0: slti $v0, $t2, 0x1d
    if (v0 != 0) goto label_0x155070;                           // 0x00154ff4: bnez $v0, 0x155070
    v0 = (unsigned)t1 >> 0x1d;                                  // 0x00154ff8: srl $v0, $t1, 0x1d
    t2 = t2 + -0x1d;                                            // 0x00154ffc: addiu $t2, $t2, -0x1d
    if (t2 == 0) goto label_0x155028;                           // 0x00155000: beqz $t2, 0x155028
    v0 = 3;                                                     // 0x00155004: addiu $v0, $zero, 3
    v0 = v0 - t2;                                               // 0x00155008: subu $v0, $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x0015500c: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x00155010: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1d;                                  // 0x00155014: srl $v1, $t1, 0x1d
    t1 = a3 << t2;                                              // 0x00155018: sllv $t1, $a3, $t2
    goto label_0x155034;                                        // 0x0015501c: b 0x155034
    *(uint32_t*)((t3) + 0xe0) = v1;                             // 0x00155020: sw $v1, 0xe0($t3)
    /* nop */                                                   // 0x00155024: nop 
label_0x155028:
    v0 = (unsigned)t1 >> 0x1d;                                  // 0x00155028: srl $v0, $t1, 0x1d
    *(uint32_t*)((t3) + 0xe0) = v0;                             // 0x00155030: sw $v0, 0xe0($t3)
label_0x155034:
    a3 = *(int8_t*)(t0);                                        // 0x00155034: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00155038: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015503c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00155040: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155044: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00155048: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x0015504c: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00155050: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155054: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00155058: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x0015505c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00155060: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155064: sll $a3, $a3, 8
    goto label_0x15507c;                                        // 0x00155068: b 0x15507c
    a3 = a3 | v0;                                               // 0x0015506c: or $a3, $a3, $v0
label_0x155070:
    t1 = t1 << 3;                                               // 0x00155070: sll $t1, $t1, 3
    *(uint32_t*)((t3) + 0xe0) = v0;                             // 0x00155074: sw $v0, 0xe0($t3)
    t2 = t2 + 3;                                                // 0x00155078: addiu $t2, $t2, 3
label_0x15507c:
    v0 = (t2 < 0x10) ? 1 : 0;                                   // 0x0015507c: slti $v0, $t2, 0x10
    if (v0 != 0) goto label_0x1550f8;                           // 0x00155080: bnez $v0, 0x1550f8
    v0 = (unsigned)t1 >> 0x10;                                  // 0x00155084: srl $v0, $t1, 0x10
    t2 = t2 + -0x10;                                            // 0x00155088: addiu $t2, $t2, -0x10
    if (t2 == 0) goto label_0x1550b0;                           // 0x0015508c: beqz $t2, 0x1550b0
    v0 = 0x10;                                                  // 0x00155090: addiu $v0, $zero, 0x10
    v0 = v0 - t2;                                               // 0x00155094: subu $v0, $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x00155098: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x0015509c: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x10;                                  // 0x001550a0: srl $v1, $t1, 0x10
    t1 = a3 << t2;                                              // 0x001550a4: sllv $t1, $a3, $t2
    goto label_0x1550bc;                                        // 0x001550a8: b 0x1550bc
    *(uint32_t*)((t3) + 0xe4) = v1;                             // 0x001550ac: sw $v1, 0xe4($t3)
label_0x1550b0:
    v0 = (unsigned)t1 >> 0x10;                                  // 0x001550b0: srl $v0, $t1, 0x10
    *(uint32_t*)((t3) + 0xe4) = v0;                             // 0x001550b8: sw $v0, 0xe4($t3)
label_0x1550bc:
    a3 = *(int8_t*)(t0);                                        // 0x001550bc: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001550c0: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001550c4: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001550c8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001550cc: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001550d0: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001550d4: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x001550d8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001550dc: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001550e0: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x001550e4: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x001550e8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001550ec: sll $a3, $a3, 8
    goto label_0x155104;                                        // 0x001550f0: b 0x155104
    a3 = a3 | v0;                                               // 0x001550f4: or $a3, $a3, $v0
label_0x1550f8:
    t1 = t1 << 0x10;                                            // 0x001550f8: sll $t1, $t1, 0x10
    *(uint32_t*)((t3) + 0xe4) = v0;                             // 0x001550fc: sw $v0, 0xe4($t3)
    t2 = t2 + 0x10;                                             // 0x00155100: addiu $t2, $t2, 0x10
label_0x155104:
    a2 = *(int32_t*)((t3) + 0xe0);                              // 0x00155104: lw $a2, 0xe0($t3)
    v0 = a2 + -2;                                               // 0x00155108: addiu $v0, $a2, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0015510c: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x155230;                           // 0x00155110: beqz $v0, 0x155230
    v0 = 3;                                                     // 0x00155114: addiu $v0, $zero, 3
    v0 = (t2 < 0x1f) ? 1 : 0;                                   // 0x00155118: slti $v0, $t2, 0x1f
    if (v0 != 0) goto label_0x155198;                           // 0x0015511c: bnez $v0, 0x155198
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00155120: srl $v0, $t1, 0x1f
    t2 = t2 + -0x1f;                                            // 0x00155124: addiu $t2, $t2, -0x1f
    if (t2 == 0) goto label_0x155150;                           // 0x00155128: beqz $t2, 0x155150
    v0 = 1;                                                     // 0x0015512c: addiu $v0, $zero, 1
    v0 = v0 - t2;                                               // 0x00155130: subu $v0, $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x00155134: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x00155138: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1f;                                  // 0x0015513c: srl $v1, $t1, 0x1f
    t1 = a3 << t2;                                              // 0x00155140: sllv $t1, $a3, $t2
    goto label_0x15515c;                                        // 0x00155144: b 0x15515c
    *(uint32_t*)((t3) + 0xe8) = v1;                             // 0x00155148: sw $v1, 0xe8($t3)
    /* nop */                                                   // 0x0015514c: nop 
label_0x155150:
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00155150: srl $v0, $t1, 0x1f
    *(uint32_t*)((t3) + 0xe8) = v0;                             // 0x00155158: sw $v0, 0xe8($t3)
label_0x15515c:
    a3 = *(int8_t*)(t0);                                        // 0x0015515c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00155160: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00155164: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00155168: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015516c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00155170: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00155174: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00155178: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015517c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00155180: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00155184: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00155188: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015518c: sll $a3, $a3, 8
    goto label_0x1551a4;                                        // 0x00155190: b 0x1551a4
    a3 = a3 | v0;                                               // 0x00155194: or $a3, $a3, $v0
label_0x155198:
    t1 = t1 << 1;                                               // 0x00155198: sll $t1, $t1, 1
    *(uint32_t*)((t3) + 0xe8) = v0;                             // 0x0015519c: sw $v0, 0xe8($t3)
    t2 = t2 + 1;                                                // 0x001551a0: addiu $t2, $t2, 1
label_0x1551a4:
    v0 = (t2 < 0x1d) ? 1 : 0;                                   // 0x001551a4: slti $v0, $t2, 0x1d
    if (v0 != 0) goto label_0x155220;                           // 0x001551a8: bnez $v0, 0x155220
    v0 = (unsigned)t1 >> 0x1d;                                  // 0x001551ac: srl $v0, $t1, 0x1d
    t2 = t2 + -0x1d;                                            // 0x001551b0: addiu $t2, $t2, -0x1d
    if (t2 == 0) goto label_0x1551d8;                           // 0x001551b4: beqz $t2, 0x1551d8
    v0 = 3;                                                     // 0x001551b8: addiu $v0, $zero, 3
    v0 = v0 - t2;                                               // 0x001551bc: subu $v0, $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x001551c0: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x001551c4: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1d;                                  // 0x001551c8: srl $v1, $t1, 0x1d
    t1 = a3 << t2;                                              // 0x001551cc: sllv $t1, $a3, $t2
    goto label_0x1551e4;                                        // 0x001551d0: b 0x1551e4
    *(uint32_t*)((t3) + 0xec) = v1;                             // 0x001551d4: sw $v1, 0xec($t3)
label_0x1551d8:
    v0 = (unsigned)t1 >> 0x1d;                                  // 0x001551d8: srl $v0, $t1, 0x1d
    *(uint32_t*)((t3) + 0xec) = v0;                             // 0x001551e0: sw $v0, 0xec($t3)
label_0x1551e4:
    a3 = *(int8_t*)(t0);                                        // 0x001551e4: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x001551e8: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x001551ec: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001551f0: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001551f4: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001551f8: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001551fc: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00155200: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155204: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00155208: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x0015520c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00155210: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155214: sll $a3, $a3, 8
    goto label_0x15522c;                                        // 0x00155218: b 0x15522c
    a3 = a3 | v0;                                               // 0x0015521c: or $a3, $a3, $v0
label_0x155220:
    t1 = t1 << 3;                                               // 0x00155220: sll $t1, $t1, 3
    *(uint32_t*)((t3) + 0xec) = v0;                             // 0x00155224: sw $v0, 0xec($t3)
    t2 = t2 + 3;                                                // 0x00155228: addiu $t2, $t2, 3
label_0x15522c:
    v0 = 3;                                                     // 0x0015522c: addiu $v0, $zero, 3
label_0x155230:
    if (a2 != v0) goto label_0x155350;                          // 0x00155230: bne $a2, $v0, 0x155350
    a0 = 1;                                                     // 0x00155234: addiu $a0, $zero, 1
    v0 = (t2 < 0x1f) ? 1 : 0;                                   // 0x00155238: slti $v0, $t2, 0x1f
    if (v0 != 0) goto label_0x1552b8;                           // 0x0015523c: bnez $v0, 0x1552b8
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00155240: srl $v0, $t1, 0x1f
    t2 = t2 + -0x1f;                                            // 0x00155244: addiu $t2, $t2, -0x1f
    if (t2 == 0) goto label_0x155270;                           // 0x00155248: beqz $t2, 0x155270
    v0 = 1;                                                     // 0x0015524c: addiu $v0, $zero, 1
    v0 = v0 - t2;                                               // 0x00155250: subu $v0, $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x00155254: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x00155258: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1f;                                  // 0x0015525c: srl $v1, $t1, 0x1f
    t1 = a3 << t2;                                              // 0x00155260: sllv $t1, $a3, $t2
    goto label_0x15527c;                                        // 0x00155264: b 0x15527c
    *(uint32_t*)((t3) + 0xf0) = v1;                             // 0x00155268: sw $v1, 0xf0($t3)
    /* nop */                                                   // 0x0015526c: nop 
label_0x155270:
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00155270: srl $v0, $t1, 0x1f
    *(uint32_t*)((t3) + 0xf0) = v0;                             // 0x00155278: sw $v0, 0xf0($t3)
label_0x15527c:
    a3 = *(int8_t*)(t0);                                        // 0x0015527c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00155280: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00155284: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00155288: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015528c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00155290: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00155294: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00155298: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015529c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001552a0: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x001552a4: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x001552a8: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001552ac: sll $a3, $a3, 8
    goto label_0x1552c4;                                        // 0x001552b0: b 0x1552c4
    a3 = a3 | v0;                                               // 0x001552b4: or $a3, $a3, $v0
label_0x1552b8:
    t1 = t1 << 1;                                               // 0x001552b8: sll $t1, $t1, 1
    *(uint32_t*)((t3) + 0xf0) = v0;                             // 0x001552bc: sw $v0, 0xf0($t3)
    t2 = t2 + 1;                                                // 0x001552c0: addiu $t2, $t2, 1
label_0x1552c4:
    v0 = (t2 < 0x1d) ? 1 : 0;                                   // 0x001552c4: slti $v0, $t2, 0x1d
    if (v0 != 0) goto label_0x155340;                           // 0x001552c8: bnez $v0, 0x155340
    v0 = (unsigned)t1 >> 0x1d;                                  // 0x001552cc: srl $v0, $t1, 0x1d
    t2 = t2 + -0x1d;                                            // 0x001552d0: addiu $t2, $t2, -0x1d
    if (t2 == 0) goto label_0x1552f8;                           // 0x001552d4: beqz $t2, 0x1552f8
    v0 = 3;                                                     // 0x001552d8: addiu $v0, $zero, 3
    v0 = v0 - t2;                                               // 0x001552dc: subu $v0, $v0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x001552e0: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x001552e4: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1d;                                  // 0x001552e8: srl $v1, $t1, 0x1d
    t1 = a3 << t2;                                              // 0x001552ec: sllv $t1, $a3, $t2
    goto label_0x155304;                                        // 0x001552f0: b 0x155304
    *(uint32_t*)((t3) + 0xf4) = v1;                             // 0x001552f4: sw $v1, 0xf4($t3)
label_0x1552f8:
    v0 = (unsigned)t1 >> 0x1d;                                  // 0x001552f8: srl $v0, $t1, 0x1d
    *(uint32_t*)((t3) + 0xf4) = v0;                             // 0x00155300: sw $v0, 0xf4($t3)
label_0x155304:
    a3 = *(int8_t*)(t0);                                        // 0x00155304: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00155308: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015530c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00155310: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155314: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00155318: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x0015531c: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00155320: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155324: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00155328: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x0015532c: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00155330: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x00155334: sll $a3, $a3, 8
    goto label_0x15534c;                                        // 0x00155338: b 0x15534c
    a3 = a3 | v0;                                               // 0x0015533c: or $a3, $a3, $v0
label_0x155340:
    t1 = t1 << 3;                                               // 0x00155340: sll $t1, $t1, 3
    *(uint32_t*)((t3) + 0xf4) = v0;                             // 0x00155344: sw $v0, 0xf4($t3)
    t2 = t2 + 3;                                                // 0x00155348: addiu $t2, $t2, 3
label_0x15534c:
    a0 = 1;                                                     // 0x0015534c: addiu $a0, $zero, 1
label_0x155350:
    goto label_0x1553dc;                                        // 0x00155350: b 0x1553dc
    a1 = 8;                                                     // 0x00155354: addiu $a1, $zero, 8
    if (v0 != 0) goto label_0x1553d0;                           // 0x00155358: bnez $v0, 0x1553d0
    v0 = (unsigned)t1 >> 0x18;                                  // 0x0015535c: srl $v0, $t1, 0x18
    t2 = t2 + -0x18;                                            // 0x00155360: addiu $t2, $t2, -0x18
    if (t2 == 0) goto label_0x155388;                           // 0x00155364: beqz $t2, 0x155388
    v0 = a1 - t2;                                               // 0x00155368: subu $v0, $a1, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x0015536c: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x00155370: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x18;                                  // 0x00155374: srl $v1, $t1, 0x18
    t1 = a3 << t2;                                              // 0x00155378: sllv $t1, $a3, $t2
    goto label_0x155394;                                        // 0x0015537c: b 0x155394
    *(uint32_t*)((t3) + 0xfc) = v1;                             // 0x00155380: sw $v1, 0xfc($t3)
    /* nop */                                                   // 0x00155384: nop 
label_0x155388:
    v0 = (unsigned)t1 >> 0x18;                                  // 0x00155388: srl $v0, $t1, 0x18
    *(uint32_t*)((t3) + 0xfc) = v0;                             // 0x00155390: sw $v0, 0xfc($t3)
label_0x155394:
    a3 = *(int8_t*)(t0);                                        // 0x00155394: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00155398: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015539c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x001553a0: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001553a4: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x001553a8: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x001553ac: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x001553b0: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001553b4: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x001553b8: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x001553bc: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x001553c0: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x001553c4: sll $a3, $a3, 8
    goto label_0x1553dc;                                        // 0x001553c8: b 0x1553dc
    a3 = a3 | v0;                                               // 0x001553cc: or $a3, $a3, $v0
label_0x1553d0:
    t1 = t1 << 8;                                               // 0x001553d0: sll $t1, $t1, 8
    *(uint32_t*)((t3) + 0xfc) = v0;                             // 0x001553d4: sw $v0, 0xfc($t3)
    t2 = t2 + 8;                                                // 0x001553d8: addiu $t2, $t2, 8
label_0x1553dc:
    v0 = (t2 < 0x1f) ? 1 : 0;                                   // 0x001553dc: slti $v0, $t2, 0x1f
    if (v0 != 0) goto label_0x155458;                           // 0x001553e0: bnez $v0, 0x155458
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x001553e4: srl $v0, $t1, 0x1f
    t2 = t2 + -0x1f;                                            // 0x001553e8: addiu $t2, $t2, -0x1f
    if (t2 == 0) goto label_0x155410;                           // 0x001553ec: beqz $t2, 0x155410
    v0 = a0 - t2;                                               // 0x001553f0: subu $v0, $a0, $t2
    v0 = (unsigned)a3 >> v0;                                    // 0x001553f4: srlv $v0, $a3, $v0
    t1 = t1 | v0;                                               // 0x001553f8: or $t1, $t1, $v0
    v1 = (unsigned)t1 >> 0x1f;                                  // 0x001553fc: srl $v1, $t1, 0x1f
    t1 = a3 << t2;                                              // 0x00155400: sllv $t1, $a3, $t2
    goto label_0x15541c;                                        // 0x00155404: b 0x15541c
    *(uint32_t*)((t3) + 0xf8) = v1;                             // 0x00155408: sw $v1, 0xf8($t3)
    /* nop */                                                   // 0x0015540c: nop 
label_0x155410:
    v0 = (unsigned)t1 >> 0x1f;                                  // 0x00155410: srl $v0, $t1, 0x1f
    *(uint32_t*)((t3) + 0xf8) = v0;                             // 0x00155418: sw $v0, 0xf8($t3)
label_0x15541c:
    a3 = *(int8_t*)(t0);                                        // 0x0015541c: lb $a3, 0($t0)
    t0 = t0 + 1;                                                // 0x00155420: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00155424: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00155428: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015542c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00155430: lbu $v1, 0($t0)
    a3 = a3 | v0;                                               // 0x00155434: or $a3, $a3, $v0
    t0 = t0 + 1;                                                // 0x00155438: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015543c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00155440: lbu $v0, 0($t0)
    a3 = a3 | v1;                                               // 0x00155444: or $a3, $a3, $v1
    t0 = t0 + 1;                                                // 0x00155448: addiu $t0, $t0, 1
    a3 = a3 << 8;                                               // 0x0015544c: sll $a3, $a3, 8
    goto label_0x155464;                                        // 0x00155450: b 0x155464
    a3 = a3 | v0;                                               // 0x00155454: or $a3, $a3, $v0
label_0x155458:
    t1 = t1 << 1;                                               // 0x00155458: sll $t1, $t1, 1
    *(uint32_t*)((t3) + 0xf8) = v0;                             // 0x0015545c: sw $v0, 0xf8($t3)
    t2 = t2 + 1;                                                // 0x00155460: addiu $t2, $t2, 1
label_0x155464:
    v0 = *(int32_t*)((t3) + 0xf8);                              // 0x00155464: lw $v0, 0xf8($t3)
    /* bnezl $v0, 0x155358 */                                   // 0x00155468: bnezl $v0, 0x155358
    v0 = (t2 < 0x18) ? 1 : 0;                                   // 0x0015546c: slti $v0, $t2, 0x18
    v1 = t0 - t4;                                               // 0x00155470: subu $v1, $t0, $t4
    a2 = a2 << 2;                                               // 0x00155474: sll $a2, $a2, 2
    v1 = v1 << 3;                                               // 0x00155478: sll $v1, $v1, 3
    a2 = a2 + t3;                                               // 0x0015547c: addu $a2, $a2, $t3
    v1 = t2 + v1;                                               // 0x00155480: addu $v1, $t2, $v1
    a2 = a2 + 0x4fc;                                            // 0x00155484: addiu $a2, $a2, 0x4fc
    v0 = v1 + -0x39;                                            // 0x00155488: addiu $v0, $v1, -0x39
    v1 = v1 + -0x32;                                            // 0x0015548c: addiu $v1, $v1, -0x32
    a1 = *(int32_t*)(a2);                                       // 0x00155490: lw $a1, 0($a2)
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x00155494: slti $a0, $v0, 0
    if (a0 != 0) v0 = v1;                                       // 0x00155498: movn $v0, $v1, $a0
    v1 = 8;                                                     // 0x0015549c: addiu $v1, $zero, 8
    a3 = 0x10;                                                  // 0x001554a0: addiu $a3, $zero, 0x10
    a1 = a1 + 1;                                                // 0x001554a4: addiu $a1, $a1, 1
    v0 = v0 >> 3;                                               // 0x001554a8: sra $v0, $v0, 3
    *(uint32_t*)(a2) = a1;                                      // 0x001554ac: sw $a1, 0($a2)
    v0 = t4 + v0;                                               // 0x001554b0: addu $v0, $t4, $v0
    *(uint32_t*)((t3) + 0x32c) = v1;                            // 0x001554b4: sw $v1, 0x32c($t3)
    return;                                                     // 0x001554b8: jr $ra
    *(uint32_t*)((t3) + 0x328) = a3;                            // 0x001554bc: sw $a3, 0x328($t3)
}