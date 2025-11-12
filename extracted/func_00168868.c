void func_00168868() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2, local_3, local_6, local_8, local_9, local_a;
    
    sp = sp + -0x20;                                            // 0x00168868: addiu $sp, $sp, -0x20
    func_00168a00();  // 0x168930                                // 0x00168888: jal 0x168930
    if (v0 == 0) goto label_0x16891c;                           // 0x00168890: beqz $v0, 0x16891c
    v1 = 2;                                                     // 0x00168894: addiu $v1, $zero, 2
    v0 = local_0;                                               // 0x00168898: lbu $v0, 0($sp)
    if (v0 != v1) goto label_0x1688ec;                          // 0x0016889c: bne $v0, $v1, 0x1688ec
    v0 = 0x21 << 16;                                            // 0x001688a0: lui $v0, 0x21
    v0 = local_2;                                               // 0x001688a4: lbu $v0, 2($sp)
    if (v0 == 0) goto label_0x1688e8;                           // 0x001688a8: beqz $v0, 0x1688e8
    v0 = local_3;                                               // 0x001688ac: lbu $v0, 3($sp)
    if (v0 != 0) goto label_0x1688ec;                           // 0x001688b0: bnez $v0, 0x1688ec
    v0 = 0x21 << 16;                                            // 0x001688b4: lui $v0, 0x21
    v0 = local_6;                                               // 0x001688b8: lbu $v0, 6($sp)
    a0 = local_3;                                               // 0x001688bc: lbu $a0, 3($sp)
    v0 = v0 << 2;                                               // 0x001688c0: sll $v0, $v0, 2
    v1 = 0x23 << 16;                                            // 0x001688c4: lui $v1, 0x23
    v1 = v1 + v0;                                               // 0x001688c8: addu $v1, $v1, $v0
    v1 = g_00228ee0;  // Global at 0x00228ee0                   // 0x001688cc: lbu $v1, -0x7120($v1)
    a0 = a0 << 2;                                               // 0x001688d0: sll $a0, $a0, 2
    *(uint8_t*)((s0) + 0x28) = v1;                              // 0x001688d4: sb $v1, 0x28($s0)
    v0 = 0x23 << 16;                                            // 0x001688d8: lui $v0, 0x23
    v0 = v0 + a0;                                               // 0x001688dc: addu $v0, $v0, $a0
    v0 = g_00228ef0;  // Global at 0x00228ef0                   // 0x001688e0: lw $v0, -0x7110($v0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001688e4: sw $v0, 0x2c($s0)
label_0x1688e8:
    v0 = 0x21 << 16;                                            // 0x001688e8: lui $v0, 0x21
label_0x1688ec:
    a2 = v0 + 0x5570;                                           // 0x001688ec: addiu $a2, $v0, 0x5570
    a0 = local_8;                                               // 0x001688f8: lb $a0, 8($sp)
    a1 = local_9;                                               // 0x001688fc: lb $a1, 9($sp)
    g_00215578 = a0;  // Global at 0x00215578                   // 0x00168908: sb $a0, 8($a2)
    g_00215579 = a1;  // Global at 0x00215579                   // 0x0016890c: sb $a1, 9($a2)
    v1 = local_a;                                               // 0x00168910: lb $v1, 0xa($sp)
    g_0021557a = v1;  // Global at 0x0021557a                   // 0x00168914: sb $v1, 0xa($a2)
    v0 = 1;                                                     // 0x00168918: addiu $v0, $zero, 1
label_0x16891c:
    return;                                                     // 0x00168924: jr $ra
    sp = sp + 0x20;                                             // 0x00168928: addiu $sp, $sp, 0x20
}