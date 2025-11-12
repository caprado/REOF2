void func_00180340() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00180340: addiu $sp, $sp, -0x50
    v1 = 0x334;                                                 // 0x00180344: addiu $v1, $zero, 0x334
    /* multiply: s1 * v1 -> hi:lo */                            // 0x00180354: mult $ac3, $s1, $v1
    s2 = 0x26 << 16;                                            // 0x00180358: lui $s2, 0x26
    v0 = s2 + 0x7908;                                           // 0x00180360: addiu $v0, $s2, 0x7908
    v0 = v0 + v1;                                               // 0x00180368: addu $v0, $v0, $v1
    a0 = g_0026790c;  // Global at 0x0026790c                   // 0x0018036c: lw $a0, 4($v0)
    if (a0 != 0) goto label_0x180388;                           // 0x00180370: bnez $a0, 0x180388
    /* nop */                                                   // 0x00180374: nop 
    func_00180630();  // 0x1805d8                                // 0x00180378: jal 0x1805d8
    if (v0 < 0) goto label_0x180468;                            // 0x00180380: bltz $v0, 0x180468
label_0x180388:
    func_00180760();  // 0x180700                                // 0x00180388: jal 0x180700
    if (v0 == 0) goto label_0x1803cc;                           // 0x00180390: beqz $v0, 0x1803cc
    v0 = -0x4000;                                               // 0x00180394: addiu $v0, $zero, -0x4000
    func_00180700();  // 0x180698                                // 0x00180398: jal 0x180698
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001803a4: lw $v0, 4($s0)
    /* bnezl $v0, 0x1803c4 */                                   // 0x001803a8: bnezl $v0, 0x1803c4
    v0 = *(uint8_t*)(s0);                                       // 0x001803ac: lbu $v0, 0($s0)
    func_00180630();  // 0x1805d8                                // 0x001803b0: jal 0x1805d8
    if (v0 < 0) goto label_0x180444;                            // 0x001803b8: bltz $v0, 0x180444
    v0 = 0x334;                                                 // 0x001803bc: addiu $v0, $zero, 0x334
    v0 = *(uint8_t*)(s0);                                       // 0x001803c0: lbu $v0, 0($s0)
    goto label_0x180464;                                        // 0x001803c4: b 0x180464
    local_0 = v0;                                               // 0x001803c8: sb $v0, 0($sp)
label_0x1803cc:
    v1 = 0xc;                                                   // 0x001803cc: addiu $v1, $zero, 0xc
    s0 = s0 & v0;                                               // 0x001803d0: and $s0, $s0, $v0
    a0 = 0xffff << 16;                                          // 0x001803d4: lui $a0, 0xffff
    a0 = a0 | 0x3fff;                                           // 0x001803d8: ori $a0, $a0, 0x3fff
    s0 = s0 | v1;                                               // 0x001803dc: or $s0, $s0, $v1
    v0 = 0 | 0x8000;                                            // 0x001803e0: ori $v0, $zero, 0x8000
    s0 = s0 & a0;                                               // 0x001803e4: and $s0, $s0, $a0
    v1 = 0xff00 << 16;                                          // 0x001803e8: lui $v1, 0xff00
    v1 = v1 | 0xffff;                                           // 0x001803ec: ori $v1, $v1, 0xffff
    s0 = s0 | v0;                                               // 0x001803f0: or $s0, $s0, $v0
    a0 = 1 << 16;                                               // 0x001803f4: lui $a0, 1
    s0 = s0 & v1;                                               // 0x001803f8: and $s0, $s0, $v1
    v0 = -1;                                                    // 0x001803fc: addiu $v0, $zero, -1
    v0 = v0 | 0xff;                                             // 0x00180404: ori $v0, $v0, 0xff
    v0 = v0 | 0xffff;                                           // 0x0018040c: ori $v0, $v0, 0xffff
    s0 = s0 | a0;                                               // 0x00180410: or $s0, $s0, $a0
    v1 = 0x100 << 16;                                           // 0x00180414: lui $v1, 0x100
    s0 = s0 & v0;                                               // 0x00180418: and $s0, $s0, $v0
    s0 = s0 | v1;                                               // 0x00180420: or $s0, $s0, $v1
    a2 = sp | 4;                                                // 0x00180424: ori $a2, $sp, 4
    func_001896c8();  // 0x1895d8                                // 0x00180430: jal 0x1895d8
    if (v0 >= 0) goto label_0x180468;                           // 0x00180438: bgezl $v0, 0x180468
    v0 = local_0;                                               // 0x0018043c: lbu $v0, 0($sp)
    v0 = 0x334;                                                 // 0x00180440: addiu $v0, $zero, 0x334
label_0x180444:
    v1 = s2 + 0x7908;                                           // 0x00180444: addiu $v1, $s2, 0x7908
    /* multiply: s1 * v0 -> hi:lo */                            // 0x00180448: mult $ac2, $s1, $v0
    v1 = v1 + v0;                                               // 0x00180450: addu $v1, $v1, $v0
    func_001805d8();  // 0x180560                                // 0x00180454: jal 0x180560
    g_0026790c = 0;  // Global at 0x0026790c                    // 0x00180458: sw $zero, 4($v1)
    goto label_0x180468;                                        // 0x0018045c: b 0x180468
label_0x180464:
    v0 = local_0;                                               // 0x00180464: lbu $v0, 0($sp)
label_0x180468:
    return;                                                     // 0x00180478: jr $ra
    sp = sp + 0x50;                                             // 0x0018047c: addiu $sp, $sp, 0x50
}