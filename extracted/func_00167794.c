void func_00167794() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00167794: addiu $sp, $sp, -0x40
    v1 = v1 - a1;                                               // 0x00167798: subu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001677a0: sll $v1, $v1, 2
    v1 = v1 + a1;                                               // 0x001677a8: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001677b0: sll $v1, $v1, 2
    a2 = s2 + 0x1140;                                           // 0x001677b8: addiu $a2, $s2, 0x1140
    if (s1 == 0) goto label_0x167864;                           // 0x001677d0: beqz $s1, 0x167864
    a2 = a2 + v1;                                               // 0x001677d4: addu $a2, $a2, $v1
    v0 = *(int32_t*)((a2) + 4);                                 // 0x001677d8: lw $v0, 4($a2)
    /* bnezl $v0, 0x1677f8 */                                   // 0x001677dc: bnezl $v0, 0x1677f8
    s0 = a2 + 0x10;                                             // 0x001677e0: addiu $s0, $a2, 0x10
    a1 = 0xff00 << 16;                                          // 0x001677e4: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x001677e8: jal 0x1698d0
    a1 = a1 | 0x401;                                            // 0x001677ec: ori $a1, $a1, 0x401
    goto label_0x167868;                                        // 0x001677f0: b 0x167868
    func_00169ba0();  // 0x169b88                                // 0x001677f8: jal 0x169b88
    v0 = *(int32_t*)((s0) + 0x24);                              // 0x00167804: lw $v0, 0x24($s0)
    a1 = 0xff00 << 16;                                          // 0x00167808: lui $a1, 0xff00
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x0016780c: lw $v1, 0x1c($s0)
    a1 = a1 | 0x407;                                            // 0x00167810: ori $a1, $a1, 0x407
    v0 = v0 + s1;                                               // 0x00167814: addu $v0, $v0, $s1
    a2 = v0 - v1;                                               // 0x00167818: subu $a2, $v0, $v1
    v1 = (v0 < v1) ? 1 : 0;                                     // 0x0016781c: slt $v1, $v0, $v1
    if (v1 != 0) goto label_0x16782c;                           // 0x00167820: bnez $v1, 0x16782c
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x00167824: sw $v0, 0x24($s0)
    *(uint32_t*)((s0) + 0x24) = a2;                             // 0x00167828: sw $a2, 0x24($s0)
label_0x16782c:
    v0 = *(int32_t*)((s0) + 0x2c);                              // 0x0016782c: lw $v0, 0x2c($s0)
    v1 = *(int32_t*)((s0) + 0x28);                              // 0x00167830: lw $v1, 0x28($s0)
    v0 = v0 + s1;                                               // 0x00167834: addu $v0, $v0, $s1
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x00167838: slt $v1, $v1, $v0
    if (v1 == 0) goto label_0x167850;                           // 0x0016783c: beqz $v1, 0x167850
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x00167840: sw $v0, 0x2c($s0)
    func_00169940();  // 0x1698d0                                // 0x00167844: jal 0x1698d0
    /* nop */                                                   // 0x00167848: nop 
label_0x167850:
    v0 = 1;                                                     // 0x00167850: addiu $v0, $zero, 1
    func_00169bc8();  // 0x169ba0                                // 0x00167858: jal 0x169ba0
    *(uint32_t*)((s2) + 0x44) = v0;                             // 0x0016785c: sw $v0, 0x44($s2)
label_0x167864:
label_0x167868:
    return;                                                     // 0x00167878: jr $ra
    sp = sp + 0x40;                                             // 0x0016787c: addiu $sp, $sp, 0x40
}