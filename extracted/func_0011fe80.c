void func_0011fe80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011fe80: addiu $sp, $sp, -0x40
    s4 = 0x8000 << 16;                                          // 0x0011fe90: lui $s4, 0x8000
    v1 = 0x7ff0 << 16;                                          // 0x0011feb4: lui $v1, 0x7ff0
    v0 = a1 & v1;                                               // 0x0011feb8: and $v0, $a1, $v1
    if (v0 != v1) goto label_0x11fee8;                          // 0x0011febc: bne $v0, $v1, 0x11fee8
    func_00111a58();  // 111a58                                // 0x0011fec8: jal 0x111a58
    /* nop */                                                   // 0x0011fecc: nop 
    func_00111998();  // 111998                                // 0x0011fed8: jal 0x111998
    /* nop */                                                   // 0x0011fedc: nop 
    goto label_0x12017c;                                        // 0x0011fee0: b 0x12017c
label_0x11fee8:
    if (a1 > 0) goto label_0x11ff38;                            // 0x0011fee8: bgtz $a1, 0x11ff38
    s1 = a1 >> 0x14;                                            // 0x0011feec: sra $s1, $a1, 0x14
    v1 = 0x7fff << 16;                                          // 0x0011fef0: lui $v1, 0x7fff
    v1 = v1 | 0xffff;                                           // 0x0011fef8: ori $v1, $v1, 0xffff
    v1 = a1 & v1;                                               // 0x0011fefc: and $v1, $a1, $v1
    v1 = v1 | a3;                                               // 0x0011ff00: or $v1, $v1, $a3
    /* beqzl $v1, 0x12017c */                                   // 0x0011ff04: beqzl $v1, 0x12017c
    if (a1 >= 0) goto label_0x11ff38;                           // 0x0011ff0c: bgez $a1, 0x11ff38
    /* nop */                                                   // 0x0011ff10: nop 
    func_001119f0();  // 1119f0                                // 0x0011ff18: jal 0x1119f0
    /* nop */                                                   // 0x0011ff1c: nop 
    func_00111ce0();  // 111ce0                                // 0x0011ff28: jal 0x111ce0
    /* nop */                                                   // 0x0011ff2c: nop 
    goto label_0x12017c;                                        // 0x0011ff30: b 0x12017c
label_0x11ff38:
    if (s1 != 0) goto label_0x11ffb0;                           // 0x0011ff38: bnez $s1, 0x11ffb0
    v0 = 0xf << 16;                                             // 0x0011ff3c: lui $v0, 0xf
    if (a1 != 0) goto label_0x11ff68;                           // 0x0011ff40: bnez $a1, 0x11ff68
    v0 = 0x10 << 16;                                            // 0x0011ff44: lui $v0, 0x10
label_0x11ff48:
    v0 = (unsigned)a3 >> 0xb;                                   // 0x0011ff48: srl $v0, $a3, 0xb
    a3 = a3 << 0x15;                                            // 0x0011ff4c: sll $a3, $a3, 0x15
    a1 = a1 | v0;                                               // 0x0011ff50: or $a1, $a1, $v0
    /* nop */                                                   // 0x0011ff54: nop 
    /* nop */                                                   // 0x0011ff58: nop 
    if (a1 == 0) goto label_0x11ff48;                           // 0x0011ff5c: beqz $a1, 0x11ff48
    s1 = s1 + -0x15;                                            // 0x0011ff60: addiu $s1, $s1, -0x15
    v0 = 0x10 << 16;                                            // 0x0011ff64: lui $v0, 0x10
label_0x11ff68:
    v0 = a1 & v0;                                               // 0x0011ff68: and $v0, $a1, $v0
    if (v0 != 0) goto label_0x11ff94;                           // 0x0011ff6c: bnez $v0, 0x11ff94
    v1 = 0x10 << 16;                                            // 0x0011ff74: lui $v1, 0x10
label_0x11ff78:
    a1 = a1 << 1;                                               // 0x0011ff78: sll $a1, $a1, 1
    v0 = a1 & v1;                                               // 0x0011ff7c: and $v0, $a1, $v1
    /* nop */                                                   // 0x0011ff80: nop 
    /* nop */                                                   // 0x0011ff84: nop 
    /* nop */                                                   // 0x0011ff88: nop 
    if (v0 == 0) goto label_0x11ff78;                           // 0x0011ff8c: beqz $v0, 0x11ff78
    a0 = a0 + 1;                                                // 0x0011ff90: addiu $a0, $a0, 1
label_0x11ff94:
    v0 = -a0;                                                   // 0x0011ff94: negu $v0, $a0
    v1 = s1 - a0;                                               // 0x0011ff98: subu $v1, $s1, $a0
    v0 = (unsigned)a3 >> v0;                                    // 0x0011ff9c: srlv $v0, $a3, $v0
    a3 = a3 << a0;                                              // 0x0011ffa0: sllv $a3, $a3, $a0
    s1 = v1 + 1;                                                // 0x0011ffa4: addiu $s1, $v1, 1
    a1 = a1 | v0;                                               // 0x0011ffa8: or $a1, $a1, $v0
    v0 = 0xf << 16;                                             // 0x0011ffac: lui $v0, 0xf
