void func_001216e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001216e8: addiu $sp, $sp, -0x40
    v1 = 0x7fff << 16;                                          // 0x00121710: lui $v1, 0x7fff
    v0 = 0x440f << 16;                                          // 0x00121714: lui $v0, 0x440f
    v1 = v1 | 0xffff;                                           // 0x00121718: ori $v1, $v1, 0xffff
    v0 = v0 | 0xffff;                                           // 0x0012171c: ori $v0, $v0, 0xffff
    s0 = s5 & v1;                                               // 0x00121720: and $s0, $s5, $v1
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121724: slt $v0, $v0, $s0
    if (v0 == 0) goto label_0x1217c8;                           // 0x00121728: beqz $v0, 0x1217c8
    v1 = 0x7ff0 << 16;                                          // 0x0012173c: lui $v1, 0x7ff0
    v0 = (v1 < s0) ? 1 : 0;                                     // 0x00121740: slt $v0, $v1, $s0
    if (v0 != 0) goto label_0x12175c;                           // 0x00121744: bnez $v0, 0x12175c
    /* nop */                                                   // 0x00121748: nop 
    if (s0 != v1) goto label_0x121770;                          // 0x0012174c: bne $s0, $v1, 0x121770
    /* nop */                                                   // 0x00121750: nop 
    if (a1 == 0) goto label_0x121770;                           // 0x00121754: beqz $a1, 0x121770
    /* nop */                                                   // 0x00121758: nop 
label_0x12175c:
    func_001119f0();  // 0x111998                                // 0x00121760: jal 0x111998
    /* nop */                                                   // 0x00121764: nop 
    goto label_0x121b90;                                        // 0x00121768: b 0x121b90
label_0x121770:
    if (s5 <= 0) goto label_0x121798;                           // 0x00121770: blez $s5, 0x121798
    v0 = 0x22 << 16;                                            // 0x00121774: lui $v0, 0x22
    v1 = 0x22 << 16;                                            // 0x00121778: lui $v1, 0x22
    func_001119f0();  // 0x111998                                // 0x00121784: jal 0x111998
    /* nop */                                                   // 0x00121788: nop 
    goto label_0x121b90;                                        // 0x0012178c: b 0x121b90
    /* nop */                                                   // 0x00121794: nop 
label_0x121798:
    func_00111a58();  // 0x1119f0                                // 0x001217a0: jal 0x1119f0
    /* nop */                                                   // 0x001217a4: nop 
    v1 = 0x22 << 16;                                            // 0x001217a8: lui $v1, 0x22
    func_00111a58();  // 0x1119f0                                // 0x001217b4: jal 0x1119f0
    /* nop */                                                   // 0x001217b8: nop 
    goto label_0x121b90;                                        // 0x001217bc: b 0x121b90
    /* nop */                                                   // 0x001217c4: nop 
label_0x1217c8:
    v0 = 0x3fdb << 16;                                          // 0x001217c8: lui $v0, 0x3fdb
    v0 = v0 | 0xffff;                                           // 0x001217cc: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x001217d0: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x121828;                           // 0x001217d4: bnez $v0, 0x121828
    v0 = 0x3e1f << 16;                                          // 0x001217d8: lui $v0, 0x3e1f
    v0 = v0 | 0xffff;                                           // 0x001217dc: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x001217e0: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x121960;                           // 0x001217e4: bnez $v0, 0x121960
    s4 = -1;                                                    // 0x001217e8: addiu $s4, $zero, -1
    v0 = 0x22 << 16;                                            // 0x001217ec: lui $v0, 0x22
    func_001119f0();  // 0x111998                                // 0x001217f4: jal 0x111998
    /* nop */                                                   // 0x001217f8: nop 
    a1 = 0 | 0xffc0;                                            // 0x001217fc: ori $a1, $zero, 0xffc0
    func_00111f90();  // 0x111f40                                // 0x00121808: jal 0x111f40
    /* nop */                                                   // 0x0012180c: nop 
    if (v0 <= 0) goto label_0x121960;                           // 0x00121810: blez $v0, 0x121960
    goto label_0x121b94;                                        // 0x0012181c: b 0x121b94
    /* nop */                                                   // 0x00121824: nop 
