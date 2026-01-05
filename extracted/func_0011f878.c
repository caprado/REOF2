void func_0011f878() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0011f878: addiu $sp, $sp, -0x50
    v0 = 0xf << 16;                                             // 0x0011f8b8: lui $v0, 0xf
    v0 = v0 | 0xffff;                                           // 0x0011f8bc: ori $v0, $v0, 0xffff
    v0 = (v0 < s3) ? 1 : 0;                                     // 0x0011f8c0: slt $v0, $v0, $s3
    if (v0 != 0) goto label_0x11f940;                           // 0x0011f8c4: bnez $v0, 0x11f940
    v0 = 0x7fff << 16;                                          // 0x0011f8cc: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x0011f8d0: ori $v0, $v0, 0xffff
    v0 = s3 & v0;                                               // 0x0011f8d4: and $v0, $s3, $v0
    v0 = v0 | a1;                                               // 0x0011f8d8: or $v0, $v0, $a1
    if (v0 != 0) goto label_0x11f8f8;                           // 0x0011f8dc: bnez $v0, 0x11f8f8
    v1 = 0x22 << 16;                                            // 0x0011f8e4: lui $v1, 0x22
    goto label_0x11fe58;                                        // 0x0011f8ec: b 0x11fe58
    /* nop */                                                   // 0x0011f8f4: nop 
label_0x11f8f8:
    if (s3 >= 0) goto label_0x11f928;                           // 0x0011f8f8: bgez $s3, 0x11f928
    /* nop */                                                   // 0x0011f8fc: nop 
    func_001119f0();  // 1119f0                                // 0x0011f904: jal 0x1119f0
    /* nop */                                                   // 0x0011f908: nop 
    func_00111ce0();  // 111ce0                                // 0x0011f914: jal 0x111ce0
    /* nop */                                                   // 0x0011f918: nop 
    goto label_0x11fe54;                                        // 0x0011f91c: b 0x11fe54
    /* nop */                                                   // 0x0011f924: nop 
label_0x11f928:
    a1 = 0 | 0x86a0;                                            // 0x0011f928: ori $a1, $zero, 0x86a0
    func_00111a58();  // 111a58                                // 0x0011f930: jal 0x111a58
    fp = -0x36;                                                 // 0x0011f934: addiu $fp, $zero, -0x36