label_0x11ffb0:
    s1 = s1 + -0x3ff;                                           // 0x0011ffb0: addiu $s1, $s1, -0x3ff
    v0 = v0 | 0xffff;                                           // 0x0011ffb4: ori $v0, $v0, 0xffff
    a0 = 0x10 << 16;                                            // 0x0011ffb8: lui $a0, 0x10
    v0 = a1 & v0;                                               // 0x0011ffbc: and $v0, $a1, $v0
    v1 = s1 & 1;                                                // 0x0011ffc0: andi $v1, $s1, 1
    if (v1 == 0) goto label_0x11ffe0;                           // 0x0011ffc4: beqz $v1, 0x11ffe0
    a1 = v0 | a0;                                               // 0x0011ffc8: or $a1, $v0, $a0
    v0 = a3 & s4;                                               // 0x0011ffcc: and $v0, $a3, $s4
    a3 = a3 << 1;                                               // 0x0011ffd0: sll $a3, $a3, 1
    v0 = (unsigned)v0 >> 0x1f;                                  // 0x0011ffd4: srl $v0, $v0, 0x1f
    v0 = a1 + v0;                                               // 0x0011ffd8: addu $v0, $a1, $v0
    a1 = a1 + v0;                                               // 0x0011ffdc: addu $a1, $a1, $v0
label_0x11ffe0:
    v0 = a3 & s4;                                               // 0x0011ffe0: and $v0, $a3, $s4
    a3 = a3 << 1;                                               // 0x0011ffe4: sll $a3, $a3, 1
    v0 = (unsigned)v0 >> 0x1f;                                  // 0x0011ffe8: srl $v0, $v0, 0x1f
    s1 = s1 >> 1;                                               // 0x0011ffec: sra $s1, $s1, 1
    v0 = a1 + v0;                                               // 0x0011fff0: addu $v0, $a1, $v0
    a1 = a1 + v0;                                               // 0x0011fff8: addu $a1, $a1, $v0
    t1 = 0x20 << 16;                                            // 0x00120008: lui $t1, 0x20
    /* nop */                                                   // 0x0012000c: nop 
label_0x120010:
    v1 = t3 + t1;                                               // 0x00120010: addu $v1, $t3, $t1
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x00120014: slt $v0, $a1, $v1
    if (v0 != 0) goto label_0x12002c;                           // 0x00120018: bnez $v0, 0x12002c
    v0 = a3 & s4;                                               // 0x0012001c: and $v0, $a3, $s4
    a1 = a1 - v1;                                               // 0x00120020: subu $a1, $a1, $v1
    t3 = v1 + t1;                                               // 0x00120024: addu $t3, $v1, $t1
    s3 = s3 + t1;                                               // 0x00120028: addu $s3, $s3, $t1
label_0x12002c:
    a3 = a3 << 1;                                               // 0x0012002c: sll $a3, $a3, 1
    v0 = (unsigned)v0 >> 0x1f;                                  // 0x00120030: srl $v0, $v0, 0x1f
    t1 = (unsigned)t1 >> 1;                                     // 0x00120034: srl $t1, $t1, 1
    v0 = a1 + v0;                                               // 0x00120038: addu $v0, $a1, $v0
    if (t1 != 0) goto label_0x120010;                           // 0x0012003c: bnez $t1, 0x120010
    a1 = a1 + v0;                                               // 0x00120040: addu $a1, $a1, $v0
    t1 = 0x8000 << 16;                                          // 0x00120044: lui $t1, 0x8000
label_0x120048:
    a0 = t4 + t1;                                               // 0x0012004c: addu $a0, $t4, $t1
    v0 = (v1 < a1) ? 1 : 0;                                     // 0x00120050: slt $v0, $v1, $a1
    t2 = a0 & s4;                                               // 0x00120054: and $t2, $a0, $s4
    if (v0 != 0) goto label_0x120070;                           // 0x00120058: bnez $v0, 0x120070
    t0 = ((unsigned)a3 < (unsigned)a0) ? 1 : 0;                 // 0x0012005c: sltu $t0, $a3, $a0
    if (v1 != a1) goto label_0x120098;                          // 0x00120060: bne $v1, $a1, 0x120098
    v0 = a3 & s4;                                               // 0x00120064: and $v0, $a3, $s4
    /* bnezl $t0, 0x12009c */                                   // 0x00120068: bnezl $t0, 0x12009c
    a3 = a3 << 1;                                               // 0x0012006c: sll $a3, $a3, 1
label_0x120070:
    t4 = a0 + t1;                                               // 0x00120070: addu $t4, $a0, $t1
    if (t2 != s4) goto label_0x120084;                          // 0x00120074: bne $t2, $s4, 0x120084
    a2 = t4 & s4;                                               // 0x00120078: and $a2, $t4, $s4
    v0 = t3 + 1;                                                // 0x0012007c: addiu $v0, $t3, 1
    if (a2 == 0) t3 = v0;                                       // 0x00120080: movz $t3, $v0, $a2
