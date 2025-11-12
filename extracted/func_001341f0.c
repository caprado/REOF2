void func_001341f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001341f0: addiu $sp, $sp, -0x30
    func_0012c880();  // 0x12c878                                // 0x00134210: jal 0x12c878
    a0 = *(int32_t*)((s3) + 4);                                 // 0x00134214: lw $a0, 4($s3)
    v1 = 3;                                                     // 0x00134218: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x134290;                          // 0x0013421c: bnel $v0, $v1, 0x134290
    a0 = *(int32_t*)((s3) + 4);                                 // 0x00134224: lw $a0, 4($s3)
    s4 = 0x20 << 16;                                            // 0x0013422c: lui $s4, 0x20
    func_0012d480();  // 0x12d468                                // 0x00134230: jal 0x12d468
    s0 = s3 + 0x18;                                             // 0x00134234: addiu $s0, $s3, 0x18
    v0 = 0x20 << 16;                                            // 0x0013423c: lui $v0, 0x20
    goto label_0x13424c;                                        // 0x00134240: b 0x13424c
    g_00201da0 = s1;  // Global at 0x00201da0                   // 0x00134244: sw $s1, 0x1da0($v0)
label_0x134248:
    s2 = s2 + 1;                                                // 0x00134248: addiu $s2, $s2, 1
label_0x13424c:
    v0 = (s2 < s1) ? 1 : 0;                                     // 0x0013424c: slt $v0, $s2, $s1
    if (v0 == 0) goto label_0x13427c;                           // 0x00134250: beqz $v0, 0x13427c
    /* nop */                                                   // 0x00134254: nop 
    a0 = *(int32_t*)(s0);                                       // 0x00134258: lw $a0, 0($s0)
    s0 = s0 + 4;                                                // 0x0013425c: addiu $s0, $s0, 4
    v1 = *(int32_t*)(a0);                                       // 0x00134260: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00134264: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00134268: jalr $v0
    a1 = 1;                                                     // 0x0013426c: addiu $a1, $zero, 1
    v1 = (v0 < 0x40) ? 1 : 0;                                   // 0x00134270: slti $v1, $v0, 0x40
    if (v1 != 0) goto label_0x134248;                           // 0x00134274: bnez $v1, 0x134248
    g_00201da4 = v0;  // Global at 0x00201da4                   // 0x00134278: sw $v0, 0x1da4($s4)
label_0x13427c:
    if (s2 != s1) goto label_0x134290;                          // 0x0013427c: bne $s2, $s1, 0x134290
    v0 = 4;                                                     // 0x00134284: addiu $v0, $zero, 4
    *(uint32_t*)((s3) + 0xa8) = 0;                              // 0x00134288: sw $zero, 0xa8($s3)
    *(uint8_t*)((s3) + 1) = v0;                                 // 0x0013428c: sb $v0, 1($s3)
label_0x134290:
    return;                                                     // 0x001342a4: jr $ra
    sp = sp + 0x30;                                             // 0x001342a8: addiu $sp, $sp, 0x30
}