label_0x11f940:
    v0 = 0x7fef << 16;                                          // 0x0011f940: lui $v0, 0x7fef
    v0 = v0 | 0xffff;                                           // 0x0011f944: ori $v0, $v0, 0xffff
    v0 = (v0 < s3) ? 1 : 0;                                     // 0x0011f948: slt $v0, $v0, $s3
    /* beqzl $v0, 0x11f970 */                                   // 0x0011f94c: beqzl $v0, 0x11f970
    s0 = 0xf << 16;                                             // 0x0011f950: lui $s0, 0xf
    func_00111998();  // 111998                                // 0x0011f95c: jal 0x111998
    /* nop */                                                   // 0x0011f960: nop 
    goto label_0x11fe54;                                        // 0x0011f964: b 0x11fe54
    /* nop */                                                   // 0x0011f96c: nop 
    v0 = s3 >> 0x14;                                            // 0x0011f970: sra $v0, $s3, 0x14
    s0 = s0 | 0xffff;                                           // 0x0011f974: ori $s0, $s0, 0xffff
    v0 = fp + v0;                                               // 0x0011f978: addu $v0, $fp, $v0
    s3 = s3 & s0;                                               // 0x0011f97c: and $s3, $s3, $s0
    a1 = 0x10 << 16;                                            // 0x0011f980: lui $a1, 0x10
    a0 = 9 << 16;                                               // 0x0011f984: lui $a0, 9
    a0 = a0 | 0x5f64;                                           // 0x0011f988: ori $a0, $a0, 0x5f64
    a0 = a0 + s3;                                               // 0x0011f98c: addu $a0, $a0, $s3
    fp = v0 + -0x3ff;                                           // 0x0011f990: addiu $fp, $v0, -0x3ff
    s6 = a0 & a1;                                               // 0x0011f994: and $s6, $a0, $a1
    v0 = 0x3ff0 << 16;                                          // 0x0011f998: lui $v0, 0x3ff0
    a0 = 0xffff << 16;                                          // 0x0011f99c: lui $a0, 0xffff
    v0 = s6 ^ v0;                                               // 0x0011f9a4: xor $v0, $s6, $v0
    v1 = v1 & a0;                                               // 0x0011f9a8: and $v1, $v1, $a0
    v0 = v0 | s3;                                               // 0x0011f9ac: or $v0, $v0, $s3
    v1 = v1 | v0;                                               // 0x0011f9b4: or $v1, $v1, $v0
    a2 = s6 >> 0x14;                                            // 0x0011f9b8: sra $a2, $s6, 0x14
    a1 = 0 | 0xffc0;                                            // 0x0011f9bc: ori $a1, $zero, 0xffc0
    func_001119f0();  // 1119f0                                // 0x0011f9c8: jal 0x1119f0
    fp = fp + a2;                                               // 0x0011f9cc: addu $fp, $fp, $a2
    v0 = s3 + 2;                                                // 0x0011f9d4: addiu $v0, $s3, 2
    v0 = v0 & s0;                                               // 0x0011f9d8: and $v0, $v0, $s0
    v0 = (v0 < 3) ? 1 : 0;                                      // 0x0011f9dc: slti $v0, $v0, 3
    if (v0 == 0) goto label_0x11fb38;                           // 0x0011f9e0: beqz $v0, 0x11fb38
    /* nop */                                                   // 0x0011f9e4: nop 
    func_00111f40();  // 111f40                                // 0x0011f9f4: jal 0x111f40
    /* nop */                                                   // 0x0011f9f8: nop 
    if (v0 != 0) goto label_0x11fa60;                           // 0x0011f9fc: bnez $v0, 0x11fa60
    /* nop */                                                   // 0x0011fa00: nop 
    /* beqzl $fp, 0x11fe54 */                                   // 0x0011fa08: beqzl $fp, 0x11fe54
    func_00111f90();  // 111f90                                // 0x0011fa10: jal 0x111f90
    at = 0x22 << 16;                                            // 0x0011fa18: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fa28: jal 0x111a58
    /* nop */                                                   // 0x0011fa2c: nop 
    at = 0x22 << 16;                                            // 0x0011fa34: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fa40: jal 0x111a58
    /* nop */                                                   // 0x0011fa44: nop 
    func_00111998();  // 111998                                // 0x0011fa50: jal 0x111998
    /* nop */                                                   // 0x0011fa54: nop 
    goto label_0x11fe54;                                        // 0x0011fa58: b 0x11fe54
label_0x11fa60:
    func_00111a58();  // 111a58                                // 0x0011fa68: jal 0x111a58
    /* nop */                                                   // 0x0011fa6c: nop 
    at = 0x22 << 16;                                            // 0x0011fa74: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fa80: jal 0x111a58
    /* nop */                                                   // 0x0011fa84: nop 
    a0 = 0 | 0xff80;                                            // 0x0011fa88: ori $a0, $zero, 0xff80
    func_001119f0();  // 1119f0                                // 0x0011fa94: jal 0x1119f0
    /* nop */                                                   // 0x0011fa98: nop 
    func_00111a58();  // 111a58                                // 0x0011faa4: jal 0x111a58
    /* nop */                                                   // 0x0011faa8: nop 
    if (fp != 0) goto label_0x11fad0;                           // 0x0011fab0: bnez $fp, 0x11fad0
    /* nop */                                                   // 0x0011fab4: nop 
    func_001119f0();  // 1119f0                                // 0x0011fac0: jal 0x1119f0
    /* nop */                                                   // 0x0011fac4: nop 
    goto label_0x11fe54;                                        // 0x0011fac8: b 0x11fe54
label_0x11fad0:
    func_00111f90();  // 111f90                                // 0x0011fad0: jal 0x111f90
    at = 0x22 << 16;                                            // 0x0011fad8: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fae8: jal 0x111a58
    /* nop */                                                   // 0x0011faec: nop 
    at = 0x22 << 16;                                            // 0x0011faf4: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fb00: jal 0x111a58
    /* nop */                                                   // 0x0011fb04: nop 
    func_001119f0();  // 1119f0                                // 0x0011fb10: jal 0x1119f0
    /* nop */                                                   // 0x0011fb14: nop 
    func_001119f0();  // 1119f0                                // 0x0011fb20: jal 0x1119f0
    /* nop */                                                   // 0x0011fb24: nop 
    goto label_0x11fdbc;                                        // 0x0011fb2c: b 0x11fdbc
    /* nop */                                                   // 0x0011fb30: nop 
    /* nop */                                                   // 0x0011fb34: nop 
