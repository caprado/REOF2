void func_00159f30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00159f30: addiu $sp, $sp, -0x30
    v0 = 3;                                                     // 0x00159f34: addiu $v0, $zero, 3
    s2 = s0 + 0x348;                                            // 0x00159f4c: addiu $s2, $s0, 0x348
    a2 = 0x7fff << 16;                                          // 0x00159f54: lui $a2, 0x7fff
    *(uint32_t*)((s0) + 0x384) = v0;                            // 0x00159f58: sw $v0, 0x384($s0)
    a1 = 1;                                                     // 0x00159f5c: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s1);                                       // 0x00159f60: lw $v1, 0($s1)
    a2 = a2 | 0xffff;                                           // 0x00159f68: ori $a2, $a2, 0xffff
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00159f6c: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00159f70: jalr $v0
    v1 = *(int32_t*)(s2);                                       // 0x00159f78: lw $v1, 0($s2)
    v0 = -4;                                                    // 0x00159f7c: addiu $v0, $zero, -4
    t1 = s0 + 0x1d0;                                            // 0x00159f80: addiu $t1, $s0, 0x1d0
    t0 = v1 & v0;                                               // 0x00159f84: and $t0, $v1, $v0
    v1 = v1 - t0;                                               // 0x00159f88: subu $v1, $v1, $t0
    t0 = t0 + 4;                                                // 0x00159f8c: addiu $t0, $t0, 4
    a2 = *(int8_t*)(t0);                                        // 0x00159f90: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x00159f94: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00159f98: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00159f9c: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x00159fa0: sll $a2, $a2, 8
    a0 = *(uint8_t*)(t0);                                       // 0x00159fa4: lbu $a0, 0($t0)
    a2 = a2 | v0;                                               // 0x00159fa8: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x00159fac: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x00159fb0: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00159fb4: lbu $v0, 0($t0)
    a1 = v1 << 3;                                               // 0x00159fb8: sll $a1, $v1, 3
    a2 = a2 | a0;                                               // 0x00159fbc: or $a2, $a2, $a0
    a2 = a2 << 8;                                               // 0x00159fc0: sll $a2, $a2, 8
    v1 = (a1 < 0x20) ? 1 : 0;                                   // 0x00159fc4: slti $v1, $a1, 0x20
    a2 = a2 | v0;                                               // 0x00159fc8: or $a2, $a2, $v0
    if (v1 != 0) goto label_0x15a010;                           // 0x00159fcc: bnez $v1, 0x15a010
    t0 = t0 + 1;                                                // 0x00159fd0: addiu $t0, $t0, 1
    a2 = *(int8_t*)(t0);                                        // 0x00159fd4: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x00159fd8: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x00159fdc: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x00159fe0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x00159fe4: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x00159fe8: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x00159fec: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x00159ff0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x00159ff4: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x00159ff8: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x00159ffc: or $a2, $a2, $v1
    a1 = a1 + -0x20;                                            // 0x0015a000: addiu $a1, $a1, -0x20
    a2 = a2 << 8;                                               // 0x0015a004: sll $a2, $a2, 8
    t0 = t0 + 1;                                                // 0x0015a008: addiu $t0, $t0, 1
    a2 = a2 | v0;                                               // 0x0015a00c: or $a2, $a2, $v0
