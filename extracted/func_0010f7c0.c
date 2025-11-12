void func_0010f7c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a0 >= 0) goto label_0x10f82c;                           // 0x0010f7d0: bgez $a0, 0x10f82c
    v1 = -1;                                                    // 0x0010f7e0: addiu $v1, $zero, -1
    v0 = -v0;                                                   // 0x0010f7e8: negu $v0, $v0
    a2 = a2 & v1;                                               // 0x0010f7ec: and $a2, $a2, $v1
    v1 = -a0;                                                   // 0x0010f7f4: negu $v1, $a0
    a0 = 0xffff << 16;                                          // 0x0010f7fc: lui $a0, 0xffff
    a2 = a2 | v0;                                               // 0x0010f804: or $a2, $a2, $v0
    t8 = -1;                                                    // 0x0010f808: addiu $t8, $zero, -1
    a2 = a2 & a0;                                               // 0x0010f814: and $a2, $a2, $a0
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0010f818: sltu $v0, $zero, $v0
    v1 = v1 - v0;                                               // 0x0010f81c: subu $v1, $v1, $v0
    t1 = a2 | v1;                                               // 0x0010f824: or $t1, $a2, $v1
label_0x10f82c:
    if (a0 >= 0) goto label_0x10f888;                           // 0x0010f830: bgez $a0, 0x10f888
    /* nop */                                                   // 0x0010f834: nop 
    v1 = -1;                                                    // 0x0010f840: addiu $v1, $zero, -1
    v0 = -v0;                                                   // 0x0010f848: negu $v0, $v0
    a3 = a3 & v1;                                               // 0x0010f84c: and $a3, $a3, $v1
    v1 = -a0;                                                   // 0x0010f854: negu $v1, $a0
    a0 = 0xffff << 16;                                          // 0x0010f85c: lui $a0, 0xffff
    a3 = a3 | v0;                                               // 0x0010f864: or $a3, $a3, $v0
    t8 = ~(0 | t8);                                             // 0x0010f868: nor $t8, $zero, $t8
    a3 = a3 & a0;                                               // 0x0010f874: and $a3, $a3, $a0
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0010f878: sltu $v0, $zero, $v0
    v1 = v1 - v0;                                               // 0x0010f87c: subu $v1, $v1, $v0
    a1 = a3 | v1;                                               // 0x0010f884: or $a1, $a3, $v1
label_0x10f888:
    if (t0 != 0) goto label_0x10fc30;                           // 0x0010f8a4: bnez $t0, 0x10fc30
    v0 = ((unsigned)t2 < (unsigned)t0) ? 1 : 0;                 // 0x0010f8a8: sltu $v0, $t2, $t0
    v0 = ((unsigned)t2 < (unsigned)t1) ? 1 : 0;                 // 0x0010f8ac: sltu $v0, $t2, $t1
    if (v0 == 0) goto label_0x10f9f0;                           // 0x0010f8b0: beqz $v0, 0x10f9f0
    v0 = 0 | 0xffff;                                            // 0x0010f8b4: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0010f8b8: sltu $v0, $v0, $t1
    if (v0 != 0) goto label_0x10f8d8;                           // 0x0010f8bc: bnez $v0, 0x10f8d8
    v0 = 0xff << 16;                                            // 0x0010f8c0: lui $v0, 0xff
    v0 = ((unsigned)t1 < (unsigned)0x100) ? 1 : 0;              // 0x0010f8c4: sltiu $v0, $t1, 0x100
    a0 = 8;                                                     // 0x0010f8c8: addiu $a0, $zero, 8
    goto label_0x10f8ec;                                        // 0x0010f8cc: b 0x10f8ec
    if (v0 != 0) a0 = 0;                                        // 0x0010f8d0: movn $a0, $zero, $v0
    /* nop */                                                   // 0x0010f8d4: nop 
label_0x10f8d8:
    v1 = 0x18;                                                  // 0x0010f8d8: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x0010f8dc: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x0010f8e0: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0010f8e4: sltu $v0, $v0, $t1
    if (v0 != 0) a0 = v1;                                       // 0x0010f8e8: movn $a0, $v1, $v0