label_0x11fb38:
    a1 = 0 | 0x8000;                                            // 0x0011fb38: ori $a1, $zero, 0x8000
    func_00111998();  // 111998                                // 0x0011fb44: jal 0x111998
    s0 = 6 << 16;                                               // 0x0011fb48: lui $s0, 6
    func_00111ce0();  // 111ce0                                // 0x0011fb54: jal 0x111ce0
    s0 = s0 | 0xb851;                                           // 0x0011fb58: ori $s0, $s0, 0xb851
    func_00111f90();  // 111f90                                // 0x0011fb60: jal 0x111f90
    func_00111a58();  // 111a58                                // 0x0011fb74: jal 0x111a58
    s0 = s0 - s3;                                               // 0x0011fb78: subu $s0, $s0, $s3
    v0 = 0xfff9 << 16;                                          // 0x0011fb80: lui $v0, 0xfff9
    v0 = v0 | 0xeb86;                                           // 0x0011fb8c: ori $v0, $v0, 0xeb86
    func_00111a58();  // 111a58                                // 0x0011fb90: jal 0x111a58
    s6 = s3 + v0;                                               // 0x0011fb94: addu $s6, $s3, $v0
    at = 0x22 << 16;                                            // 0x0011fb9c: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fba8: jal 0x111a58
    s6 = s6 | s0;                                               // 0x0011fbac: or $s6, $s6, $s0
    at = 0x22 << 16;                                            // 0x0011fbb0: lui $at, 0x22
    func_00111998();  // 111998                                // 0x0011fbbc: jal 0x111998
    /* nop */                                                   // 0x0011fbc0: nop 
    func_00111a58();  // 111a58                                // 0x0011fbcc: jal 0x111a58
    /* nop */                                                   // 0x0011fbd0: nop 
    at = 0x22 << 16;                                            // 0x0011fbd4: lui $at, 0x22
    func_00111998();  // 111998                                // 0x0011fbe0: jal 0x111998
    /* nop */                                                   // 0x0011fbe4: nop 
    func_00111a58();  // 111a58                                // 0x0011fbf0: jal 0x111a58
    /* nop */                                                   // 0x0011fbf4: nop 
    at = 0x22 << 16;                                            // 0x0011fbfc: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fc08: jal 0x111a58
    /* nop */                                                   // 0x0011fc0c: nop 
    at = 0x22 << 16;                                            // 0x0011fc10: lui $at, 0x22
    func_00111998();  // 111998                                // 0x0011fc1c: jal 0x111998
    /* nop */                                                   // 0x0011fc20: nop 
    func_00111a58();  // 111a58                                // 0x0011fc2c: jal 0x111a58
    /* nop */                                                   // 0x0011fc30: nop 
    at = 0x22 << 16;                                            // 0x0011fc34: lui $at, 0x22
    func_00111998();  // 111998                                // 0x0011fc40: jal 0x111998
    /* nop */                                                   // 0x0011fc44: nop 
    func_00111a58();  // 111a58                                // 0x0011fc50: jal 0x111a58
    /* nop */                                                   // 0x0011fc54: nop 
    at = 0x22 << 16;                                            // 0x0011fc58: lui $at, 0x22
    func_00111998();  // 111998                                // 0x0011fc64: jal 0x111998
    /* nop */                                                   // 0x0011fc68: nop 
    func_00111a58();  // 111a58                                // 0x0011fc74: jal 0x111a58
    /* nop */                                                   // 0x0011fc78: nop 
    func_00111998();  // 111998                                // 0x0011fc84: jal 0x111998
    /* nop */                                                   // 0x0011fc88: nop 
    if (s6 <= 0) goto label_0x11fd90;                           // 0x0011fc90: blez $s6, 0x11fd90
    /* nop */                                                   // 0x0011fc94: nop 
    a1 = 0 | 0xff80;                                            // 0x0011fc98: ori $a1, $zero, 0xff80
    func_00111a58();  // 111a58                                // 0x0011fca4: jal 0x111a58
    /* nop */                                                   // 0x0011fca8: nop 
    func_00111a58();  // 111a58                                // 0x0011fcb4: jal 0x111a58
    /* nop */                                                   // 0x0011fcb8: nop 
    if (fp != 0) goto label_0x11fd00;                           // 0x0011fcc0: bnez $fp, 0x11fd00
    /* nop */                                                   // 0x0011fcc4: nop 
    func_00111998();  // 111998                                // 0x0011fcd0: jal 0x111998
    /* nop */                                                   // 0x0011fcd4: nop 
    func_00111a58();  // 111a58                                // 0x0011fce0: jal 0x111a58
    /* nop */                                                   // 0x0011fce4: nop 
    func_001119f0();  // 1119f0                                // 0x0011fcf0: jal 0x1119f0
    /* nop */                                                   // 0x0011fcf4: nop 
    goto label_0x11fdb8;                                        // 0x0011fcf8: b 0x11fdb8
    /* nop */                                                   // 0x0011fcfc: nop 
