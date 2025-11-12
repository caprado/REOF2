void func_00189770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_30, local_4;
    
    sp = sp + -0xa0;                                            // 0x00189770: addiu $sp, $sp, -0xa0
    v0 = -0x4000;                                               // 0x00189774: addiu $v0, $zero, -0x4000
    v1 = 0xb;                                                   // 0x0018977c: addiu $v1, $zero, 0xb
    s4 = s4 & v0;                                               // 0x00189780: and $s4, $s4, $v0
    t1 = 0xffff << 16;                                          // 0x00189784: lui $t1, 0xffff
    t1 = t1 | 0x3fff;                                           // 0x00189788: ori $t1, $t1, 0x3fff
    s4 = s4 | v1;                                               // 0x0018978c: or $s4, $s4, $v1
    v0 = 0x4000;                                                // 0x00189790: addiu $v0, $zero, 0x4000
    s4 = s4 & t1;                                               // 0x00189794: and $s4, $s4, $t1
    v1 = 0xff00 << 16;                                          // 0x00189798: lui $v1, 0xff00
    v1 = v1 | 0xffff;                                           // 0x0018979c: ori $v1, $v1, 0xffff
    s4 = s4 | v0;                                               // 0x001897a0: or $s4, $s4, $v0
    t1 = 3 << 16;                                               // 0x001897a4: lui $t1, 3
    s4 = s4 & v1;                                               // 0x001897a8: and $s4, $s4, $v1
    v0 = -1;                                                    // 0x001897ac: addiu $v0, $zero, -1
    v0 = v0 | 0xff;                                             // 0x001897b4: ori $v0, $v0, 0xff
    v0 = v0 | 0xffff;                                           // 0x001897bc: ori $v0, $v0, 0xffff
    s4 = s4 | t1;                                               // 0x001897c0: or $s4, $s4, $t1
    s4 = s4 & v0;                                               // 0x001897c8: and $s4, $s4, $v0
    v1 = 0x28;                                                  // 0x001897e8: addiu $v1, $zero, 0x28
    v0 = 0x100 << 16;                                           // 0x001897ec: lui $v0, 0x100
    s4 = s4 | v0;                                               // 0x001897f0: or $s4, $s4, $v0
    local_4 = s0;                                               // 0x001897f4: sw $s0, 4($sp)
    local_30 = v1;                                              // 0x00189800: sw $v1, 0x30($sp)
    func_00107b68();  // 0x107ab8                                // 0x00189808: jal 0x107ab8
    a0 = sp | 8;                                                // 0x0018980c: ori $a0, $sp, 8
    s0 = s0 + sp;                                               // 0x00189810: addu $s0, $s0, $sp
    a0 = s0 + 8;                                                // 0x00189818: addiu $a0, $s0, 8
    func_00107b68();  // 0x107ab8                                // 0x00189820: jal 0x107ab8
    local_0 = s1;                                               // 0x00189824: sw $s1, 0($sp)
    a2 = sp + 0x30;                                             // 0x00189830: addiu $a2, $sp, 0x30
    func_00189470();  // 0x189310                                // 0x00189834: jal 0x189310
    return;                                                     // 0x00189854: jr $ra
    sp = sp + 0xa0;                                             // 0x00189858: addiu $sp, $sp, 0xa0
}