label_0x15a010:
    v1 = a2 << a1;                                              // 0x0015a010: sllv $v1, $a2, $a1
    v0 = a1 ^ 0;                                                // 0x0015a014: xori $v0, $a1, 0
    a2 = *(int8_t*)(t0);                                        // 0x0015a01c: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a020: addiu $t0, $t0, 1
    if (v0 != 0) a3 = v1;                                       // 0x0015a024: movn $a3, $v1, $v0
    v0 = *(uint8_t*)(t0);                                       // 0x0015a028: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a02c: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a030: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a034: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a038: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a03c: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a040: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a044: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a048: or $a2, $a2, $v1
    a0 = (a1 < 0x16) ? 1 : 0;                                   // 0x0015a04c: slti $a0, $a1, 0x16
    a2 = a2 << 8;                                               // 0x0015a050: sll $a2, $a2, 8
    t0 = t0 + 1;                                                // 0x0015a054: addiu $t0, $t0, 1
    if (a0 != 0) goto label_0x15a0d0;                           // 0x0015a058: bnez $a0, 0x15a0d0
    a2 = a2 | v0;                                               // 0x0015a05c: or $a2, $a2, $v0
    a1 = a1 + -0x16;                                            // 0x0015a060: addiu $a1, $a1, -0x16
    if (a1 == 0) goto label_0x15a088;                           // 0x0015a064: beqz $a1, 0x15a088
    v0 = 0xa;                                                   // 0x0015a068: addiu $v0, $zero, 0xa
    v0 = v0 - a1;                                               // 0x0015a06c: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x0015a070: srlv $v0, $a2, $v0
    a3 = a3 | v0;                                               // 0x0015a074: or $a3, $a3, $v0
    v1 = (unsigned)a3 >> 0x16;                                  // 0x0015a078: srl $v1, $a3, 0x16
    a3 = a2 << a1;                                              // 0x0015a07c: sllv $a3, $a2, $a1
    goto label_0x15a094;                                        // 0x0015a080: b 0x15a094
    *(uint32_t*)((t1) + 0x14) = v1;                             // 0x0015a084: sw $v1, 0x14($t1)
label_0x15a088:
    v0 = (unsigned)a3 >> 0x16;                                  // 0x0015a088: srl $v0, $a3, 0x16
    *(uint32_t*)((t1) + 0x14) = v0;                             // 0x0015a090: sw $v0, 0x14($t1)
label_0x15a094:
    a2 = *(int8_t*)(t0);                                        // 0x0015a094: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a098: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a09c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a0a0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a0a4: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a0a8: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a0ac: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a0b0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a0b4: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a0b8: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a0bc: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a0c0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a0c4: sll $a2, $a2, 8
    goto label_0x15a0e0;                                        // 0x0015a0c8: b 0x15a0e0
    a2 = a2 | v0;                                               // 0x0015a0cc: or $a2, $a2, $v0
label_0x15a0d0:
    v0 = (unsigned)a3 >> 0x16;                                  // 0x0015a0d0: srl $v0, $a3, 0x16
    a3 = a3 << 0xa;                                             // 0x0015a0d4: sll $a3, $a3, 0xa
    *(uint32_t*)((t1) + 0x14) = v0;                             // 0x0015a0d8: sw $v0, 0x14($t1)
    a1 = a1 + 0xa;                                              // 0x0015a0dc: addiu $a1, $a1, 0xa
label_0x15a0e0:
    v0 = (a1 < 0x1d) ? 1 : 0;                                   // 0x0015a0e0: slti $v0, $a1, 0x1d
    if (v0 != 0) goto label_0x15a150;                           // 0x0015a0e4: bnez $v0, 0x15a150
    a0 = (unsigned)a3 >> 0x1d;                                  // 0x0015a0e8: srl $a0, $a3, 0x1d
    a1 = a1 + -0x1d;                                            // 0x0015a0ec: addiu $a1, $a1, -0x1d
    if (a1 == 0) goto label_0x15a110;                           // 0x0015a0f0: beqz $a1, 0x15a110
    v0 = 3;                                                     // 0x0015a0f4: addiu $v0, $zero, 3
    v0 = v0 - a1;                                               // 0x0015a0f8: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x0015a0fc: srlv $v0, $a2, $v0
    a3 = a3 | v0;                                               // 0x0015a100: or $a3, $a3, $v0
    a0 = (unsigned)a3 >> 0x1d;                                  // 0x0015a104: srl $a0, $a3, 0x1d
    goto label_0x15a114;                                        // 0x0015a108: b 0x15a114
    a3 = a2 << a1;                                              // 0x0015a10c: sllv $a3, $a2, $a1
label_0x15a110:
label_0x15a114:
    a2 = *(int8_t*)(t0);                                        // 0x0015a114: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a118: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a11c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a120: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a124: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a128: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a12c: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a130: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a134: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a138: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a13c: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a140: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a144: sll $a2, $a2, 8
    goto label_0x15a158;                                        // 0x0015a148: b 0x15a158
    a2 = a2 | v0;                                               // 0x0015a14c: or $a2, $a2, $v0
label_0x15a150:
    a3 = a3 << 3;                                               // 0x0015a150: sll $a3, $a3, 3
    a1 = a1 + 3;                                                // 0x0015a154: addiu $a1, $a1, 3