label_0x121828:
    func_00121be8();  // 0x121bb0                                // 0x00121828: jal 0x121bb0
    /* nop */                                                   // 0x0012182c: nop 
    v0 = 0x3ff2 << 16;                                          // 0x00121834: lui $v0, 0x3ff2
    v0 = v0 | 0xffff;                                           // 0x00121838: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x0012183c: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x1218e8;                           // 0x00121840: bnez $v0, 0x1218e8
    v0 = 0x4003 << 16;                                          // 0x00121844: lui $v0, 0x4003
    v0 = 0x3fe5 << 16;                                          // 0x00121848: lui $v0, 0x3fe5
    v0 = v0 | 0xffff;                                           // 0x0012184c: ori $v0, $v0, 0xffff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x00121850: slt $v0, $v0, $s0
    if (v0 != 0) goto label_0x1218a8;                           // 0x00121854: bnez $v0, 0x1218a8
    /* nop */                                                   // 0x00121858: nop 
    func_001119f0();  // 0x111998                                // 0x00121864: jal 0x111998
    a1 = 0 | 0xffc0;                                            // 0x0012186c: ori $a1, $zero, 0xffc0
    func_00111a58();  // 0x1119f0                                // 0x00121878: jal 0x1119f0
    /* nop */                                                   // 0x0012187c: nop 
    a1 = 0 | 0x8000;                                            // 0x00121884: ori $a1, $zero, 0x8000
    func_001119f0();  // 0x111998                                // 0x00121890: jal 0x111998
    /* nop */                                                   // 0x00121894: nop 
    goto label_0x121954;                                        // 0x001218a0: b 0x121954
    /* nop */                                                   // 0x001218a4: nop 
label_0x1218a8:
    s1 = 0 | 0xffc0;                                            // 0x001218a8: ori $s1, $zero, 0xffc0
    func_00111a58();  // 0x1119f0                                // 0x001218b8: jal 0x1119f0
    s4 = 1;                                                     // 0x001218bc: addiu $s4, $zero, 1
    func_001119f0();  // 0x111998                                // 0x001218cc: jal 0x111998
    /* nop */                                                   // 0x001218d0: nop 
    goto label_0x121954;                                        // 0x001218dc: b 0x121954
    /* nop */                                                   // 0x001218e0: nop 
    /* nop */                                                   // 0x001218e4: nop 
label_0x1218e8:
    v0 = v0 | 0x7fff;                                           // 0x001218e8: ori $v0, $v0, 0x7fff
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x001218ec: slt $v0, $v0, $s0
    /* bnezl $v0, 0x121948 */                                   // 0x001218f0: bnezl $v0, 0x121948
    s4 = 3;                                                     // 0x001218f4: addiu $s4, $zero, 3
    s0 = 0 | 0xffe0;                                            // 0x001218f8: ori $s0, $zero, 0xffe0
    func_00111a58();  // 0x1119f0                                // 0x00121908: jal 0x1119f0
    s4 = 2;                                                     // 0x0012190c: addiu $s4, $zero, 2
    func_00111ce0();  // 0x111a58                                // 0x0012191c: jal 0x111a58
    /* nop */                                                   // 0x00121920: nop 
    a1 = 0 | 0xffc0;                                            // 0x00121924: ori $a1, $zero, 0xffc0
    func_001119f0();  // 0x111998                                // 0x00121930: jal 0x111998
    /* nop */                                                   // 0x00121934: nop 
    goto label_0x121954;                                        // 0x00121940: b 0x121954
    /* nop */                                                   // 0x00121944: nop 
    a0 = 0 | 0xbff0;                                            // 0x00121948: ori $a0, $zero, 0xbff0
label_0x121954:
    func_00111e20();  // 0x111ce0                                // 0x00121954: jal 0x111ce0
    /* nop */                                                   // 0x00121958: nop 