label_0x10f8ec:
    v1 = (unsigned)t1 >> a0;                                    // 0x0010f8ec: srlv $v1, $t1, $a0
    a1 = 0x20;                                                  // 0x0010f8f0: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x0010f8f4: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010f8f8: addu $v0, $v0, $v1
    v0 = g_00220a20;  // Global at 0x00220a20                   // 0x0010f8fc: lbu $v0, 0xa20($v0)
    v0 = v0 + a0;                                               // 0x0010f900: addu $v0, $v0, $a0
    a2 = a1 - v0;                                               // 0x0010f904: subu $a2, $a1, $v0
    if (a2 == 0) goto label_0x10f924;                           // 0x0010f908: beqz $a2, 0x10f924
    v0 = a1 - a2;                                               // 0x0010f90c: subu $v0, $a1, $a2
    v1 = t2 << a2;                                              // 0x0010f910: sllv $v1, $t2, $a2
    v0 = (unsigned)t3 >> v0;                                    // 0x0010f914: srlv $v0, $t3, $v0
    t3 = t3 << a2;                                              // 0x0010f918: sllv $t3, $t3, $a2
    t2 = v1 | v0;                                               // 0x0010f91c: or $t2, $v1, $v0
    t1 = t1 << a2;                                              // 0x0010f920: sllv $t1, $t1, $a2
label_0x10f924:
    a2 = (unsigned)t1 >> 0x10;                                  // 0x0010f924: srl $a2, $t1, 0x10
    t0 = t1 & 0xffff;                                           // 0x0010f928: andi $t0, $t1, 0xffff
    /* divide: t2 / a2 -> hi:lo */                              // 0x0010f92c: divu $zero, $t2, $a2
    a0 = (unsigned)t3 >> 0x10;                                  // 0x0010f930: srl $a0, $t3, 0x10
    /* beqzl $a2, 0x10f93c */                                   // 0x0010f934: beqzl $a2, 0x10f93c
    /* break (trap) */                                          // 0x0010f938: break 0, 7
    /* mflo $v0 */                                              // 0x0010f93c
    /* mfhi $v1 */                                              // 0x0010f940
    v1 = v1 << 0x10;                                            // 0x0010f948: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010f950: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010f954: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x10f98c */                                   // 0x0010f958: beqzl $v0, 0x10f98c
    v1 = v1 - a1;                                               // 0x0010f95c: subu $v1, $v1, $a1
    v1 = v1 + t1;                                               // 0x0010f960: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0010f964: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x10f988;                           // 0x0010f968: bnez $v0, 0x10f988
    a3 = a3 + -1;                                               // 0x0010f96c: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010f970: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x10f98c */                                   // 0x0010f974: beqzl $v0, 0x10f98c
    v1 = v1 - a1;                                               // 0x0010f978: subu $v1, $v1, $a1
    a3 = a3 + -1;                                               // 0x0010f97c: addiu $a3, $a3, -1
    v1 = v1 + t1;                                               // 0x0010f980: addu $v1, $v1, $t1
    /* nop */                                                   // 0x0010f984: nop 
label_0x10f988:
    v1 = v1 - a1;                                               // 0x0010f988: subu $v1, $v1, $a1
    /* beqzl $a2, 0x10f994 */                                   // 0x0010f98c: beqzl $a2, 0x10f994
    /* break (trap) */                                          // 0x0010f990: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x0010f994: divu $zero, $v1, $a2
    a0 = t3 & 0xffff;                                           // 0x0010f998: andi $a0, $t3, 0xffff
    /* mflo $v0 */                                              // 0x0010f99c
    /* mfhi $v1 */                                              // 0x0010f9a0
    v1 = v1 << 0x10;                                            // 0x0010f9a8: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010f9b0: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010f9b4: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x10f9e4;                           // 0x0010f9b8: beqz $v0, 0x10f9e4
    v0 = a3 << 0x10;                                            // 0x0010f9bc: sll $v0, $a3, 0x10
    v1 = v1 + t1;                                               // 0x0010f9c0: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0010f9c4: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x10f9e0;                           // 0x0010f9c8: bnez $v0, 0x10f9e0
    a2 = a2 + -1;                                               // 0x0010f9cc: addiu $a2, $a2, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010f9d0: sltu $v0, $v1, $a1
    v1 = a2 + -1;                                               // 0x0010f9d4: addiu $v1, $a2, -1
    v0 = v0 ^ 0;                                                // 0x0010f9d8: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x0010f9dc: movn $a2, $v1, $v0