label_0x15a158:
    v0 = (a1 < 0x10) ? 1 : 0;                                   // 0x0015a158: slti $v0, $a1, 0x10
    if (v0 != 0) goto label_0x15a1d8;                           // 0x0015a15c: bnez $v0, 0x15a1d8
    *(uint32_t*)((t1) + 0x18) = a0;                             // 0x0015a160: sw $a0, 0x18($t1)
    a1 = a1 + -0x10;                                            // 0x0015a164: addiu $a1, $a1, -0x10
    if (a1 == 0) goto label_0x15a190;                           // 0x0015a168: beqz $a1, 0x15a190
    v0 = 0x10;                                                  // 0x0015a16c: addiu $v0, $zero, 0x10
    v0 = v0 - a1;                                               // 0x0015a170: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x0015a174: srlv $v0, $a2, $v0
    a3 = a3 | v0;                                               // 0x0015a178: or $a3, $a3, $v0
    v1 = (unsigned)a3 >> 0x10;                                  // 0x0015a17c: srl $v1, $a3, 0x10
    a3 = a2 << a1;                                              // 0x0015a180: sllv $a3, $a2, $a1
    goto label_0x15a19c;                                        // 0x0015a184: b 0x15a19c
    *(uint32_t*)((s0) + 0x290) = v1;                            // 0x0015a188: sw $v1, 0x290($s0)
    /* nop */                                                   // 0x0015a18c: nop 
label_0x15a190:
    v0 = (unsigned)a3 >> 0x10;                                  // 0x0015a190: srl $v0, $a3, 0x10
    *(uint32_t*)((s0) + 0x290) = v0;                            // 0x0015a198: sw $v0, 0x290($s0)
label_0x15a19c:
    a2 = *(int8_t*)(t0);                                        // 0x0015a19c: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a1a0: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a1a4: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a1a8: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a1ac: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a1b0: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a1b4: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a1b8: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a1bc: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a1c0: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a1c4: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a1c8: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a1cc: sll $a2, $a2, 8
    goto label_0x15a1e8;                                        // 0x0015a1d0: b 0x15a1e8
    a2 = a2 | v0;                                               // 0x0015a1d4: or $a2, $a2, $v0
label_0x15a1d8:
    v0 = (unsigned)a3 >> 0x10;                                  // 0x0015a1d8: srl $v0, $a3, 0x10
    a3 = a3 << 0x10;                                            // 0x0015a1dc: sll $a3, $a3, 0x10
    *(uint32_t*)((s0) + 0x290) = v0;                            // 0x0015a1e0: sw $v0, 0x290($s0)
    a1 = a1 + 0x10;                                             // 0x0015a1e4: addiu $a1, $a1, 0x10
label_0x15a1e8:
    t2 = *(int32_t*)((t1) + 0x18);                              // 0x0015a1e8: lw $t2, 0x18($t1)
    v0 = t2 + -2;                                               // 0x0015a1ec: addiu $v0, $t2, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0015a1f0: sltiu $v0, $v0, 2
    if (v0 == 0) goto label_0x15a2fc;                           // 0x0015a1f4: beqz $v0, 0x15a2fc
    v0 = 3;                                                     // 0x0015a1f8: addiu $v0, $zero, 3
    t1 = s0 + 0x2c4;                                            // 0x0015a1fc: addiu $t1, $s0, 0x2c4
    v0 = (unsigned)a3 >> 0x1f;                                  // 0x0015a200: srl $v0, $a3, 0x1f
    v1 = 0x1f;                                                  // 0x0015a204: addiu $v1, $zero, 0x1f
    if (a1 != v1) goto label_0x15a258;                          // 0x0015a208: bne $a1, $v1, 0x15a258
    *(uint32_t*)(t1) = v0;                                      // 0x0015a20c: sw $v0, 0($t1)
    a2 = *(int8_t*)(t0);                                        // 0x0015a214: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a218: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a220: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a224: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a228: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a22c: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a230: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a234: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a238: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a23c: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a240: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a244: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a248: sll $a2, $a2, 8
    goto label_0x15a260;                                        // 0x0015a24c: b 0x15a260
    a2 = a2 | v0;                                               // 0x0015a250: or $a2, $a2, $v0
    /* nop */                                                   // 0x0015a254: nop 