label_0x120084:
    a1 = a1 - v1;                                               // 0x00120084: subu $a1, $a1, $v1
    a3 = a3 - a0;                                               // 0x00120088: subu $a3, $a3, $a0
    s2 = s2 + t1;                                               // 0x0012008c: addu $s2, $s2, $t1
    a1 = a1 - t0;                                               // 0x00120090: subu $a1, $a1, $t0
    v0 = a3 & s4;                                               // 0x00120094: and $v0, $a3, $s4
label_0x120098:
    a3 = a3 << 1;                                               // 0x00120098: sll $a3, $a3, 1
    v0 = (unsigned)v0 >> 0x1f;                                  // 0x0012009c: srl $v0, $v0, 0x1f
    t1 = (unsigned)t1 >> 1;                                     // 0x001200a0: srl $t1, $t1, 1
    v0 = a1 + v0;                                               // 0x001200a4: addu $v0, $a1, $v0
    if (t1 != 0) goto label_0x120048;                           // 0x001200a8: bnez $t1, 0x120048
    a1 = a1 + v0;                                               // 0x001200ac: addu $a1, $a1, $v0
    v0 = a1 | a3;                                               // 0x001200b0: or $v0, $a1, $a3
    if (v0 == 0) goto label_0x120128;                           // 0x001200b4: beqz $v0, 0x120128
    a3 = (unsigned)s2 >> 1;                                     // 0x001200b8: srl $a3, $s2, 1
    s0 = 0 | 0xffc0;                                            // 0x001200bc: ori $s0, $zero, 0xffc0
    func_00111f40();  // 111f40                                // 0x001200cc: jal 0x111f40
    /* nop */                                                   // 0x001200d0: nop 
    if (v0 < 0) goto label_0x120124;                            // 0x001200d4: bltz $v0, 0x120124
    v0 = -1;                                                    // 0x001200d8: addiu $v0, $zero, -1
    if (s2 != v0) goto label_0x1200f0;                          // 0x001200dc: bne $s2, $v0, 0x1200f0
    /* nop */                                                   // 0x001200e0: nop 
    goto label_0x120124;                                        // 0x001200e8: b 0x120124
    s3 = s3 + 1;                                                // 0x001200ec: addiu $s3, $s3, 1
label_0x1200f0:
    func_00111f40();  // 111f40                                // 0x001200f8: jal 0x111f40
    /* nop */                                                   // 0x001200fc: nop 
    if (v0 <= 0) goto label_0x120120;                           // 0x00120100: blez $v0, 0x120120
    v0 = s2 & 1;                                                // 0x00120104: andi $v0, $s2, 1
    v0 = -2;                                                    // 0x00120108: addiu $v0, $zero, -2
    v1 = s3 + 1;                                                // 0x0012010c: addiu $v1, $s3, 1
    v0 = s2 ^ v0;                                               // 0x00120110: xor $v0, $s2, $v0
    s2 = s2 + 2;                                                // 0x00120114: addiu $s2, $s2, 2
    goto label_0x120124;                                        // 0x00120118: b 0x120124
    if (v0 == 0) s3 = v1;                                       // 0x0012011c: movz $s3, $v1, $v0
label_0x120120:
    s2 = s2 + v0;                                               // 0x00120120: addu $s2, $s2, $v0
label_0x120124:
    a3 = (unsigned)s2 >> 1;                                     // 0x00120124: srl $a3, $s2, 1
label_0x120128:
    v0 = s3 >> 1;                                               // 0x00120128: sra $v0, $s3, 1
    a1 = 0x3fe0 << 16;                                          // 0x0012012c: lui $a1, 0x3fe0
    a1 = a1 + v0;                                               // 0x00120130: addu $a1, $a1, $v0
    v0 = a3 | s4;                                               // 0x00120134: or $v0, $a3, $s4
    a0 = s3 & 1;                                                // 0x00120138: andi $a0, $s3, 1
    v1 = s1 << 0x14;                                            // 0x0012013c: sll $v1, $s1, 0x14
    if (a0 != 0) a3 = v0;                                       // 0x00120140: movn $a3, $v0, $a0
    a1 = a1 + v1;                                               // 0x00120144: addu $a1, $a1, $v1
    v0 = 0xffff << 16;                                          // 0x0012014c: lui $v0, 0xffff
    s5 = s5 & v0;                                               // 0x00120154: and $s5, $s5, $v0
    v0 = -1;                                                    // 0x00120158: addiu $v0, $zero, -1
    s5 = s5 | a0;                                               // 0x00120164: or $s5, $s5, $a0
    s5 = s5 & v0;                                               // 0x0012016c: and $s5, $s5, $v0
    s0 = s5 | v1;                                               // 0x00120170: or $s0, $s5, $v1
label_0x12017c:
    return;                                                     // 0x00120194: jr $ra
    sp = sp + 0x40;                                             // 0x00120198: addiu $sp, $sp, 0x40
}