label_0x121960:
    func_00111ce0();  // 0x111a58                                // 0x00121968: jal 0x111a58
    s0 = 0x22 << 16;                                            // 0x0012196c: lui $s0, 0x22
    func_00111ce0();  // 0x111a58                                // 0x0012197c: jal 0x111a58
    s0 = s0 + 0x1ab8;                                           // 0x00121980: addiu $s0, $s0, 0x1ab8
    func_00111ce0();  // 0x111a58                                // 0x00121990: jal 0x111a58
    /* nop */                                                   // 0x00121994: nop 
    func_001119f0();  // 0x111998                                // 0x001219a0: jal 0x111998
    /* nop */                                                   // 0x001219a4: nop 
    func_00111ce0();  // 0x111a58                                // 0x001219b0: jal 0x111a58
    /* nop */                                                   // 0x001219b4: nop 
    func_001119f0();  // 0x111998                                // 0x001219c0: jal 0x111998
    /* nop */                                                   // 0x001219c4: nop 
    func_00111ce0();  // 0x111a58                                // 0x001219d0: jal 0x111a58
    /* nop */                                                   // 0x001219d4: nop 
    func_001119f0();  // 0x111998                                // 0x001219e0: jal 0x111998
    /* nop */                                                   // 0x001219e4: nop 
    func_00111ce0();  // 0x111a58                                // 0x001219f0: jal 0x111a58
    /* nop */                                                   // 0x001219f4: nop 
    func_001119f0();  // 0x111998                                // 0x00121a00: jal 0x111998
    /* nop */                                                   // 0x00121a04: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121a10: jal 0x111a58
    /* nop */                                                   // 0x00121a14: nop 
    func_001119f0();  // 0x111998                                // 0x00121a20: jal 0x111998
    /* nop */                                                   // 0x00121a24: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121a30: jal 0x111a58
    /* nop */                                                   // 0x00121a34: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121a44: jal 0x111a58
    /* nop */                                                   // 0x00121a48: nop 
    func_001119f0();  // 0x111998                                // 0x00121a54: jal 0x111998
    /* nop */                                                   // 0x00121a58: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121a64: jal 0x111a58
    /* nop */                                                   // 0x00121a68: nop 
    func_001119f0();  // 0x111998                                // 0x00121a74: jal 0x111998
    /* nop */                                                   // 0x00121a78: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121a84: jal 0x111a58
    /* nop */                                                   // 0x00121a88: nop 
    func_001119f0();  // 0x111998                                // 0x00121a94: jal 0x111998
    /* nop */                                                   // 0x00121a98: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121aa4: jal 0x111a58
    /* nop */                                                   // 0x00121aa8: nop 
    func_001119f0();  // 0x111998                                // 0x00121ab4: jal 0x111998
    /* nop */                                                   // 0x00121ab8: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121ac4: jal 0x111a58
    /* nop */                                                   // 0x00121ac8: nop 
    if (s4 >= 0) goto label_0x121b10;                           // 0x00121acc: bgez $s4, 0x121b10
    /* nop */                                                   // 0x00121ad0: nop 
    func_001119f0();  // 0x111998                                // 0x00121adc: jal 0x111998
    /* nop */                                                   // 0x00121ae0: nop 
    func_00111ce0();  // 0x111a58                                // 0x00121aec: jal 0x111a58
    /* nop */                                                   // 0x00121af0: nop 
    func_00111a58();  // 0x1119f0                                // 0x00121afc: jal 0x1119f0
    /* nop */                                                   // 0x00121b00: nop 
    goto label_0x121b90;                                        // 0x00121b04: b 0x121b90
    /* nop */                                                   // 0x00121b0c: nop 
label_0x121b10:
    func_001119f0();  // 0x111998                                // 0x00121b18: jal 0x111998
    s0 = s4 << 3;                                               // 0x00121b1c: sll $s0, $s4, 3
    func_00111ce0();  // 0x111a58                                // 0x00121b28: jal 0x111a58
    /* nop */                                                   // 0x00121b2c: nop 
    a1 = 0x22 << 16;                                            // 0x00121b30: lui $a1, 0x22
    a1 = a1 + s0;                                               // 0x00121b34: addu $a1, $a1, $s0
    at = 0x22 << 16;                                            // 0x00121b40: lui $at, 0x22
    at = at + 0x1a78;                                           // 0x00121b44: addiu $at, $at, 0x1a78
    s0 = at + s0;                                               // 0x00121b48: addu $s0, $at, $s0
    func_00111a58();  // 0x1119f0                                // 0x00121b4c: jal 0x1119f0
    /* nop */                                                   // 0x00121b50: nop 
    func_00111a58();  // 0x1119f0                                // 0x00121b5c: jal 0x1119f0
    /* nop */                                                   // 0x00121b60: nop 
    func_00111a58();  // 0x1119f0                                // 0x00121b6c: jal 0x1119f0
    /* nop */                                                   // 0x00121b70: nop 
    if (s5 >= 0) goto label_0x121b90;                           // 0x00121b74: bgez $s5, 0x121b90
    func_00111a58();  // 0x1119f0                                // 0x00121b84: jal 0x1119f0
    /* nop */                                                   // 0x00121b88: nop 
label_0x121b90:
label_0x121b94:
    return;                                                     // 0x00121ba8: jr $ra
    sp = sp + 0x40;                                             // 0x00121bac: addiu $sp, $sp, 0x40
}