label_0x15a258:
    a1 = a1 + 1;                                                // 0x0015a258: addiu $a1, $a1, 1
    a3 = a3 << 1;                                               // 0x0015a25c: sll $a3, $a3, 1
label_0x15a260:
    v0 = (a1 < 0x1d) ? 1 : 0;                                   // 0x0015a260: slti $v0, $a1, 0x1d
    if (v0 != 0) goto label_0x15a2d0;                           // 0x0015a264: bnez $v0, 0x15a2d0
    a0 = (unsigned)a3 >> 0x1d;                                  // 0x0015a268: srl $a0, $a3, 0x1d
    a1 = a1 + -0x1d;                                            // 0x0015a26c: addiu $a1, $a1, -0x1d
    if (a1 == 0) goto label_0x15a290;                           // 0x0015a270: beqz $a1, 0x15a290
    v0 = 3;                                                     // 0x0015a274: addiu $v0, $zero, 3
    v0 = v0 - a1;                                               // 0x0015a278: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x0015a27c: srlv $v0, $a2, $v0
    a3 = a3 | v0;                                               // 0x0015a280: or $a3, $a3, $v0
    a0 = (unsigned)a3 >> 0x1d;                                  // 0x0015a284: srl $a0, $a3, 0x1d
    goto label_0x15a294;                                        // 0x0015a288: b 0x15a294
    a3 = a2 << a1;                                              // 0x0015a28c: sllv $a3, $a2, $a1
label_0x15a290:
label_0x15a294:
    a2 = *(int8_t*)(t0);                                        // 0x0015a294: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a298: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a29c: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a2a0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a2a4: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a2a8: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a2ac: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a2b0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a2b4: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a2b8: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a2bc: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a2c0: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a2c4: sll $a2, $a2, 8
    goto label_0x15a2d8;                                        // 0x0015a2c8: b 0x15a2d8
    a2 = a2 | v0;                                               // 0x0015a2cc: or $a2, $a2, $v0
label_0x15a2d0:
    a3 = a3 << 3;                                               // 0x0015a2d0: sll $a3, $a3, 3
    a1 = a1 + 3;                                                // 0x0015a2d4: addiu $a1, $a1, 3
label_0x15a2d8:
    a0 = a0 + -1;                                               // 0x0015a2d8: addiu $a0, $a0, -1
    v0 = 0x1b;                                                  // 0x0015a2dc: addiu $v0, $zero, 0x1b
    v1 = 1;                                                     // 0x0015a2e0: addiu $v1, $zero, 1
    v0 = v0 - a0;                                               // 0x0015a2e4: subu $v0, $v0, $a0
    v1 = v1 << a0;                                              // 0x0015a2e8: sllv $v1, $v1, $a0
    *(uint32_t*)((t1) + 8) = v0;                                // 0x0015a2ec: sw $v0, 8($t1)
    *(uint32_t*)((t1) + 0xc) = v1;                              // 0x0015a2f0: sw $v1, 0xc($t1)
    *(uint32_t*)((t1) + 4) = a0;                                // 0x0015a2f4: sw $a0, 4($t1)
    v0 = 3;                                                     // 0x0015a2f8: addiu $v0, $zero, 3
label_0x15a2fc:
    if (t2 != v0) goto label_0x15a40c;                          // 0x0015a2fc: bnel $t2, $v0, 0x15a40c
    v0 = *(int32_t*)((s0) + 0x2b4);                             // 0x0015a300: lw $v0, 0x2b4($s0)
    t1 = s0 + 0x2e8;                                            // 0x0015a304: addiu $t1, $s0, 0x2e8
    v0 = (unsigned)a3 >> 0x1f;                                  // 0x0015a308: srl $v0, $a3, 0x1f
    v1 = 0x1f;                                                  // 0x0015a30c: addiu $v1, $zero, 0x1f
    if (a1 != v1) goto label_0x15a360;                          // 0x0015a310: bne $a1, $v1, 0x15a360
    *(uint32_t*)(t1) = v0;                                      // 0x0015a314: sw $v0, 0($t1)
    a2 = *(int8_t*)(t0);                                        // 0x0015a31c: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a320: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a328: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a32c: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a330: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a334: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a338: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a33c: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a340: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a344: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a348: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a34c: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a350: sll $a2, $a2, 8
    goto label_0x15a368;                                        // 0x0015a354: b 0x15a368
    a2 = a2 | v0;                                               // 0x0015a358: or $a2, $a2, $v0
    /* nop */                                                   // 0x0015a35c: nop 
