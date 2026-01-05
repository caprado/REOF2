void func_00164680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00164680: addiu $sp, $sp, -0x20
    v0 = s0 + 0xcc0;                                            // 0x00164690: addiu $v0, $s0, 0xcc0
    a0 = *(int32_t*)((s0) + 0x1b74);                            // 0x0016469c: lw $a0, 0x1b74($s0)
    a1 = *(int32_t*)((v0) + 0x1b4);                             // 0x001646a0: lw $a1, 0x1b4($v0)
    v1 = *(int32_t*)((v0) + 0x1b0);                             // 0x001646a4: lw $v1, 0x1b0($v0)
    if (v1 != a1) goto label_0x1646f8;                          // 0x001646a8: bne $v1, $a1, 0x1646f8
    s1 = *(int32_t*)(a0);                                       // 0x001646ac: lw $s1, 0($a0)
    func_00132168();  // 132168                                // 0x001646b0: jal 0x132168
    func_001321b8();  // 1321b8                                // 0x001646bc: jal 0x1321b8
    if (s2 <= 0) goto label_0x1646fc;                           // 0x001646c4: blezl $s2, 0x1646fc
    if (v0 <= 0) goto label_0x1646fc;                           // 0x001646cc: blezl $v0, 0x1646fc
    return func_00167c80();  // Tail call                        // 0x001646f0: j 0x167bc8
    sp = sp + 0x20;                                             // 0x001646f4: addiu $sp, $sp, 0x20
label_0x1646f8:
label_0x1646fc:
    return;                                                     // 0x00164708: jr $ra
    sp = sp + 0x20;                                             // 0x0016470c: addiu $sp, $sp, 0x20
}