label_0x11fd00:
    at = 0x22 << 16;                                            // 0x0011fd00: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fd0c: jal 0x111a58
    /* nop */                                                   // 0x0011fd10: nop 
    func_00111998();  // 111998                                // 0x0011fd20: jal 0x111998
    /* nop */                                                   // 0x0011fd24: nop 
    func_00111a58();  // 111a58                                // 0x0011fd30: jal 0x111a58
    /* nop */                                                   // 0x0011fd34: nop 
    at = 0x22 << 16;                                            // 0x0011fd3c: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fd48: jal 0x111a58
    /* nop */                                                   // 0x0011fd4c: nop 
    func_00111998();  // 111998                                // 0x0011fd58: jal 0x111998
    /* nop */                                                   // 0x0011fd5c: nop 
    func_001119f0();  // 1119f0                                // 0x0011fd68: jal 0x1119f0
    /* nop */                                                   // 0x0011fd6c: nop 
    func_001119f0();  // 1119f0                                // 0x0011fd78: jal 0x1119f0
    /* nop */                                                   // 0x0011fd7c: nop 
    goto label_0x11fdbc;                                        // 0x0011fd84: b 0x11fdbc
    /* nop */                                                   // 0x0011fd88: nop 
    /* nop */                                                   // 0x0011fd8c: nop 
label_0x11fd90:
    if (fp != 0) goto label_0x11fdd0;                           // 0x0011fd90: bnez $fp, 0x11fdd0
    /* nop */                                                   // 0x0011fd94: nop 
    func_001119f0();  // 1119f0                                // 0x0011fda0: jal 0x1119f0
    /* nop */                                                   // 0x0011fda4: nop 
    func_00111a58();  // 111a58                                // 0x0011fdb0: jal 0x111a58
    /* nop */                                                   // 0x0011fdb4: nop 
label_0x11fdb8:
label_0x11fdbc:
    func_001119f0();  // 1119f0                                // 0x0011fdc0: jal 0x1119f0
    /* nop */                                                   // 0x0011fdc4: nop 
    goto label_0x11fe54;                                        // 0x0011fdc8: b 0x11fe54
label_0x11fdd0:
    at = 0x22 << 16;                                            // 0x0011fdd0: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fddc: jal 0x111a58
    /* nop */                                                   // 0x0011fde0: nop 
    func_001119f0();  // 1119f0                                // 0x0011fdf0: jal 0x1119f0
    /* nop */                                                   // 0x0011fdf4: nop 
    func_00111a58();  // 111a58                                // 0x0011fe00: jal 0x111a58
    /* nop */                                                   // 0x0011fe04: nop 
    at = 0x22 << 16;                                            // 0x0011fe0c: lui $at, 0x22
    func_00111a58();  // 111a58                                // 0x0011fe18: jal 0x111a58
    /* nop */                                                   // 0x0011fe1c: nop 
    func_001119f0();  // 1119f0                                // 0x0011fe28: jal 0x1119f0
    /* nop */                                                   // 0x0011fe2c: nop 
    func_001119f0();  // 1119f0                                // 0x0011fe38: jal 0x1119f0
    /* nop */                                                   // 0x0011fe3c: nop 
    func_001119f0();  // 1119f0                                // 0x0011fe48: jal 0x1119f0
    /* nop */                                                   // 0x0011fe4c: nop 
label_0x11fe54:
label_0x11fe58:
    return;                                                     // 0x0011fe78: jr $ra
    sp = sp + 0x50;                                             // 0x0011fe7c: addiu $sp, $sp, 0x50
}