label_0x15a360:
    a1 = a1 + 1;                                                // 0x0015a360: addiu $a1, $a1, 1
    a3 = a3 << 1;                                               // 0x0015a364: sll $a3, $a3, 1
label_0x15a368:
    v0 = (a1 < 0x1d) ? 1 : 0;                                   // 0x0015a368: slti $v0, $a1, 0x1d
    if (v0 != 0) goto label_0x15a3e0;                           // 0x0015a36c: bnez $v0, 0x15a3e0
    a0 = (unsigned)a3 >> 0x1d;                                  // 0x0015a370: srl $a0, $a3, 0x1d
    a1 = a1 + -0x1d;                                            // 0x0015a374: addiu $a1, $a1, -0x1d
    if (a1 == 0) goto label_0x15a398;                           // 0x0015a378: beqz $a1, 0x15a398
    v0 = 3;                                                     // 0x0015a37c: addiu $v0, $zero, 3
    v0 = v0 - a1;                                               // 0x0015a380: subu $v0, $v0, $a1
    v0 = (unsigned)a2 >> v0;                                    // 0x0015a384: srlv $v0, $a2, $v0
    a3 = a3 | v0;                                               // 0x0015a388: or $a3, $a3, $v0
    a0 = (unsigned)a3 >> 0x1d;                                  // 0x0015a38c: srl $a0, $a3, 0x1d
    goto label_0x15a39c;                                        // 0x0015a390: b 0x15a39c
    a3 = a2 << a1;                                              // 0x0015a394: sllv $a3, $a2, $a1
label_0x15a398:
label_0x15a39c:
    a2 = *(int8_t*)(t0);                                        // 0x0015a39c: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a3a0: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a3a4: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a3a8: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a3ac: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a3b0: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a3b4: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a3b8: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a3bc: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a3c0: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a3c4: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a3c8: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a3cc: sll $a2, $a2, 8
    goto label_0x15a3e8;                                        // 0x0015a3d0: b 0x15a3e8
    a2 = a2 | v0;                                               // 0x0015a3d4: or $a2, $a2, $v0
    goto label_0x15a4a0;                                        // 0x0015a3d8: b 0x15a4a0
    t0 = t0 + 4;                                                // 0x0015a3dc: addiu $t0, $t0, 4
label_0x15a3e0:
    a3 = a3 << 3;                                               // 0x0015a3e0: sll $a3, $a3, 3
    a1 = a1 + 3;                                                // 0x0015a3e4: addiu $a1, $a1, 3
label_0x15a3e8:
    a0 = a0 + -1;                                               // 0x0015a3e8: addiu $a0, $a0, -1
    v0 = 0x1b;                                                  // 0x0015a3ec: addiu $v0, $zero, 0x1b
    v1 = 1;                                                     // 0x0015a3f0: addiu $v1, $zero, 1
    v0 = v0 - a0;                                               // 0x0015a3f4: subu $v0, $v0, $a0
    v1 = v1 << a0;                                              // 0x0015a3f8: sllv $v1, $v1, $a0
    *(uint32_t*)((t1) + 8) = v0;                                // 0x0015a3fc: sw $v0, 8($t1)
    *(uint32_t*)((t1) + 0xc) = v1;                              // 0x0015a400: sw $v1, 0xc($t1)
    *(uint32_t*)((t1) + 4) = a0;                                // 0x0015a404: sw $a0, 4($t1)
    v0 = *(int32_t*)((s0) + 0x2b4);                             // 0x0015a408: lw $v0, 0x2b4($s0)
label_0x15a40c:
    *(uint32_t*)((s0) + 0x2ac) = v0;                            // 0x0015a40c: sw $v0, 0x2ac($s0)
    goto label_0x15a488;                                        // 0x0015a410: b 0x15a488
    t1 = *(int32_t*)((s0) + 0x348);                             // 0x0015a414: lw $t1, 0x348($s0)