label_0x10f9e0:
    v0 = a3 << 0x10;                                            // 0x0010f9e0: sll $v0, $a3, 0x10
label_0x10f9e4:
    goto label_0x10fdd8;                                        // 0x0010f9e4: b 0x10fdd8
    a2 = v0 | a2;                                               // 0x0010f9e8: or $a2, $v0, $a2
    /* nop */                                                   // 0x0010f9ec: nop 
label_0x10f9f0:
    if (t1 != 0) goto label_0x10fa18;                           // 0x0010f9f0: bnez $t1, 0x10fa18
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0010f9f4: sltu $v0, $v0, $t1
    v0 = 1;                                                     // 0x0010f9f8: addiu $v0, $zero, 1
    /* beqzl $t1, 0x10fa04 */                                   // 0x0010f9fc: beqzl $t1, 0x10fa04
    /* break (trap) */                                          // 0x0010fa00: break 0, 7
    /* divide: v0 / t0 -> hi:lo */                              // 0x0010fa04: divu $zero, $v0, $t0
    /* mflo $v0 */                                              // 0x0010fa08
    v0 = 0 | 0xffff;                                            // 0x0010fa10: ori $v0, $zero, 0xffff
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0010fa14: sltu $v0, $v0, $t1
label_0x10fa18:
    if (v0 != 0) goto label_0x10fa30;                           // 0x0010fa18: bnez $v0, 0x10fa30
    v0 = 0xff << 16;                                            // 0x0010fa1c: lui $v0, 0xff
    v0 = ((unsigned)t1 < (unsigned)0x100) ? 1 : 0;              // 0x0010fa20: sltiu $v0, $t1, 0x100
    a0 = 8;                                                     // 0x0010fa24: addiu $a0, $zero, 8
    goto label_0x10fa44;                                        // 0x0010fa28: b 0x10fa44
    if (v0 != 0) a0 = 0;                                        // 0x0010fa2c: movn $a0, $zero, $v0
label_0x10fa30:
    v1 = 0x18;                                                  // 0x0010fa30: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x0010fa34: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x0010fa38: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t1) ? 1 : 0;                 // 0x0010fa3c: sltu $v0, $v0, $t1
    if (v0 != 0) a0 = v1;                                       // 0x0010fa40: movn $a0, $v1, $v0
label_0x10fa44:
    v1 = (unsigned)t1 >> a0;                                    // 0x0010fa44: srlv $v1, $t1, $a0
    a1 = 0x20;                                                  // 0x0010fa48: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x0010fa4c: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010fa50: addu $v0, $v0, $v1
    v0 = g_00220a20;  // Global at 0x00220a20                   // 0x0010fa54: lbu $v0, 0xa20($v0)
    v0 = v0 + a0;                                               // 0x0010fa58: addu $v0, $v0, $a0
    a2 = a1 - v0;                                               // 0x0010fa5c: subu $a2, $a1, $v0
    if (a2 != 0) goto label_0x10fa80;                           // 0x0010fa60: bnez $a2, 0x10fa80
    a3 = a1 - a2;                                               // 0x0010fa64: subu $a3, $a1, $a2
    t2 = t2 - t1;                                               // 0x0010fa68: subu $t2, $t2, $t1
    t5 = 1;                                                     // 0x0010fa6c: addiu $t5, $zero, 1
    t0 = (unsigned)t1 >> 0x10;                                  // 0x0010fa70: srl $t0, $t1, 0x10
    goto label_0x10fb68;                                        // 0x0010fa74: b 0x10fb68
    t4 = t1 & 0xffff;                                           // 0x0010fa78: andi $t4, $t1, 0xffff
    /* nop */                                                   // 0x0010fa7c: nop 
