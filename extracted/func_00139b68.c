void func_00139b68() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00139b68: addiu $sp, $sp, -0x40
    if (s0 != 0) goto label_0x139bc0;                           // 0x00139b8c: bnez $s0, 0x139bc0
    a1 = 0x22 << 16;                                            // 0x00139b94: lui $a1, 0x22
    a1 = &str_00225468;  // "E0092913:nsct < 0.(dvCiReqRd)"     // 0x00139ba0: addiu $a1, $a1, 0x5468
    return func_001392e8();  // Tail call                        // 0x00139bb8: j 0x1392b8
    sp = sp + 0x40;                                             // 0x00139bbc: addiu $sp, $sp, 0x40
label_0x139bc0:
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x00139bc0: lbu $v0, 2($s0)
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00139bc4: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x139c48 */                                   // 0x00139bc8: bnezl $v0, 0x139c48
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00139bd0: lw $a0, 0x1c($s0)
    if (a0 == 0) goto label_0x139be4;                           // 0x00139bd4: beqz $a0, 0x139be4
    s1 = 9 << 16;                                               // 0x00139bd8: lui $s1, 9
    func_00137528();  // 137528                                // 0x00139bdc: jal 0x137528
    /* nop */                                                   // 0x00139be0: nop 
label_0x139be4:
    s3 = 2;                                                     // 0x00139be4: addiu $s3, $zero, 2
    s1 = s1 | 0xffff;                                           // 0x00139be8: ori $s1, $s1, 0xffff
    s4 = 0x20 << 16;                                            // 0x00139bec: lui $s4, 0x20
    s5 = 0x22 << 16;                                            // 0x00139bf0: lui $s5, 0x22
    /* nop */                                                   // 0x00139bf4: nop 
label_0x139bf8:
    func_00137a40();  // 137a40                                // 0x00139bf8: jal 0x137a40
    /* nop */                                                   // 0x00139bfc: nop 
    func_00139458();  // 139458                                // 0x00139c00: jal 0x139458
    /* nop */                                                   // 0x00139c04: nop 
    func_00139c68();  // 139c68                                // 0x00139c08: jal 0x139c68
    v1 = *(int8_t*)((s0) + 2);                                  // 0x00139c10: lb $v1, 2($s0)
    if (v1 != s3) goto label_0x139c40;                          // 0x00139c14: bnel $v1, $s3, 0x139c40
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00139c18: sw $zero, 0x14($s0)
    s2 = s2 + 1;                                                // 0x00139c1c: addiu $s2, $s2, 1
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x00139c20: slt $v0, $s1, $s2
    if (v0 == 0) goto label_0x139bf8;                           // 0x00139c24: beqz $v0, 0x139bf8
    v0 = g_00203ee8;  // Global at 0x00203ee8                   // 0x00139c28: lw $v0, 0x3ee8($s4)
    if (v0 == v1) goto label_0x139c40;                          // 0x00139c2c: beql $v0, $v1, 0x139c40
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00139c30: sw $zero, 0x14($s0)
    func_00116508();  // 116508                                // 0x00139c34: jal 0x116508
    a0 = &str_002254c8;  // "DVCI: \\"                          // 0x00139c38: addiu $a0, $s5, 0x54c8
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x00139c3c: sw $zero, 0x14($s0)
label_0x139c40:
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x00139c40: sb $zero, 2($s0)
    return;                                                     // 0x00139c60: jr $ra
    sp = sp + 0x40;                                             // 0x00139c64: addiu $sp, $sp, 0x40
}