label_0x15a418:
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x0015a418: slti $v0, $a1, 0x20
    /* bnezl $v0, 0x15a464 */                                   // 0x0015a41c: bnezl $v0, 0x15a464
    a3 = a3 << 9;                                               // 0x0015a420: sll $a3, $a3, 9
    a1 = a1 + -0x20;                                            // 0x0015a424: addiu $a1, $a1, -0x20
    a3 = a2 << a1;                                              // 0x0015a428: sllv $a3, $a2, $a1
    a2 = *(int8_t*)(t0);                                        // 0x0015a42c: lb $a2, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a430: addiu $t0, $t0, 1
    v0 = *(uint8_t*)(t0);                                       // 0x0015a434: lbu $v0, 0($t0)
    t0 = t0 + 1;                                                // 0x0015a438: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a43c: sll $a2, $a2, 8
    v1 = *(uint8_t*)(t0);                                       // 0x0015a440: lbu $v1, 0($t0)
    a2 = a2 | v0;                                               // 0x0015a444: or $a2, $a2, $v0
    t0 = t0 + 1;                                                // 0x0015a448: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a44c: sll $a2, $a2, 8
    v0 = *(uint8_t*)(t0);                                       // 0x0015a450: lbu $v0, 0($t0)
    a2 = a2 | v1;                                               // 0x0015a454: or $a2, $a2, $v1
    t0 = t0 + 1;                                                // 0x0015a458: addiu $t0, $t0, 1
    a2 = a2 << 8;                                               // 0x0015a45c: sll $a2, $a2, 8
    a2 = a2 | v0;                                               // 0x0015a460: or $a2, $a2, $v0
    v1 = a1 + 7;                                                // 0x0015a464: addiu $v1, $a1, 7
    a0 = *(int32_t*)((s0) + 0x34c);                             // 0x0015a468: lw $a0, 0x34c($s0)
    v1 = v1 >> 3;                                               // 0x0015a46c: sra $v1, $v1, 3
    v1 = t0 + v1;                                               // 0x0015a470: addu $v1, $t0, $v1
    v1 = v1 + -8;                                               // 0x0015a474: addiu $v1, $v1, -8
    v1 = v1 - t1;                                               // 0x0015a478: subu $v1, $v1, $t1
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x0015a47c: slt $v1, $v1, $a0
    if (v1 == 0) goto label_0x15a504;                           // 0x0015a480: beqz $v1, 0x15a504
    v0 = -3;                                                    // 0x0015a484: addiu $v0, $zero, -3
label_0x15a488:
    if (a3 < 0) goto label_0x15a418;                            // 0x0015a488: bltzl $a3, 0x15a418
    a1 = a1 + 9;                                                // 0x0015a48c: addiu $a1, $a1, 9
    a1 = a1 + 1;                                                // 0x0015a490: addiu $a1, $a1, 1
    v0 = (a1 < 0x20) ? 1 : 0;                                   // 0x0015a494: slti $v0, $a1, 0x20
    /* beqzl $v0, 0x15a3d8 */                                   // 0x0015a498: beqzl $v0, 0x15a3d8
    a1 = a1 + -0x20;                                            // 0x0015a49c: addiu $a1, $a1, -0x20
label_0x15a4a0:
    v0 = a1 & 7;                                                // 0x0015a4a0: andi $v0, $a1, 7
    a1 = a1 - v0;                                               // 0x0015a4a8: subu $a1, $a1, $v0
    *(uint32_t*)((s0) + 0x350) = v0;                            // 0x0015a4ac: sw $v0, 0x350($s0)
    a1 = a1 + 7;                                                // 0x0015a4b0: addiu $a1, $a1, 7
    a1 = a1 >> 3;                                               // 0x0015a4b8: sra $a1, $a1, 3
    a1 = t0 + a1;                                               // 0x0015a4c0: addu $a1, $t0, $a1
    a1 = a1 + -8;                                               // 0x0015a4c4: addiu $a1, $a1, -8
    func_001404a0();  // 1404a0                                // 0x0015a4c8: jal 0x1404a0
    a1 = a1 - t1;                                               // 0x0015a4cc: subu $a1, $a1, $t1
    v1 = *(int32_t*)(s1);                                       // 0x0015a4d0: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0015a4dc: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0015a4e0: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x0015a4e8: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0015a4f0: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0015a4f4: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0015a4f8: jalr $v0
label_0x15a504:
    return;                                                     // 0x0015a514: jr $ra
    sp = sp + 0x30;                                             // 0x0015a518: addiu $sp, $sp, 0x30
}