label_0x10fa80:
    v1 = t2 << a2;                                              // 0x0010fa80: sllv $v1, $t2, $a2
    v0 = (unsigned)t3 >> a3;                                    // 0x0010fa84: srlv $v0, $t3, $a3
    t3 = t3 << a2;                                              // 0x0010fa88: sllv $t3, $t3, $a2
    a0 = (unsigned)t2 >> a3;                                    // 0x0010fa8c: srlv $a0, $t2, $a3
    t2 = v1 | v0;                                               // 0x0010fa90: or $t2, $v1, $v0
    t1 = t1 << a2;                                              // 0x0010fa94: sllv $t1, $t1, $a2
    t0 = (unsigned)t1 >> 0x10;                                  // 0x0010fa98: srl $t0, $t1, 0x10
    /* divide: a0 / t0 -> hi:lo */                              // 0x0010fa9c: divu $zero, $a0, $t0
    a0 = (unsigned)t2 >> 0x10;                                  // 0x0010faa0: srl $a0, $t2, 0x10
    t4 = t1 & 0xffff;                                           // 0x0010faa4: andi $t4, $t1, 0xffff
    /* beqzl $a2, 0x10fab4 */                                   // 0x0010faac: beqzl $a2, 0x10fab4
    /* break (trap) */                                          // 0x0010fab0: break 0, 7
    /* mflo $v0 */                                              // 0x0010fab4
    /* mfhi $v1 */                                              // 0x0010fab8
    v1 = v1 << 0x10;                                            // 0x0010fac0: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010fac8: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010facc: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x10fb00;                           // 0x0010fad0: beqz $v0, 0x10fb00
    v1 = v1 + t1;                                               // 0x0010fad8: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0010fadc: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x10fb00;                           // 0x0010fae0: bnez $v0, 0x10fb00
    a3 = a3 + -1;                                               // 0x0010fae4: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010fae8: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x10fb04 */                                   // 0x0010faec: beqzl $v0, 0x10fb04
    v1 = v1 - a1;                                               // 0x0010faf0: subu $v1, $v1, $a1
    a3 = a3 + -1;                                               // 0x0010faf4: addiu $a3, $a3, -1
    v1 = v1 + t1;                                               // 0x0010faf8: addu $v1, $v1, $t1
    /* nop */                                                   // 0x0010fafc: nop 
label_0x10fb00:
    v1 = v1 - a1;                                               // 0x0010fb00: subu $v1, $v1, $a1
    /* beqzl $a2, 0x10fb0c */                                   // 0x0010fb04: beqzl $a2, 0x10fb0c
    /* break (trap) */                                          // 0x0010fb08: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x0010fb0c: divu $zero, $v1, $a2
    a0 = t2 & 0xffff;                                           // 0x0010fb10: andi $a0, $t2, 0xffff
    /* mflo $v0 */                                              // 0x0010fb14
    /* mfhi $v1 */                                              // 0x0010fb18
    v1 = v1 << 0x10;                                            // 0x0010fb20: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010fb28: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010fb2c: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x10fb60;                           // 0x0010fb30: beqz $v0, 0x10fb60
    v0 = a3 << 0x10;                                            // 0x0010fb34: sll $v0, $a3, 0x10
    v1 = v1 + t1;                                               // 0x0010fb38: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0010fb3c: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x10fb5c;                           // 0x0010fb40: bnez $v0, 0x10fb5c
    a2 = a2 + -1;                                               // 0x0010fb44: addiu $a2, $a2, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010fb48: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x10fb60;                           // 0x0010fb4c: beqz $v0, 0x10fb60
    v0 = a3 << 0x10;                                            // 0x0010fb50: sll $v0, $a3, 0x10
    a2 = a2 + -1;                                               // 0x0010fb54: addiu $a2, $a2, -1
    v1 = v1 + t1;                                               // 0x0010fb58: addu $v1, $v1, $t1
label_0x10fb5c:
    v0 = a3 << 0x10;                                            // 0x0010fb5c: sll $v0, $a3, 0x10
label_0x10fb60:
    t2 = v1 - a1;                                               // 0x0010fb60: subu $t2, $v1, $a1
    t5 = v0 | a2;                                               // 0x0010fb64: or $t5, $v0, $a2
label_0x10fb68:
    /* divide: t2 / a2 -> hi:lo */                              // 0x0010fb70: divu $zero, $t2, $a2
    a0 = (unsigned)t3 >> 0x10;                                  // 0x0010fb74: srl $a0, $t3, 0x10
    /* beqzl $a2, 0x10fb80 */                                   // 0x0010fb78: beqzl $a2, 0x10fb80
    /* break (trap) */                                          // 0x0010fb7c: break 0, 7
    /* mflo $v0 */                                              // 0x0010fb80
    /* mfhi $v1 */                                              // 0x0010fb84
    v1 = v1 << 0x10;                                            // 0x0010fb8c: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010fb94: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010fb98: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x10fbcc */                                   // 0x0010fb9c: beqzl $v0, 0x10fbcc
    v1 = v1 - a1;                                               // 0x0010fba0: subu $v1, $v1, $a1
    v1 = v1 + t1;                                               // 0x0010fba4: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0010fba8: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x10fbc8;                           // 0x0010fbac: bnez $v0, 0x10fbc8
    a3 = a3 + -1;                                               // 0x0010fbb0: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010fbb4: sltu $v0, $v1, $a1
    /* beqzl $v0, 0x10fbcc */                                   // 0x0010fbb8: beqzl $v0, 0x10fbcc
    v1 = v1 - a1;                                               // 0x0010fbbc: subu $v1, $v1, $a1
    a3 = a3 + -1;                                               // 0x0010fbc0: addiu $a3, $a3, -1
    v1 = v1 + t1;                                               // 0x0010fbc4: addu $v1, $v1, $t1
label_0x10fbc8:
    v1 = v1 - a1;                                               // 0x0010fbc8: subu $v1, $v1, $a1
    /* beqzl $a2, 0x10fbd4 */                                   // 0x0010fbcc: beqzl $a2, 0x10fbd4
    /* break (trap) */                                          // 0x0010fbd0: break 0, 7
    /* divide: v1 / a2 -> hi:lo */                              // 0x0010fbd4: divu $zero, $v1, $a2
    a0 = t3 & 0xffff;                                           // 0x0010fbd8: andi $a0, $t3, 0xffff
    /* mflo $v0 */                                              // 0x0010fbdc
    /* mfhi $v1 */                                              // 0x0010fbe0
    v1 = v1 << 0x10;                                            // 0x0010fbe8: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010fbf0: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010fbf4: sltu $v0, $v1, $a1
    if (v0 == 0) goto label_0x10fc24;                           // 0x0010fbf8: beqz $v0, 0x10fc24
    v0 = a3 << 0x10;                                            // 0x0010fbfc: sll $v0, $a3, 0x10
    v1 = v1 + t1;                                               // 0x0010fc00: addu $v1, $v1, $t1
    v0 = ((unsigned)v1 < (unsigned)t1) ? 1 : 0;                 // 0x0010fc04: sltu $v0, $v1, $t1
    if (v0 != 0) goto label_0x10fc20;                           // 0x0010fc08: bnez $v0, 0x10fc20
    a2 = a2 + -1;                                               // 0x0010fc0c: addiu $a2, $a2, -1
    v0 = ((unsigned)v1 < (unsigned)a1) ? 1 : 0;                 // 0x0010fc10: sltu $v0, $v1, $a1
    v1 = a2 + -1;                                               // 0x0010fc14: addiu $v1, $a2, -1
    v0 = v0 ^ 0;                                                // 0x0010fc18: xori $v0, $v0, 0
    if (v0 != 0) a2 = v1;                                       // 0x0010fc1c: movn $a2, $v1, $v0
label_0x10fc20:
    v0 = a3 << 0x10;                                            // 0x0010fc20: sll $v0, $a3, 0x10
label_0x10fc24:
    goto label_0x10fddc;                                        // 0x0010fc24: b 0x10fddc
    a2 = v0 | a2;                                               // 0x0010fc28: or $a2, $v0, $a2
    /* nop */                                                   // 0x0010fc2c: nop 
label_0x10fc30:
    if (v0 == 0) goto label_0x10fc40;                           // 0x0010fc30: beqz $v0, 0x10fc40
    v0 = 0 | 0xffff;                                            // 0x0010fc34: ori $v0, $zero, 0xffff
    goto label_0x10fdd8;                                        // 0x0010fc38: b 0x10fdd8
label_0x10fc40:
    v0 = ((unsigned)v0 < (unsigned)t0) ? 1 : 0;                 // 0x0010fc40: sltu $v0, $v0, $t0
    if (v0 != 0) goto label_0x10fc60;                           // 0x0010fc44: bnez $v0, 0x10fc60
    v0 = 0xff << 16;                                            // 0x0010fc48: lui $v0, 0xff
    v0 = ((unsigned)t0 < (unsigned)0x100) ? 1 : 0;              // 0x0010fc4c: sltiu $v0, $t0, 0x100
    a0 = 8;                                                     // 0x0010fc50: addiu $a0, $zero, 8
    goto label_0x10fc74;                                        // 0x0010fc54: b 0x10fc74
    if (v0 != 0) a0 = 0;                                        // 0x0010fc58: movn $a0, $zero, $v0
    /* nop */                                                   // 0x0010fc5c: nop 
label_0x10fc60:
    v1 = 0x18;                                                  // 0x0010fc60: addiu $v1, $zero, 0x18
    v0 = v0 | 0xffff;                                           // 0x0010fc64: ori $v0, $v0, 0xffff
    a0 = 0x10;                                                  // 0x0010fc68: addiu $a0, $zero, 0x10
    v0 = ((unsigned)v0 < (unsigned)t0) ? 1 : 0;                 // 0x0010fc6c: sltu $v0, $v0, $t0
    if (v0 != 0) a0 = v1;                                       // 0x0010fc70: movn $a0, $v1, $v0
label_0x10fc74:
    v1 = (unsigned)t0 >> a0;                                    // 0x0010fc74: srlv $v1, $t0, $a0
    a1 = 0x20;                                                  // 0x0010fc78: addiu $a1, $zero, 0x20
    v0 = 0x22 << 16;                                            // 0x0010fc7c: lui $v0, 0x22
    v0 = v0 + v1;                                               // 0x0010fc80: addu $v0, $v0, $v1
    v0 = g_00220a20;  // Global at 0x00220a20                   // 0x0010fc84: lbu $v0, 0xa20($v0)
    v0 = v0 + a0;                                               // 0x0010fc88: addu $v0, $v0, $a0
    a2 = a1 - v0;                                               // 0x0010fc8c: subu $a2, $a1, $v0
    if (a2 != 0) goto label_0x10fcb8;                           // 0x0010fc90: bnez $a2, 0x10fcb8
    a3 = a1 - a2;                                               // 0x0010fc94: subu $a3, $a1, $a2
    v0 = ((unsigned)t0 < (unsigned)t2) ? 1 : 0;                 // 0x0010fc98: sltu $v0, $t0, $t2
    if (v0 != 0) goto label_0x10fdd8;                           // 0x0010fc9c: bnez $v0, 0x10fdd8
    a2 = 1;                                                     // 0x0010fca0: addiu $a2, $zero, 1
    v0 = ((unsigned)t3 < (unsigned)t1) ? 1 : 0;                 // 0x0010fca4: sltu $v0, $t3, $t1
    if (v0 != 0) goto label_0x10fdd8;                           // 0x0010fca8: bnez $v0, 0x10fdd8
    goto label_0x10fdd8;                                        // 0x0010fcb0: b 0x10fdd8
    a2 = 1;                                                     // 0x0010fcb4: addiu $a2, $zero, 1
label_0x10fcb8:
    a0 = t0 << a2;                                              // 0x0010fcb8: sllv $a0, $t0, $a2
    a1 = (unsigned)t3 >> a3;                                    // 0x0010fcbc: srlv $a1, $t3, $a3
    t3 = t3 << a2;                                              // 0x0010fcc0: sllv $t3, $t3, $a2
    v0 = (unsigned)t1 >> a3;                                    // 0x0010fcc4: srlv $v0, $t1, $a3
    t1 = t1 << a2;                                              // 0x0010fcc8: sllv $t1, $t1, $a2
    v1 = t2 << a2;                                              // 0x0010fccc: sllv $v1, $t2, $a2
    t0 = a0 | v0;                                               // 0x0010fcd0: or $t0, $a0, $v0
    a0 = (unsigned)t2 >> a3;                                    // 0x0010fcd4: srlv $a0, $t2, $a3
    t2 = v1 | a1;                                               // 0x0010fcd8: or $t2, $v1, $a1
    a1 = (unsigned)t0 >> 0x10;                                  // 0x0010fcdc: srl $a1, $t0, 0x10
    /* divide: a0 / a1 -> hi:lo */                              // 0x0010fce0: divu $zero, $a0, $a1
    a0 = (unsigned)t2 >> 0x10;                                  // 0x0010fce4: srl $a0, $t2, 0x10
    t4 = t0 & 0xffff;                                           // 0x0010fce8: andi $t4, $t0, 0xffff
    /* beqzl $a1, 0x10fcf4 */                                   // 0x0010fcec: beqzl $a1, 0x10fcf4
    /* break (trap) */                                          // 0x0010fcf0: break 0, 7
    /* mflo $v0 */                                              // 0x0010fcf4
    /* mfhi $v1 */                                              // 0x0010fcf8
    v1 = v1 << 0x10;                                            // 0x0010fd00: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010fd08: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x0010fd0c: sltu $v0, $v1, $a2
    /* beqzl $v0, 0x10fd44 */                                   // 0x0010fd10: beqzl $v0, 0x10fd44
    v1 = v1 - a2;                                               // 0x0010fd14: subu $v1, $v1, $a2
    v1 = v1 + t0;                                               // 0x0010fd18: addu $v1, $v1, $t0
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x0010fd1c: sltu $v0, $v1, $t0
    if (v0 != 0) goto label_0x10fd40;                           // 0x0010fd20: bnez $v0, 0x10fd40
    a3 = a3 + -1;                                               // 0x0010fd24: addiu $a3, $a3, -1
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x0010fd28: sltu $v0, $v1, $a2
    /* beqzl $v0, 0x10fd44 */                                   // 0x0010fd2c: beqzl $v0, 0x10fd44
    v1 = v1 - a2;                                               // 0x0010fd30: subu $v1, $v1, $a2
    a3 = a3 + -1;                                               // 0x0010fd34: addiu $a3, $a3, -1
    v1 = v1 + t0;                                               // 0x0010fd38: addu $v1, $v1, $t0
    /* nop */                                                   // 0x0010fd3c: nop 
label_0x10fd40:
    v1 = v1 - a2;                                               // 0x0010fd40: subu $v1, $v1, $a2
    /* beqzl $a1, 0x10fd4c */                                   // 0x0010fd44: beqzl $a1, 0x10fd4c
    /* break (trap) */                                          // 0x0010fd48: break 0, 7
    /* divide: v1 / a1 -> hi:lo */                              // 0x0010fd4c: divu $zero, $v1, $a1
    a0 = t2 & 0xffff;                                           // 0x0010fd50: andi $a0, $t2, 0xffff
    /* mflo $v0 */                                              // 0x0010fd54
    /* mfhi $v1 */                                              // 0x0010fd58
    v1 = v1 << 0x10;                                            // 0x0010fd60: sll $v1, $v1, 0x10
    v1 = v1 | a0;                                               // 0x0010fd68: or $v1, $v1, $a0
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x0010fd6c: sltu $v0, $v1, $a2
    if (v0 == 0) goto label_0x10fda0;                           // 0x0010fd70: beqz $v0, 0x10fda0
    v0 = a3 << 0x10;                                            // 0x0010fd74: sll $v0, $a3, 0x10
    v1 = v1 + t0;                                               // 0x0010fd78: addu $v1, $v1, $t0
    v0 = ((unsigned)v1 < (unsigned)t0) ? 1 : 0;                 // 0x0010fd7c: sltu $v0, $v1, $t0
    if (v0 != 0) goto label_0x10fd9c;                           // 0x0010fd80: bnez $v0, 0x10fd9c
    a1 = a1 + -1;                                               // 0x0010fd84: addiu $a1, $a1, -1
    v0 = ((unsigned)v1 < (unsigned)a2) ? 1 : 0;                 // 0x0010fd88: sltu $v0, $v1, $a2
    if (v0 == 0) goto label_0x10fda0;                           // 0x0010fd8c: beqz $v0, 0x10fda0
    v0 = a3 << 0x10;                                            // 0x0010fd90: sll $v0, $a3, 0x10
    v1 = v1 + t0;                                               // 0x0010fd94: addu $v1, $v1, $t0
    a1 = a1 + -1;                                               // 0x0010fd98: addiu $a1, $a1, -1
label_0x10fd9c:
    v0 = a3 << 0x10;                                            // 0x0010fd9c: sll $v0, $a3, 0x10
label_0x10fda0:
    v1 = v1 - a2;                                               // 0x0010fda0: subu $v1, $v1, $a2
    a2 = v0 | a1;                                               // 0x0010fda4: or $a2, $v0, $a1
    /* multiply: t1 *  -> hi:lo */                              // 0x0010fda8: multu $a2, $t1
    /* mfhi $a3 */                                              // 0x0010fdac
    /* mflo $a0 */                                              // 0x0010fdb0
    v0 = ((unsigned)v1 < (unsigned)a3) ? 1 : 0;                 // 0x0010fdb4: sltu $v0, $v1, $a3
    /* bnezl $v0, 0x10fdd8 */                                   // 0x0010fdb8: bnezl $v0, 0x10fdd8
    a2 = a2 + -1;                                               // 0x0010fdbc: addiu $a2, $a2, -1
    if (a3 != v1) goto label_0x10fddc;                          // 0x0010fdc0: bne $a3, $v1, 0x10fddc
    v0 = ((unsigned)t3 < (unsigned)a0) ? 1 : 0;                 // 0x0010fdc8: sltu $v0, $t3, $a0
    if (v0 == 0) goto label_0x10fde0;                           // 0x0010fdcc: beqz $v0, 0x10fde0
    a2 = a2 + -1;                                               // 0x0010fdd4: addiu $a2, $a2, -1
label_0x10fdd8:
label_0x10fddc:
label_0x10fde0:
    a0 = -1;                                                    // 0x0010fde0: addiu $a0, $zero, -1
    t7 = t7 & a0;                                               // 0x0010fdec: and $t7, $t7, $a0
    t7 = t7 | v0;                                               // 0x0010fdf0: or $t7, $t7, $v0
    a1 = 0xffff << 16;                                          // 0x0010fdf8: lui $a1, 0xffff
    t7 = t7 & a1;                                               // 0x0010fe00: and $t7, $t7, $a1
    if (t8 == 0) goto label_0x10fe4c;                           // 0x0010fe04: beqz $t8, 0x10fe4c
    v1 = t7 | v0;                                               // 0x0010fe08: or $v1, $t7, $v0
    t6 = t6 & a0;                                               // 0x0010fe14: and $t6, $t6, $a0
    v0 = -v0;                                                   // 0x0010fe18: negu $v0, $v0
    a0 = -a0;                                                   // 0x0010fe24: negu $a0, $a0
    t6 = t6 | v0;                                               // 0x0010fe2c: or $t6, $t6, $v0
    t6 = t6 & a1;                                               // 0x0010fe38: and $t6, $t6, $a1
    v1 = ((unsigned)0 < (unsigned)v1) ? 1 : 0;                  // 0x0010fe3c: sltu $v1, $zero, $v1
    a0 = a0 - v1;                                               // 0x0010fe40: subu $a0, $a0, $v1
    v1 = t6 | a0;                                               // 0x0010fe48: or $v1, $t6, $a0
label_0x10fe4c:
    return;                                                     // 0x0010fe4c: jr $ra
}